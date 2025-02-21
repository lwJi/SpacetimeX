/* Z4cowGPU_set_rhs_GF3D5.hxx */
/* Produced with Generato */

#ifndef Z4COWGPU_SET_RHS_GF3D5_HXX
#define Z4COWGPU_SET_RHS_GF3D5_HXX

const auto &dtW = gf_dtW;
const auto &dtgamt11 = gf_dtgamt[0];
const auto &dtgamt12 = gf_dtgamt[1];
const auto &dtgamt13 = gf_dtgamt[2];
const auto &dtgamt22 = gf_dtgamt[3];
const auto &dtgamt23 = gf_dtgamt[4];
const auto &dtgamt33 = gf_dtgamt[5];
const auto &dtexKh = gf_dtexKh;
const auto &dtexAt11 = gf_dtexAt[0];
const auto &dtexAt12 = gf_dtexAt[1];
const auto &dtexAt13 = gf_dtexAt[2];
const auto &dtexAt22 = gf_dtexAt[3];
const auto &dtexAt23 = gf_dtexAt[4];
const auto &dtexAt33 = gf_dtexAt[5];
const auto &dttrGt1 = gf_dttrGt[0];
const auto &dttrGt2 = gf_dttrGt[1];
const auto &dttrGt3 = gf_dttrGt[2];
const auto &dtTheta = gf_dtTheta;
const auto &dtalpha = gf_dtalpha;
const auto &dtbeta1 = gf_dtbeta[0];
const auto &dtbeta2 = gf_dtbeta[1];
const auto &dtbeta3 = gf_dtbeta[2];

