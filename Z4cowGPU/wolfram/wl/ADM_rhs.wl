(* ::Package:: *)

(* ADM_rhs.wl *)

(* (c) Liwei Ji, 07/2024 *)

(* See arXiv:1212.2901 [gr-qc] *)

(* ADM in Z4c *)

SetEQN[ADMgam[i_, j_], W[] ^ -2 gamt[i, j]];

SetEQN[ADMK[i_, j_], W[] ^ -2 (exAt[i, j] + 1/3 (exKh[] + 2 Theta[]) gamt[i, j])];

SetEQN[ADMalpha[], alpha[]];

SetEQN[ADMbeta[i_], beta[i]];

SetEQN[ADMdtalpha[], dtalpha[]];

SetEQN[ADMdtbeta[i_], dtbeta[i]];


(* Z4c in ADM intermediate *)

SetEQN[trexK[], invgamma[i, j] ADMK[-i, -j]];

SetEQN[Gt[i_, k_, l_], 1 / 2 (dgamt[k, l, i] + dgamt[l, i, k] - dgamt[i, k, l])];

(* Z4c in ADM *)

SetEQN[W[], tempW[]];

SetEQN[gamt[i_, j_], tempW[] ^ 2 ADMgam[i, j]];

SetEQN[exKh[], trexK[] - 2 Theta[]];

SetEQN[exAt[i_, j_], tempW[] ^ 2 (ADMK[i, j] - (trexK[] / 3) ADMgam[i, j])];

SetEQN[trGt[i_], invgamt[i, j] invgamt[k, l] Gt[-j, -k, -l]];

SetEQN[Theta[], 0];

SetEQN[alpha[], ADMalpha[]];

SetEQN[beta[i_], ADMbeta[i]];

