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
  {alpha[], PrintAs -> "\[Alpha]"},
  {beta[i], PrintAs -> "\[Beta]"},
  {invhg[i, j], Symmetric[{i, j}], PrintAs -> "\!\(\*OverscriptBox[\(g\), \(^\)]\)"},
  {invgam[i, j], Symmetric[{i, j}], PrintAs -> "\[Gamma]"},
  {hPinD     [-i], PrintAs -> "\!\(\*SubscriptBox[OverscriptBox[\(\[CapitalPi]\), \(^\)], \(n\)]\)"},
  {hPhinD[-k, -i], PrintAs -> "\!\(\*SubscriptBox[OverscriptBox[\(\[CapitalPhi]\), \(^\)], \(n\)]\)"},
  {hGam[-k, -i, -j], Symmetric[{-i, -j}], PrintAs -> "\!\(\*OverscriptBox[\(\[CapitalGamma]\), \(^\)]\)"},
  {hGamn2  [-k, -i], PrintAs -> "\!\(\*SuperscriptBox[SubscriptBox[OverscriptBox[\(\[CapitalGamma]\), \(^\)], \(n\)], \((2)\)]\)"},
  {hGamn   [-i, -j], Symmetric[{-i, -j}], PrintAs -> "\!\(\*SubscriptBox[OverscriptBox[\(\[CapitalGamma]\), \(^\)], \(n\)]\)"},
  {trhGamn [], PrintAs -> "\!\(\*SubscriptBox[OverscriptBox[\(\[CapitalGamma]\), \(^\)], \(n\)]\)"},
  {trhGam[-k], PrintAs -> "\!\(\*OverscriptBox[\(\[CapitalGamma]\), \(^\)]\)"},
  {trPi[], PrintAs -> "\!\(\*SuperscriptBox[OverscriptBox[\(\[CapitalPi]\), \(^\)], \(tr\)]\)"},
  {dnhHn [], PrintAs -> "\!\(\*SubscriptBox[\(\[PartialD]\), \(n\)]\)\!\(\*SubscriptBox[OverscriptBox[\(H\), \(^\)], \(n\)]\)"},
  {dnhH[-k], PrintAs -> "\!\(\*SubscriptBox[\(\[PartialD]\), \(n\)]\)\!\(\*OverscriptBox[\(H\), \(^\)]\)"}
];
