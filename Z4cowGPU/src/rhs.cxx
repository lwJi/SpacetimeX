#include <cctk.h>
#include <cctk_Arguments.h>
#include <cctk_Parameters.h>
#include <loop_device.hxx>

#include <cmath>

#include "../wolfram/derivsinline.hxx"
#include "../wolfram/dissinline.hxx"

namespace Z4cowGPU {
using namespace Arith;
using namespace Loop;

extern "C" void Z4cowGPU_RHS(CCTK_ARGUMENTS) {
  DECLARE_CCTK_ARGUMENTS_Z4cowGPU_RHS;
  DECLARE_CCTK_PARAMETERS;

  for (int d = 0; d < 3; ++d)
    if (cctk_nghostzones[d] < deriv_order / 2)
      CCTK_VERROR("Need at least %d ghost zones", deriv_order / 2);

  const array<CCTK_REAL, 3> invDxyz{1. / CCTK_DELTA_SPACE(0),
                                    1. / CCTK_DELTA_SPACE(1),
                                    1. / CCTK_DELTA_SPACE(2)};

  const GF3D2layout layout2(cctkGH, {0, 0, 0});

  // Input grid functions
  const CCTK_REAL *gf_W = W;
  const array<const CCTK_REAL *, 6> gf_gamt{gammatxx, gammatxy, gammatxz,
                                            gammatyy, gammatyz, gammatzz};
  const CCTK_REAL *gf_exKh = Kh;
  const array<const CCTK_REAL *, 6> gf_exAt{Atxx, Atxy, Atxz, Atyy, Atyz, Atzz};
  const array<const CCTK_REAL *, 3> gf_trGt{Gamtx, Gamty, Gamtz};
  const CCTK_REAL *gf_Theta = Theta;
  const CCTK_REAL *gf_alpha = alphaG;
  const array<const CCTK_REAL *, 3> gf_beta{betaGx, betaGy, betaGz};

  // More input grid functions
  // const GF3D2<const CCTK_REAL> &gf_eTtt = eTtt;
  const array<const CCTK_REAL *, 3> gf_eTt{eTtx, eTty, eTtz};
  const array<const CCTK_REAL *, 6> gf_eT{eTxx, eTxy, eTxz, eTyy, eTyz, eTzz};

  // Output grid functions
  CCTK_REAL *gf_dtW = W_rhs;
  const array<CCTK_REAL *, 6> gf_dtgamt{gammatxx_rhs, gammatxy_rhs,
                                        gammatxz_rhs, gammatyy_rhs,
                                        gammatyz_rhs, gammatzz_rhs};
  CCTK_REAL *gf_dtexKh = Kh_rhs;
  const array<CCTK_REAL *, 6> gf_dtexAt{Atxx_rhs, Atxy_rhs, Atxz_rhs,
                                        Atyy_rhs, Atyz_rhs, Atzz_rhs};
  const array<CCTK_REAL *, 3> gf_dttrGt{Gamtx_rhs, Gamty_rhs, Gamtz_rhs};
  CCTK_REAL *gf_dtTheta = Theta_rhs;
  CCTK_REAL *gf_dtalpha = alphaG_rhs;
  const array<CCTK_REAL *, 3> gf_dtbeta{betaGx_rhs, betaGy_rhs, betaGz_rhs};

  // Parameters
  const CCTK_REAL cpi = M_PI;
  const CCTK_REAL ckappa1 = kappa1;
  const CCTK_REAL ckappa2 = kappa2;
  const CCTK_REAL cmuL = f_mu_L;
  const CCTK_REAL cmuS = f_mu_S;
  const CCTK_REAL ceta = eta;

  // Loop
  const Loop::GridDescBaseDevice grid(cctkGH);

#include "../wolfram/Z4cowGPU_set_rhs.hxx"

  // Dissipation

  const auto apply_diss = [&](const CCTK_REAL *gf_, CCTK_REAL *gf_rhs_) {
    switch (diss_order) {
    case 3: {
      grid.loop_int_device<0, 0, 0>(
          grid.nghostzones,
          [=] CCTK_DEVICE(const PointDesc &p) CCTK_ATTRIBUTE_ALWAYS_INLINE {
            const int ijk = layout2.linear(p.i, p.j, p.k);
            const auto rhs_old = gf_rhs_[ijk];
            const auto rhs_new =
                rhs_old +
                epsdiss * calc_diss<2>(layout2, gf_, p.i, p.j, p.k, invDxyz);
            gf_rhs_[ijk] = rhs_new;
          });
      break;
    }
    case 5: {
      grid.loop_int_device<0, 0, 0>(
          grid.nghostzones,
          [=] CCTK_DEVICE(const PointDesc &p) CCTK_ATTRIBUTE_ALWAYS_INLINE {
            const int ijk = layout2.linear(p.i, p.j, p.k);
            const auto rhs_old = gf_rhs_[ijk];
            const auto rhs_new =
                rhs_old +
                epsdiss * calc_diss<4>(layout2, gf_, p.i, p.j, p.k, invDxyz);
            gf_rhs_[ijk] = rhs_new;
          });
      break;
    }
    case 7: {
      grid.loop_int_device<0, 0, 0>(
          grid.nghostzones,
          [=] CCTK_DEVICE(const PointDesc &p) CCTK_ATTRIBUTE_ALWAYS_INLINE {
            const int ijk = layout2.linear(p.i, p.j, p.k);
            const auto rhs_old = gf_rhs_[ijk];
            const auto rhs_new =
                rhs_old +
                epsdiss * calc_diss<6>(layout2, gf_, p.i, p.j, p.k, invDxyz);
            gf_rhs_[ijk] = rhs_new;
          });
      break;
    }
    case 9: {
      grid.loop_int_device<0, 0, 0>(
          grid.nghostzones,
          [=] CCTK_DEVICE(const PointDesc &p) CCTK_ATTRIBUTE_ALWAYS_INLINE {
            const int ijk = layout2.linear(p.i, p.j, p.k);
            const auto rhs_old = gf_rhs_[ijk];
            const auto rhs_new =
                rhs_old +
                epsdiss * calc_diss<8>(layout2, gf_, p.i, p.j, p.k, invDxyz);
            gf_rhs_[ijk] = rhs_new;
          });
      break;
    }
    default:
      assert(0);
    }
  };

  apply_diss(gf_W, gf_dtW);
  for (int a = 0; a < 6; ++a)
    apply_diss(gf_gamt[a], gf_dtgamt[a]);
  apply_diss(gf_exKh, gf_dtexKh);
  for (int a = 0; a < 6; ++a)
    apply_diss(gf_exAt[a], gf_dtexAt[a]);
  for (int a = 0; a < 3; ++a)
    apply_diss(gf_trGt[a], gf_dttrGt[a]);
  if (!set_Theta_zero)
    apply_diss(gf_Theta, gf_dtTheta);
  apply_diss(gf_alpha, gf_dtalpha);
  for (int a = 0; a < 3; ++a)
    apply_diss(gf_beta[a], gf_dtbeta[a]);
}

} // namespace Z4cowGPU
