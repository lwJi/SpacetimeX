(* ::Package:: *)

(* cGHG_set_initial2.wl *)

(* (c) Liwei Ji, 09/2024 *)

Needs["xAct`xCoba`", FileNameJoin[{Environment["GENERATO"], "src/Generato.wl"}]]

SetPVerbose[False];

SetPrintDate[False];

SetGridPointIndex[""];

SetTempVariableType["vreal"];

DefManifold[M3, 3, IndexRange[a, z]];

DefChart[cart, M3, {1, 2, 3}, {X[], Y[], Z[]}, ChartColor -> Blue];

(* Define Variables *)

<<wl/cGHG_vars.wl

<<wl/ADM_vars.wl

<<wl/cGHGinADM_rhs.wl

SetOutputFile[FileNameJoin[{Directory[], "cGHG_set_initial2.hxx"}]];

$MainPrint[] :=
  Module[{},
    PrintInitializations[{Mode -> "MainOut"}, cGHGEvolVarlist[[-2;;-1]]];
    pr[];

    pr["grid.loop_int_device<0, 0, 0, vsize>("];
    pr["  grid.nghostzones, [=] ARITH_DEVICE(const PointDesc &p) ARITH_INLINE {"];
    pr["  const vbool mask = mask_for_loop_tail<vbool>(p.i, p.imax);"];
    pr["  const GF3D2index index2(layout2, p.I);"];
    pr["  const GF3D5index index5(layout5, p.I);"];
    pr[];

    PrintListInitializations[ADMEvolVarlist[[2;;2]], "tl_", "index5"];
    PrintListInitializations[cGHGdEvolVarlist[[-4;;-3]], "tl_", "index5"];
    pr[];

    PrintInitializations[{Mode -> "MainIn", StorageType -> "Tile"},
                         ADMEvolVarlist[[2;;2]]];
    PrintInitializations[{Mode -> "MainIn", StorageType -> "Tile", TensorType -> "Vect"},
                         cGHGdEvolVarlist[[-4;;-3]]];
    pr[];
    PrintEquations[{Mode -> "Main"}, cGHGEvolVarlist[[-2;;-1]]];
    pr[];
    pr["});"];
  ];

Import[FileNameJoin[{Environment["GENERATO"], "codes/CarpetX.wl"}]];
