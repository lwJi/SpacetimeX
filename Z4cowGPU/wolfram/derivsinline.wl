(* ::Package:: *)

(* derivsinline.wl *)

(* (c) Liwei Ji, 02/2025 *)

(******************)
(* Configurations *)
(******************)

Needs["xAct`xCoba`", FileNameJoin[{Environment["GENERATO"], "src/Generato.wl"}]]

SetPVerbose[False];

SetPrintDate[False];

SetGridPointIndex["[[ijk]]"];

(*SetUseLetterForTensorComponet[True];*)

SetTempVariableType["auto"];

DefManifold[M3, 3, IndexRange[a, z]];

DefChart[cart, M3, {1, 2, 3}, {X[], Y[], Z[]}, ChartColor -> Blue];


(******************)
(* Print to Files *)
(******************)

SetOutputFile[FileNameJoin[{Directory[], "derivsinline.hxx"}]];

SetMainPrint[
  pr["#include <loop_device.hxx>"];
  pr[];
  pr["#include <array>"];
  pr["#include <cmath>"];
  pr[];

  pr["namespace Z4cowGPU {"];
  pr["using namespace Loop;"];
  pr[];

  (********************)
  (* utility function *)
  (********************)

  pr["template <typename T>"];
  pr["CCTK_DEVICE CCTK_HOST CCTK_ATTRIBUTE_ALWAYS_INLINE inline T"];
  pr["Power(T x, int y) {"];
  pr["  return (y == 2) ? Arith::pow2(x) : Arith::pown(x, y);"];
  pr["}"];
  pr[];

  (****************************************)
  (* First-order Finite Difference Scheme *)
  (****************************************)

  Do[
    pr["template <int DI, typename T>"];
    pr["CCTK_DEVICE CCTK_HOST CCTK_ATTRIBUTE_ALWAYS_INLINE inline T"];
    pr["fd_1_o" <> ToString[aOrd]
                <> "(const GF3D2layout &layout, const T *gf, "
                <> "int i, int j, int k, const std::array<T, 3> &invDx) {"];
    PrintIndexes3D[aOrd, 1, "DI"];
    pr["  return"];
    PrintFDExpression[aOrd, 1, "invDx"];
    pr["}"];
    pr[]
    ,
    {aOrd, 2, 8, 2}
  ];

  (*****************************************)
  (* Second-order Finite Difference Scheme *)
  (*****************************************)

  Do[
    pr["template <int DI, int DJ, typename T>"];
    pr["CCTK_DEVICE CCTK_HOST CCTK_ATTRIBUTE_ALWAYS_INLINE inline T"];
    pr["fd_2_o" <> ToString[aOrd]
                <> "(const GF3D2layout &layout, const T *gf, "
                <> "int i, int j, int k, const std::array<T, 3> &invDx) {"];
    pr["  if constexpr (DI == DJ) {"];
    PrintIndexes3D[aOrd, 2, "DI"];
    pr["    return"];
    PrintFDExpression[aOrd, 2, "invDx"];
    pr["  } else {"];
    PrintIndexes3DMix2nd[aOrd, "DI", "DJ"];
    pr["    return"];
    PrintFDExpressionMix2nd[aOrd, "invDx"];
    pr["  }"];
    pr["}"];
    pr[]
    ,
    {aOrd, 2, 8, 2}
  ];

  pr["} // namespace Z4cowGPU"];
];

Import[FileNameJoin[{Environment["GENERATO"], "codes/CarpetXGPU.wl"}]];
