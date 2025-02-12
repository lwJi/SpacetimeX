#include <cctk.h>
#include <cctk_Arguments.h>
#include <cctk_Parameters.h>
#include <loop_device.hxx>

#include <cmath>

#include "../wolfram/powerinline.hxx"
#include "../wolfram/derivsinline.hxx"

namespace Z4cowGPU {
using namespace Arith;
using namespace Loop;

extern "C" void Z4cowGPU_Constraints(CCTK_ARGUMENTS) {
  DECLARE_CCTK_ARGUMENTS_Z4cowGPU_Constraints;
  DECLARE_CCTK_PARAMETERS;

  for (int d = 0; d < 3; ++d)
    if (cctk_nghostzones[d] < deriv_order / 2)
      CCTK_VERROR("Need at least %d ghost zones", deriv_order / 2);

  const array<CCTK_REAL, 3> invDxyz{1. / CCTK_DELTA_SPACE(0),
                                    1. / CCTK_DELTA_SPACE(1),
                                    1. / CCTK_DELTA_SPACE(2)};

  const GF3D2layout layout2(cctkGH, {0, 0, 0});

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
  const array<CCTK_REAL *, 3> gf_ZtC{ZtCx, ZtCy, ZtCz};
  // CCTK_REAL *gf_HC = HC;
  const array<CCTK_REAL *, 3> gf_MtC{MtCx, MtCy, MtCz};

  // parameters
  const CCTK_REAL cpi = M_PI;

  const Loop::GridDescBaseDevice grid(cctkGH);

#include "../wolfram/Z4cowGPU_set_constraint.hxx"
}

} // namespace Z4cowGPU
