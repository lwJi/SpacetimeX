(* ::Package:: *)

(* Z4cowGPU_applydiss.wl *)

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

SetOutputFile[FileNameJoin[{Directory[], "Z4cowGPU_applydiss.hxx"}]];

SetMainPrint[
  pr["const auto applydiss = "
     <> "[&](const CCTK_REAL *gf_, CCTK_REAL *gf_rhs_) {"];
  pr["switch (diss_order) {"];
  Do[
    pr["case " <> ToString[aOrd + 1] <> ": {"];
    pr["  grid.loop_int_device<0, 0, 0>(grid.nghostzones,"];
    pr["    [=] CCTK_DEVICE(const PointDesc &p)"
           <> " CCTK_ATTRIBUTE_ALWAYS_INLINE {"];
    pr["      const int ijk = layout2.linear(p.i, p.j, p.k);"];
    pr["      const auto rhs_old = gf_rhs_[ijk];"];
    pr["      const auto rhs_new ="];
    pr["          rhs_old +"];
    pr["          epsdiss * calc_diss<"
                    <> ToString[aOrd]
                    <> ">(layout2, gf_, p.i, p.j, p.k, invDxyz);"];
    pr["      gf_rhs_[ijk] = rhs_new;"];
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
