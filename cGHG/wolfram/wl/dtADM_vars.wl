(* ::Package:: *)

(* dtADM_vars.wl *)

(* (c) Liwei Ji, 09/2024 *)

(**************************)

(* Intermediate Variables *)

(**************************)

GaugePunctureTempVarlist = TempTensors[
  {cbrtdetgamma[], PrintAs -> "\!\(\*SuperscriptBox[\(\[Gamma]\), \(1/3\)]\)"},
  {trGam3d    [i], PrintAs -> "\[CapitalGamma]3"}
];

(************)

(* Constant *)

(************)
DefConstantSymbol[ceta, PrintAs -> "\[Eta]"];
DefConstantSymbol[cnu, PrintAs -> "\[Nu]"];
