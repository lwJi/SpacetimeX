(* ::Package:: *)

(* ADM_vars.wl *)

(* (c) Liwei Ji, 01/2024 *)

(***********************)

(* Evolution Variables *)

(***********************)

ADMEvolVarlist = GridTensors[
  {ADMalpha      [], PrintAs -> "\[Alpha]"},
  {ADMbeta      [i], PrintAs -> "\[Beta]"},
  {ADMgamma[-i, -j], Symmetric[{-i, -j}], PrintAs -> "\[Gamma]"},
  {ADMexK  [-i, -j], Symmetric[{-i, -j}], PrintAs -> "K"}
];

ADMdtEvolVarlist = GridTensors[
  {ADMdtalpha      [], PrintAs -> "\!\(\*SubscriptBox[\(\[PartialD]\), \(t\)]\)\[Alpha]"},
  {ADMdtbeta      [i], PrintAs -> "\!\(\*SubscriptBox[\(\[PartialD]\), \(t\)]\)\[Beta]"},
  {ADMdtgamma[-i, -j], Symmetric[{-i, -j}], PrintAs -> "\!\(\*SubscriptBox[\(\[PartialD]\), \(t\)]\)\[Gamma]"}
];

(*************************)

(* Other Input Variables *)

(*************************)

ADMdEvolVarlist = GridTensors[
  {ADMdalpha        [-k], PrintAs -> "\[PartialD]\[Alpha]"},
  {ADMdbeta      [-k, i], PrintAs -> "\[PartialD]\[Beta]"},
  {ADMdgamma[-k, -i, -j], Symmetric[{-i, -j}], PrintAs -> "\[PartialD]\[Gamma]"}
];

(**************************)

(* Intermediate Variables *)

(**************************)

ADMTempVarlist = TempTensors[
  {invdetgamma   [], PrintAs->"1/\[Gamma]"},
  {invgamma  [i, j], Symmetric[{i, j}], PrintAs->"\[Gamma]"},
  {trexK         [], PrintAs -> "K"},
  {nvec         [a], PrintAs -> "n"},
  {dg4 [-c, -a, -b], Symmetric[{-a, -b}], PrintAs -> "\[PartialD]g"},
  {invg4     [a, b], Symmetric[{a, b}], PrintAs -> "g"},
  {Gam4[-c, -a, -b], Symmetric[{-a, -b}], PrintAs -> "\[CapitalGamma]"},
  {trGam4      [-c], PrintAs -> "\[CapitalGamma]"}
];
