/* derivsinline.hxx */
/* Produced with Generato */

#ifndef DERIVSINLINE_HXX
#define DERIVSINLINE_HXX

#include <loop_device.hxx>

namespace Z4cowGPU {
using namespace Loop;

template <typename T>
CCTK_DEVICE CCTK_HOST CCTK_ATTRIBUTE_ALWAYS_INLINE inline T Power(T x, int y) {
  return (y == 2) ? Arith::pow2(x) : Arith::pown(x, y);
}

template <int DIR, typename T>
CCTK_DEVICE CCTK_HOST CCTK_ATTRIBUTE_ALWAYS_INLINE inline T
fd_1st(const GF3D2<const T> &gf, const PointDesc &p) {
  constexpr int D = DIR - 1;
  return
    (-8*gf(p.I-p.DI[D]) + gf(p.I-2*p.DI[D]) + 8*gf(p.I+p.DI[D]) - gf(p.I+2*p.DI[D]))/(12.*p.DX[D]);
}

template <int DIR1, int DIR2, typename T>
CCTK_DEVICE CCTK_HOST CCTK_ATTRIBUTE_ALWAYS_INLINE inline T
fd_2nd(const GF3D2<const T> &gf, const PointDesc &p) {
  constexpr int D1 = DIR1 - 1;
  constexpr int D2 = DIR2 - 1;
  if constexpr (D1 == D2) {
    return
    (-30*gf(p.I) + 16*gf(p.I-p.DI[D1]) - gf(p.I-2*p.DI[D1]) + 16*gf(p.I+p.DI[D1]) - gf(p.I+2*p.DI[D1]))/(12.*Power(p.DX[D1],2));
  } else {
    return
    (64*gf(p.I-p.DI[D1]-p.DI[D2]) - 8*gf(p.I-p.DI[D1]-2*p.DI[D2]) - 64*gf(p.I-p.DI[D1]+p.DI[D2]) + 8*gf(p.I-p.DI[D1]+2*p.DI[D2]) - 8*gf(p.I-2*p.DI[D1]-p.DI[D2]) + gf(p.I-2*p.DI[D1]-2*p.DI[D2]) + 8*gf(p.I-2*p.DI[D1]+p.DI[D2]) - gf(p.I-2*p.DI[D1]+2*p.DI[D2]) - 64*gf(p.I+p.DI[D1]-p.DI[D2]) + 8*gf(p.I+p.DI[D1]-2*p.DI[D2]) + 64*gf(p.I+p.DI[D1]+p.DI[D2]) - 8*gf(p.I+p.DI[D1]+2*p.DI[D2]) + 8*gf(p.I+2*p.DI[D1]-p.DI[D2]) - gf(p.I+2*p.DI[D1]-2*p.DI[D2]) - 8*gf(p.I+2*p.DI[D1]+p.DI[D2]) + gf(p.I+2*p.DI[D1]+2*p.DI[D2]))/(144.*p.DX[D1]*p.DX[D2]);
  }
}

} // namespace Z4cowGPU

#endif // #ifndef DERIVSINLINE_HXX

/* derivsinline.hxx */
