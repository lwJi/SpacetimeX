#include <cctk.h>
#include <cctk_Arguments.h>
#include <cctk_Parameters.h>

#define USE_GFINDEX 1

#include <derivs.hxx>
#include <loop_device.hxx>
#include <mat.hxx>
#include <simd.hxx>
#include <vec.hxx>

#include <cmath>
#include <sys/time.h>

#if USE_GFINDEX
#include "derivsinline.hxx"
#else
#include "../wolfram/derivsinline.hxx"
#endif

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

#if USE_GFINDEX

  DECLARE_CCTK_ARGUMENTS_Z4cowGPU_RHS;
  DECLARE_CCTK_PARAMETERS;

  for (int d = 0; d < 3; ++d)
    if (cctk_nghostzones[d] < deriv_order / 2)
      CCTK_VERROR("Need at least %d ghost zones", deriv_order / 2);

  const array<CCTK_REAL, 3> idx{1. / CCTK_DELTA_SPACE(0),
                                1. / CCTK_DELTA_SPACE(1),
                                1. / CCTK_DELTA_SPACE(2)};

  const int istart = cctk_tile_min[0];
  const int jstart = cctk_tile_min[1];
  const int kstart = cctk_tile_min[2];

  const int iend =
      std::min(cctk_lsh[0] - cctk_nghostzones[0], cctk_tile_max[0]);
  const int jend =
      std::min(cctk_lsh[1] - cctk_nghostzones[1], cctk_tile_max[1]);
  const int kend =
      std::min(cctk_lsh[2] - cctk_nghostzones[2], cctk_tile_max[2]);

  const int di = 1;
  const int dj = di * (cctk_ash[0]);
  const int dk = dj * (cctk_ash[1]);

  const array<int, 3> dijk{di, dj, dk};

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

#include "Z4cowCarpet_set_rhs.hxx"

#else

  DECLARE_CCTK_ARGUMENTSX_Z4cowGPU_RHS;
  DECLARE_CCTK_PARAMETERS;

  for (int d = 0; d < 3; ++d)
    if (cctk_nghostzones[d] < deriv_order / 2)
      CCTK_VERROR("Need at least %d ghost zones", deriv_order / 2);

  const vect<CCTK_REAL, dim> dx{
      CCTK_DELTA_SPACE(0),
      CCTK_DELTA_SPACE(1),
      CCTK_DELTA_SPACE(2),
  };

  // Input grid functions
  // const GF3D2<const CCTK_REAL> &gf_W = W;
  const array<GF3D2<const CCTK_REAL>, 6> gf_gamt{gammatxx, gammatxy, gammatxz,
                                                 gammatyy, gammatyz, gammatzz};
  const GF3D2<const CCTK_REAL> &gf_exKh = Kh;
  const array<GF3D2<const CCTK_REAL>, 6> gf_exAt{Atxx, Atxy, Atxz,
                                                 Atyy, Atyz, Atzz};
  const array<GF3D2<const CCTK_REAL>, 3> gf_trGt{Gamtx, Gamty, Gamtz};
  // const GF3D2<const CCTK_REAL> &gf_Theta = Theta;
  const GF3D2<const CCTK_REAL> &gf_alpha = alphaG;
  const array<GF3D2<const CCTK_REAL>, 3> gf_beta{betaGx, betaGy, betaGz};

  // More input grid functions
  // const GF3D2<const CCTK_REAL> &gf_eTtt = eTtt;
  const array<GF3D2<const CCTK_REAL>, 3> gf_eTt{eTtx, eTty, eTtz};
  const array<GF3D2<const CCTK_REAL>, 6> gf_eT{eTxx, eTxy, eTxz,
                                               eTyy, eTyz, eTzz};

  // Output grid functions
  const GF3D2<CCTK_REAL> &gf_dtW = W_rhs;
  const array<GF3D2<CCTK_REAL>, 6> gf_dtgamt{gammatxx_rhs, gammatxy_rhs,
                                             gammatxz_rhs, gammatyy_rhs,
                                             gammatyz_rhs, gammatzz_rhs};
  const GF3D2<CCTK_REAL> &gf_dtexKh = Kh_rhs;
  const array<GF3D2<CCTK_REAL>, 6> gf_dtexAt{Atxx_rhs, Atxy_rhs, Atxz_rhs,
                                             Atyy_rhs, Atyz_rhs, Atzz_rhs};
  const array<GF3D2<CCTK_REAL>, 3> gf_dttrGt{Gamtx_rhs, Gamty_rhs, Gamtz_rhs};
  const GF3D2<CCTK_REAL> &gf_dtTheta = Theta_rhs;
  const GF3D2<CCTK_REAL> &gf_dtalpha = alphaG_rhs;
  const array<GF3D2<CCTK_REAL>, 3> gf_dtbeta{betaGx_rhs, betaGy_rhs,
                                             betaGz_rhs};

  // parameters
  const CCTK_REAL cpi = M_PI;
  const CCTK_REAL ckappa1 = kappa1;
  const CCTK_REAL ckappa2 = kappa2;
  const CCTK_REAL cmuL = f_mu_L;
  const CCTK_REAL cmuS = f_mu_S;
  const CCTK_REAL ceta = eta;

#include "../wolfram/Z4cowGPU_set_rhs.hxx"

#endif

  const double finish_time = gettime();

  total_rhs_time += finish_time - start_time;
  CCTK_VINFO("Total RHS and loop time: %g sec", total_rhs_time);
}

extern "C" void Z4cowGPU_Sync(CCTK_ARGUMENTS) {
  // do nothing
}

} // namespace Z4cowGPU
