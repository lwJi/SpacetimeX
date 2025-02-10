(* ::Package:: *)

(* Z4cowGPU_set_rhs.wl *)

(* (c) Liwei Ji, 07/2024 *)

Needs["xAct`xCoba`", FileNameJoin[{Environment["GENERATO"], "src/Generato.wl"
  }]]

SetPVerbose[False];

SetPrintDate[False];

SetGridPointIndex["[[ijk]]"];

SetTempVariableType["auto"];

DefManifold[M3, 3, IndexRange[a, z]];

DefChart[cart, M3, {1, 2, 3}, {X[], Y[], Z[]}, ChartColor -> Blue];

(* Define Variables *)

<<wl/Z4c_vars.wl

<<wl/ADM_vars.wl

<<wl/ADM_rhs.wl

SetOutputFile[FileNameJoin[{Directory[], "Z4cowGPU_set_ADM.hxx"}]];

SetMainPrint[
  PrintInitializations[{Mode -> "MainOut"}, ADMVarlist];
  pr[];

  pr["grid.loop_all_device<0, 0, 0>("];
  pr["  grid.nghostzones, [=] ARITH_DEVICE(const PointDesc &p) ARITH_INLINE {"];
  pr[];

  pr["const int ijk = layout2.linear(p.i, p.j, p.k);"];
  pr[];

  PrintInitializations[{Mode -> "MainIn"}, Delete[EvolVarlist, {{1}, {5}, {-3}}]];
  pr[];

  PrintEquations[{Mode -> "Main"}, ADMVarlist];
  pr[];

  pr["});"];
];

Import[FileNameJoin[{Environment["GENERATO"], "codes/CarpetXGPU.wl"}]];
