(* ::Package:: *)

(* cGH_vars.wl *)

(* (c) Liwei Ji, 01/2024 *)

cGHEvolVarlist = DefTensors[
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
  {hH          [-k], PrintAs -> "\!\(\*OverscriptBox[\(H\), \(^\)]\)"}
];

cGHdtEvolVarlist = DefTensors[
  {dthg      [-i, -j], Symmetric[{-i, -j}], PrintAs -> "\!\(\*SubscriptBox[\(\[PartialD]\), \(n\)]\)\!\(\*OverscriptBox[\(g\), \(^\)]\)"},
  {dthPi     [-i, -j], Symmetric[{-i, -j}], PrintAs -> "\!\(\*SubscriptBox[\(\[PartialD]\), \(n\)]\)\!\(\*OverscriptBox[\(\[CapitalPi]\), \(^\)]\)"},
  {dthPhi[-k, -i, -j], Symmetric[{-i, -j}], PrintAs -> "\!\(\*SubscriptBox[\(\[PartialD]\), \(n\)]\)\!\(\*OverscriptBox[\(\[CapitalPhi]\), \(^\)]\)"},
  {dthgn          [i], PrintAs -> "\!\(\*SubscriptBox[\(\[PartialD]\), \(n\)]\)\!\(\*SubscriptBox[OverscriptBox[\(g\), \(^\)], \(n\)]\)"},
  {dthPin         [i], PrintAs -> "\!\(\*SubscriptBox[\(\[PartialD]\), \(n\)]\)\!\(\*SubscriptBox[OverscriptBox[\(\[CapitalPi]\), \(^\)], \(n\)]\)"},
  {dthPhin    [-k, i], PrintAs -> "\!\(\*SubscriptBox[\(\[PartialD]\), \(n\)]\)\!\(\*SubscriptBox[OverscriptBox[\(\[CapitalPhi]\), \(^\)], \(n\)]\)"},
  {dthgnn          [], PrintAs -> "\!\(\*SubscriptBox[\(\[PartialD]\), \(n\)]\)\!\(\*SubscriptBox[OverscriptBox[\(g\), \(^\)], \(nn\)]\)"},
  {dthPinn         [], PrintAs -> "\!\(\*SubscriptBox[\(\[PartialD]\), \(n\)]\)\!\(\*SubscriptBox[OverscriptBox[\(\[CapitalPi]\), \(^\)], \(nn\)]\)"},
  {dthPhinn      [-k], PrintAs -> "\!\(\*SubscriptBox[\(\[PartialD]\), \(n\)]\)\!\(\*SubscriptBox[OverscriptBox[\(\[CapitalPhi]\), \(^\)], \(nn\)]\)"},
  {dtW             [], PrintAs -> "\!\(\*SubscriptBox[\(\[PartialD]\), \(n\)]\)W"},
  {dtWPi           [], PrintAs -> "\!\(\*SubscriptBox[\(\[PartialD]\), \(n\)]\)\!\(\*StyleBox[\"\[CapitalPi]\",\nFontSlant->\"Italic\"]\)"},
  {dtWPhi        [-k], PrintAs -> "\!\(\*SubscriptBox[\(\[PartialD]\), \(n\)]\)\!\(\*StyleBox[\"\[CapitalPhi]\",\nFontSlant->\"Italic\"]\)"},
  {dthHn           [], PrintAs -> "\!\(\*SubscriptBox[\(\[PartialD]\), \(n\)]\)\!\(\*SubscriptBox[OverscriptBox[\(H\), \(^\)], \(n\)]\)"},
  {dthH          [-k], PrintAs -> "\!\(\*SubscriptBox[\(\[PartialD]\), \(n\)]\)\!\(\*OverscriptBox[\(H\), \(^\)]\)"}
];

cGHdEvolVarlist = DefTensors[
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
  {dhH          [-k, -i], PrintAs -> "\[PartialD]\!\(\*OverscriptBox[\(H\), \(^\)]\)"}
];

cGHTempVarlist = DefTensors[
  {alpha[], PrintAs -> "\[Alpha]"},
  {beta[i], PrintAs -> "\[Beta]"},
  {invhg[i, j], Symmetric[{i, j}], PrintAs -> "\!\(\*OverscriptBox[\(g\), \(^\)]\)"},
  {hPinD     [-i], PrintAs -> "\!\(\*SubscriptBox[OverscriptBox[\(\[CapitalPi]\), \(^\)], \(n\)]\)"},
  {hPhinD[-k, -i], PrintAs -> "\!\(\*SubscriptBox[OverscriptBox[\(\[CapitalPhi]\), \(^\)], \(n\)]\)"},
  {hGam[-k, -i, -j], Symmetric[{-i, -j}], PrintAs -> "\!\(\*OverscriptBox[\(\[CapitalGamma]\), \(^\)]\)"},
  {hGamn2  [-k, -i], PrintAs -> "\!\(\*SuperscriptBox[SubscriptBox[OverscriptBox[\(\[CapitalGamma]\), \(^\)], \(n\)], \((2)\)]\)"},
  {hGamn   [-i, -j], Symmetric[{-i, -j}], PrintAs -> "\!\(\*SubscriptBox[OverscriptBox[\(\[CapitalGamma]\), \(^\)], \(n\)]\)"},
  {trPi[], PrintAs -> "\!\(\*SuperscriptBox[OverscriptBox[\(\[CapitalPi]\), \(^\)], \(tr\)]\)"}
];
