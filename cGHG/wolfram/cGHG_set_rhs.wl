(* ::Package:: *)

(* cGHG_set_rhs.wl *)

(* (c) Liwei Ji, 09/2024 *)

Needs["xAct`xCoba`", FileNameJoin[{Environment["GENERATO"], "src/Generato.wl"}]];

SetPVerbose[False];

SetPrintDate[False];

SetGridPointIndex[""];

SetTempVariableType["vreal"];

DefManifold[M3, 3, IndexRange[a, z]];

DefChart[cart, M3, {1, 2, 3}, {X[], Y[], Z[]}, ChartColor -> Blue];

(* Define Variables *)

<<wl/cGHG_vars.wl

<<wl/cGHG_rhs.wl

Module[{Mat, invMat},
  Mat = Table[hg[{ii, -cart}, {jj, -cart}] // ToValues, {ii, 1, 3}, {jj, 1, 3}];
  invMat = Inverse[Mat] /. {1 / Det[Mat] -> 1}; (* since we enforced that det(hg) = 1 *)
  SetEQNDelayed[invhg[i_, j_], invMat[[i[[1]], j[[1]]]] // Simplify]
];

SetOutputFile[FileNameJoin[{Directory[], "cGHG_set_rhs.hxx"}]];

$MainPrint[] :=
  Module[{},
    PrintInitializations[{Mode -> "MainOut"}, cGHGdtEvolVarlist];
    pr[];

    pr["noinline([&]() __attribute__((__flatten__, __hot__)) {"];
    pr["  grid.loop_int_device<0, 0, 0, vsize>("];
    pr["    grid.nghostzones, [=] ARITH_DEVICE(const PointDesc &p) ARITH_INLINE {"];
    pr["    const vbool mask = mask_for_loop_tail<vbool>(p.i, p.imax);"];
    pr["    const GF3D2index index2(layout2, p.I);"];
    pr["    const GF3D5index index5(layout5, p.I);"];
    pr[];

    pr["const vreal x0 = p.x + Arith::iota<vreal>() * p.dx;"]
    pr["const vreal ceta = calceta(x0, p.y, p.z);"];
    pr[];

    PrintListInitializations[cGHGEvolVarlist, "tl_", "index5"];
    PrintListInitializations[cGHGdEvolVarlist, "tl_", "index5"];
    pr[];

    PrintInitializations[{Mode -> "MainIn", StorageType -> "Tile"},
                         cGHGEvolVarlist];
    PrintInitializations[{Mode -> "MainIn", StorageType -> "Tile", TensorType -> "Vect"},
                         cGHGdEvolVarlist];
    pr[];
    PrintEquations[{Mode -> "Temp"}, cGHGTempVarlist];
    pr[];
    PrintEquations[{Mode -> "Main"}, cGHGdtEvolVarlist];
    pr[];
    pr["  });"];
    pr["});"];
  ];

Import[FileNameJoin[{Environment["GENERATO"], "codes/CarpetX.wl"}]];
