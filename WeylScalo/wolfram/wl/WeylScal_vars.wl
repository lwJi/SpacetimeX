(* ::Package:: *)

(* WeylScal_vars.wl *)

(* (c) Liwei Ji, 05/2025 *)

(**********************)

(* WeylScal Variables *)

(**********************)

ADMVarlist =
  GridTensors[
    {gam[-i, -j], Symmetric[{-i, -j}], PrintAs -> "\[Gamma]"},
    {exK[-i, -j], Symmetric[{-i, -j}], PrintAs -> "K"},
    {alpha[], PrintAs -> "\[Alpha]"},
    {beta[i], PrintAs -> "\[Beta]"}
  ];

TetradVarlist = 
  TempTensors[
    {uvec[i]},
    {vvec[i]},
    {wvec[i]},
    {Uvec[i], PrintAs -> "U"},
    {innerUv[]},
    {innerUw[]},
    {Vvec[i], PrintAs -> "V"},
    {innerVw[]},
    {Wvec[i], PrintAs -> "W"}
  ];
