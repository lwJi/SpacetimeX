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
#include <nvtx3/nvToolsExt.h>
#endif

#include <cmath>

namespace cGHG {
using namespace Arith;
using namespace Loop;

template <typename T>
CCTK_DEVICE CCTK_HOST CCTK_ATTRIBUTE_ALWAYS_INLINE inline T Power(T x, int y) {
  return (y == 2) ? Arith::pow2(x) : Arith::pown(x, y);
}

extern "C" void cGHG_Initial2(CCTK_ARGUMENTS) {
  DECLARE_CCTK_ARGUMENTSX_cGHG_Initial2;
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
  const GF3D2<const CCTK_REAL> &gf_hHn = hHn;
  const vec<GF3D2<const CCTK_REAL>, 3> gf_hH{hHx, hHy, hHz};

  // More input grid functions
  const vec<GF3D2<const CCTK_REAL>, 3> gf_ADMbeta{betax, betay, betaz};

  // Output grid functions
  const GF3D2<CCTK_REAL> &gf_hthetan = hthetan;
  const vec<GF3D2<CCTK_REAL>, 3> gf_htheta{hthetax, hthetay, hthetaz};

  // Define derivs lambdas
  const auto calcderivs = [&](const auto &gf, const auto &dgf,
                              const auto &gf0) {
    Derivs::calc_derivs<0, 0, 0>(gf, dgf, layout5, grid, gf0, dx, deriv_order);
  };
  const auto calccopy = [&](const auto &gf, const auto &gf0) {
    Derivs::calc_copy<0, 0, 0>(gf, layout5, grid, gf0);
  };

  // Tile variables for derivatives and so on
  const int ntmps = 19;
  GF3D5vector<CCTK_REAL> tmps(layout5, ntmps);
  int itmp = 0;

  const auto make_gf = [&]() { return GF3D5<CCTK_REAL>(tmps(itmp++)); };
  const auto make_vec = [&](const auto &f) {
    return vec<result_of_t<decltype(f)()>, 3>([&](int) { return f(); });
  };
  const auto make_vec_gf = [&]() { return make_vec(make_gf); };
  const auto make_vec_vec_gf = [&]() { return make_vec(make_vec_gf); };

  const GF3D5<CCTK_REAL> tl_hHn(make_gf());
  const vec<GF3D5<CCTK_REAL>, 3> tl_hH(make_vec_gf());

  const vec<GF3D5<CCTK_REAL>, 3> tl_dhHn(make_vec_gf());
  const vec<vec<GF3D5<CCTK_REAL>, 3>, 3> tl_dhH(make_vec_vec_gf());

  const vec<GF3D5<CCTK_REAL>, 3> tl_ADMbeta(make_vec_gf());

  calcderivs(tl_hHn, tl_dhHn, gf_hHn);
  calcderivs(tl_hH, tl_dhH, gf_hH);

  calccopy(tl_ADMbeta, gf_ADMbeta);

  if (itmp != ntmps)
    CCTK_VERROR("Wrong number of temporary variables: ntmps=%d itmp=%d", ntmps,
                itmp);
  itmp = -1;

  // simd types
  typedef simd<CCTK_REAL> vreal;
  typedef simdl<CCTK_REAL> vbool;
  constexpr size_t vsize = tuple_size_v<vreal>;

  // parameters

  // Loop
#ifdef __CUDACC__
  const nvtxRangeId_t range = nvtxRangeStartA("cGHG_Initial2::initial2");
#endif

#include "../wolfram/cGHG_set_initial2.hxx"

#ifdef __CUDACC__
  nvtxRangeEnd(range);
#endif

}

} // namespace cGHG
