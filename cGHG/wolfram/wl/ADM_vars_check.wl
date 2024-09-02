(* ::Package:: *)

(* ADM_vars.wl *)

(* (c) Liwei Ji, 01/2024 *)

(***********************)

(* Evolution Variables *)

(***********************)

ADMEvolVarlist = DefTensors[
  {ADMalpha      [], PrintAs -> "\[Alpha]"},
  {ADMbeta      [i], PrintAs -> "\[Beta]"},
  {ADMgamma[-i, -j], Symmetric[{-i, -j}], PrintAs -> "\[Gamma]"},
  {ADMexK  [-i, -j], Symmetric[{-i, -j}], PrintAs -> "K"},
  {ADMdtalpha      [], PrintAs -> "\!\(\*SubscriptBox[\(\[PartialD]\), \(t\)]\)\[Alpha]"},
  {ADMdtbeta      [i], PrintAs -> "\!\(\*SubscriptBox[\(\[PartialD]\), \(t\)]\)\[Beta]"},
  {ADMdtgamma[-i, -j], Symmetric[{-i, -j}], PrintAs -> "\!\(\*SubscriptBox[\(\[PartialD]\), \(t\)]\)\[Gamma]"}
];

(**************************)

(* Intermediate Variables *)

(**************************)

ADMTempVarlist = DefTensors[
  {nvec        [a], PrintAs -> "n"},
  {invg4    [a, b], Symmetric[{a, b}], PrintAs -> "g"},
  {dg4[-c, -a, -b], Symmetric[{-a, -b}], PrintAs -> "\[PartialD]g"}
];
