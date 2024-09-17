(* ::Package:: *)

(* cGHGinADM_rhs.wl *)

(* (c) Liwei Ji, 09/2024 *)

(****************)

(* Intermediate *)

(****************)

SetEQN[trexK[], invgamma[i, j] ADMexK[-i, -j]];

SetEQNDelayed[
  nvec[c_]
  ,
  If[IndexType[c, UpIndexQ],
    If[c[[1]] == 0,
      ADMalpha[] ^ -1
      ,
      -ADMalpha[] ^ -1 ADMbeta[c]
    ]
    ,
    nvec[c]
  ]
];

(*******)

(* EOM *)

(*******)

(* WPi *)

SetEQN[W[], detgamma[] ^ (1/6)];

SetEQN[WPi[], 1/6 ADMalpha[] W[] invgamma[k, l] nvec[c] ADMdgamma[-c, -k, -l]];

SetEQN[WPhi[i_], -(1/6) ADMalpha[] W[] invgamma[k, l] ADMdgamma[i, -k, -l]];

(* hPi_{ij} *)

SetEQN[hg[i_, j_], W[] ^ 2 ADMgamma[i, j]];

SetEQN[hPi[i_, j_], -ADMalpha[] W[] ^ 2 nvec[c] dg4[-c, i, j] + 2 W[] WPi[] ADMgamma[i, j]];

SetEQN[hPhi[k_, i_, j_], ADMalpha[] W[] ^ 2 dg4[k, i, j] + 2 W[] WPhi[k] ADMgamma[i, j]];

(* hPi_{ni} *)

SetEQN[hgn[i_], ADMbeta[i]];

SetEQN[hPin[i_], -ADMalpha[] ^ 2 invgamma[i, j] nvec[c] nvec[a] dg4[-c, -a, -j]];

SetEQN[hPhin[k_, i_], ADMalpha[] ^ 2 invgamma[i, j] nvec[a] dg4[k, -a, -j]];

(* hPi_{nn} *)

SetEQN[hgnn[], -2 ADMalpha[]];

SetEQN[hPinn[], -ADMalpha[] ^ 2 nvec[c] nvec[a] nvec[b] dg4[-c, -a, -b]];

SetEQN[hPhi[k_], ADMalpha[] ^ 2 nvec[a] nvec[b] dg4[k, -a, -b]];

(* hH, htheta *)

SetEQN[hHn[], -ADMalpha[] nvec[c] trGam4[-c]];

SetEQN[hH[i_], -ADMalpha[] ^ 2 W[] ^ 2 trGam4[i]];

SetEQN[hthetan[], -ADMbeta[k] dhHn[-k]];

SetEQN[htheta[i_], -ADMbeta[k] dhH[-k, i]];
