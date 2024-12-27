#include <loop_device.hxx>
#include <mat.hxx>
#include <simd.hxx>
#include <vec.hxx>

#include <cctk.h>
#include <cctk_Arguments.h>
#include <cctk_Parameters.h>

#ifdef __CUDACC__
#include <nvtx3/nvToolsExt.h>
#endif

#include <cmath>
#include <sstream>

namespace cGHG {
using namespace Arith;
using namespace Loop;

extern "C" void cGHG_Enforce(CCTK_ARGUMENTS) {
  DECLARE_CCTK_ARGUMENTSX_cGHG_Enforce;
  DECLARE_CCTK_PARAMETERS;

  const array<int, dim> indextype = {0, 0, 0};
  const GF3D2layout layout1(cctkGH, indextype);

  const GF3D2<CCTK_REAL> &gf_W = W;
  const GF3D2<CCTK_REAL> &gf_hgnn = hgnn;
  const smat<GF3D2<CCTK_REAL>, 3> gf_hg{hgxx, hgxy, hgxz, hgyy, hgyz, hgzz};

  typedef simd<CCTK_REAL> vreal;
  typedef simdl<CCTK_REAL> vbool;
  constexpr size_t vsize = tuple_size_v<vreal>;

#ifdef __CUDACC__
  const nvtxRangeId_t range = nvtxRangeStartA("cGHG_Enforce::enforce");
#endif
  grid.loop_int_device<0, 0, 0, vsize>(
      grid.nghostzones, [=] ARITH_DEVICE(const PointDesc &p) ARITH_INLINE {
        const vbool mask = mask_for_loop_tail<vbool>(p.i, p.imax);
        const GF3D2index index1(layout1, p.I);

        // Load
        const vreal W_old = gf_W(mask, index1);
        const vreal alphaG_old = -0.5 * gf_hgnn(mask, index1);
        const smat<vreal, 3> hg_old = gf_hg(mask, index1);

        // Enforce floors
        const vreal W = fmax(vreal(W_floor), W_old);
        const vreal alphaG = fmax(vreal(alphaG_floor), alphaG_old);

        // Enforce algebraic constraints
        // See arXiv:1212.2901 [gr-qc].
        const vreal dethg_old = calc_det(hg_old);
        const vreal chi_old = 1 / cbrt(dethg_old);
        const smat<vreal, 3> hg(
            [&](int a, int b) ARITH_INLINE { return chi_old * hg_old(a, b); });

        // Store
        gf_W.store(mask, index1, W);
        gf_hg.store(mask, index1, hg);
        gf_hgnn.store(mask, index1, -2.0 * alphaG);
      });
#ifdef __CUDACC__
  nvtxRangeEnd(range);
#endif
}

} // namespace cGHG
