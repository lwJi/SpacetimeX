(* ::Package:: *)

(* WeylScal_rhs.wl *)

(* (c) Liwei Ji, 05/2025 *)

(****************)

(* Intermediate *)

(****************)

SetEQN[GamDDD[k_, i_, j_], 1/2 (dgam[i, j, k] + dgam[j, k, i] - dgam[k, i, j])];

SetEQN[Gam[k_, i_, j_], invgam[k, l] GamDDD[-l, i, j]];

SetEQN[Ricc[i_, j_], invgam[k, l] (1/2 (-ddgam[-k, -l, i, j] - ddgam[i, j, -k, -l] + ddgam[i, -k, j, -l] + ddgam[j, -k, i, -l]) + Gam[m, i, -k] GamDDD[-m, j, -l] - Gam[m, i, j] GamDDD[-m, -k, -l])];

SetEQN[trexK[], invgam[k, l] exK[-k, -l]];

SetEQN[DexK[k_, i_, j_], dexK[k, i, j] - Gam[l, k, i] exK[-l, j] - Gam[l, k, j] exK[-l, i]];

(********************************)

(* From Gauss-Codazzi equations *)

(********************************)

(*
SetEQN[perpRn[j_, k_, l_], dexK[k, j, l] - dexK[l, j, k] + Gam[m, j, l] exK[k, -m] - Gam[m, j, k] exK[l, -m]];

SetEQN[perpRnn[i_, j_], Ricc[i, j] + trexK[] exK[i, j] - exK[i, -k] exK[j, -l] invgam[k, l]];
*)

(********************************)

(* E and B parts of Weyl tensor *)

(********************************)

SetEQNDelayed[Epart[i_, j_], Ricc[i, j] + trexK[] exK[i, j] - exK[i, -k] exK[j, -l] invgam[k, l]];

SetEQNDelayed[Bpart[i_, j_], (gam[i, -m] epsilongam[m, k, l] DexK[-k, -l, j] /. epsilonToetaUp[gam, GetDefaultChart[]]) /. {1 / Sqrt[Detgamcart[]] -> sqrtdetinvgam[]}]; (* here we use delayed version to prevent contracting gam and epsilongam *)

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

SetEQN[wvec[i_], (invgam[i, j] epsilongam[-j, -k, -l] uvec[k] vvec[l]) /. epsilonToetaDown[gam, GetDefaultChart[]] /. {Sqrt[Detgamcart[]] -> sqrtdetgam[]}];

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

SetEQN[mbmbreal[i_, j_], (Wvec[i] Wvec[j] - Uvec[i] Uvec[j]) / 2];

SetEQN[mbmbimag[i_, j_], -(Uvec[i] Wvec[j] + Wvec[i] Uvec[j]) / 2];

(* Psi4 *)

SetEQN[Psi4real[], Epart[-i, -j] mbmbreal[i, j] + Bpart[-i, -j] mbmbimag[i, j]];

SetEQN[Psi4imag[], Epart[-i, -j] mbmbimag[i, j] - Bpart[-i, -j] mbmbreal[i, j]];
