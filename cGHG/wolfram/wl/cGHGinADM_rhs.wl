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

SetEQN[invg4[a_, b_], invgamma[a, b] - nvec[a] nvec[b]];

SetEQNDelayed[
  dg4[c_, a_, b_]
  ,
  If[IndexType[c, DownIndexQ] && IndexType[a, DownIndexQ] && IndexType[b, DownIndexQ],
    If[c[[1]] == 0,
      If[a[[1]] == 0 && b[[1]] == 0,
        -2 ADMalpha[] ADMdtalpha[] + 2 ADMgamma[-k, -l] ADMbeta[k] ADMdtbeta[l] + ADMbeta[i] ADMbeta[j] ADMdtgamma[-i, -j]
        ,
        If[a[[1]] == 0,
          ADMbeta[l] ADMdtgamma[b, -l] + ADMgamma[b, -l] ADMdtbeta[l]
          ,
          If[b[[1]] == 0,
            ADMbeta[l] ADMdtgamma[a, -l] + ADMgamma[a, -l] ADMdtbeta[l]
            ,
            ADMdtgamma[a, b]
          ]
        ]
      ]
      ,
      If[a[[1]] == 0 && b[[1]] == 0,
        -2 ADMalpha[] ADMdalpha[c] + 2 ADMgamma[-k, -l] ADMbeta[k] ADMdbeta[c, l] + ADMbeta[i] ADMbeta[j] ADMdgamma[c, -i, -j]
        ,
        If[a[[1]] == 0,
          ADMbeta[l] ADMdgamma[c, b, -l] + ADMgamma[b, -l] ADMdbeta[c, l]
          ,
          If[b[[1]] == 0,
            ADMbeta[l] ADMdgamma[c, a, -l] + ADMgamma[a, -l] ADMdbeta[c, l]
            ,
            ADMdgamma[c, a, b]
          ]
        ]
      ]
    ]
    ,
    dg4[c, a, b]
  ]
];

SetEQN[Gam4[c_, a_, b_], 1/2 (dg4[a, b, c] + dg4[b, c, a] - dg4[c, a, b])];

SetEQN[trGam4[c_], invg4[a, b] Gam4[c, -a, -b]];

(*******)

(* EOM *)

(*******)

(* WPi *)

SetEQN[W[], invdetgamma[] ^ (1/6)];

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

SetEQN[hPhinn[k_], ADMalpha[] ^ 2 nvec[a] nvec[b] dg4[k, -a, -b]];

(* hH, htheta *)

SetEQN[hHn[], -ADMalpha[] nvec[c] trGam4[-c]];

SetEQN[hH[i_], -ADMalpha[] ^ 2 W[] ^ 2 trGam4[i]];

SetEQN[hthetan[], -ADMbeta[k] dhHn[-k]];

SetEQN[htheta[i_], -ADMbeta[k] dhH[-k, i]];