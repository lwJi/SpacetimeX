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

extern "C" void cGHG_RHS(CCTK_ARGUMENTS) {
  DECLARE_CCTK_ARGUMENTSX_cGHG_RHS;
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
  const GF3D2<const CCTK_REAL> &gf_W = W;
  const GF3D2<const CCTK_REAL> &gf_WPi = WPi;
  const vec<GF3D2<const CCTK_REAL>, 3> gf_WPhi{WPhix, WPhiy, WPhiz};

  const smat<GF3D2<const CCTK_REAL>, 3> gf_hg{hgxx, hgxy, hgxz, hgyy, hgyz, hgzz};
  const smat<GF3D2<const CCTK_REAL>, 3> gf_hPi{hPixx, hPixy, hPixz,
                                         hPiyy, hPiyz, hPizz};
  const vec<smat<GF3D2<const CCTK_REAL>, 3>, 3> gf_hPhi{
      smat<GF3D2<const CCTK_REAL>, 3>{hPhixxx, hPhixxy, hPhixxz, hPhixyy, hPhixyz,
                                hPhixzz},
      smat<GF3D2<const CCTK_REAL>, 3>{hPhiyxx, hPhiyxy, hPhiyxz, hPhiyyy, hPhiyyz,
                                hPhiyzz},
      smat<GF3D2<const CCTK_REAL>, 3>{hPhizxx, hPhizxy, hPhizxz, hPhizyy, hPhizyz,
                                hPhizzz}};

  const vec<GF3D2<const CCTK_REAL>, 3> gf_hgn{hgnx, hgny, hgnz};
  const vec<GF3D2<const CCTK_REAL>, 3> gf_hPin{hPinx, hPiny, hPinz};
  const vec<vec<GF3D2<const CCTK_REAL>, 3>, 3> gf_hPhin{
      vec<GF3D2<const CCTK_REAL>, 3>{hPhixnx, hPhixny, hPhixnz},
      vec<GF3D2<const CCTK_REAL>, 3>{hPhiynx, hPhiyny, hPhiynz},
      vec<GF3D2<const CCTK_REAL>, 3>{hPhiznx, hPhizny, hPhiznz}};

  const GF3D2<const CCTK_REAL> &gf_hgnn = hgnn;
  const GF3D2<const CCTK_REAL> &gf_hPinn = hPinn;
  const vec<GF3D2<const CCTK_REAL>, 3> gf_hPhinn{hPhixnn, hPhiynn, hPhiznn};

  const GF3D2<const CCTK_REAL> &gf_hHn = hHn;
  const vec<GF3D2<const CCTK_REAL>, 3> gf_hH{hHx, hHy, hHz};
  const GF3D2<const CCTK_REAL> &gf_hthetan = hthetan;
  const vec<GF3D2<const CCTK_REAL>, 3> gf_htheta{hthetax, hthetay, hthetaz};

  // More input grid functions

  // Output grid functions
  const GF3D2<CCTK_REAL> &gf_dtW = W_rhs;
  const GF3D2<CCTK_REAL> &gf_dtWPi = WPi_rhs;
  const vec<GF3D2<CCTK_REAL>, 3> gf_dtWPhi{WPhix_rhs, WPhiy_rhs, WPhiz_rhs};

  const smat<GF3D2<CCTK_REAL>, 3> gf_dthg{hgxx_rhs, hgxy_rhs, hgxz_rhs,
                                          hgyy_rhs, hgyz_rhs, hgzz_rhs};
  const smat<GF3D2<CCTK_REAL>, 3> gf_dthPi{hPixx_rhs, hPixy_rhs, hPixz_rhs,
                                           hPiyy_rhs, hPiyz_rhs, hPizz_rhs};
  const vec<smat<GF3D2<CCTK_REAL>, 3>, 3> gf_dthPhi{
      smat<GF3D2<CCTK_REAL>, 3>{hPhixxx_rhs, hPhixxy_rhs, hPhixxz_rhs,
                                hPhixyy_rhs, hPhixyz_rhs, hPhixzz_rhs},
      smat<GF3D2<CCTK_REAL>, 3>{hPhiyxx_rhs, hPhiyxy_rhs, hPhiyxz_rhs,
                                hPhiyyy_rhs, hPhiyyz_rhs, hPhiyzz_rhs},
      smat<GF3D2<CCTK_REAL>, 3>{hPhizxx_rhs, hPhizxy_rhs, hPhizxz_rhs,
                                hPhizyy_rhs, hPhizyz_rhs, hPhizzz_rhs}};

  const vec<GF3D2<CCTK_REAL>, 3> gf_dthgn{hgnx_rhs, hgny_rhs, hgnz_rhs};
  const vec<GF3D2<CCTK_REAL>, 3> gf_dthPin{hPinx_rhs, hPiny_rhs, hPinz_rhs};
  const vec<vec<GF3D2<CCTK_REAL>, 3>, 3> gf_dthPhin{
      vec<GF3D2<CCTK_REAL>, 3>{hPhixnx_rhs, hPhixny_rhs, hPhixnz_rhs},
      vec<GF3D2<CCTK_REAL>, 3>{hPhiynx_rhs, hPhiyny_rhs, hPhiynz_rhs},
      vec<GF3D2<CCTK_REAL>, 3>{hPhiznx_rhs, hPhizny_rhs, hPhiznz_rhs}};

  const GF3D2<CCTK_REAL> &gf_dthgnn = hgnn_rhs;
  const GF3D2<CCTK_REAL> &gf_dthPinn = hPinn_rhs;
  const vec<GF3D2<CCTK_REAL>, 3> gf_dthPhinn{hPhixnn_rhs, hPhiynn_rhs,
                                             hPhiznn_rhs};

  const GF3D2<CCTK_REAL> &gf_dthHn = hHn_rhs;
  const vec<GF3D2<CCTK_REAL>, 3> gf_dthH{hHx_rhs, hHy_rhs, hHz_rhs};
  const GF3D2<CCTK_REAL> &gf_dththetan = hthetan_rhs;
  const vec<GF3D2<CCTK_REAL>, 3> gf_dththeta{hthetax_rhs, hthetay_rhs,
                                             hthetaz_rhs};

  // Define derivs lambdas
  const auto calcderivs = [&](const auto &gf, const auto &dgf,
                              const auto &gf0) {
    Derivs::calc_derivs<0, 0, 0>(gf, dgf, layout5, grid, gf0, dx, deriv_order);
  };

  // Tile variables for derivatives and so on
  const int ntmps = 252;
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
  const auto make_vec_mat_gf = [&]() { return make_vec(make_mat_gf); };
  const auto make_mat_vec_gf = [&]() { return make_mat(make_vec_gf); };
  const auto make_mat_mat_gf = [&]() { return make_mat(make_mat_gf); };
  const auto make_vec_mat_vec_gf = [&]() { return make_vec(make_mat_vec_gf); };
  const auto make_vec_vec_vec_gf = [&]() { return make_vec(make_vec_vec_gf); };

  const GF3D5<CCTK_REAL> tl_W(make_gf());
  const GF3D5<CCTK_REAL> tl_WPi(make_gf());
  const vec<GF3D5<CCTK_REAL>, 3> tl_WPhi(make_vec_gf());

  const smat<GF3D5<CCTK_REAL>, 3> tl_hg(make_mat_gf());
  const smat<GF3D5<CCTK_REAL>, 3> tl_hPi(make_mat_gf());
  const vec<smat<GF3D5<CCTK_REAL>, 3>, 3> tl_hPhi(make_vec_mat_gf());

  const vec<GF3D5<CCTK_REAL>, 3> tl_hgn(make_vec_gf());
  const vec<GF3D5<CCTK_REAL>, 3> tl_hPin(make_vec_gf());
  const vec<vec<GF3D5<CCTK_REAL>, 3>, 3> tl_hPhin(make_vec_vec_gf());

  const GF3D5<CCTK_REAL> tl_hgnn(make_gf());
  const GF3D5<CCTK_REAL> tl_hPinn(make_gf());
  const vec<GF3D5<CCTK_REAL>, 3> tl_hPhinn(make_vec_gf());

  const GF3D5<CCTK_REAL> tl_hHn(make_gf());
  const vec<GF3D5<CCTK_REAL>, 3> tl_hH(make_vec_gf());
  const GF3D5<CCTK_REAL> tl_hthetan(make_gf());
  const vec<GF3D5<CCTK_REAL>, 3> tl_htheta(make_vec_gf());

  const vec<GF3D5<CCTK_REAL>, 3> tl_dW(make_vec_gf());
  const vec<GF3D5<CCTK_REAL>, 3> tl_dWPi(make_vec_gf());
  const vec<vec<GF3D5<CCTK_REAL>, 3>, 3> tl_dWPhi(make_vec_vec_gf());

  const smat<vec<GF3D5<CCTK_REAL>, 3>, 3> tl_dhg(make_mat_vec_gf());
  const smat<vec<GF3D5<CCTK_REAL>, 3>, 3> tl_dhPi(make_mat_vec_gf());
  const vec<smat<vec<GF3D5<CCTK_REAL>, 3>, 3>, 3> tl_dhPhi(
      make_vec_mat_vec_gf());

  const vec<vec<GF3D5<CCTK_REAL>, 3>, 3> tl_dhgn(make_vec_vec_gf());
  const vec<vec<GF3D5<CCTK_REAL>, 3>, 3> tl_dhPin(make_vec_vec_gf());
  const vec<vec<vec<GF3D5<CCTK_REAL>, 3>, 3>, 3> tl_dhPhin(
      make_vec_vec_vec_gf());

  const vec<GF3D5<CCTK_REAL>, 3> tl_dhgnn(make_vec_gf());
  const vec<GF3D5<CCTK_REAL>, 3> tl_dhPinn(make_vec_gf());
  const vec<vec<GF3D5<CCTK_REAL>, 3>, 3> tl_dhPhinn(make_vec_vec_gf());

  const vec<GF3D5<CCTK_REAL>, 3> tl_dhHn(make_vec_gf());
  const vec<vec<GF3D5<CCTK_REAL>, 3>, 3> tl_dhH(make_vec_vec_gf());
  const vec<GF3D5<CCTK_REAL>, 3> tl_dhthetan(make_vec_gf());
  const vec<vec<GF3D5<CCTK_REAL>, 3>, 3> tl_dhtheta(make_vec_vec_gf());

  calcderivs(tl_W, tl_dW, gf_W);
  calcderivs(tl_WPi, tl_dWPi, gf_WPi);
  calcderivs(tl_WPhi, tl_dWPhi, gf_WPhi);

  calcderivs(tl_hg, tl_dhg, gf_hg);
  calcderivs(tl_hPi, tl_dhPi, gf_hPi);
  calcderivs(tl_hPhi, tl_dhPhi, gf_hPhi);

  calcderivs(tl_hgn, tl_dhgn, gf_hgn);
  calcderivs(tl_hPin, tl_dhPin, gf_hPin);
  calcderivs(tl_hPhin, tl_dhPhin, gf_hPhin);

  calcderivs(tl_hgnn, tl_dhgnn, gf_hgnn);
  calcderivs(tl_hPinn, tl_dhPinn, gf_hPinn);
  calcderivs(tl_hPhinn, tl_dhPhinn, gf_hPhinn);

  calcderivs(tl_hHn, tl_dhHn, gf_hHn);
  calcderivs(tl_hH, tl_dhH, gf_hH);
  calcderivs(tl_hthetan, tl_dhthetan, gf_hthetan);
  calcderivs(tl_htheta, tl_dhtheta, gf_htheta);

  if (itmp != ntmps)
    CCTK_VERROR("Wrong number of temporary variables: ntmps=%d itmp=%d", ntmps,
                itmp);
  itmp = -1;

  // simd types
  typedef simd<CCTK_REAL> vreal;
  typedef simdl<CCTK_REAL> vbool;
  constexpr size_t vsize = tuple_size_v<vreal>;

  // parameters
  const CCTK_REAL cpi = M_PI;
  const CCTK_REAL cgamma0 = gamma0;
  const CCTK_REAL cgamma1 = gamma1;
  const CCTK_REAL cgamma2 = gamma2;
  const CCTK_REAL cmuL = mu_L;
  const CCTK_REAL cmuS = mu_S;
  const CCTK_REAL czetaL = zeta_L;
  const CCTK_REAL czetaS = zeta_S;
  const CCTK_REAL crhoL = rho_L;
  const CCTK_REAL crhoS = rho_S;
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
  const nvtxRangeId_t range = nvtxRangeStartA("cGHG_RHS::rhs");
#endif

#include "../wolfram/cGHG_set_rhs.hxx"

#ifdef __CUDACC__
  nvtxRangeEnd(range);
#endif

  // Upwind and dissipation terms

  // vreal (*calc_deriv_upwind)(
  //     const GF3D2<const CCTK_REAL> &, const vbool &, const vect<int, dim> &,
  //     const vect<CCTK_REAL, dim> &, const vec<vreal, dim> &);
  vreal (*calc_diss)(const GF3D2<const CCTK_REAL> &, const vbool &,
                     const vect<int, dim> &, const vect<CCTK_REAL, dim> &);
  switch (diss_order) {
  case 3: {
    calc_diss = &Derivs::calc_diss<2>;
    break;
  }
  case 5: {
    calc_diss = &Derivs::calc_diss<4>;
    break;
  }
  case 7: {
    calc_diss = &Derivs::calc_diss<6>;
    break;
  }
  case 9: {
    calc_diss = &Derivs::calc_diss<8>;
    break;
  }
  default:
    assert(0);
  }

  const auto apply_diss = [&](const GF3D2<const CCTK_REAL> &gf_,
                              const GF3D2<CCTK_REAL> &gf_rhs_) {
    grid.loop_int_device<0, 0, 0, vsize>(
        grid.nghostzones,
        [=] CCTK_DEVICE(const PointDesc &p) CCTK_ATTRIBUTE_ALWAYS_INLINE {
          const vbool mask = mask_for_loop_tail<vbool>(p.i, p.imax);
          const vreal rhs_old = gf_rhs_(mask, p.I);
          const vreal rhs_new =
              rhs_old + epsdiss * calc_diss(gf_, mask, p.I, dx);
          gf_rhs_.store(mask, p.I, rhs_new);
        });
  };

  apply_diss(gf_W, gf_dtW);
  apply_diss(gf_WPi, gf_dtWPi);
  for (int c = 0; c < 3; ++c)
    apply_diss(gf_WPhi(c), gf_dtWPhi(c));

  for (int a = 0; a < 3; ++a)
    for (int b = a; b < 3; ++b) {
      apply_diss(gf_hg(a, b), gf_dthg(a, b));
      apply_diss(gf_hPi(a, b), gf_dthPi(a, b));
      for (int c = 0; c < 3; ++c)
        apply_diss(gf_hPhi(c)(a, b), gf_dthPhi(c)(a, b));
    }

  for (int a = 0; a < 3; ++a) {
    apply_diss(gf_hgn(a), gf_dthgn(a));
    apply_diss(gf_hPin(a), gf_dthPin(a));
    for (int c = 0; c < 3; ++c)
      apply_diss(gf_hPhin(c)(a), gf_dthPhin(c)(a));
  }

  apply_diss(gf_hgnn, gf_dthgnn);
  apply_diss(gf_hPinn, gf_dthPinn);
  for (int c = 0; c < 3; ++c)
    apply_diss(gf_hPhinn(c), gf_dthPhinn(c));

  apply_diss(gf_hHn, gf_dthHn);
  for (int c = 0; c < 3; ++c)
    apply_diss(gf_hH(c), gf_dthH(c));
  apply_diss(gf_hthetan, gf_dththetan);
  for (int c = 0; c < 3; ++c)
    apply_diss(gf_htheta(c), gf_dththeta(c));
}

} // namespace cGHG
