/* Z4cowGPU_derivs2nd_GF3D5.hxx */
/* Produced with Generato */

#ifndef Z4COWGPU_DERIVS2ND_GF3D5_HXX
#define Z4COWGPU_DERIVS2ND_GF3D5_HXX

const auto calcderivs2 = [&] (const GF3D5<CCTK_REAL> &gf,
                              const array<GF3D5<CCTK_REAL>, 3> &dgf,
                              const array<GF3D5<CCTK_REAL>, 6> &ddgf,
                              const CCTK_REAL *gf_)
                             CCTK_ATTRIBUTE_NOINLINE {
switch (deriv_order) {
case 2: {
  grid.loop_int_device<0, 0, 0>(
    grid.nghostzones,
    [=] CCTK_DEVICE(const PointDesc &p) CCTK_ATTRIBUTE_ALWAYS_INLINE {
      const int ijk2 = layout2.linear(p.i, p.j, p.k);
      const int ijk5 = layout5.linear(p.i, p.j, p.k);
      gf.ptr[ijk5] = gf_[ijk2];
      dgf[0].ptr[ijk5] = fd_1_o2<1>(layout2, gf_, p.i, p.j, p.k, invDxyz);
      dgf[1].ptr[ijk5] = fd_1_o2<2>(layout2, gf_, p.i, p.j, p.k, invDxyz);
      dgf[2].ptr[ijk5] = fd_1_o2<3>(layout2, gf_, p.i, p.j, p.k, invDxyz);
      ddgf[0].ptr[ijk5] = fd_2_o2<1, 1>(layout2, gf_, p.i, p.j, p.k, invDxyz);
      ddgf[1].ptr[ijk5] = fd_2_o2<1, 2>(layout2, gf_, p.i, p.j, p.k, invDxyz);
      ddgf[2].ptr[ijk5] = fd_2_o2<1, 3>(layout2, gf_, p.i, p.j, p.k, invDxyz);
      ddgf[3].ptr[ijk5] = fd_2_o2<2, 2>(layout2, gf_, p.i, p.j, p.k, invDxyz);
      ddgf[4].ptr[ijk5] = fd_2_o2<2, 3>(layout2, gf_, p.i, p.j, p.k, invDxyz);
      ddgf[5].ptr[ijk5] = fd_2_o2<3, 3>(layout2, gf_, p.i, p.j, p.k, invDxyz);
    });
  break;
}
case 4: {
  grid.loop_int_device<0, 0, 0>(
    grid.nghostzones,
    [=] CCTK_DEVICE(const PointDesc &p) CCTK_ATTRIBUTE_ALWAYS_INLINE {
      const int ijk2 = layout2.linear(p.i, p.j, p.k);
      const int ijk5 = layout5.linear(p.i, p.j, p.k);
      gf.ptr[ijk5] = gf_[ijk2];
      dgf[0].ptr[ijk5] = fd_1_o4<1>(layout2, gf_, p.i, p.j, p.k, invDxyz);
      dgf[1].ptr[ijk5] = fd_1_o4<2>(layout2, gf_, p.i, p.j, p.k, invDxyz);
      dgf[2].ptr[ijk5] = fd_1_o4<3>(layout2, gf_, p.i, p.j, p.k, invDxyz);
      ddgf[0].ptr[ijk5] = fd_2_o4<1, 1>(layout2, gf_, p.i, p.j, p.k, invDxyz);
      ddgf[1].ptr[ijk5] = fd_2_o4<1, 2>(layout2, gf_, p.i, p.j, p.k, invDxyz);
      ddgf[2].ptr[ijk5] = fd_2_o4<1, 3>(layout2, gf_, p.i, p.j, p.k, invDxyz);
      ddgf[3].ptr[ijk5] = fd_2_o4<2, 2>(layout2, gf_, p.i, p.j, p.k, invDxyz);
      ddgf[4].ptr[ijk5] = fd_2_o4<2, 3>(layout2, gf_, p.i, p.j, p.k, invDxyz);
      ddgf[5].ptr[ijk5] = fd_2_o4<3, 3>(layout2, gf_, p.i, p.j, p.k, invDxyz);
    });
  break;
}
case 6: {
  grid.loop_int_device<0, 0, 0>(
    grid.nghostzones,
    [=] CCTK_DEVICE(const PointDesc &p) CCTK_ATTRIBUTE_ALWAYS_INLINE {
      const int ijk2 = layout2.linear(p.i, p.j, p.k);
      const int ijk5 = layout5.linear(p.i, p.j, p.k);
      gf.ptr[ijk5] = gf_[ijk2];
      dgf[0].ptr[ijk5] = fd_1_o6<1>(layout2, gf_, p.i, p.j, p.k, invDxyz);
      dgf[1].ptr[ijk5] = fd_1_o6<2>(layout2, gf_, p.i, p.j, p.k, invDxyz);
      dgf[2].ptr[ijk5] = fd_1_o6<3>(layout2, gf_, p.i, p.j, p.k, invDxyz);
      ddgf[0].ptr[ijk5] = fd_2_o6<1, 1>(layout2, gf_, p.i, p.j, p.k, invDxyz);
      ddgf[1].ptr[ijk5] = fd_2_o6<1, 2>(layout2, gf_, p.i, p.j, p.k, invDxyz);
      ddgf[2].ptr[ijk5] = fd_2_o6<1, 3>(layout2, gf_, p.i, p.j, p.k, invDxyz);
      ddgf[3].ptr[ijk5] = fd_2_o6<2, 2>(layout2, gf_, p.i, p.j, p.k, invDxyz);
      ddgf[4].ptr[ijk5] = fd_2_o6<2, 3>(layout2, gf_, p.i, p.j, p.k, invDxyz);
      ddgf[5].ptr[ijk5] = fd_2_o6<3, 3>(layout2, gf_, p.i, p.j, p.k, invDxyz);
    });
  break;
}
case 8: {
  grid.loop_int_device<0, 0, 0>(
    grid.nghostzones,
    [=] CCTK_DEVICE(const PointDesc &p) CCTK_ATTRIBUTE_ALWAYS_INLINE {
      const int ijk2 = layout2.linear(p.i, p.j, p.k);
      const int ijk5 = layout5.linear(p.i, p.j, p.k);
      gf.ptr[ijk5] = gf_[ijk2];
      dgf[0].ptr[ijk5] = fd_1_o8<1>(layout2, gf_, p.i, p.j, p.k, invDxyz);
      dgf[1].ptr[ijk5] = fd_1_o8<2>(layout2, gf_, p.i, p.j, p.k, invDxyz);
      dgf[2].ptr[ijk5] = fd_1_o8<3>(layout2, gf_, p.i, p.j, p.k, invDxyz);
      ddgf[0].ptr[ijk5] = fd_2_o8<1, 1>(layout2, gf_, p.i, p.j, p.k, invDxyz);
      ddgf[1].ptr[ijk5] = fd_2_o8<1, 2>(layout2, gf_, p.i, p.j, p.k, invDxyz);
      ddgf[2].ptr[ijk5] = fd_2_o8<1, 3>(layout2, gf_, p.i, p.j, p.k, invDxyz);
      ddgf[3].ptr[ijk5] = fd_2_o8<2, 2>(layout2, gf_, p.i, p.j, p.k, invDxyz);
      ddgf[4].ptr[ijk5] = fd_2_o8<2, 3>(layout2, gf_, p.i, p.j, p.k, invDxyz);
      ddgf[5].ptr[ijk5] = fd_2_o8<3, 3>(layout2, gf_, p.i, p.j, p.k, invDxyz);
    });
  break;
}
default:
  assert(0);
}
};


#endif // #ifndef Z4COWGPU_DERIVS2ND_GF3D5_HXX

/* Z4cowGPU_derivs2nd_GF3D5.hxx */
