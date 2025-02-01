#include <cctk.h>
#include <cctk_Arguments.h>
#include <cctk_Parameters.h>

#include <derivs.hxx>
#include <loop_device.hxx>
#include <mat.hxx>
#include <simd.hxx>
#include <vec.hxx>

#include <cmath>
#include <sys/time.h>

#include "../wolfram/derivsinline.hxx"

namespace Z4cowGPU {
using namespace Arith;
using namespace Loop;

double gettime() {
  timeval tv;
  gettimeofday(&tv, nullptr);
  return static_cast<double>(tv.tv_sec) +
         static_cast<double>(tv.tv_usec) / 1.0e6;
}

double total_rhs_time = 0;
double total_rhs_loop_time = 0;

extern "C" void Z4cowGPU_RHS(CCTK_ARGUMENTS) {

  const double start_time = gettime();

  DECLARE_CCTK_ARGUMENTS_Z4cowGPU_RHS;
  DECLARE_CCTK_PARAMETERS;

  for (int d = 0; d < 3; ++d)
    if (cctk_nghostzones[d] < deriv_order / 2)
      CCTK_VERROR("Need at least %d ghost zones", deriv_order / 2);

  const array<CCTK_REAL, 3> invDxyz{1. / CCTK_DELTA_SPACE(0),
                                    1. / CCTK_DELTA_SPACE(1),
                                    1. / CCTK_DELTA_SPACE(2)};

  const array<int, dim> indextype = {0, 0, 0};
  const GF3D2layout layout2(cctkGH, indextype);

  const int di = 1;
  const int dj = di * (cctk_ash[0]);
  const int dk = dj * (cctk_ash[1]);
  const array<int, 3> Dijk{di, dj, dk};

  // Input grid functions
  const array<const CCTK_REAL *, 6> gf_gamt{gammatxx, gammatxy, gammatxz,
                                            gammatyy, gammatyz, gammatzz};
  const CCTK_REAL *gf_exKh = Kh;
  const array<const CCTK_REAL *, 6> gf_exAt{Atxx, Atxy, Atxz, Atyy, Atyz, Atzz};
  const array<const CCTK_REAL *, 3> gf_trGt{Gamtx, Gamty, Gamtz};
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

  // parameters
  const CCTK_REAL cpi = M_PI;
  const CCTK_REAL ckappa1 = kappa1;
  const CCTK_REAL ckappa2 = kappa2;
  const CCTK_REAL cmuL = f_mu_L;
  const CCTK_REAL cmuS = f_mu_S;
  const CCTK_REAL ceta = eta;

#include "../wolfram/Z4cowCarpet_set_rhs.hxx"

  const double finish_time = gettime();

  total_rhs_time += finish_time - start_time;
  CCTK_VINFO("Total RHS and loop time: %g sec", total_rhs_time);
}

extern "C" void Z4cowGPU_Sync(CCTK_ARGUMENTS) {
  // do nothing
}

} // namespace Z4cowGPU
