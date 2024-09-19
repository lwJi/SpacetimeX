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

SetEQN[ADMdtgamma[i_, j_], -2 ADMalpha[] ADMexK[i, j] + (ADMdgamma[i, j, -k] ADMbeta[k] + ADMgamma[j, -k] ADMdbeta[i, k]) + (ADMdgamma[j, i, -k] ADMbeta[k] + ADMgamma[i, -k] ADMdbeta[j, k]) - ADMbeta[k] (ADMdgamma[i, j, -k] + ADMdgamma[j, i, -k] - ADMdgamma[-k, i, j])];
