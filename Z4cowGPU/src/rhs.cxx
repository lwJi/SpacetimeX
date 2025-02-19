#include <cctk.h>
#include <cctk_Arguments.h>
#include <cctk_Parameters.h>
#include <loop_device.hxx>

#include <cmath>

#include "../wolfram/derivsinline.hxx"
#include "../wolfram/dissinline.hxx"
#include "../wolfram/powerinline.hxx"

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
  // const CCTK_REAL ceta = eta;
  const auto calceta =
      [=] CCTK_DEVICE(const CCTK_REAL x, const CCTK_REAL y, const CCTK_REAL z)
          CCTK_ATTRIBUTE_ALWAYS_INLINE {
            const CCTK_REAL r2 = x * x + y * y + z * z;
            const CCTK_REAL r4 = r2 * r2;
            const CCTK_REAL is4 =
                1.0 / (veta_width * veta_width * veta_width * veta_width);
            return (veta_central - veta_outer) * exp(-r4 * is4) + veta_outer;
          };

  // Derivs Lambdas
#include "../wolfram/Z4cowGPU_derivs1st.hxx"
#include "../wolfram/Z4cowGPU_derivs2nd.hxx"

  // Loop
  const Loop::GridDescBaseDevice grid(cctkGH);

#include "../wolfram/Z4cowGPU_set_rhs.hxx"

  // Dissipation
#include "../wolfram/Z4cowGPU_applydiss.hxx"

  applydiss(gf_W, gf_dtW);
  for (int a = 0; a < 6; ++a)
    applydiss(gf_gamt[a], gf_dtgamt[a]);
  applydiss(gf_exKh, gf_dtexKh);
  for (int a = 0; a < 6; ++a)
    applydiss(gf_exAt[a], gf_dtexAt[a]);
  for (int a = 0; a < 3; ++a)
    applydiss(gf_trGt[a], gf_dttrGt[a]);
  if (!set_Theta_zero)
    applydiss(gf_Theta, gf_dtTheta);
  applydiss(gf_alpha, gf_dtalpha);
  for (int a = 0; a < 3; ++a)
    applydiss(gf_beta[a], gf_dtbeta[a]);
}

extern "C" void Z4cowGPU_Sync(CCTK_ARGUMENTS) {
  // do nothing
}

} // namespace Z4cowGPU
