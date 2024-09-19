(* ::Package:: *)

(* dtADM_rhs.wl *)

(* (c) Liwei Ji, 09/2024 *)

(****************)

(* Intermediate *)

(****************)

SetEQN[trGam3d[i_], cbrtdetgamma[] (invgamma[i, k] invgamma[j, l] - 1/3 invgamma[i, j] invgamma[k, l]) ADMdgamma[-j, -k, -l]];

(*******)

(* EOM *)

(*******)

SetEQN[ADMdtalpha[], ADMbeta[k] ADMdalpha[-k] - 2 ADMalpha[] invgamma[k, l] ADMexK[-k, -l]];

SetEQN[ADMdtbeta[i_], ADMbeta[k] ADMdbeta[-k, i] + cnu trGam3d[i] - ceta ADMbeta[i]];
