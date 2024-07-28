(* ::Package:: *)

(* cGH_rhs.wl *)

(* (c) Liwei Ji, 07/2024 *)

(****************)

(* Intermediate *)

(****************)

SetEQN[alpha[], -(1/2) hgnn[]];

SetEQN[beta[i_], hgn[i]];

SetEQN[invgam[i_, j_], W[] ^ 2 invhg[i, j]];

SetEQN[hPinD[i_], invhg[i, -j] hPin[j]];

SetEQN[hPhinD[k_, i_], invhg[i, -j] hPhin[k, j]];

SetEQN[hGam[k_, i_, j_], 1/2 (hPhi[i, j, k] + hPhi[j, k, i] - hPhi[k, i, j])];

SetEQN[hGamn2[k_, i_], 1/2 (alpha[] ^ -1 (hPhin[i, k] - hPhin[k, i]) - hPi[k, i])];

SetEQN[hGamn[i_, j_], 1/2 (alpha[] ^ -1 (hPhin[i, j] + hPhin[j, i]) + hPi[i, j])];

SetEQN[trhGam[k_], W[] ^ 2 (alpha[] invhg[i, j] hGam[k, -i, -j] + 1/2 hPhinn[k]) + alpha[] W[] WPhi[k] + hPin[k]];

SetEQN[trhGamn[], invhg[i, j] hGamn[-i, -j] + 1/2 alpha[] ^ -1 hPinn[] - 3 W[] ^ -1 WPi[]];

(*******)

(* EOM *)

(*******)

(* trPi *)

SetEQN[trPi[], 1/3 invhg[i, j] (invhg[k, l] (W[] ^ 2 invhg[m, n] (2 hGam[-i, -k, -m] hGam[-j, -l, -n] - hPhi[-k, -m, -i] hPhi[-l, -n, -j]) + 4 W[] hPhi[-k, -l, -i] WPhi[-j] - 2 alpha[] ^ -1 hPhi[-i, -j, -k] hH[-l]) + 2 WPhi[-i] WPhi[-j] + 1/2 alpha[] ^ -2 W[] ^ 2 hPhinn[-i] hPhinn[-j] + 2 alpha[] ^ -2 hPhinn[-i] hH[-j]) + 2/3 alpha[] ^ -2 (hPhin[-k, j] hPhin[-j, k] + hPin[j] hPhinn[-j] + alpha[] hPhin[-i, i] hHn[])];

(* WPi *)

SetEQN[dtW[], -(-(1 + cgamma1) beta[k] dW[-k]) - WPi[] - cgamma1 alpha[] ^ -1 beta[k] dWPhi[-k]];

SetEQN[dtWPi[], -(-beta[k] dWPi[-k] + alpha[] invgam[k, l] dWPhi[-k, -l] - cgamma1 cgamma2 beta[k] dW[-k] - 1/3 W[] invhg[i, j] dhH[-i, -j]) + invhg[k, l] WPhi[-k] (W[] WPhi[-l] - 1/2 alpha[] ^ -1 W[] ^ 2 hPhinn[-l] - alpha[] ^ -1 hH[-l]) - W[] ^ -1 WPi[] ^ 2 - WPi[] hHn[] - alpha[] ^ -1 WPhi[-k] hPin[k] + 1/2 W[] trPi[] - cgamma1 cgamma2 alpha[] ^ -1 WPhi[-k] beta[k]];

SetEQN[dtWPhi[k_], -(-beta[i] dWPhi[-i, k] + alpha[] dWPi[k] - cgamma2 alpha[] dW[k]) + alpha[] ^ -1 hPhin[k, m] WPhi[-m] + 1/2 alpha[] ^ -1 hPinn[] WPhi[k] - cgamma2 WPhi[k]];

(* hPi_{ij} *)

SetEQN[dthg[i_, j_], -(-(1 + cgamma1) beta[k] dhg[-k, i, j]) - hPi[i, j] - cgamma1 alpha[] ^ -1 beta[k] hPhi[-k, i, j]];

SetEQN[dthPi[i_, j_], -(-beta[k] dhPi[-k, i, j] + alpha[] invgam[k, l] dhPhi[-k, -l, i, j] - cgamma1 cgamma2 beta[k] dhg[-k, i, j] + (dhH[i, j] + dhH[j, i]) - 2/3 invhg[k, l] dhH[-k, -l] hg[i, j]) + invhg[k, l] (2 W[] ^ 2 invhg[m, n] (hPhi[-k, -m, i] hPhi[-l, -n, j] - hGam[i, -k, -m] hGam[j, -l, -n]) - 1/2 alpha[] ^ -1 W[] ^ 2 hPhinn[-k] hPhi[-l, i, j] - 2 alpha[] ^ -2 hPhinD[-k, i] hPhinD[-l, j] + 4 W[] ((hGam[i, j, -k] + hGam[j, i, -k] - hPhi[-k, i, j]) WPhi[-l] - 1/2 (hPhi[-k, -l, i] WPhi[j] + hPhi[-k, -l, j] WPhi[i])) + 4 hGamn2[i, -k] hGamn2[j, -l] - 2 hPi[-k, i] hPi[-l, j] + 2 alpha[] ^ -1 hGam[-k, i, j] hH[-l]) - 1/2 alpha[] ^ -2 W[] ^ 2 hPhinn[i] hPhinn[j] - 2 WPhi[i] WPhi[j] - 2 hGamn[i, j] hHn[] - alpha[] ^ -2 ((hPinD[i] + hH[i]) hPhinn[j] + (hPinD[j] + hH[j]) hPhinn[i]) - alpha[] ^ -1 hPin[l] hPhi[-l, i, j] + trPi[] hg[i, j] - cgamma1 cgamma2 alpha[] ^ -1 beta[k] hPhi[-k, i, j]];

