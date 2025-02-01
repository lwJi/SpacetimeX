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
  pr["#include <array>"];
  pr["#include <cmath>"];
  pr[];

  pr["namespace Z4cowGPU {"];
  pr[];

  pr["template <typename T>"];
  pr["CCTK_DEVICE CCTK_HOST CCTK_ATTRIBUTE_ALWAYS_INLINE inline T Power(T x, int y) {"];
  pr["  return (y == 2) ? Arith::pow2(x) : Arith::pown(x, y);"];
  pr["}"];
  pr[];

  pr["template <int DI, typename T>"];
  pr["CCTK_DEVICE CCTK_HOST CCTK_ATTRIBUTE_ALWAYS_INLINE inline T"];
  pr["fd_1st(const std::array<int, 3> &Dijk, const T *gf, int i, int j, int k, const std::array<T, 3> &invDx) {"];
  PrintIndexes3D[4, 1, "DI"];
  pr["  return"];
  PrintFDExpression[4, 1, "invDx"];
  pr["}"];
  pr[];

  pr["template <int DI, int DJ, typename T>"];
  pr["CCTK_DEVICE CCTK_HOST CCTK_ATTRIBUTE_ALWAYS_INLINE inline T"];
  pr["fd_2nd(const std::array<int, 3> &Dijk, const T *gf, int i, int j, int k, const std::array<T, 3> &invDx) {"];
  pr["  if constexpr (DI == DJ) {"];
  PrintIndexes3D[4, 2, "DI"];
  pr["    return"];
  PrintFDExpression[4, 2, "invDx"];
  pr["  } else {"];
  PrintIndexes3DMix2nd[4, "DI", "DJ"];
  pr["    return"];
  PrintFDExpressionMix2nd[4, "invDx"];
  pr["  }"];
  pr["}"];
  pr[];

  pr["} // namespace Z4cowGPU"];
];

Import[FileNameJoin[{Environment["GENERATO"], "codes/CarpetXGPU.wl"}]];