noinline([&]() __attribute__((__flatten__, __hot__)) {
grid.loop_int_device<0, 0, 0>(
  grid.nghostzones, [=] ARITH_DEVICE(const PointDesc &p) ARITH_INLINE {
const int ijk = layout2.linear(p.i, p.j, p.k);
const int ijk5 = layout5.linear(p.i, p.j, p.k);

const CCTK_REAL ceta = calceta(p.x, p.y, p.z);

const auto &W = tl_W.ptr[ijk5];
const auto &gamt11 = tl_gamt[0].ptr[ijk5];
const auto &gamt12 = tl_gamt[1].ptr[ijk5];
const auto &gamt13 = tl_gamt[2].ptr[ijk5];
const auto &gamt22 = tl_gamt[3].ptr[ijk5];
const auto &gamt23 = tl_gamt[4].ptr[ijk5];
const auto &gamt33 = tl_gamt[5].ptr[ijk5];
const auto &exKh = tl_exKh.ptr[ijk5];
const auto &exAt11 = tl_exAt[0].ptr[ijk5];
const auto &exAt12 = tl_exAt[1].ptr[ijk5];
const auto &exAt13 = tl_exAt[2].ptr[ijk5];
const auto &exAt22 = tl_exAt[3].ptr[ijk5];
const auto &exAt23 = tl_exAt[4].ptr[ijk5];
const auto &exAt33 = tl_exAt[5].ptr[ijk5];
const auto &trGt1 = tl_trGt[0].ptr[ijk5];
const auto &trGt2 = tl_trGt[1].ptr[ijk5];
const auto &trGt3 = tl_trGt[2].ptr[ijk5];
const auto &Theta = tl_Theta.ptr[ijk5];
const auto &alpha = tl_alpha.ptr[ijk5];
const auto &beta1 = tl_beta[0].ptr[ijk5];
const auto &beta2 = tl_beta[1].ptr[ijk5];
const auto &beta3 = tl_beta[2].ptr[ijk5];
const auto &eTtt = tl_eTtt.ptr[ijk5];
const auto &eTt1 = tl_eTt[0].ptr[ijk5];
const auto &eTt2 = tl_eTt[1].ptr[ijk5];
const auto &eTt3 = tl_eTt[2].ptr[ijk5];
const auto &eT11 = tl_eT[0].ptr[ijk5];
const auto &eT12 = tl_eT[1].ptr[ijk5];
const auto &eT13 = tl_eT[2].ptr[ijk5];
const auto &eT22 = tl_eT[3].ptr[ijk5];
const auto &eT23 = tl_eT[4].ptr[ijk5];
const auto &eT33 = tl_eT[5].ptr[ijk5];

const auto &dW1 = tl_dW[0].ptr[ijk5];
const auto &dW2 = tl_dW[1].ptr[ijk5];
const auto &dW3 = tl_dW[2].ptr[ijk5];
const auto &dgamt111 = tl_dgamt[0][0].ptr[ijk5];
const auto &dgamt112 = tl_dgamt[1][0].ptr[ijk5];
const auto &dgamt113 = tl_dgamt[2][0].ptr[ijk5];
const auto &dgamt122 = tl_dgamt[3][0].ptr[ijk5];
const auto &dgamt123 = tl_dgamt[4][0].ptr[ijk5];
const auto &dgamt133 = tl_dgamt[5][0].ptr[ijk5];
const auto &dgamt211 = tl_dgamt[0][1].ptr[ijk5];
const auto &dgamt212 = tl_dgamt[1][1].ptr[ijk5];
const auto &dgamt213 = tl_dgamt[2][1].ptr[ijk5];
const auto &dgamt222 = tl_dgamt[3][1].ptr[ijk5];
const auto &dgamt223 = tl_dgamt[4][1].ptr[ijk5];
const auto &dgamt233 = tl_dgamt[5][1].ptr[ijk5];
const auto &dgamt311 = tl_dgamt[0][2].ptr[ijk5];
const auto &dgamt312 = tl_dgamt[1][2].ptr[ijk5];
const auto &dgamt313 = tl_dgamt[2][2].ptr[ijk5];
const auto &dgamt322 = tl_dgamt[3][2].ptr[ijk5];
const auto &dgamt323 = tl_dgamt[4][2].ptr[ijk5];
const auto &dgamt333 = tl_dgamt[5][2].ptr[ijk5];
const auto &dexKh1 = tl_dexKh[0].ptr[ijk5];
const auto &dexKh2 = tl_dexKh[1].ptr[ijk5];
const auto &dexKh3 = tl_dexKh[2].ptr[ijk5];
const auto &dexAt111 = tl_dexAt[0][0].ptr[ijk5];
const auto &dexAt112 = tl_dexAt[1][0].ptr[ijk5];
const auto &dexAt113 = tl_dexAt[2][0].ptr[ijk5];
const auto &dexAt122 = tl_dexAt[3][0].ptr[ijk5];
const auto &dexAt123 = tl_dexAt[4][0].ptr[ijk5];
const auto &dexAt133 = tl_dexAt[5][0].ptr[ijk5];
const auto &dexAt211 = tl_dexAt[0][1].ptr[ijk5];
const auto &dexAt212 = tl_dexAt[1][1].ptr[ijk5];
const auto &dexAt213 = tl_dexAt[2][1].ptr[ijk5];
const auto &dexAt222 = tl_dexAt[3][1].ptr[ijk5];
const auto &dexAt223 = tl_dexAt[4][1].ptr[ijk5];
const auto &dexAt233 = tl_dexAt[5][1].ptr[ijk5];
const auto &dexAt311 = tl_dexAt[0][2].ptr[ijk5];
const auto &dexAt312 = tl_dexAt[1][2].ptr[ijk5];
const auto &dexAt313 = tl_dexAt[2][2].ptr[ijk5];
const auto &dexAt322 = tl_dexAt[3][2].ptr[ijk5];
const auto &dexAt323 = tl_dexAt[4][2].ptr[ijk5];
const auto &dexAt333 = tl_dexAt[5][2].ptr[ijk5];
const auto &dtrGt11 = tl_dtrGt[0][0].ptr[ijk5];
const auto &dtrGt12 = tl_dtrGt[1][0].ptr[ijk5];
const auto &dtrGt13 = tl_dtrGt[2][0].ptr[ijk5];
const auto &dtrGt21 = tl_dtrGt[0][1].ptr[ijk5];
const auto &dtrGt22 = tl_dtrGt[1][1].ptr[ijk5];
const auto &dtrGt23 = tl_dtrGt[2][1].ptr[ijk5];
const auto &dtrGt31 = tl_dtrGt[0][2].ptr[ijk5];
const auto &dtrGt32 = tl_dtrGt[1][2].ptr[ijk5];
const auto &dtrGt33 = tl_dtrGt[2][2].ptr[ijk5];
const auto &dTheta1 = tl_dTheta[0].ptr[ijk5];
const auto &dTheta2 = tl_dTheta[1].ptr[ijk5];
const auto &dTheta3 = tl_dTheta[2].ptr[ijk5];
const auto &dalpha1 = tl_dalpha[0].ptr[ijk5];
const auto &dalpha2 = tl_dalpha[1].ptr[ijk5];
const auto &dalpha3 = tl_dalpha[2].ptr[ijk5];
const auto &dbeta11 = tl_dbeta[0][0].ptr[ijk5];
const auto &dbeta12 = tl_dbeta[1][0].ptr[ijk5];
const auto &dbeta13 = tl_dbeta[2][0].ptr[ijk5];
const auto &dbeta21 = tl_dbeta[0][1].ptr[ijk5];
const auto &dbeta22 = tl_dbeta[1][1].ptr[ijk5];
const auto &dbeta23 = tl_dbeta[2][1].ptr[ijk5];
const auto &dbeta31 = tl_dbeta[0][2].ptr[ijk5];
const auto &dbeta32 = tl_dbeta[1][2].ptr[ijk5];
const auto &dbeta33 = tl_dbeta[2][2].ptr[ijk5];
const auto &ddW11 = tl_ddW[0].ptr[ijk5];
const auto &ddW12 = tl_ddW[1].ptr[ijk5];
const auto &ddW13 = tl_ddW[2].ptr[ijk5];
const auto &ddW22 = tl_ddW[3].ptr[ijk5];
const auto &ddW23 = tl_ddW[4].ptr[ijk5];
const auto &ddW33 = tl_ddW[5].ptr[ijk5];
const auto &ddgamt1111 = tl_ddgamt[0][0].ptr[ijk5];
const auto &ddgamt1112 = tl_ddgamt[1][0].ptr[ijk5];
const auto &ddgamt1113 = tl_ddgamt[2][0].ptr[ijk5];
const auto &ddgamt1122 = tl_ddgamt[3][0].ptr[ijk5];
const auto &ddgamt1123 = tl_ddgamt[4][0].ptr[ijk5];
const auto &ddgamt1133 = tl_ddgamt[5][0].ptr[ijk5];
const auto &ddgamt1211 = tl_ddgamt[0][1].ptr[ijk5];
const auto &ddgamt1212 = tl_ddgamt[1][1].ptr[ijk5];
const auto &ddgamt1213 = tl_ddgamt[2][1].ptr[ijk5];
const auto &ddgamt1222 = tl_ddgamt[3][1].ptr[ijk5];
const auto &ddgamt1223 = tl_ddgamt[4][1].ptr[ijk5];
const auto &ddgamt1233 = tl_ddgamt[5][1].ptr[ijk5];
const auto &ddgamt1311 = tl_ddgamt[0][2].ptr[ijk5];
const auto &ddgamt1312 = tl_ddgamt[1][2].ptr[ijk5];
const auto &ddgamt1313 = tl_ddgamt[2][2].ptr[ijk5];
const auto &ddgamt1322 = tl_ddgamt[3][2].ptr[ijk5];
const auto &ddgamt1323 = tl_ddgamt[4][2].ptr[ijk5];
const auto &ddgamt1333 = tl_ddgamt[5][2].ptr[ijk5];
const auto &ddgamt2211 = tl_ddgamt[0][3].ptr[ijk5];
const auto &ddgamt2212 = tl_ddgamt[1][3].ptr[ijk5];
const auto &ddgamt2213 = tl_ddgamt[2][3].ptr[ijk5];
const auto &ddgamt2222 = tl_ddgamt[3][3].ptr[ijk5];
const auto &ddgamt2223 = tl_ddgamt[4][3].ptr[ijk5];
const auto &ddgamt2233 = tl_ddgamt[5][3].ptr[ijk5];
const auto &ddgamt2311 = tl_ddgamt[0][4].ptr[ijk5];
const auto &ddgamt2312 = tl_ddgamt[1][4].ptr[ijk5];
const auto &ddgamt2313 = tl_ddgamt[2][4].ptr[ijk5];
const auto &ddgamt2322 = tl_ddgamt[3][4].ptr[ijk5];
const auto &ddgamt2323 = tl_ddgamt[4][4].ptr[ijk5];
const auto &ddgamt2333 = tl_ddgamt[5][4].ptr[ijk5];
const auto &ddgamt3311 = tl_ddgamt[0][5].ptr[ijk5];
const auto &ddgamt3312 = tl_ddgamt[1][5].ptr[ijk5];
const auto &ddgamt3313 = tl_ddgamt[2][5].ptr[ijk5];
const auto &ddgamt3322 = tl_ddgamt[3][5].ptr[ijk5];
const auto &ddgamt3323 = tl_ddgamt[4][5].ptr[ijk5];
const auto &ddgamt3333 = tl_ddgamt[5][5].ptr[ijk5];
const auto &ddalpha11 = tl_ddalpha[0].ptr[ijk5];
const auto &ddalpha12 = tl_ddalpha[1].ptr[ijk5];
const auto &ddalpha13 = tl_ddalpha[2].ptr[ijk5];
const auto &ddalpha22 = tl_ddalpha[3].ptr[ijk5];
const auto &ddalpha23 = tl_ddalpha[4].ptr[ijk5];
const auto &ddalpha33 = tl_ddalpha[5].ptr[ijk5];
const auto &ddbeta111 = tl_ddbeta[0][0].ptr[ijk5];
const auto &ddbeta112 = tl_ddbeta[1][0].ptr[ijk5];
const auto &ddbeta113 = tl_ddbeta[2][0].ptr[ijk5];
const auto &ddbeta121 = tl_ddbeta[0][1].ptr[ijk5];
const auto &ddbeta122 = tl_ddbeta[1][1].ptr[ijk5];
const auto &ddbeta123 = tl_ddbeta[2][1].ptr[ijk5];
const auto &ddbeta131 = tl_ddbeta[0][2].ptr[ijk5];
const auto &ddbeta132 = tl_ddbeta[1][2].ptr[ijk5];
const auto &ddbeta133 = tl_ddbeta[2][2].ptr[ijk5];
const auto &ddbeta221 = tl_ddbeta[0][3].ptr[ijk5];
const auto &ddbeta222 = tl_ddbeta[1][3].ptr[ijk5];
const auto &ddbeta223 = tl_ddbeta[2][3].ptr[ijk5];
const auto &ddbeta231 = tl_ddbeta[0][4].ptr[ijk5];
const auto &ddbeta232 = tl_ddbeta[1][4].ptr[ijk5];
const auto &ddbeta233 = tl_ddbeta[2][4].ptr[ijk5];
const auto &ddbeta331 = tl_ddbeta[0][5].ptr[ijk5];
const auto &ddbeta332 = tl_ddbeta[1][5].ptr[ijk5];
const auto &ddbeta333 = tl_ddbeta[2][5].ptr[ijk5];

const auto
dlnW1
=
dW1/W
;

const auto
dlnW2
=
dW2/W
;

const auto
dlnW3
=
dW3/W
;

const auto
invgamt11
=
-Power(gamt23,2) + gamt22*gamt33
;

const auto
invgamt12
=
gamt13*gamt23 - gamt12*gamt33
;

const auto
invgamt13
=
-(gamt13*gamt22) + gamt12*gamt23
;

const auto
invgamt22
=
-Power(gamt13,2) + gamt11*gamt33
;

const auto
invgamt23
=
gamt12*gamt13 - gamt11*gamt23
;

const auto
invgamt33
=
-Power(gamt12,2) + gamt11*gamt22
;

const auto
invgam11
=
invgamt11*Power(W,2)
;

const auto
invgam12
=
invgamt12*Power(W,2)
;

const auto
invgam13
=
invgamt13*Power(W,2)
;

const auto
invgam22
=
invgamt22*Power(W,2)
;

const auto
invgam23
=
invgamt23*Power(W,2)
;

const auto
invgam33
=
invgamt33*Power(W,2)
;

const auto
gam11
=
gamt11/Power(W,2)
;

const auto
gam12
=
gamt12/Power(W,2)
;

const auto
gam13
=
gamt13/Power(W,2)
;

const auto
gam22
=
gamt22/Power(W,2)
;

const auto
gam23
=
gamt23/Power(W,2)
;

const auto
gam33
=
gamt33/Power(W,2)
;

const auto
GtDDD111
=
dgamt111/2.
;

const auto
GtDDD112
=
dgamt211/2.
;

const auto
GtDDD113
=
dgamt311/2.
;

const auto
GtDDD122
=
-0.5*dgamt122 + dgamt212
;

const auto
GtDDD123
=
(-dgamt123 + dgamt213 + dgamt312)/2.
;

const auto
GtDDD133
=
-0.5*dgamt133 + dgamt313
;

const auto
GtDDD211
=
dgamt112 - dgamt211/2.
;

const auto
GtDDD212
=
dgamt122/2.
;

const auto
GtDDD213
=
(dgamt123 - dgamt213 + dgamt312)/2.
;

const auto
GtDDD222
=
dgamt222/2.
;

const auto
GtDDD223
=
dgamt322/2.
;

const auto
GtDDD233
=
-0.5*dgamt233 + dgamt323
;

const auto
GtDDD311
=
dgamt113 - dgamt311/2.
;

const auto
GtDDD312
=
(dgamt123 + dgamt213 - dgamt312)/2.
;

const auto
GtDDD313
=
dgamt133/2.
;

const auto
GtDDD322
=
dgamt223 - dgamt322/2.
;

const auto
GtDDD323
=
dgamt233/2.
;

const auto
GtDDD333
=
dgamt333/2.
;

const auto
GtDDU111
=
GtDDD111*invgamt11 + GtDDD112*invgamt12 + GtDDD113*invgamt13
;

const auto
GtDDU112
=
GtDDD111*invgamt12 + GtDDD112*invgamt22 + GtDDD113*invgamt23
;

const auto
GtDDU113
=
GtDDD111*invgamt13 + GtDDD112*invgamt23 + GtDDD113*invgamt33
;

const auto
GtDDU121
=
GtDDD112*invgamt11 + GtDDD122*invgamt12 + GtDDD123*invgamt13
;

const auto
GtDDU122
=
GtDDD112*invgamt12 + GtDDD122*invgamt22 + GtDDD123*invgamt23
;

const auto
GtDDU123
=
GtDDD112*invgamt13 + GtDDD122*invgamt23 + GtDDD123*invgamt33
;

const auto
GtDDU131
=
GtDDD113*invgamt11 + GtDDD123*invgamt12 + GtDDD133*invgamt13
;

const auto
GtDDU132
=
GtDDD113*invgamt12 + GtDDD123*invgamt22 + GtDDD133*invgamt23
;

const auto
GtDDU133
=
GtDDD113*invgamt13 + GtDDD123*invgamt23 + GtDDD133*invgamt33
;

const auto
GtDDU211
=
GtDDD211*invgamt11 + GtDDD212*invgamt12 + GtDDD213*invgamt13
;

const auto
GtDDU212
=
GtDDD211*invgamt12 + GtDDD212*invgamt22 + GtDDD213*invgamt23
;

const auto
GtDDU213
=
GtDDD211*invgamt13 + GtDDD212*invgamt23 + GtDDD213*invgamt33
;

const auto
GtDDU221
=
GtDDD212*invgamt11 + GtDDD222*invgamt12 + GtDDD223*invgamt13
;

const auto
GtDDU222
=
GtDDD212*invgamt12 + GtDDD222*invgamt22 + GtDDD223*invgamt23
;

const auto
GtDDU223
=
GtDDD212*invgamt13 + GtDDD222*invgamt23 + GtDDD223*invgamt33
;

const auto
GtDDU231
=
GtDDD213*invgamt11 + GtDDD223*invgamt12 + GtDDD233*invgamt13
;

const auto
GtDDU232
=
GtDDD213*invgamt12 + GtDDD223*invgamt22 + GtDDD233*invgamt23
;

const auto
GtDDU233
=
GtDDD213*invgamt13 + GtDDD223*invgamt23 + GtDDD233*invgamt33
;

const auto
GtDDU311
=
GtDDD311*invgamt11 + GtDDD312*invgamt12 + GtDDD313*invgamt13
;

const auto
GtDDU312
=
GtDDD311*invgamt12 + GtDDD312*invgamt22 + GtDDD313*invgamt23
;

const auto
GtDDU313
=
GtDDD311*invgamt13 + GtDDD312*invgamt23 + GtDDD313*invgamt33
;

const auto
GtDDU321
=
GtDDD312*invgamt11 + GtDDD322*invgamt12 + GtDDD323*invgamt13
;

const auto
GtDDU322
=
GtDDD312*invgamt12 + GtDDD322*invgamt22 + GtDDD323*invgamt23
;

const auto
GtDDU323
=
GtDDD312*invgamt13 + GtDDD322*invgamt23 + GtDDD323*invgamt33
;

const auto
GtDDU331
=
GtDDD313*invgamt11 + GtDDD323*invgamt12 + GtDDD333*invgamt13
;

const auto
GtDDU332
=
GtDDD313*invgamt12 + GtDDD323*invgamt22 + GtDDD333*invgamt23
;

const auto
GtDDU333
=
GtDDD313*invgamt13 + GtDDD323*invgamt23 + GtDDD333*invgamt33
;

const auto
Gt111
=
GtDDD111*invgamt11 + GtDDD211*invgamt12 + GtDDD311*invgamt13
;

const auto
Gt112
=
GtDDD112*invgamt11 + GtDDD212*invgamt12 + GtDDD312*invgamt13
;

const auto
Gt113
=
GtDDD113*invgamt11 + GtDDD213*invgamt12 + GtDDD313*invgamt13
;

const auto
Gt122
=
GtDDD122*invgamt11 + GtDDD222*invgamt12 + GtDDD322*invgamt13
;

const auto
Gt123
=
GtDDD123*invgamt11 + GtDDD223*invgamt12 + GtDDD323*invgamt13
;

const auto
Gt133
=
GtDDD133*invgamt11 + GtDDD233*invgamt12 + GtDDD333*invgamt13
;

const auto
Gt211
=
GtDDD111*invgamt12 + GtDDD211*invgamt22 + GtDDD311*invgamt23
;

const auto
Gt212
=
GtDDD112*invgamt12 + GtDDD212*invgamt22 + GtDDD312*invgamt23
;

const auto
Gt213
=
GtDDD113*invgamt12 + GtDDD213*invgamt22 + GtDDD313*invgamt23
;

const auto
Gt222
=
GtDDD122*invgamt12 + GtDDD222*invgamt22 + GtDDD322*invgamt23
;

const auto
Gt223
=
GtDDD123*invgamt12 + GtDDD223*invgamt22 + GtDDD323*invgamt23
;

const auto
Gt233
=
GtDDD133*invgamt12 + GtDDD233*invgamt22 + GtDDD333*invgamt23
;

const auto
Gt311
=
GtDDD111*invgamt13 + GtDDD211*invgamt23 + GtDDD311*invgamt33
;

const auto
Gt312
=
GtDDD112*invgamt13 + GtDDD212*invgamt23 + GtDDD312*invgamt33
;

const auto
Gt313
=
GtDDD113*invgamt13 + GtDDD213*invgamt23 + GtDDD313*invgamt33
;

const auto
Gt322
=
GtDDD122*invgamt13 + GtDDD222*invgamt23 + GtDDD322*invgamt33
;

const auto
Gt323
=
GtDDD123*invgamt13 + GtDDD223*invgamt23 + GtDDD323*invgamt33
;

const auto
Gt333
=
GtDDD133*invgamt13 + GtDDD233*invgamt23 + GtDDD333*invgamt33
;

const auto
trGtd1
=
Gt111*invgamt11 + 2*Gt112*invgamt12 + 2*Gt113*invgamt13 + Gt122*invgamt22 +
  2*Gt123*invgamt23 + Gt133*invgamt33
;

const auto
trGtd2
=
Gt211*invgamt11 + 2*Gt212*invgamt12 + 2*Gt213*invgamt13 + Gt222*invgamt22 +
  2*Gt223*invgamt23 + Gt233*invgamt33
;

const auto
trGtd3
=
Gt311*invgamt11 + 2*Gt312*invgamt12 + 2*Gt313*invgamt13 + Gt322*invgamt22 +
  2*Gt323*invgamt23 + Gt333*invgamt33
;

const auto
dgam111
=
(dgamt111 - 2*dlnW1*gamt11)/Power(W,2)
;

const auto
dgam112
=
(dgamt112 - 2*dlnW1*gamt12)/Power(W,2)
;

const auto
dgam113
=
(dgamt113 - 2*dlnW1*gamt13)/Power(W,2)
;

const auto
dgam122
=
(dgamt122 - 2*dlnW1*gamt22)/Power(W,2)
;

const auto
dgam123
=
(dgamt123 - 2*dlnW1*gamt23)/Power(W,2)
;

const auto
dgam133
=
(dgamt133 - 2*dlnW1*gamt33)/Power(W,2)
;

const auto
dgam211
=
(dgamt211 - 2*dlnW2*gamt11)/Power(W,2)
;

const auto
dgam212
=
(dgamt212 - 2*dlnW2*gamt12)/Power(W,2)
;

const auto
dgam213
=
(dgamt213 - 2*dlnW2*gamt13)/Power(W,2)
;

const auto
dgam222
=
(dgamt222 - 2*dlnW2*gamt22)/Power(W,2)
;

const auto
dgam223
=
(dgamt223 - 2*dlnW2*gamt23)/Power(W,2)
;

const auto
dgam233
=
(dgamt233 - 2*dlnW2*gamt33)/Power(W,2)
;

const auto
dgam311
=
(dgamt311 - 2*dlnW3*gamt11)/Power(W,2)
;

const auto
dgam312
=
(dgamt312 - 2*dlnW3*gamt12)/Power(W,2)
;

const auto
dgam313
=
(dgamt313 - 2*dlnW3*gamt13)/Power(W,2)
;

const auto
dgam322
=
(dgamt322 - 2*dlnW3*gamt22)/Power(W,2)
;

const auto
dgam323
=
(dgamt323 - 2*dlnW3*gamt23)/Power(W,2)
;

const auto
dgam333
=
(dgamt333 - 2*dlnW3*gamt33)/Power(W,2)
;

const auto
GamDDD111
=
dgam111/2.
;

const auto
GamDDD112
=
dgam211/2.
;

const auto
GamDDD113
=
dgam311/2.
;

const auto
GamDDD122
=
-0.5*dgam122 + dgam212
;

const auto
GamDDD123
=
(-dgam123 + dgam213 + dgam312)/2.
;

const auto
GamDDD133
=
-0.5*dgam133 + dgam313
;

const auto
GamDDD211
=
dgam112 - dgam211/2.
;

const auto
GamDDD212
=
dgam122/2.
;

const auto
GamDDD213
=
(dgam123 - dgam213 + dgam312)/2.
;

const auto
GamDDD222
=
dgam222/2.
;

const auto
GamDDD223
=
dgam322/2.
;

const auto
GamDDD233
=
-0.5*dgam233 + dgam323
;

const auto
GamDDD311
=
dgam113 - dgam311/2.
;

const auto
GamDDD312
=
(dgam123 + dgam213 - dgam312)/2.
;

const auto
GamDDD313
=
dgam133/2.
;

const auto
GamDDD322
=
dgam223 - dgam322/2.
;

const auto
GamDDD323
=
dgam233/2.
;

const auto
GamDDD333
=
dgam333/2.
;

const auto
Gam111
=
GamDDD111*invgam11 + GamDDD211*invgam12 + GamDDD311*invgam13
;

const auto
Gam112
=
GamDDD112*invgam11 + GamDDD212*invgam12 + GamDDD312*invgam13
;

const auto
Gam113
=
GamDDD113*invgam11 + GamDDD213*invgam12 + GamDDD313*invgam13
;

const auto
Gam122
=
GamDDD122*invgam11 + GamDDD222*invgam12 + GamDDD322*invgam13
;

const auto
Gam123
=
GamDDD123*invgam11 + GamDDD223*invgam12 + GamDDD323*invgam13
;

const auto
Gam133
=
GamDDD133*invgam11 + GamDDD233*invgam12 + GamDDD333*invgam13
;

const auto
Gam211
=
GamDDD111*invgam12 + GamDDD211*invgam22 + GamDDD311*invgam23
;

const auto
Gam212
=
GamDDD112*invgam12 + GamDDD212*invgam22 + GamDDD312*invgam23
;

const auto
Gam213
=
GamDDD113*invgam12 + GamDDD213*invgam22 + GamDDD313*invgam23
;

const auto
Gam222
=
GamDDD122*invgam12 + GamDDD222*invgam22 + GamDDD322*invgam23
;

const auto
Gam223
=
GamDDD123*invgam12 + GamDDD223*invgam22 + GamDDD323*invgam23
;

const auto
Gam233
=
GamDDD133*invgam12 + GamDDD233*invgam22 + GamDDD333*invgam23
;

const auto
Gam311
=
GamDDD111*invgam13 + GamDDD211*invgam23 + GamDDD311*invgam33
;

const auto
Gam312
=
GamDDD112*invgam13 + GamDDD212*invgam23 + GamDDD312*invgam33
;

const auto
Gam313
=
GamDDD113*invgam13 + GamDDD213*invgam23 + GamDDD313*invgam33
;

const auto
Gam322
=
GamDDD122*invgam13 + GamDDD222*invgam23 + GamDDD322*invgam33
;

const auto
Gam323
=
GamDDD123*invgam13 + GamDDD223*invgam23 + GamDDD323*invgam33
;

const auto
Gam333
=
GamDDD133*invgam13 + GamDDD233*invgam23 + GamDDD333*invgam33
;

const auto
exAtUU11
=
exAt11*Power(invgamt11,2) + 2*exAt12*invgamt11*invgamt12 +
  exAt22*Power(invgamt12,2) + 2*exAt13*invgamt11*invgamt13 +
  2*exAt23*invgamt12*invgamt13 + exAt33*Power(invgamt13,2)
;

const auto
exAtUU12
=
exAt11*invgamt11*invgamt12 + exAt13*invgamt12*invgamt13 +
  exAt22*invgamt12*invgamt22 + exAt23*invgamt13*invgamt22 +
  exAt12*(Power(invgamt12,2) + invgamt11*invgamt22) +
  exAt13*invgamt11*invgamt23 + exAt23*invgamt12*invgamt23 +
  exAt33*invgamt13*invgamt23
;

const auto
exAtUU13
=
exAt11*invgamt11*invgamt13 + exAt12*invgamt12*invgamt13 +
  exAt13*Power(invgamt13,2) + exAt12*invgamt11*invgamt23 +
  exAt22*invgamt12*invgamt23 + exAt23*invgamt13*invgamt23 +
  exAt13*invgamt11*invgamt33 + exAt23*invgamt12*invgamt33 +
  exAt33*invgamt13*invgamt33
;

const auto
exAtUU22
=
exAt11*Power(invgamt12,2) + 2*exAt12*invgamt12*invgamt22 +
  exAt22*Power(invgamt22,2) + 2*exAt13*invgamt12*invgamt23 +
  2*exAt23*invgamt22*invgamt23 + exAt33*Power(invgamt23,2)
;

const auto
exAtUU23
=
exAt11*invgamt12*invgamt13 + exAt12*invgamt13*invgamt22 +
  exAt12*invgamt12*invgamt23 + exAt13*invgamt13*invgamt23 +
  exAt22*invgamt22*invgamt23 + exAt23*Power(invgamt23,2) +
  exAt13*invgamt12*invgamt33 + exAt23*invgamt22*invgamt33 +
  exAt33*invgamt23*invgamt33
;

const auto
exAtUU33
=
exAt11*Power(invgamt13,2) + 2*exAt12*invgamt13*invgamt23 +
  exAt22*Power(invgamt23,2) + 2*exAt13*invgamt13*invgamt33 +
  2*exAt23*invgamt23*invgamt33 + exAt33*Power(invgamt33,2)
;

const auto
tDtDW11
=
ddW11 - dW1*Gt111 - dW2*Gt211 - dW3*Gt311
;

const auto
tDtDW12
=
ddW12 - dW1*Gt112 - dW2*Gt212 - dW3*Gt312
;

const auto
tDtDW13
=
ddW13 - dW1*Gt113 - dW2*Gt213 - dW3*Gt313
;

const auto
tDtDW22
=
ddW22 - dW1*Gt122 - dW2*Gt222 - dW3*Gt322
;

const auto
tDtDW23
=
ddW23 - dW1*Gt123 - dW2*Gt223 - dW3*Gt323
;

const auto
tDtDW33
=
ddW33 - dW1*Gt133 - dW2*Gt233 - dW3*Gt333
;

const auto
DDalpha11
=
ddalpha11 - dalpha1*Gam111 - dalpha2*Gam211 - dalpha3*Gam311
;

const auto
DDalpha12
=
ddalpha12 - dalpha1*Gam112 - dalpha2*Gam212 - dalpha3*Gam312
;

const auto
DDalpha13
=
ddalpha13 - dalpha1*Gam113 - dalpha2*Gam213 - dalpha3*Gam313
;

const auto
DDalpha22
=
ddalpha22 - dalpha1*Gam122 - dalpha2*Gam222 - dalpha3*Gam322
;

const auto
DDalpha23
=
ddalpha23 - dalpha1*Gam123 - dalpha2*Gam223 - dalpha3*Gam323
;

const auto
DDalpha33
=
ddalpha33 - dalpha1*Gam133 - dalpha2*Gam233 - dalpha3*Gam333
;

const auto
RtW11
=
(tDtDW11 + gamt11*invgamt11*tDtDW11 +
    gamt11*(2*invgamt13*tDtDW13 + invgamt22*tDtDW22 + 2*invgamt23*tDtDW23 +
       invgamt33*tDtDW33 - 2*Power(dlnW1,2)*invgamt11*W -
       4*dlnW1*dlnW3*invgamt13*W - 2*Power(dlnW2,2)*invgamt22*W -
       4*dlnW2*dlnW3*invgamt23*W - 2*Power(dlnW3,2)*invgamt33*W +
       2*invgamt12*(tDtDW12 - 2*dlnW1*dlnW2*W)))/W
;

const auto
RtW12
=
(tDtDW12 + gamt12*(2*invgamt12*tDtDW12 + 2*invgamt13*tDtDW13 +
       invgamt22*tDtDW22 + 2*invgamt23*tDtDW23 + invgamt33*tDtDW33 -
       4*dlnW1*dlnW2*invgamt12*W - 4*dlnW1*dlnW3*invgamt13*W -
       2*Power(dlnW2,2)*invgamt22*W - 4*dlnW2*dlnW3*invgamt23*W -
       2*Power(dlnW3,2)*invgamt33*W +
       invgamt11*(tDtDW11 - 2*Power(dlnW1,2)*W)))/W
;

const auto
RtW13
=
(tDtDW13 + gamt13*(2*invgamt12*tDtDW12 + 2*invgamt13*tDtDW13 +
       invgamt22*tDtDW22 + 2*invgamt23*tDtDW23 + invgamt33*tDtDW33 -
       4*dlnW1*dlnW2*invgamt12*W - 4*dlnW1*dlnW3*invgamt13*W -
       2*Power(dlnW2,2)*invgamt22*W - 4*dlnW2*dlnW3*invgamt23*W -
       2*Power(dlnW3,2)*invgamt33*W +
       invgamt11*(tDtDW11 - 2*Power(dlnW1,2)*W)))/W
;

const auto
RtW22
=
(tDtDW22 + gamt22*(2*invgamt12*tDtDW12 + 2*invgamt13*tDtDW13 +
       invgamt22*tDtDW22 + 2*invgamt23*tDtDW23 + invgamt33*tDtDW33 -
       4*dlnW1*dlnW2*invgamt12*W - 4*dlnW1*dlnW3*invgamt13*W -
       2*Power(dlnW2,2)*invgamt22*W - 4*dlnW2*dlnW3*invgamt23*W -
       2*Power(dlnW3,2)*invgamt33*W +
       invgamt11*(tDtDW11 - 2*Power(dlnW1,2)*W)))/W
;

const auto
RtW23
=
(tDtDW23 + gamt23*(2*invgamt12*tDtDW12 + 2*invgamt13*tDtDW13 +
       invgamt22*tDtDW22 + 2*invgamt23*tDtDW23 + invgamt33*tDtDW33 -
       4*dlnW1*dlnW2*invgamt12*W - 4*dlnW1*dlnW3*invgamt13*W -
       2*Power(dlnW2,2)*invgamt22*W - 4*dlnW2*dlnW3*invgamt23*W -
       2*Power(dlnW3,2)*invgamt33*W +
       invgamt11*(tDtDW11 - 2*Power(dlnW1,2)*W)))/W
;

const auto
RtW33
=
(tDtDW33 + gamt33*(2*invgamt12*tDtDW12 + 2*invgamt13*tDtDW13 +
       invgamt22*tDtDW22 + 2*invgamt23*tDtDW23 + invgamt33*tDtDW33 -
       4*dlnW1*dlnW2*invgamt12*W - 4*dlnW1*dlnW3*invgamt13*W -
       2*Power(dlnW2,2)*invgamt22*W - 4*dlnW2*dlnW3*invgamt23*W -
       2*Power(dlnW3,2)*invgamt33*W +
       invgamt11*(tDtDW11 - 2*Power(dlnW1,2)*W)))/W
;

const auto
Rt11
=
dtrGt11*gamt11 + dtrGt12*gamt12 + dtrGt13*gamt13 + 3*Gt111*GtDDU111 +
  3*Gt112*GtDDU112 + 3*Gt113*GtDDU113 + 2*Gt211*GtDDU121 +
  2*Gt212*GtDDU122 + 2*Gt213*GtDDU123 + 2*Gt311*GtDDU131 +
  2*Gt312*GtDDU132 + 2*Gt313*GtDDU133 + Gt211*GtDDU211 + Gt212*GtDDU212 +
  Gt213*GtDDU213 + Gt311*GtDDU311 + Gt312*GtDDU312 + Gt313*GtDDU313 -
  (ddgamt1111*invgamt11)/2. - ddgamt1211*invgamt12 - ddgamt1311*invgamt13 -
  (ddgamt2211*invgamt22)/2. - ddgamt2311*invgamt23 -
  (ddgamt3311*invgamt33)/2. + GtDDD111*trGtd1 + GtDDD112*trGtd2 +
  GtDDD113*trGtd3
;

const auto
Rt12
=
(dtrGt21*gamt11 + dtrGt11*gamt12 + dtrGt22*gamt12 + dtrGt23*gamt13 +
    dtrGt12*gamt22 + dtrGt13*gamt23 + 2*Gt112*GtDDU111 + 2*Gt122*GtDDU112 +
    2*Gt123*GtDDU113 + 2*Gt111*GtDDU121 + 2*Gt212*GtDDU121 +
    2*Gt112*GtDDU122 + 2*Gt222*GtDDU122 + 2*Gt113*GtDDU123 +
    2*Gt223*GtDDU123 + 2*Gt312*GtDDU131 + 2*Gt322*GtDDU132 +
    2*Gt323*GtDDU133 + 2*Gt111*GtDDU211 + 2*Gt112*GtDDU212 +
    2*Gt113*GtDDU213 + 4*Gt211*GtDDU221 + 4*Gt212*GtDDU222 +
    4*Gt213*GtDDU223 + 2*Gt311*GtDDU231 + 2*Gt312*GtDDU232 +
    2*Gt313*GtDDU233 + 2*Gt311*GtDDU321 + 2*Gt312*GtDDU322 +
    2*Gt313*GtDDU323 - ddgamt1112*invgamt11 - 2*ddgamt1212*invgamt12 -
    2*ddgamt1312*invgamt13 - ddgamt2212*invgamt22 -
    2*ddgamt2312*invgamt23 - ddgamt3312*invgamt33 + GtDDD112*trGtd1 +
    GtDDD211*trGtd1 + GtDDD122*trGtd2 + GtDDD212*trGtd2 + GtDDD123*trGtd3 +
    GtDDD213*trGtd3)/2.
;

const auto
Rt13
=
(dtrGt31*gamt11 + dtrGt32*gamt12 + dtrGt11*gamt13 + dtrGt33*gamt13 +
    dtrGt12*gamt23 + dtrGt13*gamt33 + 2*Gt113*GtDDU111 + 2*Gt123*GtDDU112 +
    2*Gt133*GtDDU113 + 2*Gt213*GtDDU121 + 2*Gt223*GtDDU122 +
    2*Gt233*GtDDU123 + 2*Gt111*GtDDU131 + 2*Gt313*GtDDU131 +
    2*Gt112*GtDDU132 + 2*Gt323*GtDDU132 + 2*Gt113*GtDDU133 +
    2*Gt333*GtDDU133 + 2*Gt211*GtDDU231 + 2*Gt212*GtDDU232 +
    2*Gt213*GtDDU233 + 2*Gt111*GtDDU311 + 2*Gt112*GtDDU312 +
    2*Gt113*GtDDU313 + 2*Gt211*GtDDU321 + 2*Gt212*GtDDU322 +
    2*Gt213*GtDDU323 + 4*Gt311*GtDDU331 + 4*Gt312*GtDDU332 +
    4*Gt313*GtDDU333 - ddgamt1113*invgamt11 - 2*ddgamt1213*invgamt12 -
    2*ddgamt1313*invgamt13 - ddgamt2213*invgamt22 -
    2*ddgamt2313*invgamt23 - ddgamt3313*invgamt33 + GtDDD113*trGtd1 +
    GtDDD311*trGtd1 + GtDDD123*trGtd2 + GtDDD312*trGtd2 + GtDDD133*trGtd3 +
    GtDDD313*trGtd3)/2.
;

const auto
Rt22
=
dtrGt21*gamt12 + dtrGt22*gamt22 + dtrGt23*gamt23 + Gt112*GtDDU121 +
  Gt122*GtDDU122 + Gt123*GtDDU123 + 2*Gt112*GtDDU211 + 2*Gt122*GtDDU212 +
  2*Gt123*GtDDU213 + 3*Gt212*GtDDU221 + 3*Gt222*GtDDU222 +
  3*Gt223*GtDDU223 + 2*Gt312*GtDDU231 + 2*Gt322*GtDDU232 +
  2*Gt323*GtDDU233 + Gt312*GtDDU321 + Gt322*GtDDU322 + Gt323*GtDDU323 -
  (ddgamt1122*invgamt11)/2. - ddgamt1222*invgamt12 - ddgamt1322*invgamt13 -
  (ddgamt2222*invgamt22)/2. - ddgamt2322*invgamt23 -
  (ddgamt3322*invgamt33)/2. + GtDDD212*trGtd1 + GtDDD222*trGtd2 +
  GtDDD223*trGtd3
;

const auto
Rt23
=
(dtrGt31*gamt12 + dtrGt21*gamt13 + dtrGt32*gamt22 + dtrGt22*gamt23 +
    dtrGt33*gamt23 + dtrGt23*gamt33 + 2*Gt112*GtDDU131 + 2*Gt122*GtDDU132 +
    2*Gt123*GtDDU133 + 2*Gt113*GtDDU211 + 2*Gt123*GtDDU212 +
    2*Gt133*GtDDU213 + 2*Gt213*GtDDU221 + 2*Gt223*GtDDU222 +
    2*Gt233*GtDDU223 + 2*Gt212*GtDDU231 + 2*Gt313*GtDDU231 +
    2*Gt222*GtDDU232 + 2*Gt323*GtDDU232 + 2*Gt223*GtDDU233 +
    2*Gt333*GtDDU233 + 2*Gt112*GtDDU311 + 2*Gt122*GtDDU312 +
    2*Gt123*GtDDU313 + 2*Gt212*GtDDU321 + 2*Gt222*GtDDU322 +
    2*Gt223*GtDDU323 + 4*Gt312*GtDDU331 + 4*Gt322*GtDDU332 +
    4*Gt323*GtDDU333 - ddgamt1123*invgamt11 - 2*ddgamt1223*invgamt12 -
    2*ddgamt1323*invgamt13 - ddgamt2223*invgamt22 -
    2*ddgamt2323*invgamt23 - ddgamt3323*invgamt33 + GtDDD213*trGtd1 +
    GtDDD312*trGtd1 + GtDDD223*trGtd2 + GtDDD322*trGtd2 + GtDDD233*trGtd3 +
    GtDDD323*trGtd3)/2.
;

const auto
Rt33
=
dtrGt31*gamt13 + dtrGt32*gamt23 + dtrGt33*gamt33 + Gt113*GtDDU131 +
  Gt123*GtDDU132 + Gt133*GtDDU133 + Gt213*GtDDU231 + Gt223*GtDDU232 +
  Gt233*GtDDU233 + 2*Gt113*GtDDU311 + 2*Gt123*GtDDU312 + 2*Gt133*GtDDU313 +
  2*Gt213*GtDDU321 + 2*Gt223*GtDDU322 + 2*Gt233*GtDDU323 +
  3*Gt313*GtDDU331 + 3*Gt323*GtDDU332 + 3*Gt333*GtDDU333 -
  (ddgamt1133*invgamt11)/2. - ddgamt1233*invgamt12 - ddgamt1333*invgamt13 -
  (ddgamt2233*invgamt22)/2. - ddgamt2333*invgamt23 -
  (ddgamt3333*invgamt33)/2. + GtDDD313*trGtd1 + GtDDD323*trGtd2 +
  GtDDD333*trGtd3
;

const auto
R11
=
Rt11 + RtW11
;

const auto
R12
=
Rt12 + RtW12
;

const auto
R13
=
Rt13 + RtW13
;

const auto
R22
=
Rt22 + RtW22
;

const auto
R23
=
Rt23 + RtW23
;

const auto
R33
=
Rt33 + RtW33
;

const auto
trR
=
invgam11*R11 + 2*invgam12*R12 + 2*invgam13*R13 + invgam22*R22 +
  2*invgam23*R23 + invgam33*R33
;

const auto
rho
=
(Power(beta1,2)*eT11 + Power(beta2,2)*eT22 + 2*beta2*beta3*eT23 +
    Power(beta3,2)*eT33 + 2*beta1*(beta2*eT12 + beta3*eT13 - eTt1) -
    2*beta2*eTt2 - 2*beta3*eTt3 + eTtt)/Power(alpha,2)
;

const auto
Sm1
=
(beta1*eT11 + beta2*eT12 + beta3*eT13 - eTt1)/alpha
;

const auto
Sm2
=
(beta1*eT12 + beta2*eT22 + beta3*eT23 - eTt2)/alpha
;

const auto
Sm3
=
(beta1*eT13 + beta2*eT23 + beta3*eT33 - eTt3)/alpha
;

const auto
Ss11
=
eT11
;

const auto
Ss12
=
eT12
;

const auto
Ss13
=
eT13
;

const auto
Ss22
=
eT22
;

const auto
Ss23
=
eT23
;

const auto
Ss33
=
eT33
;

const auto
trSs
=
invgam11*Ss11 + 2*invgam12*Ss12 + 2*invgam13*Ss13 + invgam22*Ss22 +
  2*invgam23*Ss23 + invgam33*Ss33
;


dtW[ijk]
=
beta1*dW1 + beta2*dW2 + beta3*dW3 - ((dbeta11 + dbeta22 + dbeta33)*W)/3. +
  (alpha*exKh*W)/3. + (2*alpha*Theta*W)/3.
;

dtgamt11[ijk]
=
beta1*dgamt111 + beta2*dgamt211 + beta3*dgamt311 - 2*alpha*exAt11 +
  2*dbeta11*gamt11 - (2*(dbeta11 + dbeta22 + dbeta33)*gamt11)/3. +
  2*dbeta12*gamt12 + 2*dbeta13*gamt13
;

dtgamt12[ijk]
=
beta1*dgamt112 + beta2*dgamt212 + beta3*dgamt312 - 2*alpha*exAt12 +
  dbeta21*gamt11 + dbeta11*gamt12 + dbeta22*gamt12 -
  (2*(dbeta11 + dbeta22 + dbeta33)*gamt12)/3. + dbeta23*gamt13 +
  dbeta12*gamt22 + dbeta13*gamt23
;

dtgamt13[ijk]
=
beta1*dgamt113 + beta2*dgamt213 + beta3*dgamt313 - 2*alpha*exAt13 +
  dbeta31*gamt11 + dbeta32*gamt12 + dbeta11*gamt13 + dbeta33*gamt13 -
  (2*(dbeta11 + dbeta22 + dbeta33)*gamt13)/3. + dbeta12*gamt23 +
  dbeta13*gamt33
;

dtgamt22[ijk]
=
beta1*dgamt122 + beta2*dgamt222 + beta3*dgamt322 - 2*alpha*exAt22 +
  2*dbeta21*gamt12 + 2*dbeta22*gamt22 -
  (2*(dbeta11 + dbeta22 + dbeta33)*gamt22)/3. + 2*dbeta23*gamt23
;

dtgamt23[ijk]
=
beta1*dgamt123 + beta2*dgamt223 + beta3*dgamt323 - 2*alpha*exAt23 +
  dbeta31*gamt12 + dbeta21*gamt13 + dbeta32*gamt22 + dbeta22*gamt23 +
  dbeta33*gamt23 - (2*(dbeta11 + dbeta22 + dbeta33)*gamt23)/3. +
  dbeta23*gamt33
;

dtgamt33[ijk]
=
beta1*dgamt133 + beta2*dgamt233 + beta3*dgamt333 - 2*alpha*exAt33 +
  2*dbeta31*gamt13 + 2*dbeta32*gamt23 + 2*dbeta33*gamt33 -
  (2*(dbeta11 + dbeta22 + dbeta33)*gamt33)/3.
;

dtexKh[ijk]
=
beta1*dexKh1 + beta2*dexKh2 + beta3*dexKh3 + alpha*exAt11*exAtUU11 +
  2*alpha*exAt12*exAtUU12 + 2*alpha*exAt13*exAtUU13 +
  alpha*exAt22*exAtUU22 + 2*alpha*exAt23*exAtUU23 + alpha*exAt33*exAtUU33 +
  (alpha*Power(exKh,2))/3. - DDalpha11*invgam11 - 2*DDalpha12*invgam12 -
  2*DDalpha13*invgam13 - DDalpha22*invgam22 - 2*DDalpha23*invgam23 -
  DDalpha33*invgam33 + 4*alpha*cpi*rho + alpha*ckappa1*Theta -
  alpha*ckappa1*ckappa2*Theta + (4*alpha*exKh*Theta)/3. +
  (4*alpha*Power(Theta,2))/3. + 4*alpha*cpi*trSs
;

dtexAt11[ijk]
=
(3*beta1*dexAt111 + 3*beta2*dexAt211 + 3*beta3*dexAt311 +
    4*dbeta11*exAt11 - 2*dbeta22*exAt11 - 2*dbeta33*exAt11 +
    6*dbeta12*exAt12 + 6*dbeta13*exAt13 + 3*alpha*exAt11*exKh -
    6*alpha*Power(exAt11,2)*invgamt11 - 12*alpha*exAt11*exAt12*invgamt12 -
    12*alpha*exAt11*exAt13*invgamt13 - 6*alpha*Power(exAt12,2)*invgamt22 -
    12*alpha*exAt12*exAt13*invgamt23 - 6*alpha*Power(exAt13,2)*invgamt33 +
    6*alpha*exAt11*Theta - 3*DDalpha11*Power(W,2) +
    DDalpha11*gam11*invgam11*Power(W,2) +
    2*DDalpha12*gam11*invgam12*Power(W,2) +
    2*DDalpha13*gam11*invgam13*Power(W,2) +
    DDalpha22*gam11*invgam22*Power(W,2) +
    2*DDalpha23*gam11*invgam23*Power(W,2) +
    DDalpha33*gam11*invgam33*Power(W,2) + 3*alpha*R11*Power(W,2) -
    alpha*gam11*invgam11*R11*Power(W,2) -
    2*alpha*gam11*invgam12*R12*Power(W,2) -
    2*alpha*gam11*invgam13*R13*Power(W,2) -
    alpha*gam11*invgam22*R22*Power(W,2) -
    2*alpha*gam11*invgam23*R23*Power(W,2) -
    alpha*gam11*invgam33*R33*Power(W,2) - 24*alpha*cpi*Ss11*Power(W,2) +
    8*alpha*cpi*gam11*invgam11*Ss11*Power(W,2) +
    16*alpha*cpi*gam11*invgam12*Ss12*Power(W,2) +
    16*alpha*cpi*gam11*invgam13*Ss13*Power(W,2) +
    8*alpha*cpi*gam11*invgam22*Ss22*Power(W,2) +
    16*alpha*cpi*gam11*invgam23*Ss23*Power(W,2) +
    8*alpha*cpi*gam11*invgam33*Ss33*Power(W,2))/3.
;

dtexAt12[ijk]
=
(3*beta1*dexAt112 + 3*beta2*dexAt212 + 3*beta3*dexAt312 +
    3*dbeta21*exAt11 + dbeta11*exAt12 + dbeta22*exAt12 - 2*dbeta33*exAt12 +
    3*dbeta23*exAt13 + 3*dbeta12*exAt22 + 3*dbeta13*exAt23 +
    3*alpha*exAt12*exKh - 6*alpha*exAt11*exAt12*invgamt11 -
    6*alpha*Power(exAt12,2)*invgamt12 - 6*alpha*exAt11*exAt22*invgamt12 -
    6*alpha*exAt12*exAt13*invgamt13 - 6*alpha*exAt11*exAt23*invgamt13 -
    6*alpha*exAt12*exAt22*invgamt22 - 6*alpha*exAt13*exAt22*invgamt23 -
    6*alpha*exAt12*exAt23*invgamt23 - 6*alpha*exAt13*exAt23*invgamt33 +
    6*alpha*exAt12*Theta - 3*DDalpha12*Power(W,2) +
    DDalpha11*gam12*invgam11*Power(W,2) +
    2*DDalpha12*gam12*invgam12*Power(W,2) +
    2*DDalpha13*gam12*invgam13*Power(W,2) +
    DDalpha22*gam12*invgam22*Power(W,2) +
    2*DDalpha23*gam12*invgam23*Power(W,2) +
    DDalpha33*gam12*invgam33*Power(W,2) -
    alpha*gam12*invgam11*R11*Power(W,2) + 3*alpha*R12*Power(W,2) -
    2*alpha*gam12*invgam12*R12*Power(W,2) -
    2*alpha*gam12*invgam13*R13*Power(W,2) -
    alpha*gam12*invgam22*R22*Power(W,2) -
    2*alpha*gam12*invgam23*R23*Power(W,2) -
    alpha*gam12*invgam33*R33*Power(W,2) +
    8*alpha*cpi*gam12*invgam11*Ss11*Power(W,2) -
    24*alpha*cpi*Ss12*Power(W,2) +
    16*alpha*cpi*gam12*invgam12*Ss12*Power(W,2) +
    16*alpha*cpi*gam12*invgam13*Ss13*Power(W,2) +
    8*alpha*cpi*gam12*invgam22*Ss22*Power(W,2) +
    16*alpha*cpi*gam12*invgam23*Ss23*Power(W,2) +
    8*alpha*cpi*gam12*invgam33*Ss33*Power(W,2))/3.
;

dtexAt13[ijk]
=
(3*beta1*dexAt113 + 3*beta2*dexAt213 + 3*beta3*dexAt313 +
    3*dbeta31*exAt11 + 3*dbeta32*exAt12 + dbeta11*exAt13 -
    2*dbeta22*exAt13 + dbeta33*exAt13 + 3*dbeta12*exAt23 +
    3*dbeta13*exAt33 + 3*alpha*exAt13*exKh -
    6*alpha*exAt11*exAt13*invgamt11 - 6*alpha*exAt12*exAt13*invgamt12 -
    6*alpha*exAt11*exAt23*invgamt12 - 6*alpha*Power(exAt13,2)*invgamt13 -
    6*alpha*exAt11*exAt33*invgamt13 - 6*alpha*exAt12*exAt23*invgamt22 -
    6*alpha*exAt13*exAt23*invgamt23 - 6*alpha*exAt12*exAt33*invgamt23 -
    6*alpha*exAt13*exAt33*invgamt33 + 6*alpha*exAt13*Theta -
    3*DDalpha13*Power(W,2) + DDalpha11*gam13*invgam11*Power(W,2) +
    2*DDalpha12*gam13*invgam12*Power(W,2) +
    2*DDalpha13*gam13*invgam13*Power(W,2) +
    DDalpha22*gam13*invgam22*Power(W,2) +
    2*DDalpha23*gam13*invgam23*Power(W,2) +
    DDalpha33*gam13*invgam33*Power(W,2) -
    alpha*gam13*invgam11*R11*Power(W,2) -
    2*alpha*gam13*invgam12*R12*Power(W,2) + 3*alpha*R13*Power(W,2) -
    2*alpha*gam13*invgam13*R13*Power(W,2) -
    alpha*gam13*invgam22*R22*Power(W,2) -
    2*alpha*gam13*invgam23*R23*Power(W,2) -
    alpha*gam13*invgam33*R33*Power(W,2) +
    8*alpha*cpi*gam13*invgam11*Ss11*Power(W,2) +
    16*alpha*cpi*gam13*invgam12*Ss12*Power(W,2) -
    24*alpha*cpi*Ss13*Power(W,2) +
    16*alpha*cpi*gam13*invgam13*Ss13*Power(W,2) +
    8*alpha*cpi*gam13*invgam22*Ss22*Power(W,2) +
    16*alpha*cpi*gam13*invgam23*Ss23*Power(W,2) +
    8*alpha*cpi*gam13*invgam33*Ss33*Power(W,2))/3.
;

dtexAt22[ijk]
=
(3*beta1*dexAt122 + 3*beta2*dexAt222 + 3*beta3*dexAt322 +
    6*dbeta21*exAt12 - 2*dbeta11*exAt22 + 4*dbeta22*exAt22 -
    2*dbeta33*exAt22 + 6*dbeta23*exAt23 + 3*alpha*exAt22*exKh -
    6*alpha*Power(exAt12,2)*invgamt11 - 12*alpha*exAt12*exAt22*invgamt12 -
    12*alpha*exAt12*exAt23*invgamt13 - 6*alpha*Power(exAt22,2)*invgamt22 -
    12*alpha*exAt22*exAt23*invgamt23 - 6*alpha*Power(exAt23,2)*invgamt33 +
    6*alpha*exAt22*Theta - 3*DDalpha22*Power(W,2) +
    DDalpha11*gam22*invgam11*Power(W,2) +
    2*DDalpha12*gam22*invgam12*Power(W,2) +
    2*DDalpha13*gam22*invgam13*Power(W,2) +
    DDalpha22*gam22*invgam22*Power(W,2) +
    2*DDalpha23*gam22*invgam23*Power(W,2) +
    DDalpha33*gam22*invgam33*Power(W,2) -
    alpha*gam22*invgam11*R11*Power(W,2) -
    2*alpha*gam22*invgam12*R12*Power(W,2) -
    2*alpha*gam22*invgam13*R13*Power(W,2) + 3*alpha*R22*Power(W,2) -
    alpha*gam22*invgam22*R22*Power(W,2) -
    2*alpha*gam22*invgam23*R23*Power(W,2) -
    alpha*gam22*invgam33*R33*Power(W,2) +
    8*alpha*cpi*gam22*invgam11*Ss11*Power(W,2) +
    16*alpha*cpi*gam22*invgam12*Ss12*Power(W,2) +
    16*alpha*cpi*gam22*invgam13*Ss13*Power(W,2) -
    24*alpha*cpi*Ss22*Power(W,2) +
    8*alpha*cpi*gam22*invgam22*Ss22*Power(W,2) +
    16*alpha*cpi*gam22*invgam23*Ss23*Power(W,2) +
    8*alpha*cpi*gam22*invgam33*Ss33*Power(W,2))/3.
;

dtexAt23[ijk]
=
(3*beta1*dexAt123 + 3*beta2*dexAt223 + 3*beta3*dexAt323 +
    3*dbeta31*exAt12 + 3*dbeta21*exAt13 + 3*dbeta32*exAt22 -
    2*dbeta11*exAt23 + dbeta22*exAt23 + dbeta33*exAt23 + 3*dbeta23*exAt33 +
    3*alpha*exAt23*exKh - 6*alpha*exAt12*exAt13*invgamt11 -
    6*alpha*exAt13*exAt22*invgamt12 - 6*alpha*exAt12*exAt23*invgamt12 -
    6*alpha*exAt13*exAt23*invgamt13 - 6*alpha*exAt12*exAt33*invgamt13 -
    6*alpha*exAt22*exAt23*invgamt22 - 6*alpha*Power(exAt23,2)*invgamt23 -
    6*alpha*exAt22*exAt33*invgamt23 - 6*alpha*exAt23*exAt33*invgamt33 +
    6*alpha*exAt23*Theta - 3*DDalpha23*Power(W,2) +
    DDalpha11*gam23*invgam11*Power(W,2) +
    2*DDalpha12*gam23*invgam12*Power(W,2) +
    2*DDalpha13*gam23*invgam13*Power(W,2) +
    DDalpha22*gam23*invgam22*Power(W,2) +
    2*DDalpha23*gam23*invgam23*Power(W,2) +
    DDalpha33*gam23*invgam33*Power(W,2) -
    alpha*gam23*invgam11*R11*Power(W,2) -
    2*alpha*gam23*invgam12*R12*Power(W,2) -
    2*alpha*gam23*invgam13*R13*Power(W,2) -
    alpha*gam23*invgam22*R22*Power(W,2) + 3*alpha*R23*Power(W,2) -
    2*alpha*gam23*invgam23*R23*Power(W,2) -
    alpha*gam23*invgam33*R33*Power(W,2) +
    8*alpha*cpi*gam23*invgam11*Ss11*Power(W,2) +
    16*alpha*cpi*gam23*invgam12*Ss12*Power(W,2) +
    16*alpha*cpi*gam23*invgam13*Ss13*Power(W,2) +
    8*alpha*cpi*gam23*invgam22*Ss22*Power(W,2) -
    24*alpha*cpi*Ss23*Power(W,2) +
    16*alpha*cpi*gam23*invgam23*Ss23*Power(W,2) +
    8*alpha*cpi*gam23*invgam33*Ss33*Power(W,2))/3.
;

dtexAt33[ijk]
=
(3*beta1*dexAt133 + 3*beta2*dexAt233 + 3*beta3*dexAt333 +
    6*dbeta31*exAt13 + 6*dbeta32*exAt23 - 2*dbeta11*exAt33 -
    2*dbeta22*exAt33 + 4*dbeta33*exAt33 + 3*alpha*exAt33*exKh -
    6*alpha*Power(exAt13,2)*invgamt11 - 12*alpha*exAt13*exAt23*invgamt12 -
    12*alpha*exAt13*exAt33*invgamt13 - 6*alpha*Power(exAt23,2)*invgamt22 -
    12*alpha*exAt23*exAt33*invgamt23 - 6*alpha*Power(exAt33,2)*invgamt33 +
    6*alpha*exAt33*Theta - 3*DDalpha33*Power(W,2) +
    DDalpha11*gam33*invgam11*Power(W,2) +
    2*DDalpha12*gam33*invgam12*Power(W,2) +
    2*DDalpha13*gam33*invgam13*Power(W,2) +
    DDalpha22*gam33*invgam22*Power(W,2) +
    2*DDalpha23*gam33*invgam23*Power(W,2) +
    DDalpha33*gam33*invgam33*Power(W,2) -
    alpha*gam33*invgam11*R11*Power(W,2) -
    2*alpha*gam33*invgam12*R12*Power(W,2) -
    2*alpha*gam33*invgam13*R13*Power(W,2) -
    alpha*gam33*invgam22*R22*Power(W,2) -
    2*alpha*gam33*invgam23*R23*Power(W,2) + 3*alpha*R33*Power(W,2) -
    alpha*gam33*invgam33*R33*Power(W,2) +
    8*alpha*cpi*gam33*invgam11*Ss11*Power(W,2) +
    16*alpha*cpi*gam33*invgam12*Ss12*Power(W,2) +
    16*alpha*cpi*gam33*invgam13*Ss13*Power(W,2) +
    8*alpha*cpi*gam33*invgam22*Ss22*Power(W,2) +
    16*alpha*cpi*gam33*invgam23*Ss23*Power(W,2) -
    24*alpha*cpi*Ss33*Power(W,2) +
    8*alpha*cpi*gam33*invgam33*Ss33*Power(W,2))/3.
;

dttrGt1[ijk]
=
(3*beta1*dtrGt11 + 3*beta2*dtrGt21 + 3*beta3*dtrGt31 - 6*dalpha1*exAtUU11 -
    18*alpha*dlnW1*exAtUU11 - 6*dalpha2*exAtUU12 -
    18*alpha*dlnW2*exAtUU12 - 6*dalpha3*exAtUU13 -
    18*alpha*dlnW3*exAtUU13 + 6*alpha*exAtUU11*Gt111 +
    12*alpha*exAtUU12*Gt112 + 12*alpha*exAtUU13*Gt113 +
    6*alpha*exAtUU22*Gt122 + 12*alpha*exAtUU23*Gt123 +
    6*alpha*exAtUU33*Gt133 + 4*ddbeta111*invgamt11 + ddbeta122*invgamt11 +
    ddbeta133*invgamt11 - 4*alpha*dexKh1*invgamt11 -
    2*alpha*dTheta1*invgamt11 + 7*ddbeta121*invgamt12 +
    ddbeta222*invgamt12 + ddbeta233*invgamt12 - 4*alpha*dexKh2*invgamt12 -
    2*alpha*dTheta2*invgamt12 + 7*ddbeta131*invgamt13 +
    ddbeta232*invgamt13 + ddbeta333*invgamt13 - 4*alpha*dexKh3*invgamt13 -
    2*alpha*dTheta3*invgamt13 + 3*ddbeta221*invgamt22 +
    6*ddbeta231*invgamt23 + 3*ddbeta331*invgamt33 -
    48*alpha*cpi*invgamt11*Sm1 - 48*alpha*cpi*invgamt12*Sm2 -
    48*alpha*cpi*invgamt13*Sm3 - 6*alpha*ckappa1*trGt1 +
    6*alpha*ckappa1*trGtd1 - dbeta11*trGtd1 + 2*dbeta22*trGtd1 +
    2*dbeta33*trGtd1 - 3*dbeta21*trGtd2 - 3*dbeta31*trGtd3)/3.
;

dttrGt2[ijk]
=
(3*beta1*dtrGt12 + 3*beta2*dtrGt22 + 3*beta3*dtrGt32 - 6*dalpha1*exAtUU12 -
    18*alpha*dlnW1*exAtUU12 - 6*dalpha2*exAtUU22 -
    18*alpha*dlnW2*exAtUU22 - 6*dalpha3*exAtUU23 -
    18*alpha*dlnW3*exAtUU23 + 6*alpha*exAtUU11*Gt211 +
    12*alpha*exAtUU12*Gt212 + 12*alpha*exAtUU13*Gt213 +
    6*alpha*exAtUU22*Gt222 + 12*alpha*exAtUU23*Gt223 +
    6*alpha*exAtUU33*Gt233 + 3*ddbeta112*invgamt11 + ddbeta111*invgamt12 +
    7*ddbeta122*invgamt12 + ddbeta133*invgamt12 -
    4*alpha*dexKh1*invgamt12 - 2*alpha*dTheta1*invgamt12 +
    6*ddbeta132*invgamt13 + ddbeta121*invgamt22 + 4*ddbeta222*invgamt22 +
    ddbeta233*invgamt22 - 4*alpha*dexKh2*invgamt22 -
    2*alpha*dTheta2*invgamt22 + ddbeta131*invgamt23 +
    7*ddbeta232*invgamt23 + ddbeta333*invgamt23 -
    4*alpha*dexKh3*invgamt23 - 2*alpha*dTheta3*invgamt23 +
    3*ddbeta332*invgamt33 - 48*alpha*cpi*invgamt12*Sm1 -
    48*alpha*cpi*invgamt22*Sm2 - 48*alpha*cpi*invgamt23*Sm3 -
    6*alpha*ckappa1*trGt2 - 3*dbeta12*trGtd1 + 6*alpha*ckappa1*trGtd2 +
    2*dbeta11*trGtd2 - dbeta22*trGtd2 + 2*dbeta33*trGtd2 - 3*dbeta32*trGtd3)/
  3.
;

dttrGt3[ijk]
=
(3*beta1*dtrGt13 + 3*beta2*dtrGt23 + 3*beta3*dtrGt33 - 6*dalpha1*exAtUU13 -
    18*alpha*dlnW1*exAtUU13 - 6*dalpha2*exAtUU23 -
    18*alpha*dlnW2*exAtUU23 - 6*dalpha3*exAtUU33 -
    18*alpha*dlnW3*exAtUU33 + 6*alpha*exAtUU11*Gt311 +
    12*alpha*exAtUU12*Gt312 + 12*alpha*exAtUU13*Gt313 +
    6*alpha*exAtUU22*Gt322 + 12*alpha*exAtUU23*Gt323 +
    6*alpha*exAtUU33*Gt333 + 3*ddbeta113*invgamt11 +
    6*ddbeta123*invgamt12 + ddbeta111*invgamt13 + ddbeta122*invgamt13 +
    7*ddbeta133*invgamt13 - 4*alpha*dexKh1*invgamt13 -
    2*alpha*dTheta1*invgamt13 + 3*ddbeta223*invgamt22 +
    ddbeta121*invgamt23 + ddbeta222*invgamt23 + 7*ddbeta233*invgamt23 -
    4*alpha*dexKh2*invgamt23 - 2*alpha*dTheta2*invgamt23 +
    ddbeta131*invgamt33 + ddbeta232*invgamt33 + 4*ddbeta333*invgamt33 -
    4*alpha*dexKh3*invgamt33 - 2*alpha*dTheta3*invgamt33 -
    48*alpha*cpi*invgamt13*Sm1 - 48*alpha*cpi*invgamt23*Sm2 -
    48*alpha*cpi*invgamt33*Sm3 - 6*alpha*ckappa1*trGt3 - 3*dbeta13*trGtd1 -
    3*dbeta23*trGtd2 + 6*alpha*ckappa1*trGtd3 + 2*dbeta11*trGtd3 +
    2*dbeta22*trGtd3 - dbeta33*trGtd3)/3.
;

dtTheta[ijk]
=
(6*beta1*dTheta1 + 6*beta2*dTheta2 + 6*beta3*dTheta3 -
    3*alpha*exAt11*exAtUU11 - 6*alpha*exAt12*exAtUU12 -
    6*alpha*exAt13*exAtUU13 - 3*alpha*exAt22*exAtUU22 -
    6*alpha*exAt23*exAtUU23 - 3*alpha*exAt33*exAtUU33 +
    2*alpha*Power(exKh,2) - 48*alpha*cpi*rho - 12*alpha*ckappa1*Theta -
    6*alpha*ckappa1*ckappa2*Theta + 8*alpha*exKh*Theta +
    8*alpha*Power(Theta,2) + 3*alpha*trR)/6.
;

dtalpha[ijk]
=
beta1*dalpha1 + beta2*dalpha2 + beta3*dalpha3 - alpha*cmuL*exKh
;

dtbeta1[ijk]
=
beta1*(-ceta + dbeta11) + beta2*dbeta21 + beta3*dbeta31 + cmuS*trGt1
;

dtbeta2[ijk]
=
beta1*dbeta12 + beta2*(-ceta + dbeta22) + beta3*dbeta32 + cmuS*trGt2
;

dtbeta3[ijk]
=
beta1*dbeta13 + beta2*dbeta23 + beta3*(-ceta + dbeta33) + cmuS*trGt3
;


});
});

#endif // #ifndef Z4COWGPU_SET_RHS_GF3D5_HXX

/* Z4cowGPU_set_rhs_GF3D5.hxx */
