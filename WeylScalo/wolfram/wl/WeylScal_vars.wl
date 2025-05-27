(* ::Package:: *)

(* WeylScal_vars.wl *)

(* (c) Liwei Ji, 05/2025 *)

(*******************)

(* Input Variables *)

(*******************)

ADMVarlist =
  GridTensors[
    (*{gam[-i, -j], Symmetric[{-i, -j}], PrintAs -> "\[Gamma]"},*)
    {exK[-i, -j], Symmetric[{-i, -j}], PrintAs -> "K"},
    {alpha[], PrintAs -> "\[Alpha]"},
    {beta[i], PrintAs -> "\[Beta]"}
  ];

dADMVarlist =
  GridTensors[
    {dgam[-k, -i, -j], Symmetric[{-i, -j}], PrintAs -> "\[PartialD]\[Gamma]"},
    {dexK[-k, -i, -j], Symmetric[{-i, -j}], PrintAs -> "\[PartialD]K"}
  ];

ddADMVarlist =
  GridTensors[
    {ddgam[-k, -l, -i, -j], GenSet[Cycles[{1, 2}], Cycles[{3, 4}]], PrintAs -> "\[PartialD]\[PartialD]\[Gamma]"}
  ];

(**************************)

(* Intermediate Variables *)

(**************************)

IntermediateVarlist =
  TempTensors[
    {detinvgam[], PrintAs -> "1/\[Gamma]"},
    {sqrtdetgam[], PrintAs -> "\!\(\*SqrtBox[\(\[Gamma]\)]\)"},
    {invgam[i, j], Symmetric[{i, j}], PrintAs -> "\[Gamma]"},
    {GamDDD [-k, -i, -j], Symmetric[{-i, -j}], PrintAs -> "\[CapitalGamma]"},
    {Gam     [k, -i, -j], Symmetric[{-i, -j}], PrintAs -> "\[CapitalGamma]"},
    {tr1dGam[-i, -j], Symmetric[{-i, -j}], PrintAs -> "\[PartialD]\!\(\*SuperscriptBox[\(\[CapitalGamma]\), \((tr1)\)]\)"},
    {tr2dGam[-i, -j], Symmetric[{-i, -j}], PrintAs -> "\[PartialD]\!\(\*SuperscriptBox[\(\[CapitalGamma]\), \((tr2)\)]\)"},
    {Ricc[-i, -j], Symmetric[{-i, -j}], PrintAs -> "R"},
    {trexK[], PrintAs -> "K"}
  ];

GaussCodazziVarlist =
  TempTensors[
    {perpRn[-j, -k, -l], Antisymmetric[{-k, -l}], PrintAs -> "\[Perpendicular]Rn"},
    {perpRnn[-i, -j], Symmetric[{-i, -j}], PrintAs -> "\[Perpendicular]Rnn"}
  ];

TetradVarlist = 
  TempTensors[
    {uvec[i], PrintAs -> "u"},
    {vvec[i], PrintAs -> "v"},
    {wvec[i], PrintAs -> "w"},
    {inneruu[], PrintAs -> "u\[CenterDot]u"},
    {Uvec[i], PrintAs -> "U"},
    {innerUv[], PrintAs -> "U\[CenterDot]v"},
    {Vtmp[i]},
    {innerVV[], PrintAs -> "V\[CenterDot]V"},
    {Vvec[i], PrintAs -> "V"},
    {innerUw[], PrintAs -> "U\[CenterDot]w"},
    {innerVw[], PrintAs -> "V\[CenterDot]w"},
    {Wtmp[i]},
    {innerWW[], PrintAs -> "W\[CenterDot]W"},
    {Wvec[i], PrintAs -> "W"},
    (* tetrad vectors *)
    {nvec[i], PrintAs -> "n"},
    {lvec[i], PrintAs -> "l"},
    {mbmbReal[i, j], Symmetric[{i, j}], PrintAs -> "r\!\(\*OverscriptBox[\(m\), \(_\)]\)\!\(\*OverscriptBox[\(m\), \(_\)]\)"},
    {mbmbImag[i, j], Symmetric[{i, j}], PrintAs -> "i\!\(\*OverscriptBox[\(m\), \(_\)]\)\!\(\*OverscriptBox[\(m\), \(_\)]\)"}
  ];

(************)

(* Constant *)

(************)

DefConstantSymbol[oosqrt2, PrintAs -> "1/\!\(\*SqrtBox[\(2\)]\)"];
