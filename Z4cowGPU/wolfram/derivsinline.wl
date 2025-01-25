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
  pr["#include <loop_device.hxx>"];
  pr[];

  pr["namespace Z4cowGPU {"];
  pr["using namespace Loop;"];
  pr[];

  pr["template <typename T>"];
  pr["CCTK_DEVICE CCTK_HOST CCTK_ATTRIBUTE_ALWAYS_INLINE inline T Power(T x, int y) {"];
  pr["  return (y == 2) ? Arith::pow2(x) : Arith::pown(x, y);"];
  pr["}"];
  pr[];


  pr["template <int DIR, typename T>"];
  pr["CCTK_DEVICE CCTK_HOST CCTK_ATTRIBUTE_ALWAYS_INLINE inline T"];
  pr["fd_1st(const GF3D2<const T> &gf, const PointDesc &p) {"];
  pr["  constexpr int D = DIR - 1;"];
  pr["  return"];
  PrintFDExpression[4, 1, "D"];
  pr["};"];
  pr[];

  pr["template <int DIR1, int DIR2, typename T>"];
  pr["CCTK_DEVICE CCTK_HOST CCTK_ATTRIBUTE_ALWAYS_INLINE inline T"];
  pr["fd_2nd(const GF3D2<const T> &gf, const PointDesc &p) {"];
  pr["  constexpr int D1 = DIR1 - 1;"];
  pr["  constexpr int D2 = DIR2 - 1;"];
  pr["  if constexpr (D1 == D2) {"];
  pr["    return"];
  PrintFDExpression[4, 2, "D1"];
  pr["  } else {"];
  pr["    return"];
  PrintFDExpressionMix2nd[4, "D1", "D2"];
  pr["  }"];
  pr["};"];
  pr[];

  pr["} // namespace Z4cowGPU"];
];

Import[FileNameJoin[{Environment["GENERATO"], "codes/CarpetXGPU.wl"}]];
