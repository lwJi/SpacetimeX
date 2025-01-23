/* derivsinline.hxx */
/* Produced with Generato */

#ifndef DERIVSINLINE_HXX
#define DERIVSINLINE_HXX

template <int D, typename T>
inline T fd_1st(const cGH *restrict const cctkGH, T *gf, int i, int j, int k) inline {
  return
    (-8*gf(p.I-p.DI[D]) + gf(p.I-2*p.DI[D]) + 8*gf(p.I+p.DI[D]) - gf(p.I+2*p.DI[D]))/(12.*p.DX[D]);
};

template <int D1, int D2, typename T>
inline T fd_2nd(const cGH *restrict const cctkGH, T *gf, int i, int j, int k) inline {
  if constexpr (D1 == D2) {
  constexpr int D = D1;
    return
    (-30*gf(p.I) + 16*gf(p.I-p.DI[D]) - gf(p.I-2*p.DI[D]) + 16*gf(p.I+p.DI[D]) - gf(p.I+2*p.DI[D]))/(12.*Power(p.DX[D],2));
  } else {
    return
    (64*gf(p.I-p.DI[D1]-p.DI[D2]) - 8*gf(p.I-p.DI[D1]-2*p.DI[D2]) - 64*gf(p.I-p.DI[D1]+p.DI[D2]) + 8*gf(p.I-p.DI[D1]+2*p.DI[D2]) - 8*gf(p.I-2*p.DI[D1]-p.DI[D2]) + gf(p.I-2*p.DI[D1]-2*p.DI[D2]) + 8*gf(p.I-2*p.DI[D1]+p.DI[D2]) - gf(p.I-2*p.DI[D1]+2*p.DI[D2]) - 64*gf(p.I+p.DI[D1]-p.DI[D2]) + 8*gf(p.I+p.DI[D1]-2*p.DI[D2]) + 64*gf(p.I+p.DI[D1]+p.DI[D2]) - 8*gf(p.I+p.DI[D1]+2*p.DI[D2]) + 8*gf(p.I+2*p.DI[D1]-p.DI[D2]) - gf(p.I+2*p.DI[D1]-2*p.DI[D2]) - 8*gf(p.I+2*p.DI[D1]+p.DI[D2]) + gf(p.I+2*p.DI[D1]+2*p.DI[D2]))/(144.*p.DX[D1]*p.DX[D2]);
  }
};

#endif // #ifndef DERIVSINLINE_HXX

/* derivsinline.hxx */
