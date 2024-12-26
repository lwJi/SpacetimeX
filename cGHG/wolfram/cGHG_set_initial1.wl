(* ::Package:: *)

(* cGHG_set_initial1.wl *)

(* (c) Liwei Ji, 09/2024 *)

Needs["xAct`xCoba`", FileNameJoin[{Environment["GENERATO"], "src/Generato.wl"}]]

SetPVerbose[False];

SetPrintDate[False];

SetGridPointIndex[""];

SetTempVariableType["vreal"];

DefManifold[M4, 4, IndexRange[a, z]];

DefChart[cart, M4, {0, 1, 2, 3}, {T[], X[], Y[], Z[]}, ChartColor -> Blue];

(* Define Variables *)

<<wl/cGHG_vars.wl

<<wl/ADM_vars.wl

<<wl/cGHGinADM_rhs.wl

Module[{Mat, invMat},
  Mat = Table[ADMgamma[{ii, -cart}, {jj, -cart}] // ToValues, {ii, 1, 3}, {jj, 1, 3}];
  invMat = Inverse[Mat] /. {1 / Det[Mat] -> invdetgamma[]//ToValues};
  SetEQNDelayed[invdetgamma[], 1 / Det[Mat] // Simplify];
  SetEQNDelayed[invgamma[i_, j_], invMat[[i[[1]], j[[1]]]] // Simplify]
];

SetOutputFile[FileNameJoin[{Directory[], "cGHG_set_initial1.hxx"}]];

$MainPrint[] :=
  Module[{},
    PrintInitializations[{Mode -> "MainOut"}, cGHGEvolVarlist[[1;;-3]]];
    pr[];

    pr["grid.loop_int_device<0, 0, 0, vsize>("];
    pr["  grid.nghostzones, [=] ARITH_DEVICE(const PointDesc &p) ARITH_INLINE {"];
    pr["  const vbool mask = mask_for_loop_tail<vbool>(p.i, p.imax);"];
    pr["  const GF3D2index index2(layout2, p.I);"];
    pr["  const GF3D5index index5(layout5, p.I);"];
    pr[];

    PrintListInitializations[ADMdtEvolVarlist[[1;;2]], "tl_", "index5"];
    PrintListInitializations[ADMEvolVarlist, "tl_", "index5"];
    PrintListInitializations[ADMdEvolVarlist, "tl_", "index5"];
    pr[];

    PrintInitializations[{Mode -> "MainIn"}, ADMdtEvolVarlist[[1;;2]]];
    PrintInitializations[{Mode -> "MainIn", StorageType -> "Tile"},
                         ADMEvolVarlist];
    PrintInitializations[{Mode -> "MainIn", StorageType -> "Tile", TensorType -> "Vect"},
                         ADMdEvolVarlist];
    pr[];
    PrintEquations[{Mode -> "Temp"}, ADMdtEvolVarlist[[-1;;-1]]];
    pr[];
    PrintEquations[{Mode -> "Temp"}, Drop[ADMTempVarlist, -3]];
    pr[];
    pr["vreal tempW = cbrt(sqrt(invdetgamma));"];
    pr[];
    PrintEquations[{Mode -> "Temp"}, Take[ADMTempVarlist, -2]];
    pr[];
    PrintEquations[{Mode -> "Main"}, cGHGEvolVarlist[[1;;-3]]];
    pr[];
    pr["});"];
  ];

Import[FileNameJoin[{Environment["GENERATO"], "codes/CarpetX.wl"}]];
