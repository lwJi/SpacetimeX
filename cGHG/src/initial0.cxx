#include <cctk.h>
#include <cctk_Arguments.h>
#include <cctk_Parameters.h>

#ifdef __CUDACC__
// Disable CCTK_DEBUG since the debug information takes too much
// parameter space to launch the kernels
#ifdef CCTK_DEBUG
#undef CCTK_DEBUG
#endif
#endif

#include <derivs.hxx>
#include <loop_device.hxx>
#include <mat.hxx>
#include <simd.hxx>
#include <vec.hxx>

#ifdef __CUDACC__
#include <nvToolsExt.h>
#endif

#include <cmath>

namespace cGHG {
using namespace Arith;
using namespace Loop;

template <typename T>
CCTK_DEVICE CCTK_HOST CCTK_ATTRIBUTE_ALWAYS_INLINE inline T Power(T x, int y) {
  return (y == 2) ? Arith::pow2(x) : Arith::pown(x, y);
}

extern "C" void cGHG_Initial0(CCTK_ARGUMENTS) {
  DECLARE_CCTK_ARGUMENTSX_cGHG_Initial0;
  DECLARE_CCTK_PARAMETERS;

  for (int d = 0; d < 3; ++d)
    if (cctk_nghostzones[d] < deriv_order / 2)
      CCTK_VERROR("Need at least %d ghost zones", deriv_order / 2);

  const vect<CCTK_REAL, dim> dx{
      CCTK_DELTA_SPACE(0),
      CCTK_DELTA_SPACE(1),
      CCTK_DELTA_SPACE(2),
  };

  const array<int, dim> indextype = {0, 0, 0};
  const array<int, dim> nghostzones = {cctk_nghostzones[0], cctk_nghostzones[1],
                                       cctk_nghostzones[2]};
  vect<int, dim> imin, imax;
  GridDescBase(cctkGH).box_int<0, 0, 0>(nghostzones, imin, imax);
  // suffix 2: with ghost zones, suffix 5: without ghost zones
  const GF3D2layout layout2(cctkGH, indextype);
  const GF3D5layout layout5(imin, imax);

  // Input grid functions
  const GF3D2<const CCTK_REAL> &gf_ADMalpha = alp;
  const vec<GF3D2<const CCTK_REAL>, 3> gf_ADMbeta{betax, betay, betaz};
  const smat<GF3D2<const CCTK_REAL>, 3> gf_ADMgamma{gxx, gxy, gxz, gyy, gyz, gzz};
  const smat<GF3D2<const CCTK_REAL>, 3> gf_ADMexK{kxx, kxy, kxz, kyy, kyz, kzz};

  // More input grid functions

  // Output grid functions
  const GF3D2<CCTK_REAL> &gf_ADMdtalpha = dtalp;
  const vec<GF3D2<CCTK_REAL>, 3> gf_ADMdtbeta{dtbetax, dtbetay, dtbetaz};

  // Define derivs lambdas
  const auto calcderivs = [&](const auto &gf, const auto &dgf,
                              const auto &gf0) {
    Derivs::calc_derivs<0, 0, 0>(gf, dgf, layout5, grid, gf0, dx, deriv_order);
  };

  const auto calccopy = [&](const auto &gf, const auto &gf0) {
    Derivs::calc_copy<0, 0, 0>(gf, layout5, grid, gf0);
  };

  // Tile variables for derivatives and so on
  const int ntmps = 46;
  GF3D5vector<CCTK_REAL> tmps(layout5, ntmps);
  int itmp = 0;

  const auto make_gf = [&]() { return GF3D5<CCTK_REAL>(tmps(itmp++)); };
  const auto make_vec = [&](const auto &f) {
    return vec<result_of_t<decltype(f)()>, 3>([&](int) { return f(); });
  };
  const auto make_mat = [&](const auto &f) {
    return smat<result_of_t<decltype(f)()>, 3>([&](int, int) { return f(); });
  };
  const auto make_vec_gf = [&]() { return make_vec(make_gf); };
  const auto make_mat_gf = [&]() { return make_mat(make_gf); };
  const auto make_vec_vec_gf = [&]() { return make_vec(make_vec_gf); };
  const auto make_mat_vec_gf = [&]() { return make_mat(make_vec_gf); };

  const GF3D5<CCTK_REAL> tl_ADMalpha(make_gf());
  const vec<GF3D5<CCTK_REAL>, 3> tl_ADMbeta(make_vec_gf());
  const smat<GF3D5<CCTK_REAL>, 3> tl_ADMgamma(make_mat_gf());
  const smat<GF3D5<CCTK_REAL>, 3> tl_ADMexK(make_mat_gf());

  const vec<GF3D5<CCTK_REAL>, 3> tl_ADMdalpha(make_vec_gf());
  const vec<vec<GF3D5<CCTK_REAL>, 3>, 3> tl_ADMdbeta(make_vec_vec_gf());
  const smat<vec<GF3D5<CCTK_REAL>, 3>, 3> tl_ADMdgamma(make_mat_vec_gf());

  calcderivs(tl_ADMalpha, tl_ADMdalpha, gf_ADMalpha);
  calcderivs(tl_ADMbeta, tl_ADMdbeta, gf_ADMbeta);
  calcderivs(tl_ADMgamma, tl_ADMdgamma, gf_ADMgamma);

  calccopy(tl_ADMexK, gf_ADMexK);

  if (itmp != ntmps)
    CCTK_VERROR("Wrong number of temporary variables: ntmps=%d itmp=%d", ntmps,
                itmp);
  itmp = -1;

  // simd types
  typedef simd<CCTK_REAL> vreal;
  typedef simdl<CCTK_REAL> vbool;
  constexpr size_t vsize = tuple_size_v<vreal>;

  // parameters
  // const CCTK_REAL ceta = eta;
  const CCTK_REAL cnu = nu;
  const auto calceta = [=] CCTK_DEVICE(
                           const vreal x, const CCTK_REAL y,
                           const CCTK_REAL z) CCTK_ATTRIBUTE_ALWAYS_INLINE {
    const vreal r = sqrt(x * x + y * y + z * z);
    const CCTK_REAL is4 =
        1.0 / (veta_width * veta_width * veta_width * veta_width);
    return (veta_central - veta_outer) * exp(-r * r * r * r * is4) + veta_outer;
  };

  // Loop
#ifdef __CUDACC__
  const nvtxRangeId_t range = nvtxRangeStartA("cGHG_Initial0::initial0");
#endif

#include "../wolfram/cGHG_set_initial0.hxx"

#ifdef __CUDACC__
  nvtxRangeEnd(range);
#endif

}

} // namespace cGHG
