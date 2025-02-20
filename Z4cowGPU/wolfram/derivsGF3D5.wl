(* ::Package:: *)

(* derivsGF3D5.wl *)

(* (c) Liwei Ji, 02/2025 *)

(******************)
(* Configurations *)
(******************)

Needs["xAct`xCoba`", FileNameJoin[{Environment["GENERATO"], "src/Generato.wl"}]]

SetPVerbose[False];

SetPrintDate[False];


(******************)
(* Print to Files *)
(******************)

SetOutputFile[FileNameJoin[{Directory[], "derivsGF3D5.hxx"}]];

SetMainPrint[
  pr["#include <loop_device.hxx>"];
  pr[];
  pr["#include <array>"];
  pr["#include <cmath>"];
  pr[];
  pr["#include \"derivsinline.hxx\""];
  pr[];
  pr["namespace Z4cowGPU {"];
  pr["using namespace Arith;"];
  pr["using namespace Loop;"];
  pr[];
  pr["template <int CI, int CJ, int CK, typename T>"];
  pr["CCTK_ATTRIBUTE_NOINLINE void"];
  pr["calc_derivs1st(const GridDescBaseDevice &grid,"];
  pr["               const GF3D5layout &layout5,"];
  pr["               const GF3D5<T> &gf,"];
  pr["               const array<GF3D5<T>, 3> &dgf,"];
  pr["               const GF3D2layout &layout2,"];
  pr["               const T *gf_,"];
  pr["               const array<T, 3> &invDxyz,"];
  pr["               const int deriv_order) {"];
  pr["  switch (deriv_order) {"];
  Do[
    pr["  case " <> ToString[aOrd] <> ": {"];
    pr["    grid.loop_int_device<0, 0, 0>("];
    pr["      grid.nghostzones,"];
    pr["      [=] CCTK_DEVICE(const PointDesc &p) CCTK_ATTRIBUTE_ALWAYS_INLINE {"];
    pr["        const int ijk2 = layout2.linear(p.i, p.j, p.k);"];
    pr["        const int ijk5 = layout5.linear(p.i, p.j, p.k);"];
    pr["        gf.ptr[ijk5] = gf_[ijk2];"];
    pr["        dgf[0].ptr[ijk5] = fd_1_o" <> ToString[aOrd]
                                           <> "<1>(layout2, gf_, p.i, p.j, p.k, invDxyz);"];
    pr["        dgf[1].ptr[ijk5] = fd_1_o" <> ToString[aOrd]
                                           <> "<2>(layout2, gf_, p.i, p.j, p.k, invDxyz);"];
    pr["        dgf[2].ptr[ijk5] = fd_1_o" <> ToString[aOrd]
                                           <> "<3>(layout2, gf_, p.i, p.j, p.k, invDxyz);"];
    pr["      });"];
    pr["    break;"];
    pr["  }"]
    ,
    {aOrd, 2, 8, 2}
  ];
  pr["default:"];
  pr["  assert(0);"];
  pr["}"];
  pr["}"];
  pr[]

  pr["template <int CI, int CJ, int CK, typename T>"];
  pr["CCTK_ATTRIBUTE_NOINLINE void"];
  pr["calc_derivs1st(const GridDescBaseDevice &grid,"];
  pr["               const GF3D5layout &layout5,"];
  pr["               const array<GF3D5<T>, 3> &gf,"];
  pr["               const array<array<GF3D5<T>, 3>, 3> &dgf,"];
  pr["               const GF3D2layout &layout2,"];
  pr["               const array<const T *, 3> &gf_,"];
  pr["               const array<T, 3> &invDxyz,"];
  pr["               const int deriv_order) {"];
  pr["  for (int a = 0; a < 3; ++a)"];
  pr["    calc_derivs1st<CI, CJ, CK>(grid, layout5, gf[a], dgf[a], layout2, gf_[a],"];
  pr["                               invDxyz, deriv_order);"];
  pr["}"];
  pr[]

  pr["template <int CI, int CJ, int CK, typename T>"];
  pr["CCTK_ATTRIBUTE_NOINLINE void"];
  pr["calc_derivs1st(const GridDescBaseDevice &grid,"];
  pr["               const GF3D5layout &layout5,"];
  pr["               const array<GF3D5<T>, 6> &gf,"];
  pr["               const array<array<GF3D5<T>, 3>, 6> &dgf,"];
  pr["               const GF3D2layout &layout2,"];
  pr["               const array<const T *, 6> &gf_,"];
  pr["               const array<T, 3> &invDxyz,"];
  pr["               const int deriv_order) {"];
  pr["  for (int a = 0; a < 6; ++a)"];
  pr["    calc_derivs1st<CI, CJ, CK>(grid, layout5, gf[a], dgf[a], layout2, gf_[a],"];
  pr["                               invDxyz, deriv_order);"];
  pr["}"];
  pr[]

  pr["} // namespace Z4cowGPU"];
];

Import[FileNameJoin[{Environment["GENERATO"], "codes/CarpetXGPU.wl"}]];
