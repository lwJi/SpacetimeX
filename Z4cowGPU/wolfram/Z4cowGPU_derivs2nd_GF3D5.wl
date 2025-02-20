(* ::Package:: *)

(* Z4cowGPU_derivs2nd_GF3D5.wl *)

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

SetOutputFile[FileNameJoin[{Directory[], "Z4cowGPU_derivs2nd_GF3D5.hxx"}]];

SetMainPrint[
  pr["const auto calcderivs2 = [&] (const GF3D5<CCTK_REAL> &gf,"];
  pr["                              const array<GF3D5<CCTK_REAL>, 3> &dgf,"];
  pr["                              const array<GF3D5<CCTK_REAL>, 6> &ddgf,"];
  pr["                              const CCTK_REAL *gf_)"];
  pr["                             CCTK_ATTRIBUTE_NOINLINE {"];
  pr["switch (deriv_order) {"];
  Do[
    pr["case " <> ToString[aOrd] <> ": {"];
    pr["  grid.loop_int_device<0, 0, 0>("];
    pr["    grid.nghostzones,"];
    pr["    [=] CCTK_DEVICE(const PointDesc &p) CCTK_ATTRIBUTE_ALWAYS_INLINE {"];
    pr["      const int ijk2 = layout2.linear(p.i, p.j, p.k);"];
    pr["      const int ijk5 = layout5.linear(p.i, p.j, p.k);"];
    pr["      gf.ptr[ijk5] = gf_[ijk2];"];
    pr["      dgf[0].ptr[ijk5] = fd_1_o" <> ToString[aOrd]
                                         <> "<1>(layout2, gf_, p.i, p.j, p.k, invDxyz);"];
    pr["      dgf[1].ptr[ijk5] = fd_1_o" <> ToString[aOrd]
                                         <> "<2>(layout2, gf_, p.i, p.j, p.k, invDxyz);"];
    pr["      dgf[2].ptr[ijk5] = fd_1_o" <> ToString[aOrd]
                                         <> "<3>(layout2, gf_, p.i, p.j, p.k, invDxyz);"];
    pr["      ddgf[0].ptr[ijk5] = fd_2_o" <> ToString[aOrd]
                                          <> "<1, 1>(layout2, gf_, p.i, p.j, p.k, invDxyz);"];
    pr["      ddgf[1].ptr[ijk5] = fd_2_o" <> ToString[aOrd]
                                          <> "<1, 2>(layout2, gf_, p.i, p.j, p.k, invDxyz);"];
    pr["      ddgf[2].ptr[ijk5] = fd_2_o" <> ToString[aOrd]
                                          <> "<1, 3>(layout2, gf_, p.i, p.j, p.k, invDxyz);"];
    pr["      ddgf[3].ptr[ijk5] = fd_2_o" <> ToString[aOrd]
                                          <> "<2, 2>(layout2, gf_, p.i, p.j, p.k, invDxyz);"];
    pr["      ddgf[4].ptr[ijk5] = fd_2_o" <> ToString[aOrd]
                                          <> "<2, 3>(layout2, gf_, p.i, p.j, p.k, invDxyz);"];
    pr["      ddgf[5].ptr[ijk5] = fd_2_o" <> ToString[aOrd]
                                          <> "<3, 3>(layout2, gf_, p.i, p.j, p.k, invDxyz);"];
    pr["    });"];
    pr["  break;"];
    pr["}"]
    ,
    {aOrd, 2, 8, 2}
  ];
  pr["default:"];
  pr["  assert(0);"];
  pr["}"];
  pr["};"];
  pr[]
];

Import[FileNameJoin[{Environment["GENERATO"], "codes/CarpetXGPU.wl"}]];
