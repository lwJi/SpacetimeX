#include <cctk.h>
#include <cctk_Arguments.h>
#include <loop_device.hxx>

namespace Z4cowGPU {
using namespace Arith;
using namespace Loop;

extern "C" void Z4cowGPU_InitialLapse(CCTK_ARGUMENTS) {
  DECLARE_CCTK_ARGUMENTSX_Z4cowGPU_InitialLapse;

  grid.loop_int_device<0, 0, 0>(grid.nghostzones,
                                [=] ARITH_DEVICE(const PointDesc &p)
                                    ARITH_INLINE { alphaG(p.I) = W(p.I); });
}

} // namespace Z4cowGPU