SetEQN[dthPhi[k_, i_, j_], -(-beta[l] dhPhi[-l, k, i, j] + alpha[] dhPi[k, i, j] - cgamma2 alpha[] dhg[k, i, j]) + alpha[] ^ -1 hPhin[k, m] hPhi[-m, i, j] + 1/2 alpha[] ^ -1 hPinn[] hPhi[k, i, j] - cgamma2 hPhi[k, i, j]];

(* hPi_{ni} *)

SetEQN[dthgn[r_], -(-(1 + cgamma1) beta[k] dhgn[-k, r]) - hPin[r] - cgamma1 alpha[] ^ -1 beta[k] hPhin[-k, r]];

SetEQN[dthPin[r_], -(-beta[k] dhPin[-k, r] + alpha[] invgam[k, l] dhPhin[-k, -l, r] - cgamma1 cgamma2 beta[k] dhgn[-k, r] + alpha[] ^ 2 W[] ^ 2 invhg[r, i] dhHn[-i]) + invhg[r, i] (W[] ^ 2 (2 invhg[k, l] (hGamn2[-i, -k] hPhinn[-l] - alpha[] invhg[j, m] hGam[-i, -k, -j] hGamn[-l, -m]) - hPhinn[-i] (hHn[] + 1/2 alpha[] ^ -1 hPinn[])) - 2 W[] (WPhi[-i] hPhin[-k, k] - WPi[] hPhinn[-i]) + 2 alpha[] W[] invhg[k, l] (2 hGamn[-l, -i] WPhi[-k] + WPi[] hPhi[-k, -l, -i]) + 2 alpha[] WPi[] WPhi[-i] + alpha[] ^ -1 hPinn[] hH[-i] - (alpha[] ^ -1 hPhin[-i, l] - 2 invhg[k, l] hGamn2[-k, -i]) hH[-l] - cgamma0 alpha[] (hH[-i] + trhGam[-i]) - alpha[] dnhH[-i]) - alpha[] ^ -1 (5/2 W[] ^ 2 invhg[k, l] hPhinn[-k] + hPin[l]) hPhin[-l, r] + alpha[] ^ -1 hPinn[] hPin[r] - cgamma1 cgamma2 alpha[] ^ -1 beta[k] hPhin[-k, r]];

SetEQN[dthPhin[k_, r_], -(-beta[l] dhPhin[-l, k, r] + alpha[] dhPin[k, r] - cgamma2 alpha[] dhgn[k, r]) + alpha[] ^ -1 hPhin[k, l] hPhin[-l, r] + 1/2 alpha[] ^ -1 hPinn[] hPhin[k, r] - cgamma2 hPhin[k, r]];

(* hPi_{nn} *)

SetEQN[dthgnn[], -(-(1 + cgamma1) beta[k] dhgnn[-k]) - hPinn[] - cgamma1 alpha[] ^ -1 beta[k] hPhinn[-k]];

SetEQN[dthPinn[], -(-beta[k] dhPinn[-k] + alpha[] invgam[k, l] dhPhinn[-k, -l] - cgamma1 cgamma2 beta[k] dhgnn[-k]) - 2 alpha[] invhg[k, l] invhg[i, j] hGamn[-k, -i] hGamn[-l, -j] - alpha[] ^ -1 W[] ^ 2 invhg[k, l] hPhinn[-k] hPhinn[-l] - alpha[] ^ -1 (hPin[l] + invhg[k, l] hH[-k]) hPhinn[-l] + 4 W[] ^ -1 WPi[] hPhin[-k, k] - 6 alpha[] W[] ^ -2 WPi[] ^ 2 + hPinn[] (alpha[] ^ -1 hPinn[] + hHn[]) - cgamma0 alpha[] ^ 2 (hHn[] + trhGamn[]) - cgamma1 cgamma2 alpha[] ^ -1 beta[k] hPhinn[-k] - 2 alpha[] ^ 2 dnhHn[]];

SetEQN[dthPhinn[k_], -(-beta[l] dhPhinn[-l, k] + alpha[] dhPinn[k] - cgamma2 alpha[] dhgnn[k]) + alpha[] ^ -1 hPhin[k, l] hPhinn[-l] + 1/2 alpha[] ^ -1 hPinn[] hPhinn[k] - cgamma2 hPhinn[k]];
