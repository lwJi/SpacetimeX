(* ::Package:: *)

(* WeylScal_rhs.wl *)

(* (c) Liwei Ji, 05/2025 *)

(**********)

(* Tetrad *)

(**********)

SetEQNDelayed[
  uvec[i_]
  ,
  Switch[i[[1]],
    1,
      -Y[]
    ,
    2,
      X[]
    ,
    3,
      0
    ,
    _,
      Missing["InvalidIndex", i[[1]]]
  ]
];

SetEQNDelayed[
  vvec[i_]
  ,
  Switch[i[[1]],
    1,
      X[]
    ,
    2,
      Y[]
    ,
    3,
      Z[]
    ,
    _,
      Missing["InvalidIndex", i[[1]]]
  ]
];

SetEQNDelayed[wvec[i_], detgam[] ^ (1/2) invgam[i, j] KroneckerDelta[j[[1]], k[[1]], l[[1]]] uvec[k] vvec[l]];

(* Gram-Schmidt orthonormalization *)

SetEQNDelayed[inneruu[], gam[-k, -l] uvec[k] uvec[l]];

SetEQNDelayed[Uvec[i_], uvec[i] / (inneruu[]) ^ (1/2)];

SetEQNDelayed[innerUv[], gam[-k, -l] Uvec[k] vvec[l]];

SetEQNDelayed[Vtmp[i_], vvec[i] - innerUv[] Uvec[i]];

SetEQNDelayed[innerVV[], gam[-k, -l] Vtmp[k] Vtmp[l]];

SetEQNDelayed[Vvec[i_], Vtmp[i] / (innerVV[]) ^ (1/2)];

SetEQNDelayed[innerUw[], gam[-k, -l] Uvec[k] wvec[l]];

SetEQNDelayed[innerVw[], gam[-k, -l] Vvec[k] wvec[l]];

SetEQNDelayed[Wtmp[i_], wvec[i] - innerUw[] Uvec[i] - innerVw[] Vvec[i]];

SetEQNDelayed[innerWW[], gam[-k, -l] Wtmp[k] Wtmp[l]];

SetEQNDelayed[Wvec[i_], Wtmp[i] / (innerWW[]) ^ (1/2)];
