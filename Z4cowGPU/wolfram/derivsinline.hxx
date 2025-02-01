/* derivsinline.hxx */
/* Produced with Generato */

#ifndef DERIVSINLINE_HXX
#define DERIVSINLINE_HXX

#include <loop_device.hxx>

#include <array>
#include <cmath>

namespace Z4cowGPU {

template <typename T>
CCTK_DEVICE CCTK_HOST CCTK_ATTRIBUTE_ALWAYS_INLINE inline T Power(T x, int y) {
  return (y == 2) ? Arith::pow2(x) : Arith::pown(x, y);
}

template <int DI, typename T>
CCTK_DEVICE CCTK_HOST CCTK_ATTRIBUTE_ALWAYS_INLINE inline T
fd_1st(const std::array<int, 3> &Dijk, const T *gf, int i, int j, int k, const std::array<T, 3> &invDx) {
  constexpr int D = DI - 1;
  const int m2 = Index3DLinear(Dijk, i + (D == 0 ? -2 : 0), j + (D == 1 ? -2 : 0), k + (D == 2 ? -2 : 0));
  const int m1 = Index3DLinear(Dijk, i + (D == 0 ? -1 : 0), j + (D == 1 ? -1 : 0), k + (D == 2 ? -1 : 0));
  const int p1 = Index3DLinear(Dijk, i + (D == 0 ? 1 : 0), j + (D == 1 ? 1 : 0), k + (D == 2 ? 1 : 0));
  const int p2 = Index3DLinear(Dijk, i + (D == 0 ? 2 : 0), j + (D == 1 ? 2 : 0), k + (D == 2 ? 2 : 0));
  return
    (invDx[D]*(-8*gf[m1] + gf[m2] + 8*gf[p1] - gf[p2]))/12.;
}

template <int DI, int DJ, typename T>
CCTK_DEVICE CCTK_HOST CCTK_ATTRIBUTE_ALWAYS_INLINE inline T
fd_2nd(const std::array<int, 3> &Dijk, const T *gf, int i, int j, int k, const std::array<T, 3> &invDx) {
  if constexpr (DI == DJ) {
  constexpr int D = DI - 1;
  const int m2 = Index3DLinear(Dijk, i + (D == 0 ? -2 : 0), j + (D == 1 ? -2 : 0), k + (D == 2 ? -2 : 0));
  const int m1 = Index3DLinear(Dijk, i + (D == 0 ? -1 : 0), j + (D == 1 ? -1 : 0), k + (D == 2 ? -1 : 0));
  const int c0 = Index3DLinear(Dijk, i, j, k);
  const int p1 = Index3DLinear(Dijk, i + (D == 0 ? 1 : 0), j + (D == 1 ? 1 : 0), k + (D == 2 ? 1 : 0));
  const int p2 = Index3DLinear(Dijk, i + (D == 0 ? 2 : 0), j + (D == 1 ? 2 : 0), k + (D == 2 ? 2 : 0));
    return
    (Power(invDx[D],2)*(-30*gf[c0] + 16*gf[m1] - gf[m2] + 16*gf[p1] - gf[p2]))/12.;
  } else {
  constexpr int D1 = DI - 1;
  constexpr int D2 = DJ - 1;
  const int m2m2 = Index3DLinear(Dijk, i + (D1 != 0 && D2 != 0 ? 0 : -2), j + (D1 != 1 && D2 != 1 ? 0 : -2), k + (D1 != 2 && D2 != 2 ? 0 : -2));
  const int m2m1 = Index3DLinear(Dijk, i + (D1 != 0 && D2 != 0 ? 0 : (D1 == 0 ? -2 : -1)),
                                       j + (D1 != 1 && D2 != 1 ? 0 : (D1 == 1 ? -2 : -1)),
                                       k + (D1 != 2 && D2 != 2 ? 0 : (D1 == 2 ? -2 : -1)));
  const int m2p1 = Index3DLinear(Dijk, i + (D1 != 0 && D2 != 0 ? 0 : (D1 == 0 ? -2 : 1)),
                                       j + (D1 != 1 && D2 != 1 ? 0 : (D1 == 1 ? -2 : 1)),
                                       k + (D1 != 2 && D2 != 2 ? 0 : (D1 == 2 ? -2 : 1)));
  const int m2p2 = Index3DLinear(Dijk, i + (D1 != 0 && D2 != 0 ? 0 : (D1 == 0 ? -2 : 2)),
                                       j + (D1 != 1 && D2 != 1 ? 0 : (D1 == 1 ? -2 : 2)),
                                       k + (D1 != 2 && D2 != 2 ? 0 : (D1 == 2 ? -2 : 2)));
  const int m1m2 = Index3DLinear(Dijk, i + (D1 != 0 && D2 != 0 ? 0 : (D1 == 0 ? -1 : -2)),
                                       j + (D1 != 1 && D2 != 1 ? 0 : (D1 == 1 ? -1 : -2)),
                                       k + (D1 != 2 && D2 != 2 ? 0 : (D1 == 2 ? -1 : -2)));
  const int m1m1 = Index3DLinear(Dijk, i + (D1 != 0 && D2 != 0 ? 0 : -1), j + (D1 != 1 && D2 != 1 ? 0 : -1), k + (D1 != 2 && D2 != 2 ? 0 : -1));
  const int m1p1 = Index3DLinear(Dijk, i + (D1 != 0 && D2 != 0 ? 0 : (D1 == 0 ? -1 : 1)),
                                       j + (D1 != 1 && D2 != 1 ? 0 : (D1 == 1 ? -1 : 1)),
                                       k + (D1 != 2 && D2 != 2 ? 0 : (D1 == 2 ? -1 : 1)));
  const int m1p2 = Index3DLinear(Dijk, i + (D1 != 0 && D2 != 0 ? 0 : (D1 == 0 ? -1 : 2)),
                                       j + (D1 != 1 && D2 != 1 ? 0 : (D1 == 1 ? -1 : 2)),
                                       k + (D1 != 2 && D2 != 2 ? 0 : (D1 == 2 ? -1 : 2)));
  const int p1m2 = Index3DLinear(Dijk, i + (D1 != 0 && D2 != 0 ? 0 : (D1 == 0 ? 1 : -2)),
                                       j + (D1 != 1 && D2 != 1 ? 0 : (D1 == 1 ? 1 : -2)),
                                       k + (D1 != 2 && D2 != 2 ? 0 : (D1 == 2 ? 1 : -2)));
  const int p1m1 = Index3DLinear(Dijk, i + (D1 != 0 && D2 != 0 ? 0 : (D1 == 0 ? 1 : -1)),
                                       j + (D1 != 1 && D2 != 1 ? 0 : (D1 == 1 ? 1 : -1)),
                                       k + (D1 != 2 && D2 != 2 ? 0 : (D1 == 2 ? 1 : -1)));
  const int p1p1 = Index3DLinear(Dijk, i + (D1 != 0 && D2 != 0 ? 0 : 1), j + (D1 != 1 && D2 != 1 ? 0 : 1), k + (D1 != 2 && D2 != 2 ? 0 : 1));
  const int p1p2 = Index3DLinear(Dijk, i + (D1 != 0 && D2 != 0 ? 0 : (D1 == 0 ? 1 : 2)),
                                       j + (D1 != 1 && D2 != 1 ? 0 : (D1 == 1 ? 1 : 2)),
                                       k + (D1 != 2 && D2 != 2 ? 0 : (D1 == 2 ? 1 : 2)));
  const int p2m2 = Index3DLinear(Dijk, i + (D1 != 0 && D2 != 0 ? 0 : (D1 == 0 ? 2 : -2)),
                                       j + (D1 != 1 && D2 != 1 ? 0 : (D1 == 1 ? 2 : -2)),
                                       k + (D1 != 2 && D2 != 2 ? 0 : (D1 == 2 ? 2 : -2)));
  const int p2m1 = Index3DLinear(Dijk, i + (D1 != 0 && D2 != 0 ? 0 : (D1 == 0 ? 2 : -1)),
                                       j + (D1 != 1 && D2 != 1 ? 0 : (D1 == 1 ? 2 : -1)),
                                       k + (D1 != 2 && D2 != 2 ? 0 : (D1 == 2 ? 2 : -1)));
  const int p2p1 = Index3DLinear(Dijk, i + (D1 != 0 && D2 != 0 ? 0 : (D1 == 0 ? 2 : 1)),
                                       j + (D1 != 1 && D2 != 1 ? 0 : (D1 == 1 ? 2 : 1)),
                                       k + (D1 != 2 && D2 != 2 ? 0 : (D1 == 2 ? 2 : 1)));
  const int p2p2 = Index3DLinear(Dijk, i + (D1 != 0 && D2 != 0 ? 0 : 2), j + (D1 != 1 && D2 != 1 ? 0 : 2), k + (D1 != 2 && D2 != 2 ? 0 : 2));
    return
    (invDx[D1]*invDx[D2]*(64*gf[m1m1] - 8*gf[m1m2] - 64*gf[m1p1] + 8*gf[m1p2] - 8*gf[m2m1] + gf[m2m2] + 8*gf[m2p1] - gf[m2p2] - 64*gf[p1m1] + 8*gf[p1m2] + 64*gf[p1p1] - 8*gf[p1p2] + 8*gf[p2m1] - gf[p2m2] - 8*gf[p2p1] + gf[p2p2]))/144.;
  }
}

} // namespace Z4cowGPU

#endif // #ifndef DERIVSINLINE_HXX

/* derivsinline.hxx */
