(* ::Package:: *)

(* cGHG_vars.wl *)

(* (c) Liwei Ji, 01/2024 *)

(***********************)

(* Evolution Variables *)

(***********************)

cGHGEvolVarlist = DefTensors[
  {hg      [-i, -j], Symmetric[{-i, -j}], PrintAs->  "\!\(\*OverscriptBox[\(g\), \(^\)]\)"},
  {hPi     [-i, -j], Symmetric[{-i, -j}], PrintAs -> "\!\(\*OverscriptBox[\(\[CapitalPi]\), \(^\)]\)"},
  {hPhi[-k, -i, -j], Symmetric[{-i, -j}], PrintAs -> "\!\(\*OverscriptBox[\(\[CapitalPhi]\), \(^\)]\)"},
  {hgn          [i], PrintAs -> "\!\(\*SubscriptBox[OverscriptBox[\(g\), \(^\)], \(n\)]\)"},
  {hPin         [i], PrintAs -> "\!\(\*SubscriptBox[OverscriptBox[\(\[CapitalPi]\), \(^\)], \(n\)]\)"},
  {hPhin    [-k, i], PrintAs -> "\!\(\*SubscriptBox[OverscriptBox[\(\[CapitalPhi]\), \(^\)], \(n\)]\)"},
  {hgnn          [], PrintAs -> "\!\(\*SubscriptBox[OverscriptBox[\(g\), \(^\)], \(nn\)]\)"},
  {hPinn         [], PrintAs -> "\!\(\*SubscriptBox[OverscriptBox[\(\[CapitalPi]\), \(^\)], \(nn\)]\)"},
  {hPhinn      [-k], PrintAs -> "\!\(\*SubscriptBox[OverscriptBox[\(\[CapitalPhi]\), \(^\)], \(nn\)]\)"},
  {W             [], PrintAs -> "W"},
  {WPi           [], PrintAs -> "\!\(\*StyleBox[\"\[CapitalPi]\",\nFontSlant->\"Italic\"]\)"},
  {WPhi        [-k], PrintAs -> "\!\(\*StyleBox[\"\[CapitalPhi]\",\nFontSlant->\"Italic\"]\)"},
  {hHn           [], PrintAs -> "\!\(\*SubscriptBox[OverscriptBox[\(H\), \(^\)], \(n\)]\)"},
  {hH          [-k], PrintAs -> "\!\(\*OverscriptBox[\(H\), \(^\)]\)"},
  {hthetan       [], PrintAs -> "\!\(\*SubscriptBox[OverscriptBox[\(\[Theta]\), \(^\)], \(n\)]\)"},
  {htheta      [-k], PrintAs -> "\!\(\*OverscriptBox[\(\[Theta]\), \(^\)]\)"}
];

