(* ::Package:: *)

(* derivsinline.wl *)

(* (c) Liwei Ji, 07/2024 *)

Needs["xAct`xCoba`", FileNameJoin[{Environment["GENERATO"], "src/Generato.wl"
  }]]

SetPVerbose[False];

SetPrintDate[False];

SetGridPointIndex["[[ijk]]"];

SetTempVariableType["auto"];

DefManifold[M3, 3, IndexRange[a, z]];

DefChart[cart, M3, {1, 2, 3}, {X[], Y[], Z[]}, ChartColor -> Blue];

(* Derivatives *)

(* Define Variables *)

SetOutputFile[FileNameJoin[{Directory[], "derivsinline.hxx"}]];

SetMainPrint[
  pr["template <int D>"];
  pr["CCTK_DEVICE CCTK_HOST CCTK_ATTRIBUTE_ALWAYS_INLINE inline CCTK_REAL"];
  pr["fd_1st(const GF3D2<const CCTK_REAL> &gf, const PointDesc &p) {"];
  pr["  return"];
  PrintFDExpression[4, 1];
  pr["};"];
  pr[];

  pr["template <int D1, int D2>"];
  pr["CCTK_DEVICE CCTK_HOST CCTK_ATTRIBUTE_ALWAYS_INLINE inline CCTK_REAL"];
  pr["fd_2nd(const GF3D2<const CCTK_REAL> &gf, const PointDesc &p) {"];
  pr["  if constexpr (D1 == D2) {"];
  pr["  constexpr int D = D1;"];
  pr["    return"];
  PrintFDExpression[4, 2];
  pr["  } else {"];
  pr["    return"];
  PrintFDExpressionMix2nd[4];
  pr["  }"];
  pr["};"];
];

Import[FileNameJoin[{Environment["GENERATO"], "codes/CarpetXGPU.wl"}]];
