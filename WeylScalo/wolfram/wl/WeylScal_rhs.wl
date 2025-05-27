(* ::Package:: *)

(* WeylScal_rhs.wl *)

(* (c) Liwei Ji, 05/2025 *)

(********************************)

(* From Gauss-Codazzi equations *)

(********************************)

SetEQN[DexK[k_, i_, j_], dexK[k, i, j] - Gam[l, k, i] exK[-l, j] - Gam[l, k, j] exK[-l, i]];

(*
SetEQN[perpRn[j_, k_, l_], dexK[k, j, l] - dexK[l, j, k] + Gam[m, j, l] exK[k, -m] - Gam[m, j, k] exK[l, -m]];

SetEQN[perpRnn[i_, j_], Ricc[i, j] + trexK[] exK[i, j] - exK[i, -k] exK[j, -l] invgam[k, l]];
*)

SetEQN[E[i_, j_], Ricc[i, j] + trexK[] exK[i, j] - exK[i, -k] exK[j, -l] invgam[k, l]];

SetEQN[B[i_, j_], gam[i, -m] epsilongam[m, k, l] DexK[-k, -l, j]];

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

SetEQNDelayed[wvec[i_], invgam[i, j] epsilongam[-j, -k, -l] uvec[k] vvec[l]];

(* Gram-Schmidt orthonormalization *)

SetEQN[inneruu[], gam[-k, -l] uvec[k] uvec[l]];

SetEQN[Uvec[i_], uvec[i] / (inneruu[]) ^ (1/2)];

SetEQN[innerUv[], gam[-k, -l] Uvec[k] vvec[l]];

SetEQN[Vtmp[i_], vvec[i] - innerUv[] Uvec[i]];

SetEQN[innerVV[], gam[-k, -l] Vtmp[k] Vtmp[l]];

SetEQN[Vvec[i_], Vtmp[i] / (innerVV[]) ^ (1/2)];

SetEQN[innerUw[], gam[-k, -l] Uvec[k] wvec[l]];

SetEQN[innerVw[], gam[-k, -l] Vvec[k] wvec[l]];

SetEQN[Wtmp[i_], wvec[i] - innerUw[] Uvec[i] - innerVw[] Vvec[i]];

SetEQN[innerWW[], gam[-k, -l] Wtmp[k] Wtmp[l]];

SetEQN[Wvec[i_], Wtmp[i] / (innerWW[]) ^ (1/2)];

(* The tetrad vectors *)

SetEQN[nvec[i_], oosqrt2 (-beta[i] / alpha[] - Vvec[i])];

SetEQN[lvec[i_], oosqrt2 (-beta[i] / alpha[] + Vvec[i])];

SetEQN[mbmbReal[i_, j_], (Wvec[i] Wvec[j] - Uvec[i] Uvec[j]) / 2];

SetEQN[mbmbImag[i_, j_], -(Uvec[i] Wvec[j] + Wvec[i] Uvec[j]) / 2];