cGHGdtEvolVarlist = DefTensors[
  {dthg      [-i, -j], Symmetric[{-i, -j}], PrintAs -> "\!\(\*SubscriptBox[\(\[PartialD]\), \(t\)]\)\!\(\*OverscriptBox[\(g\), \(^\)]\)"},
  {dthPi     [-i, -j], Symmetric[{-i, -j}], PrintAs -> "\!\(\*SubscriptBox[\(\[PartialD]\), \(t\)]\)\!\(\*OverscriptBox[\(\[CapitalPi]\), \(^\)]\)"},
  {dthPhi[-k, -i, -j], Symmetric[{-i, -j}], PrintAs -> "\!\(\*SubscriptBox[\(\[PartialD]\), \(t\)]\)\!\(\*OverscriptBox[\(\[CapitalPhi]\), \(^\)]\)"},
  {dthgn          [i], PrintAs -> "\!\(\*SubscriptBox[\(\[PartialD]\), \(t\)]\)\!\(\*SubscriptBox[OverscriptBox[\(g\), \(^\)], \(n\)]\)"},
  {dthPin         [i], PrintAs -> "\!\(\*SubscriptBox[\(\[PartialD]\), \(t\)]\)\!\(\*SubscriptBox[OverscriptBox[\(\[CapitalPi]\), \(^\)], \(n\)]\)"},
  {dthPhin    [-k, i], PrintAs -> "\!\(\*SubscriptBox[\(\[PartialD]\), \(t\)]\)\!\(\*SubscriptBox[OverscriptBox[\(\[CapitalPhi]\), \(^\)], \(n\)]\)"},
  {dthgnn          [], PrintAs -> "\!\(\*SubscriptBox[\(\[PartialD]\), \(t\)]\)\!\(\*SubscriptBox[OverscriptBox[\(g\), \(^\)], \(nn\)]\)"},
  {dthPinn         [], PrintAs -> "\!\(\*SubscriptBox[\(\[PartialD]\), \(t\)]\)\!\(\*SubscriptBox[OverscriptBox[\(\[CapitalPi]\), \(^\)], \(nn\)]\)"},
  {dthPhinn      [-k], PrintAs -> "\!\(\*SubscriptBox[\(\[PartialD]\), \(t\)]\)\!\(\*SubscriptBox[OverscriptBox[\(\[CapitalPhi]\), \(^\)], \(nn\)]\)"},
  {dtW             [], PrintAs -> "\!\(\*SubscriptBox[\(\[PartialD]\), \(t\)]\)W"},
  {dtWPi           [], PrintAs -> "\!\(\*SubscriptBox[\(\[PartialD]\), \(t\)]\)\!\(\*StyleBox[\"\[CapitalPi]\",\nFontSlant->\"Italic\"]\)"},
  {dtWPhi        [-k], PrintAs -> "\!\(\*SubscriptBox[\(\[PartialD]\), \(t\)]\)\!\(\*StyleBox[\"\[CapitalPhi]\",\nFontSlant->\"Italic\"]\)"},
  {dthHn           [], PrintAs -> "\!\(\*SubscriptBox[\(\[PartialD]\), \(t\)]\)\!\(\*SubscriptBox[OverscriptBox[\(H\), \(^\)], \(n\)]\)"},
  {dthH          [-k], PrintAs -> "\!\(\*SubscriptBox[\(\[PartialD]\), \(t\)]\)\!\(\*OverscriptBox[\(H\), \(^\)]\)"},
  {dththetan       [], PrintAs -> "\!\(\*SubscriptBox[\(\[PartialD]\), \(t\)]\)\!\(\*SubscriptBox[OverscriptBox[\(\[Theta]\), \(^\)], \(n\)]\)"},
  {dththeta      [-k], PrintAs -> "\!\(\*SubscriptBox[\(\[PartialD]\), \(t\)]\)\!\(\*OverscriptBox[\(\[Theta]\), \(^\)]\)"}
];

(*************************)

(* Other Input Variables *)

(*************************)

cGHGdEvolVarlist = DefTensors[
  {dhg      [-k, -i, -j], Symmetric[{-i, -j}], PrintAs -> "\[PartialD]\!\(\*OverscriptBox[\(g\), \(^\)]\)"},
  {dhPi     [-k, -i, -j], Symmetric[{-i, -j}], PrintAs -> "\[PartialD]\!\(\*OverscriptBox[\(\[CapitalPi]\), \(^\)]\)"},
  {dhPhi[-k, -l, -i, -j], Symmetric[{-i, -j}], PrintAs -> "\[PartialD]\!\(\*OverscriptBox[\(\[CapitalPhi]\), \(^\)]\)"},
  {dhgn          [-k, i], PrintAs -> "\[PartialD]\!\(\*SubscriptBox[OverscriptBox[\(g\), \(^\)], \(n\)]\)"},
  {dhPin         [-k, i], PrintAs -> "\[PartialD]\!\(\*SubscriptBox[OverscriptBox[\(\[CapitalPi]\), \(^\)], \(n\)]\)"},
  {dhPhin    [-k, -l, i], PrintAs -> "\[PartialD]\!\(\*SubscriptBox[OverscriptBox[\(\[CapitalPhi]\), \(^\)], \(n\)]\)"},
  {dhgnn            [-k], PrintAs -> "\[PartialD]\!\(\*SubscriptBox[OverscriptBox[\(g\), \(^\)], \(nn\)]\)"},
  {dhPinn           [-k], PrintAs -> "\[PartialD]\!\(\*SubscriptBox[OverscriptBox[\(\[CapitalPi]\), \(^\)], \(nn\)]\)"},
  {dhPhinn      [-k, -i], PrintAs -> "\[PartialD]\!\(\*SubscriptBox[OverscriptBox[\(\[CapitalPhi]\), \(^\)], \(nn\)]\)"},
  {dW               [-k], PrintAs -> "\[PartialD]W"},
  {dWPi             [-k], PrintAs -> "\[PartialD]\!\(\*StyleBox[\"\[CapitalPi]\",\nFontSlant->\"Italic\"]\)"},
  {dWPhi        [-k, -i], PrintAs -> "\[PartialD]\!\(\*StyleBox[\"\[CapitalPhi]\",\nFontSlant->\"Italic\"]\)"},
  {dhHn             [-k], PrintAs -> "\[PartialD]\!\(\*SubscriptBox[OverscriptBox[\(H\), \(^\)], \(n\)]\)"},
  {dhH          [-k, -i], PrintAs -> "\[PartialD]\!\(\*OverscriptBox[\(H\), \(^\)]\)"},
  {dhthetan         [-k], PrintAs -> "\[PartialD]\!\(\*SubscriptBox[OverscriptBox[\(\[Theta]\), \(^\)], \(n\)]\)"},
  {dhtheta      [-k, -i], PrintAs -> "\[PartialD]\!\(\*OverscriptBox[\(\[Theta]\), \(^\)]\)"}
];

