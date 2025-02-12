/* Z4cowGPU_applydiss.hxx */
/* Produced with Generato */

#ifndef Z4COWGPU_APPLYDISS_HXX
#define Z4COWGPU_APPLYDISS_HXX

const auto applydiss = [&](const CCTK_REAL *gf_, CCTK_REAL *gf_rhs_) {
switch (diss_order) {
case 3: {
  grid.loop_int_device<0, 0, 0>(grid.nghostzones,
    [=] CCTK_DEVICE(const PointDesc &p) CCTK_ATTRIBUTE_ALWAYS_INLINE {
      const int ijk = layout2.linear(p.i, p.j, p.k);
      const auto rhs_old = gf_rhs_[ijk];
      const auto rhs_new =
          rhs_old +
          epsdiss * calc_diss<2>(layout2, gf_, p.i, p.j, p.k, invDxyz);
      gf_rhs_[ijk] = rhs_new;
    });
  break;
}
case 5: {
  grid.loop_int_device<0, 0, 0>(grid.nghostzones,
    [=] CCTK_DEVICE(const PointDesc &p) CCTK_ATTRIBUTE_ALWAYS_INLINE {
      const int ijk = layout2.linear(p.i, p.j, p.k);
      const auto rhs_old = gf_rhs_[ijk];
      const auto rhs_new =
          rhs_old +
          epsdiss * calc_diss<4>(layout2, gf_, p.i, p.j, p.k, invDxyz);
      gf_rhs_[ijk] = rhs_new;
    });
  break;
}
case 7: {
  grid.loop_int_device<0, 0, 0>(grid.nghostzones,
    [=] CCTK_DEVICE(const PointDesc &p) CCTK_ATTRIBUTE_ALWAYS_INLINE {
      const int ijk = layout2.linear(p.i, p.j, p.k);
      const auto rhs_old = gf_rhs_[ijk];
      const auto rhs_new =
          rhs_old +
          epsdiss * calc_diss<6>(layout2, gf_, p.i, p.j, p.k, invDxyz);
      gf_rhs_[ijk] = rhs_new;
    });
  break;
}
case 9: {
  grid.loop_int_device<0, 0, 0>(grid.nghostzones,
    [=] CCTK_DEVICE(const PointDesc &p) CCTK_ATTRIBUTE_ALWAYS_INLINE {
      const int ijk = layout2.linear(p.i, p.j, p.k);
      const auto rhs_old = gf_rhs_[ijk];
      const auto rhs_new =
          rhs_old +
          epsdiss * calc_diss<8>(layout2, gf_, p.i, p.j, p.k, invDxyz);
      gf_rhs_[ijk] = rhs_new;
    });
  break;
}
default:
  assert(0);
}
};


#endif // #ifndef Z4COWGPU_APPLYDISS_HXX

/* Z4cowGPU_applydiss.hxx */
