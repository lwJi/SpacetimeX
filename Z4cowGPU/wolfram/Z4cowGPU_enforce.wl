(* ::Package:: *)

(* Z4cowGPU_enforce.wl *)

(* (c) Liwei Ji, 07/2024 *)

Needs["xAct`xCoba`", FileNameJoin[{Environment["GENERATO"], "src/Generato.wl"
  }]]

SetPVerbose[False];

SetPrintDate[False];

SetGridPointIndex["[[ijk]]"];

(*SetUseLetterForTensorComponet[True];*)

SetTempVariableType["auto"];

DefManifold[M3, 3, IndexRange[a, z]];

DefChart[cart, M3, {1, 2, 3}, {X[], Y[], Z[]}, ChartColor -> Blue];

(* Derivatives *)

(* Define Variables *)

<<wl/ADM_vars.wl

<<wl/Z4c_vars.wl

<<wl/Enforce_rhs.wl

Module[{Mat},
  Mat = Table[gamtold[{ii, -cart}, {jj, -cart}] // ToValues, {ii, 1, 3}, {jj, 1, 3}];
  SetEQNDelayed[invdetgamtold[], 1 / Det[Mat] // Simplify];
];

Module[{Mat, invMat},
  Mat = Table[gamt[{ii, -cart}, {jj, -cart}] // ToValues, {ii, 1, 3}, {jj, 1, 3}];
  invMat = Inverse[Mat] /. {1 / Det[Mat] -> 1}; (* since we enforced that det(gamt) = 1 *)
  (* SetEQNDelayed[invdetgamt[], 1 / Det[Mat] // Simplify]; *)
  SetEQNDelayed[invgamt[i_, j_], invMat[[i[[1]], j[[1]]]] // Simplify]
];

SetOutputFile[FileNameJoin[{Directory[], "Z4cowGPU_enforce.hxx"}]];

SetMainPrint[
  (* initail grid function names *)
  PrintInitializations[{Mode -> "MainOut"}, Extract[EvolVarlist, {{1}, {2}, {4}, {-2}}]];
  pr[];

  (* Loops *)
  pr["noinline([&]() __attribute__((__flatten__, __hot__)) {"];
  pr["  grid.loop_int_device<0, 0, 0>("];
  pr["    grid.nghostzones, [=] ARITH_DEVICE(const PointDesc &p) ARITH_INLINE {"];
  pr[];

  pr["const int ijk = layout2.linear(p.i, p.j, p.k);"];
  pr[];

  PrintEquations[{Mode -> "Temp"}, Drop[EnforceVarlist, -3]];
  pr[];

  pr["W[ijk] = fmax(cWfloor, Wold);"];
  pr["alpha[ijk] = fmax(calphafloor, alphaold);"];
  pr[];

  PrintEquations[{Mode -> "Temp"}, Extract[EnforceVarlist, {{-2}}]];
  pr[];

  pr["const auto Wfac = cbrt(sqrt(invdetgamtold));"];
  pr[];

  PrintEquations[{Mode -> "Main"}, Extract[EvolVarlist, {{2}}]];
  pr[];

  PrintEquations[{Mode -> "Main"}, Extract[IntermediateVarlist, {{2}}]];
  pr[];

  PrintEquations[{Mode -> "Temp"}, Extract[EnforceVarlist, {{-3}}]];
  pr[];

  PrintEquations[{Mode -> "Main"}, Extract[EvolVarlist, {{4}}]];
  pr[];

  pr["  });"];
  pr["});"];
];

Import[FileNameJoin[{Environment["GENERATO"], "codes/CarpetXGPU.wl"}]];