(**************************)

(* Intermediate Variables *)

(**************************)

cGHGTempVarlist = DefTensors[
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
  {hGn[],  PrintAs -> "\!\(\*SubscriptBox[OverscriptBox[\(G\), \(^\)], \(n\)]\)"},
  {hG[-k], PrintAs -> "\!\(\*OverscriptBox[\(G\), \(^\)]\)"},
  {hFn[],  PrintAs -> "\!\(\*SubscriptBox[OverscriptBox[\(F\), \(^\)], \(n\)]\)"},
  {hF[-k], PrintAs -> "\!\(\*OverscriptBox[\(F\), \(^\)]\)"},
  {adnhHn [], PrintAs -> "\[Alpha]\!\(\*SubscriptBox[\(\[PartialD]\), \(n\)]\)\!\(\*SubscriptBox[OverscriptBox[\(H\), \(^\)], \(n\)]\)"},
  {adnhH[-k], PrintAs -> "\[Alpha]\!\(\*SubscriptBox[\(\[PartialD]\), \(n\)]\)\!\(\*OverscriptBox[\(H\), \(^\)]\)"}
];

(************)

(* Constant *)

(************)
DefConstantSymbol[cpi, PrintAs -> "\[Pi]"];
DefConstantSymbol[cgamma0, PrintAs -> "\!\(\*SubscriptBox[\(\[Gamma]\), \(0\)]\)"];
DefConstantSymbol[cgamma1, PrintAs -> "\!\(\*SubscriptBox[\(\[Gamma]\), \(1\)]\)"];
DefConstantSymbol[cgamma2, PrintAs -> "\!\(\*SubscriptBox[\(\[Gamma]\), \(2\)]\)"];
DefConstantSymbol[cmuL, PrintAs -> "\!\(\*SubscriptBox[\(\[Mu]\), \(L\)]\)"];
DefConstantSymbol[cmuS, PrintAs -> "\!\(\*SubscriptBox[\(\[Mu]\), \(S\)]\)"];
DefConstantSymbol[czetaL, PrintAs -> "\!\(\*SubscriptBox[\(\[Zeta]\), \(L\)]\)"];
DefConstantSymbol[czetaS, PrintAs -> "\!\(\*SubscriptBox[\(\[Zeta]\), \(S\)]\)"];
DefConstantSymbol[crhoL, PrintAs -> "\!\(\*SubscriptBox[\(\[Rho]\), \(L\)]\)"];
DefConstantSymbol[crhoS, PrintAs -> "\!\(\*SubscriptBox[\(\[Rho]\), \(S\)]\)"];
DefConstantSymbol[ceta, PrintAs -> "\[Eta]"];
DefConstantSymbol[cnu, PrintAs -> "\[Nu]"];
