/* Z4cowGPU_set_rhs.hxx */
/* Produced with Generato */

#ifndef Z4COWGPU_SET_RHS_HXX
#define Z4COWGPU_SET_RHS_HXX

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

const auto &eTt1 = gf_eTt[0];
const auto &eTt2 = gf_eTt[1];
const auto &eTt3 = gf_eTt[2];
const auto &eT11 = gf_eT[0];
const auto &eT12 = gf_eT[1];
const auto &eT13 = gf_eT[2];
const auto &eT22 = gf_eT[3];
const auto &eT23 = gf_eT[4];
const auto &eT33 = gf_eT[5];
const auto &gamt11 = gf_gamt[0];
const auto &gamt12 = gf_gamt[1];
const auto &gamt13 = gf_gamt[2];
const auto &gamt22 = gf_gamt[3];
const auto &gamt23 = gf_gamt[4];
const auto &gamt33 = gf_gamt[5];
const auto &exKh = gf_exKh;
const auto &exAt11 = gf_exAt[0];
const auto &exAt12 = gf_exAt[1];
const auto &exAt13 = gf_exAt[2];
const auto &exAt22 = gf_exAt[3];
const auto &exAt23 = gf_exAt[4];
const auto &exAt33 = gf_exAt[5];
const auto &trGt1 = gf_trGt[0];
const auto &trGt2 = gf_trGt[1];
const auto &trGt3 = gf_trGt[2];
const auto &alpha = gf_alpha;
const auto &beta1 = gf_beta[0];
const auto &beta2 = gf_beta[1];
const auto &beta3 = gf_beta[2];

grid.loop_int_device<0, 0, 0>(
  grid.nghostzones, [=] ARITH_DEVICE(const PointDesc &p) ARITH_INLINE {

const auto dW1 = fd_1st<1>(W, p);
const auto dW2 = fd_1st<2>(W, p);
const auto dW3 = fd_1st<3>(W, p);
const auto dgamt111 = fd_1st<1>(gamt11, p);
const auto dgamt112 = fd_1st<1>(gamt12, p);
const auto dgamt113 = fd_1st<1>(gamt13, p);
const auto dgamt122 = fd_1st<1>(gamt22, p);
const auto dgamt123 = fd_1st<1>(gamt23, p);
const auto dgamt133 = fd_1st<1>(gamt33, p);
const auto dgamt211 = fd_1st<2>(gamt11, p);
const auto dgamt212 = fd_1st<2>(gamt12, p);
const auto dgamt213 = fd_1st<2>(gamt13, p);
const auto dgamt222 = fd_1st<2>(gamt22, p);
const auto dgamt223 = fd_1st<2>(gamt23, p);
const auto dgamt233 = fd_1st<2>(gamt33, p);
const auto dgamt311 = fd_1st<3>(gamt11, p);
const auto dgamt312 = fd_1st<3>(gamt12, p);
const auto dgamt313 = fd_1st<3>(gamt13, p);
const auto dgamt322 = fd_1st<3>(gamt22, p);
const auto dgamt323 = fd_1st<3>(gamt23, p);
const auto dgamt333 = fd_1st<3>(gamt33, p);
const auto dexKh1 = fd_1st<1>(exKh, p);
const auto dexKh2 = fd_1st<2>(exKh, p);
const auto dexKh3 = fd_1st<3>(exKh, p);
const auto dexAt111 = fd_1st<1>(exAt11, p);
const auto dexAt112 = fd_1st<1>(exAt12, p);
const auto dexAt113 = fd_1st<1>(exAt13, p);
const auto dexAt122 = fd_1st<1>(exAt22, p);
const auto dexAt123 = fd_1st<1>(exAt23, p);
const auto dexAt133 = fd_1st<1>(exAt33, p);
const auto dexAt211 = fd_1st<2>(exAt11, p);
const auto dexAt212 = fd_1st<2>(exAt12, p);
const auto dexAt213 = fd_1st<2>(exAt13, p);
const auto dexAt222 = fd_1st<2>(exAt22, p);
const auto dexAt223 = fd_1st<2>(exAt23, p);
const auto dexAt233 = fd_1st<2>(exAt33, p);
const auto dexAt311 = fd_1st<3>(exAt11, p);
const auto dexAt312 = fd_1st<3>(exAt12, p);
const auto dexAt313 = fd_1st<3>(exAt13, p);
const auto dexAt322 = fd_1st<3>(exAt22, p);
const auto dexAt323 = fd_1st<3>(exAt23, p);
const auto dexAt333 = fd_1st<3>(exAt33, p);
const auto dtrGt11 = fd_1st<1>(trGt1, p);
const auto dtrGt12 = fd_1st<1>(trGt2, p);
const auto dtrGt13 = fd_1st<1>(trGt3, p);
const auto dtrGt21 = fd_1st<2>(trGt1, p);
const auto dtrGt22 = fd_1st<2>(trGt2, p);
const auto dtrGt23 = fd_1st<2>(trGt3, p);
const auto dtrGt31 = fd_1st<3>(trGt1, p);
const auto dtrGt32 = fd_1st<3>(trGt2, p);
const auto dtrGt33 = fd_1st<3>(trGt3, p);
const auto dTheta1 = fd_1st<1>(Theta, p);
const auto dTheta2 = fd_1st<2>(Theta, p);
const auto dTheta3 = fd_1st<3>(Theta, p);
const auto dalpha1 = fd_1st<1>(alpha, p);
const auto dalpha2 = fd_1st<2>(alpha, p);
const auto dalpha3 = fd_1st<3>(alpha, p);
const auto dbeta11 = fd_1st<1>(beta1, p);
const auto dbeta12 = fd_1st<1>(beta2, p);
const auto dbeta13 = fd_1st<1>(beta3, p);
const auto dbeta21 = fd_1st<2>(beta1, p);
const auto dbeta22 = fd_1st<2>(beta2, p);
const auto dbeta23 = fd_1st<2>(beta3, p);
const auto dbeta31 = fd_1st<3>(beta1, p);
const auto dbeta32 = fd_1st<3>(beta2, p);
const auto dbeta33 = fd_1st<3>(beta3, p);
const auto ddW11 = fd_2nd<1, 1>(W, p);
const auto ddW12 = fd_2nd<1, 2>(W, p);
const auto ddW13 = fd_2nd<1, 3>(W, p);
const auto ddW22 = fd_2nd<2, 2>(W, p);
const auto ddW23 = fd_2nd<2, 3>(W, p);
const auto ddW33 = fd_2nd<3, 3>(W, p);
const auto ddgamt1111 = fd_2nd<1, 1>(gamt11, p);
const auto ddgamt1112 = fd_2nd<1, 1>(gamt12, p);
const auto ddgamt1113 = fd_2nd<1, 1>(gamt13, p);
const auto ddgamt1122 = fd_2nd<1, 1>(gamt22, p);
const auto ddgamt1123 = fd_2nd<1, 1>(gamt23, p);
const auto ddgamt1133 = fd_2nd<1, 1>(gamt33, p);
const auto ddgamt1211 = fd_2nd<1, 2>(gamt11, p);
const auto ddgamt1212 = fd_2nd<1, 2>(gamt12, p);
const auto ddgamt1213 = fd_2nd<1, 2>(gamt13, p);
const auto ddgamt1222 = fd_2nd<1, 2>(gamt22, p);
const auto ddgamt1223 = fd_2nd<1, 2>(gamt23, p);
const auto ddgamt1233 = fd_2nd<1, 2>(gamt33, p);
const auto ddgamt1311 = fd_2nd<1, 3>(gamt11, p);
const auto ddgamt1312 = fd_2nd<1, 3>(gamt12, p);
const auto ddgamt1313 = fd_2nd<1, 3>(gamt13, p);
const auto ddgamt1322 = fd_2nd<1, 3>(gamt22, p);
const auto ddgamt1323 = fd_2nd<1, 3>(gamt23, p);
const auto ddgamt1333 = fd_2nd<1, 3>(gamt33, p);
const auto ddgamt2211 = fd_2nd<2, 2>(gamt11, p);
const auto ddgamt2212 = fd_2nd<2, 2>(gamt12, p);
const auto ddgamt2213 = fd_2nd<2, 2>(gamt13, p);
const auto ddgamt2222 = fd_2nd<2, 2>(gamt22, p);
const auto ddgamt2223 = fd_2nd<2, 2>(gamt23, p);
const auto ddgamt2233 = fd_2nd<2, 2>(gamt33, p);
const auto ddgamt2311 = fd_2nd<2, 3>(gamt11, p);
const auto ddgamt2312 = fd_2nd<2, 3>(gamt12, p);
const auto ddgamt2313 = fd_2nd<2, 3>(gamt13, p);
const auto ddgamt2322 = fd_2nd<2, 3>(gamt22, p);
const auto ddgamt2323 = fd_2nd<2, 3>(gamt23, p);
const auto ddgamt2333 = fd_2nd<2, 3>(gamt33, p);
const auto ddgamt3311 = fd_2nd<3, 3>(gamt11, p);
const auto ddgamt3312 = fd_2nd<3, 3>(gamt12, p);
const auto ddgamt3313 = fd_2nd<3, 3>(gamt13, p);
const auto ddgamt3322 = fd_2nd<3, 3>(gamt22, p);
const auto ddgamt3323 = fd_2nd<3, 3>(gamt23, p);
const auto ddgamt3333 = fd_2nd<3, 3>(gamt33, p);
const auto ddalpha11 = fd_2nd<1, 1>(alpha, p);
const auto ddalpha12 = fd_2nd<1, 2>(alpha, p);
const auto ddalpha13 = fd_2nd<1, 3>(alpha, p);
const auto ddalpha22 = fd_2nd<2, 2>(alpha, p);
const auto ddalpha23 = fd_2nd<2, 3>(alpha, p);
const auto ddalpha33 = fd_2nd<3, 3>(alpha, p);
const auto ddbeta111 = fd_2nd<1, 1>(beta1, p);
const auto ddbeta112 = fd_2nd<1, 1>(beta2, p);
const auto ddbeta113 = fd_2nd<1, 1>(beta3, p);
const auto ddbeta121 = fd_2nd<1, 2>(beta1, p);
const auto ddbeta122 = fd_2nd<1, 2>(beta2, p);
const auto ddbeta123 = fd_2nd<1, 2>(beta3, p);
const auto ddbeta131 = fd_2nd<1, 3>(beta1, p);
const auto ddbeta132 = fd_2nd<1, 3>(beta2, p);
const auto ddbeta133 = fd_2nd<1, 3>(beta3, p);
const auto ddbeta221 = fd_2nd<2, 2>(beta1, p);
const auto ddbeta222 = fd_2nd<2, 2>(beta2, p);
const auto ddbeta223 = fd_2nd<2, 2>(beta3, p);
const auto ddbeta231 = fd_2nd<2, 3>(beta1, p);
const auto ddbeta232 = fd_2nd<2, 3>(beta2, p);
const auto ddbeta233 = fd_2nd<2, 3>(beta3, p);
const auto ddbeta331 = fd_2nd<3, 3>(beta1, p);
const auto ddbeta332 = fd_2nd<3, 3>(beta2, p);
const auto ddbeta333 = fd_2nd<3, 3>(beta3, p);

const auto
dlnW1
=
dW1/W(p.I)
;

const auto
dlnW2
=
dW2/W(p.I)
;

const auto
dlnW3
=
dW3/W(p.I)
;

const auto
invgamt11
=
-Power(gamt23(p.I),2) + gamt22(p.I)*gamt33(p.I)
;

const auto
invgamt12
=
gamt13(p.I)*gamt23(p.I) - gamt12(p.I)*gamt33(p.I)
;

const auto
invgamt13
=
-(gamt13(p.I)*gamt22(p.I)) + gamt12(p.I)*gamt23(p.I)
;

const auto
invgamt22
=
-Power(gamt13(p.I),2) + gamt11(p.I)*gamt33(p.I)
;

const auto
invgamt23
=
gamt12(p.I)*gamt13(p.I) - gamt11(p.I)*gamt23(p.I)
;

const auto
invgamt33
=
-Power(gamt12(p.I),2) + gamt11(p.I)*gamt22(p.I)
;

const auto
invgam11
=
invgamt11*Power(W(p.I),2)
;

const auto
invgam12
=
invgamt12*Power(W(p.I),2)
;

const auto
invgam13
=
invgamt13*Power(W(p.I),2)
;

const auto
invgam22
=
invgamt22*Power(W(p.I),2)
;

const auto
invgam23
=
invgamt23*Power(W(p.I),2)
;

const auto
invgam33
=
invgamt33*Power(W(p.I),2)
;

const auto
gam11
=
gamt11(p.I)/Power(W(p.I),2)
;

const auto
gam12
=
gamt12(p.I)/Power(W(p.I),2)
;

const auto
gam13
=
gamt13(p.I)/Power(W(p.I),2)
;

const auto
gam22
=
gamt22(p.I)/Power(W(p.I),2)
;

const auto
gam23
=
gamt23(p.I)/Power(W(p.I),2)
;

const auto
gam33
=
gamt33(p.I)/Power(W(p.I),2)
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
(dgamt111 - 2*dlnW1*gamt11(p.I))/Power(W(p.I),2)
;

const auto
dgam112
=
(dgamt112 - 2*dlnW1*gamt12(p.I))/Power(W(p.I),2)
;

const auto
dgam113
=
(dgamt113 - 2*dlnW1*gamt13(p.I))/Power(W(p.I),2)
;

const auto
dgam122
=
(dgamt122 - 2*dlnW1*gamt22(p.I))/Power(W(p.I),2)
;

const auto
dgam123
=
(dgamt123 - 2*dlnW1*gamt23(p.I))/Power(W(p.I),2)
;

const auto
dgam133
=
(dgamt133 - 2*dlnW1*gamt33(p.I))/Power(W(p.I),2)
;

const auto
dgam211
=
(dgamt211 - 2*dlnW2*gamt11(p.I))/Power(W(p.I),2)
;

const auto
dgam212
=
(dgamt212 - 2*dlnW2*gamt12(p.I))/Power(W(p.I),2)
;

const auto
dgam213
=
(dgamt213 - 2*dlnW2*gamt13(p.I))/Power(W(p.I),2)
;

const auto
dgam222
=
(dgamt222 - 2*dlnW2*gamt22(p.I))/Power(W(p.I),2)
;

const auto
dgam223
=
(dgamt223 - 2*dlnW2*gamt23(p.I))/Power(W(p.I),2)
;

const auto
dgam233
=
(dgamt233 - 2*dlnW2*gamt33(p.I))/Power(W(p.I),2)
;

const auto
dgam311
=
(dgamt311 - 2*dlnW3*gamt11(p.I))/Power(W(p.I),2)
;

const auto
dgam312
=
(dgamt312 - 2*dlnW3*gamt12(p.I))/Power(W(p.I),2)
;

const auto
dgam313
=
(dgamt313 - 2*dlnW3*gamt13(p.I))/Power(W(p.I),2)
;

const auto
dgam322
=
(dgamt322 - 2*dlnW3*gamt22(p.I))/Power(W(p.I),2)
;

const auto
dgam323
=
(dgamt323 - 2*dlnW3*gamt23(p.I))/Power(W(p.I),2)
;

const auto
dgam333
=
(dgamt333 - 2*dlnW3*gamt33(p.I))/Power(W(p.I),2)
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
Power(invgamt11,2)*exAt11(p.I) + 2*invgamt11*invgamt12*exAt12(p.I) +
  2*invgamt11*invgamt13*exAt13(p.I) + Power(invgamt12,2)*exAt22(p.I) +
  2*invgamt12*invgamt13*exAt23(p.I) + Power(invgamt13,2)*exAt33(p.I)
;

const auto
exAtUU12
=
invgamt11*invgamt12*exAt11(p.I) +
  (Power(invgamt12,2) + invgamt11*invgamt22)*exAt12(p.I) +
  invgamt12*invgamt13*exAt13(p.I) + invgamt11*invgamt23*exAt13(p.I) +
  invgamt12*invgamt22*exAt22(p.I) + invgamt13*invgamt22*exAt23(p.I) +
  invgamt12*invgamt23*exAt23(p.I) + invgamt13*invgamt23*exAt33(p.I)
;

const auto
exAtUU13
=
invgamt11*invgamt13*exAt11(p.I) +
  (invgamt12*invgamt13 + invgamt11*invgamt23)*exAt12(p.I) +
  Power(invgamt13,2)*exAt13(p.I) + invgamt11*invgamt33*exAt13(p.I) +
  invgamt12*invgamt23*exAt22(p.I) + invgamt13*invgamt23*exAt23(p.I) +
  invgamt12*invgamt33*exAt23(p.I) + invgamt13*invgamt33*exAt33(p.I)
;

const auto
exAtUU22
=
Power(invgamt12,2)*exAt11(p.I) + 2*invgamt12*invgamt22*exAt12(p.I) +
  2*invgamt12*invgamt23*exAt13(p.I) + Power(invgamt22,2)*exAt22(p.I) +
  2*invgamt22*invgamt23*exAt23(p.I) + Power(invgamt23,2)*exAt33(p.I)
;

const auto
exAtUU23
=
invgamt12*invgamt13*exAt11(p.I) +
  (invgamt13*invgamt22 + invgamt12*invgamt23)*exAt12(p.I) +
  invgamt13*invgamt23*exAt13(p.I) + invgamt12*invgamt33*exAt13(p.I) +
  invgamt22*invgamt23*exAt22(p.I) + Power(invgamt23,2)*exAt23(p.I) +
  invgamt22*invgamt33*exAt23(p.I) + invgamt23*invgamt33*exAt33(p.I)
;

const auto
exAtUU33
=
Power(invgamt13,2)*exAt11(p.I) + 2*invgamt13*invgamt23*exAt12(p.I) +
  2*invgamt13*invgamt33*exAt13(p.I) + Power(invgamt23,2)*exAt22(p.I) +
  2*invgamt23*invgamt33*exAt23(p.I) + Power(invgamt33,2)*exAt33(p.I)
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
(tDtDW11 + gamt11(p.I)*(invgamt11*tDtDW11 + 2*invgamt12*tDtDW12 +
       2*invgamt13*tDtDW13 + invgamt22*tDtDW22 + 2*invgamt23*tDtDW23 +
       invgamt33*tDtDW33 - 2*(Power(dlnW1,2)*invgamt11 +
          2*dlnW1*dlnW2*invgamt12 + 2*dlnW1*dlnW3*invgamt13 +
          Power(dlnW2,2)*invgamt22 + 2*dlnW2*dlnW3*invgamt23 +
          Power(dlnW3,2)*invgamt33)*W(p.I)))/W(p.I)
;

const auto
RtW12
=
(tDtDW12 + gamt12(p.I)*(invgamt11*tDtDW11 + 2*invgamt12*tDtDW12 +
       2*invgamt13*tDtDW13 + invgamt22*tDtDW22 + 2*invgamt23*tDtDW23 +
       invgamt33*tDtDW33 - 2*(Power(dlnW1,2)*invgamt11 +
          2*dlnW1*dlnW2*invgamt12 + 2*dlnW1*dlnW3*invgamt13 +
          Power(dlnW2,2)*invgamt22 + 2*dlnW2*dlnW3*invgamt23 +
          Power(dlnW3,2)*invgamt33)*W(p.I)))/W(p.I)
;

const auto
RtW13
=
(tDtDW13 + gamt13(p.I)*(invgamt11*tDtDW11 + 2*invgamt12*tDtDW12 +
       2*invgamt13*tDtDW13 + invgamt22*tDtDW22 + 2*invgamt23*tDtDW23 +
       invgamt33*tDtDW33 - 2*(Power(dlnW1,2)*invgamt11 +
          2*dlnW1*dlnW2*invgamt12 + 2*dlnW1*dlnW3*invgamt13 +
          Power(dlnW2,2)*invgamt22 + 2*dlnW2*dlnW3*invgamt23 +
          Power(dlnW3,2)*invgamt33)*W(p.I)))/W(p.I)
;

const auto
RtW22
=
(tDtDW22 + gamt22(p.I)*(invgamt11*tDtDW11 + 2*invgamt12*tDtDW12 +
       2*invgamt13*tDtDW13 + invgamt22*tDtDW22 + 2*invgamt23*tDtDW23 +
       invgamt33*tDtDW33 - 2*(Power(dlnW1,2)*invgamt11 +
          2*dlnW1*dlnW2*invgamt12 + 2*dlnW1*dlnW3*invgamt13 +
          Power(dlnW2,2)*invgamt22 + 2*dlnW2*dlnW3*invgamt23 +
          Power(dlnW3,2)*invgamt33)*W(p.I)))/W(p.I)
;

const auto
RtW23
=
(tDtDW23 + gamt23(p.I)*(invgamt11*tDtDW11 + 2*invgamt12*tDtDW12 +
       2*invgamt13*tDtDW13 + invgamt22*tDtDW22 + 2*invgamt23*tDtDW23 +
       invgamt33*tDtDW33 - 2*(Power(dlnW1,2)*invgamt11 +
          2*dlnW1*dlnW2*invgamt12 + 2*dlnW1*dlnW3*invgamt13 +
          Power(dlnW2,2)*invgamt22 + 2*dlnW2*dlnW3*invgamt23 +
          Power(dlnW3,2)*invgamt33)*W(p.I)))/W(p.I)
;

const auto
RtW33
=
(tDtDW33 + gamt33(p.I)*(invgamt11*tDtDW11 + 2*invgamt12*tDtDW12 +
       2*invgamt13*tDtDW13 + invgamt22*tDtDW22 + 2*invgamt23*tDtDW23 +
       invgamt33*tDtDW33 - 2*(Power(dlnW1,2)*invgamt11 +
          2*dlnW1*dlnW2*invgamt12 + 2*dlnW1*dlnW3*invgamt13 +
          Power(dlnW2,2)*invgamt22 + 2*dlnW2*dlnW3*invgamt23 +
          Power(dlnW3,2)*invgamt33)*W(p.I)))/W(p.I)
;

const auto
Rt11
=
3*Gt111*GtDDU111 + 3*Gt112*GtDDU112 + 3*Gt113*GtDDU113 + 2*Gt211*GtDDU121 +
  2*Gt212*GtDDU122 + 2*Gt213*GtDDU123 + 2*Gt311*GtDDU131 +
  2*Gt312*GtDDU132 + 2*Gt313*GtDDU133 + Gt211*GtDDU211 + Gt212*GtDDU212 +
  Gt213*GtDDU213 + Gt311*GtDDU311 + Gt312*GtDDU312 + Gt313*GtDDU313 -
  (ddgamt1111*invgamt11)/2. - ddgamt1211*invgamt12 - ddgamt1311*invgamt13 -
  (ddgamt2211*invgamt22)/2. - ddgamt2311*invgamt23 -
  (ddgamt3311*invgamt33)/2. + GtDDD111*trGtd1 + GtDDD112*trGtd2 +
  GtDDD113*trGtd3 + dtrGt11*gamt11(p.I) + dtrGt12*gamt12(p.I) +
  dtrGt13*gamt13(p.I)
;

const auto
Rt12
=
(2*Gt112*GtDDU111 + 2*Gt122*GtDDU112 + 2*Gt123*GtDDU113 +
    2*Gt111*GtDDU121 + 2*Gt212*GtDDU121 + 2*Gt112*GtDDU122 +
    2*Gt222*GtDDU122 + 2*Gt113*GtDDU123 + 2*Gt223*GtDDU123 +
    2*Gt312*GtDDU131 + 2*Gt322*GtDDU132 + 2*Gt323*GtDDU133 +
    2*Gt111*GtDDU211 + 2*Gt112*GtDDU212 + 2*Gt113*GtDDU213 +
    4*Gt211*GtDDU221 + 4*Gt212*GtDDU222 + 4*Gt213*GtDDU223 +
    2*Gt311*GtDDU231 + 2*Gt312*GtDDU232 + 2*Gt313*GtDDU233 +
    2*Gt311*GtDDU321 + 2*Gt312*GtDDU322 + 2*Gt313*GtDDU323 -
    ddgamt1112*invgamt11 - 2*ddgamt1212*invgamt12 -
    2*ddgamt1312*invgamt13 - ddgamt2212*invgamt22 -
    2*ddgamt2312*invgamt23 - ddgamt3312*invgamt33 + GtDDD112*trGtd1 +
    GtDDD211*trGtd1 + GtDDD122*trGtd2 + GtDDD212*trGtd2 + GtDDD123*trGtd3 +
    GtDDD213*trGtd3 + dtrGt21*gamt11(p.I) + (dtrGt11 + dtrGt22)*gamt12(p.I) +
    dtrGt23*gamt13(p.I) + dtrGt12*gamt22(p.I) + dtrGt13*gamt23(p.I))/2.
;

const auto
Rt13
=
(2*Gt113*GtDDU111 + 2*Gt123*GtDDU112 + 2*Gt133*GtDDU113 +
    2*Gt213*GtDDU121 + 2*Gt223*GtDDU122 + 2*Gt233*GtDDU123 +
    2*Gt111*GtDDU131 + 2*Gt313*GtDDU131 + 2*Gt112*GtDDU132 +
    2*Gt323*GtDDU132 + 2*Gt113*GtDDU133 + 2*Gt333*GtDDU133 +
    2*Gt211*GtDDU231 + 2*Gt212*GtDDU232 + 2*Gt213*GtDDU233 +
    2*Gt111*GtDDU311 + 2*Gt112*GtDDU312 + 2*Gt113*GtDDU313 +
    2*Gt211*GtDDU321 + 2*Gt212*GtDDU322 + 2*Gt213*GtDDU323 +
    4*Gt311*GtDDU331 + 4*Gt312*GtDDU332 + 4*Gt313*GtDDU333 -
    ddgamt1113*invgamt11 - 2*ddgamt1213*invgamt12 -
    2*ddgamt1313*invgamt13 - ddgamt2213*invgamt22 -
    2*ddgamt2313*invgamt23 - ddgamt3313*invgamt33 + GtDDD113*trGtd1 +
    GtDDD311*trGtd1 + GtDDD123*trGtd2 + GtDDD312*trGtd2 + GtDDD133*trGtd3 +
    GtDDD313*trGtd3 + dtrGt31*gamt11(p.I) + dtrGt32*gamt12(p.I) +
    dtrGt11*gamt13(p.I) + dtrGt33*gamt13(p.I) + dtrGt12*gamt23(p.I) +
    dtrGt13*gamt33(p.I))/2.
;

const auto
Rt22
=
Gt112*GtDDU121 + Gt122*GtDDU122 + Gt123*GtDDU123 + 2*Gt112*GtDDU211 +
  2*Gt122*GtDDU212 + 2*Gt123*GtDDU213 + 3*Gt212*GtDDU221 +
  3*Gt222*GtDDU222 + 3*Gt223*GtDDU223 + 2*Gt312*GtDDU231 +
  2*Gt322*GtDDU232 + 2*Gt323*GtDDU233 + Gt312*GtDDU321 + Gt322*GtDDU322 +
  Gt323*GtDDU323 - (ddgamt1122*invgamt11)/2. - ddgamt1222*invgamt12 -
  ddgamt1322*invgamt13 - (ddgamt2222*invgamt22)/2. - ddgamt2322*invgamt23 -
  (ddgamt3322*invgamt33)/2. + GtDDD212*trGtd1 + GtDDD222*trGtd2 +
  GtDDD223*trGtd3 + dtrGt21*gamt12(p.I) + dtrGt22*gamt22(p.I) +
  dtrGt23*gamt23(p.I)
;

const auto
Rt23
=
(2*Gt112*GtDDU131 + 2*Gt122*GtDDU132 + 2*Gt123*GtDDU133 +
    2*Gt113*GtDDU211 + 2*Gt123*GtDDU212 + 2*Gt133*GtDDU213 +
    2*Gt213*GtDDU221 + 2*Gt223*GtDDU222 + 2*Gt233*GtDDU223 +
    2*Gt212*GtDDU231 + 2*Gt313*GtDDU231 + 2*Gt222*GtDDU232 +
    2*Gt323*GtDDU232 + 2*Gt223*GtDDU233 + 2*Gt333*GtDDU233 +
    2*Gt112*GtDDU311 + 2*Gt122*GtDDU312 + 2*Gt123*GtDDU313 +
    2*Gt212*GtDDU321 + 2*Gt222*GtDDU322 + 2*Gt223*GtDDU323 +
    4*Gt312*GtDDU331 + 4*Gt322*GtDDU332 + 4*Gt323*GtDDU333 -
    ddgamt1123*invgamt11 - 2*ddgamt1223*invgamt12 -
    2*ddgamt1323*invgamt13 - ddgamt2223*invgamt22 -
    2*ddgamt2323*invgamt23 - ddgamt3323*invgamt33 + GtDDD213*trGtd1 +
    GtDDD312*trGtd1 + GtDDD223*trGtd2 + GtDDD322*trGtd2 + GtDDD233*trGtd3 +
    GtDDD323*trGtd3 + dtrGt31*gamt12(p.I) + dtrGt21*gamt13(p.I) +
    dtrGt32*gamt22(p.I) + dtrGt22*gamt23(p.I) + dtrGt33*gamt23(p.I) +
    dtrGt23*gamt33(p.I))/2.
;

const auto
Rt33
=
Gt113*GtDDU131 + Gt123*GtDDU132 + Gt133*GtDDU133 + Gt213*GtDDU231 +
  Gt223*GtDDU232 + Gt233*GtDDU233 + 2*Gt113*GtDDU311 + 2*Gt123*GtDDU312 +
  2*Gt133*GtDDU313 + 2*Gt213*GtDDU321 + 2*Gt223*GtDDU322 +
  2*Gt233*GtDDU323 + 3*Gt313*GtDDU331 + 3*Gt323*GtDDU332 +
  3*Gt333*GtDDU333 - (ddgamt1133*invgamt11)/2. - ddgamt1233*invgamt12 -
  ddgamt1333*invgamt13 - (ddgamt2233*invgamt22)/2. - ddgamt2333*invgamt23 -
  (ddgamt3333*invgamt33)/2. + GtDDD313*trGtd1 + GtDDD323*trGtd2 +
  GtDDD333*trGtd3 + dtrGt31*gamt13(p.I) + dtrGt32*gamt23(p.I) +
  dtrGt33*gamt33(p.I)
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
(Power(beta1(p.I),2)*eT11(p.I) + Power(beta2(p.I),2)*eT22(p.I) +
    Power(beta3(p.I),2)*eT33(p.I) +
    2*beta1(p.I)*(beta2(p.I)*eT12(p.I) + beta3(p.I)*eT13(p.I) - eTt1(p.I)) +
    2*beta2(p.I)*(beta3(p.I)*eT23(p.I) - eTt2(p.I)) - 2*beta3(p.I)*eTt3(p.I) +
    eTtt(p.I))/Power(alpha(p.I),2)
;

const auto
Sm1
=
(beta1(p.I)*eT11(p.I) + beta2(p.I)*eT12(p.I) + beta3(p.I)*eT13(p.I) - eTt1(p.I))/
  alpha(p.I)
;

const auto
Sm2
=
(beta1(p.I)*eT12(p.I) + beta2(p.I)*eT22(p.I) + beta3(p.I)*eT23(p.I) - eTt2(p.I))/
  alpha(p.I)
;

const auto
Sm3
=
(beta1(p.I)*eT13(p.I) + beta2(p.I)*eT23(p.I) + beta3(p.I)*eT33(p.I) - eTt3(p.I))/
  alpha(p.I)
;

const auto
Ss11
=
eT11(p.I)
;

const auto
Ss12
=
eT12(p.I)
;

const auto
Ss13
=
eT13(p.I)
;

const auto
Ss22
=
eT22(p.I)
;

const auto
Ss23
=
eT23(p.I)
;

const auto
Ss33
=
eT33(p.I)
;

const auto
trSs
=
invgam11*Ss11 + 2*invgam12*Ss12 + 2*invgam13*Ss13 + invgam22*Ss22 +
  2*invgam23*Ss23 + invgam33*Ss33
;


dtW(p.I)
=
dW1*beta1(p.I) + dW2*beta2(p.I) + dW3*beta3(p.I) -
  ((dbeta11 + dbeta22 + dbeta33)*W(p.I))/3. + (alpha(p.I)*exKh(p.I)*W(p.I))/3. +
  (2*alpha(p.I)*Theta(p.I)*W(p.I))/3.
;

dtgamt11(p.I)
=
dgamt111*beta1(p.I) + dgamt211*beta2(p.I) + dgamt311*beta3(p.I) -
  2*alpha(p.I)*exAt11(p.I) + 2*dbeta11*gamt11(p.I) -
  (2*(dbeta11 + dbeta22 + dbeta33)*gamt11(p.I))/3. + 2*dbeta12*gamt12(p.I) +
  2*dbeta13*gamt13(p.I)
;

dtgamt12(p.I)
=
dgamt112*beta1(p.I) + dgamt212*beta2(p.I) + dgamt312*beta3(p.I) -
  2*alpha(p.I)*exAt12(p.I) + dbeta21*gamt11(p.I) + dbeta11*gamt12(p.I) +
  dbeta22*gamt12(p.I) - (2*(dbeta11 + dbeta22 + dbeta33)*gamt12(p.I))/3. +
  dbeta23*gamt13(p.I) + dbeta12*gamt22(p.I) + dbeta13*gamt23(p.I)
;

dtgamt13(p.I)
=
dgamt113*beta1(p.I) + dgamt213*beta2(p.I) + dgamt313*beta3(p.I) -
  2*alpha(p.I)*exAt13(p.I) + dbeta31*gamt11(p.I) + dbeta32*gamt12(p.I) +
  dbeta11*gamt13(p.I) + dbeta33*gamt13(p.I) -
  (2*(dbeta11 + dbeta22 + dbeta33)*gamt13(p.I))/3. + dbeta12*gamt23(p.I) +
  dbeta13*gamt33(p.I)
;

dtgamt22(p.I)
=
dgamt122*beta1(p.I) + dgamt222*beta2(p.I) + dgamt322*beta3(p.I) -
  2*alpha(p.I)*exAt22(p.I) + 2*dbeta21*gamt12(p.I) + 2*dbeta22*gamt22(p.I) -
  (2*(dbeta11 + dbeta22 + dbeta33)*gamt22(p.I))/3. + 2*dbeta23*gamt23(p.I)
;

dtgamt23(p.I)
=
dgamt123*beta1(p.I) + dgamt223*beta2(p.I) + dgamt323*beta3(p.I) -
  2*alpha(p.I)*exAt23(p.I) + dbeta31*gamt12(p.I) + dbeta21*gamt13(p.I) +
  dbeta32*gamt22(p.I) + dbeta22*gamt23(p.I) + dbeta33*gamt23(p.I) -
  (2*(dbeta11 + dbeta22 + dbeta33)*gamt23(p.I))/3. + dbeta23*gamt33(p.I)
;

dtgamt33(p.I)
=
dgamt133*beta1(p.I) + dgamt233*beta2(p.I) + dgamt333*beta3(p.I) -
  2*alpha(p.I)*exAt33(p.I) + 2*dbeta31*gamt13(p.I) + 2*dbeta32*gamt23(p.I) +
  2*dbeta33*gamt33(p.I) - (2*(dbeta11 + dbeta22 + dbeta33)*gamt33(p.I))/3.
;

dtexKh(p.I)
=
-(DDalpha11*invgam11) - 2*DDalpha12*invgam12 - 2*DDalpha13*invgam13 -
  DDalpha22*invgam22 - 2*DDalpha23*invgam23 - DDalpha33*invgam33 +
  dexKh1*beta1(p.I) + dexKh2*beta2(p.I) + dexKh3*beta3(p.I) +
  alpha(p.I)*(4*cpi*rho + 4*cpi*trSs + exAtUU11*exAt11(p.I) +
     2*exAtUU12*exAt12(p.I) + 2*exAtUU13*exAt13(p.I) + exAtUU22*exAt22(p.I) +
     2*exAtUU23*exAt23(p.I) + exAtUU33*exAt33(p.I) + Power(exKh(p.I),2)/3. +
     ckappa1*Theta(p.I) - ckappa1*ckappa2*Theta(p.I) +
     (4*exKh(p.I)*Theta(p.I))/3. + (4*Power(Theta(p.I),2))/3.)
;

dtexAt11(p.I)
=
(3*dexAt111*beta1(p.I) + 3*dexAt211*beta2(p.I) + 3*dexAt311*beta3(p.I) +
    4*dbeta11*exAt11(p.I) - 2*dbeta22*exAt11(p.I) - 2*dbeta33*exAt11(p.I) -
    6*invgamt11*alpha(p.I)*Power(exAt11(p.I),2) + 6*dbeta12*exAt12(p.I) -
    12*invgamt12*alpha(p.I)*exAt11(p.I)*exAt12(p.I) -
    6*invgamt22*alpha(p.I)*Power(exAt12(p.I),2) + 6*dbeta13*exAt13(p.I) -
    12*invgamt13*alpha(p.I)*exAt11(p.I)*exAt13(p.I) -
    12*invgamt23*alpha(p.I)*exAt12(p.I)*exAt13(p.I) -
    6*invgamt33*alpha(p.I)*Power(exAt13(p.I),2) +
    3*alpha(p.I)*exAt11(p.I)*exKh(p.I) + 6*alpha(p.I)*exAt11(p.I)*Theta(p.I) -
    3*DDalpha11*Power(W(p.I),2) + DDalpha11*gam11*invgam11*Power(W(p.I),2) +
    2*DDalpha12*gam11*invgam12*Power(W(p.I),2) +
    2*DDalpha13*gam11*invgam13*Power(W(p.I),2) +
    DDalpha22*gam11*invgam22*Power(W(p.I),2) +
    2*DDalpha23*gam11*invgam23*Power(W(p.I),2) +
    DDalpha33*gam11*invgam33*Power(W(p.I),2) +
    3*R11*alpha(p.I)*Power(W(p.I),2) -
    gam11*invgam11*R11*alpha(p.I)*Power(W(p.I),2) -
    2*gam11*invgam12*R12*alpha(p.I)*Power(W(p.I),2) -
    2*gam11*invgam13*R13*alpha(p.I)*Power(W(p.I),2) -
    gam11*invgam22*R22*alpha(p.I)*Power(W(p.I),2) -
    2*gam11*invgam23*R23*alpha(p.I)*Power(W(p.I),2) -
    gam11*invgam33*R33*alpha(p.I)*Power(W(p.I),2) -
    24*cpi*Ss11*alpha(p.I)*Power(W(p.I),2) +
    8*cpi*gam11*invgam11*Ss11*alpha(p.I)*Power(W(p.I),2) +
    16*cpi*gam11*invgam12*Ss12*alpha(p.I)*Power(W(p.I),2) +
    16*cpi*gam11*invgam13*Ss13*alpha(p.I)*Power(W(p.I),2) +
    8*cpi*gam11*invgam22*Ss22*alpha(p.I)*Power(W(p.I),2) +
    16*cpi*gam11*invgam23*Ss23*alpha(p.I)*Power(W(p.I),2) +
    8*cpi*gam11*invgam33*Ss33*alpha(p.I)*Power(W(p.I),2))/3.
;

dtexAt12(p.I)
=
(3*dexAt112*beta1(p.I) + 3*dexAt212*beta2(p.I) + 3*dexAt312*beta3(p.I) +
    3*dbeta21*exAt11(p.I) + dbeta11*exAt12(p.I) + dbeta22*exAt12(p.I) -
    2*dbeta33*exAt12(p.I) - 6*invgamt11*alpha(p.I)*exAt11(p.I)*exAt12(p.I) -
    6*invgamt12*alpha(p.I)*Power(exAt12(p.I),2) + 3*dbeta23*exAt13(p.I) -
    6*invgamt13*alpha(p.I)*exAt12(p.I)*exAt13(p.I) + 3*dbeta12*exAt22(p.I) -
    6*invgamt12*alpha(p.I)*exAt11(p.I)*exAt22(p.I) -
    6*invgamt22*alpha(p.I)*exAt12(p.I)*exAt22(p.I) -
    6*invgamt23*alpha(p.I)*exAt13(p.I)*exAt22(p.I) + 3*dbeta13*exAt23(p.I) -
    6*invgamt13*alpha(p.I)*exAt11(p.I)*exAt23(p.I) -
    6*invgamt23*alpha(p.I)*exAt12(p.I)*exAt23(p.I) -
    6*invgamt33*alpha(p.I)*exAt13(p.I)*exAt23(p.I) +
    3*alpha(p.I)*exAt12(p.I)*exKh(p.I) + 6*alpha(p.I)*exAt12(p.I)*Theta(p.I) -
    3*DDalpha12*Power(W(p.I),2) + DDalpha11*gam12*invgam11*Power(W(p.I),2) +
    2*DDalpha12*gam12*invgam12*Power(W(p.I),2) +
    2*DDalpha13*gam12*invgam13*Power(W(p.I),2) +
    DDalpha22*gam12*invgam22*Power(W(p.I),2) +
    2*DDalpha23*gam12*invgam23*Power(W(p.I),2) +
    DDalpha33*gam12*invgam33*Power(W(p.I),2) -
    gam12*invgam11*R11*alpha(p.I)*Power(W(p.I),2) +
    3*R12*alpha(p.I)*Power(W(p.I),2) -
    2*gam12*invgam12*R12*alpha(p.I)*Power(W(p.I),2) -
    2*gam12*invgam13*R13*alpha(p.I)*Power(W(p.I),2) -
    gam12*invgam22*R22*alpha(p.I)*Power(W(p.I),2) -
    2*gam12*invgam23*R23*alpha(p.I)*Power(W(p.I),2) -
    gam12*invgam33*R33*alpha(p.I)*Power(W(p.I),2) +
    8*cpi*gam12*invgam11*Ss11*alpha(p.I)*Power(W(p.I),2) -
    24*cpi*Ss12*alpha(p.I)*Power(W(p.I),2) +
    16*cpi*gam12*invgam12*Ss12*alpha(p.I)*Power(W(p.I),2) +
    16*cpi*gam12*invgam13*Ss13*alpha(p.I)*Power(W(p.I),2) +
    8*cpi*gam12*invgam22*Ss22*alpha(p.I)*Power(W(p.I),2) +
    16*cpi*gam12*invgam23*Ss23*alpha(p.I)*Power(W(p.I),2) +
    8*cpi*gam12*invgam33*Ss33*alpha(p.I)*Power(W(p.I),2))/3.
;

dtexAt13(p.I)
=
(3*dexAt113*beta1(p.I) + 3*dexAt213*beta2(p.I) + 3*dexAt313*beta3(p.I) +
    3*dbeta31*exAt11(p.I) + 3*dbeta32*exAt12(p.I) + dbeta11*exAt13(p.I) -
    2*dbeta22*exAt13(p.I) + dbeta33*exAt13(p.I) -
    6*invgamt11*alpha(p.I)*exAt11(p.I)*exAt13(p.I) -
    6*invgamt12*alpha(p.I)*exAt12(p.I)*exAt13(p.I) -
    6*invgamt13*alpha(p.I)*Power(exAt13(p.I),2) + 3*dbeta12*exAt23(p.I) -
    6*invgamt12*alpha(p.I)*exAt11(p.I)*exAt23(p.I) -
    6*invgamt22*alpha(p.I)*exAt12(p.I)*exAt23(p.I) -
    6*invgamt23*alpha(p.I)*exAt13(p.I)*exAt23(p.I) + 3*dbeta13*exAt33(p.I) -
    6*invgamt13*alpha(p.I)*exAt11(p.I)*exAt33(p.I) -
    6*invgamt23*alpha(p.I)*exAt12(p.I)*exAt33(p.I) -
    6*invgamt33*alpha(p.I)*exAt13(p.I)*exAt33(p.I) +
    3*alpha(p.I)*exAt13(p.I)*exKh(p.I) + 6*alpha(p.I)*exAt13(p.I)*Theta(p.I) -
    3*DDalpha13*Power(W(p.I),2) + DDalpha11*gam13*invgam11*Power(W(p.I),2) +
    2*DDalpha12*gam13*invgam12*Power(W(p.I),2) +
    2*DDalpha13*gam13*invgam13*Power(W(p.I),2) +
    DDalpha22*gam13*invgam22*Power(W(p.I),2) +
    2*DDalpha23*gam13*invgam23*Power(W(p.I),2) +
    DDalpha33*gam13*invgam33*Power(W(p.I),2) -
    gam13*invgam11*R11*alpha(p.I)*Power(W(p.I),2) -
    2*gam13*invgam12*R12*alpha(p.I)*Power(W(p.I),2) +
    3*R13*alpha(p.I)*Power(W(p.I),2) -
    2*gam13*invgam13*R13*alpha(p.I)*Power(W(p.I),2) -
    gam13*invgam22*R22*alpha(p.I)*Power(W(p.I),2) -
    2*gam13*invgam23*R23*alpha(p.I)*Power(W(p.I),2) -
    gam13*invgam33*R33*alpha(p.I)*Power(W(p.I),2) +
    8*cpi*gam13*invgam11*Ss11*alpha(p.I)*Power(W(p.I),2) +
    16*cpi*gam13*invgam12*Ss12*alpha(p.I)*Power(W(p.I),2) -
    24*cpi*Ss13*alpha(p.I)*Power(W(p.I),2) +
    16*cpi*gam13*invgam13*Ss13*alpha(p.I)*Power(W(p.I),2) +
    8*cpi*gam13*invgam22*Ss22*alpha(p.I)*Power(W(p.I),2) +
    16*cpi*gam13*invgam23*Ss23*alpha(p.I)*Power(W(p.I),2) +
    8*cpi*gam13*invgam33*Ss33*alpha(p.I)*Power(W(p.I),2))/3.
;

dtexAt22(p.I)
=
(3*dexAt122*beta1(p.I) + 3*dexAt222*beta2(p.I) + 3*dexAt322*beta3(p.I) +
    6*dbeta21*exAt12(p.I) - 6*invgamt11*alpha(p.I)*Power(exAt12(p.I),2) -
    2*dbeta11*exAt22(p.I) + 4*dbeta22*exAt22(p.I) - 2*dbeta33*exAt22(p.I) -
    12*invgamt12*alpha(p.I)*exAt12(p.I)*exAt22(p.I) -
    6*invgamt22*alpha(p.I)*Power(exAt22(p.I),2) + 6*dbeta23*exAt23(p.I) -
    12*invgamt13*alpha(p.I)*exAt12(p.I)*exAt23(p.I) -
    12*invgamt23*alpha(p.I)*exAt22(p.I)*exAt23(p.I) -
    6*invgamt33*alpha(p.I)*Power(exAt23(p.I),2) +
    3*alpha(p.I)*exAt22(p.I)*exKh(p.I) + 6*alpha(p.I)*exAt22(p.I)*Theta(p.I) -
    3*DDalpha22*Power(W(p.I),2) + DDalpha11*gam22*invgam11*Power(W(p.I),2) +
    2*DDalpha12*gam22*invgam12*Power(W(p.I),2) +
    2*DDalpha13*gam22*invgam13*Power(W(p.I),2) +
    DDalpha22*gam22*invgam22*Power(W(p.I),2) +
    2*DDalpha23*gam22*invgam23*Power(W(p.I),2) +
    DDalpha33*gam22*invgam33*Power(W(p.I),2) -
    gam22*invgam11*R11*alpha(p.I)*Power(W(p.I),2) -
    2*gam22*invgam12*R12*alpha(p.I)*Power(W(p.I),2) -
    2*gam22*invgam13*R13*alpha(p.I)*Power(W(p.I),2) +
    3*R22*alpha(p.I)*Power(W(p.I),2) -
    gam22*invgam22*R22*alpha(p.I)*Power(W(p.I),2) -
    2*gam22*invgam23*R23*alpha(p.I)*Power(W(p.I),2) -
    gam22*invgam33*R33*alpha(p.I)*Power(W(p.I),2) +
    8*cpi*gam22*invgam11*Ss11*alpha(p.I)*Power(W(p.I),2) +
    16*cpi*gam22*invgam12*Ss12*alpha(p.I)*Power(W(p.I),2) +
    16*cpi*gam22*invgam13*Ss13*alpha(p.I)*Power(W(p.I),2) -
    24*cpi*Ss22*alpha(p.I)*Power(W(p.I),2) +
    8*cpi*gam22*invgam22*Ss22*alpha(p.I)*Power(W(p.I),2) +
    16*cpi*gam22*invgam23*Ss23*alpha(p.I)*Power(W(p.I),2) +
    8*cpi*gam22*invgam33*Ss33*alpha(p.I)*Power(W(p.I),2))/3.
;

dtexAt23(p.I)
=
(3*dexAt123*beta1(p.I) + 3*dexAt223*beta2(p.I) + 3*dexAt323*beta3(p.I) +
    3*dbeta31*exAt12(p.I) + 3*dbeta21*exAt13(p.I) -
    6*invgamt11*alpha(p.I)*exAt12(p.I)*exAt13(p.I) + 3*dbeta32*exAt22(p.I) -
    6*invgamt12*alpha(p.I)*exAt13(p.I)*exAt22(p.I) - 2*dbeta11*exAt23(p.I) +
    dbeta22*exAt23(p.I) + dbeta33*exAt23(p.I) -
    6*invgamt12*alpha(p.I)*exAt12(p.I)*exAt23(p.I) -
    6*invgamt13*alpha(p.I)*exAt13(p.I)*exAt23(p.I) -
    6*invgamt22*alpha(p.I)*exAt22(p.I)*exAt23(p.I) -
    6*invgamt23*alpha(p.I)*Power(exAt23(p.I),2) + 3*dbeta23*exAt33(p.I) -
    6*invgamt13*alpha(p.I)*exAt12(p.I)*exAt33(p.I) -
    6*invgamt23*alpha(p.I)*exAt22(p.I)*exAt33(p.I) -
    6*invgamt33*alpha(p.I)*exAt23(p.I)*exAt33(p.I) +
    3*alpha(p.I)*exAt23(p.I)*exKh(p.I) + 6*alpha(p.I)*exAt23(p.I)*Theta(p.I) -
    3*DDalpha23*Power(W(p.I),2) + DDalpha11*gam23*invgam11*Power(W(p.I),2) +
    2*DDalpha12*gam23*invgam12*Power(W(p.I),2) +
    2*DDalpha13*gam23*invgam13*Power(W(p.I),2) +
    DDalpha22*gam23*invgam22*Power(W(p.I),2) +
    2*DDalpha23*gam23*invgam23*Power(W(p.I),2) +
    DDalpha33*gam23*invgam33*Power(W(p.I),2) -
    gam23*invgam11*R11*alpha(p.I)*Power(W(p.I),2) -
    2*gam23*invgam12*R12*alpha(p.I)*Power(W(p.I),2) -
    2*gam23*invgam13*R13*alpha(p.I)*Power(W(p.I),2) -
    gam23*invgam22*R22*alpha(p.I)*Power(W(p.I),2) +
    3*R23*alpha(p.I)*Power(W(p.I),2) -
    2*gam23*invgam23*R23*alpha(p.I)*Power(W(p.I),2) -
    gam23*invgam33*R33*alpha(p.I)*Power(W(p.I),2) +
    8*cpi*gam23*invgam11*Ss11*alpha(p.I)*Power(W(p.I),2) +
    16*cpi*gam23*invgam12*Ss12*alpha(p.I)*Power(W(p.I),2) +
    16*cpi*gam23*invgam13*Ss13*alpha(p.I)*Power(W(p.I),2) +
    8*cpi*gam23*invgam22*Ss22*alpha(p.I)*Power(W(p.I),2) -
    24*cpi*Ss23*alpha(p.I)*Power(W(p.I),2) +
    16*cpi*gam23*invgam23*Ss23*alpha(p.I)*Power(W(p.I),2) +
    8*cpi*gam23*invgam33*Ss33*alpha(p.I)*Power(W(p.I),2))/3.
;

dtexAt33(p.I)
=
(3*dexAt133*beta1(p.I) + 3*dexAt233*beta2(p.I) + 3*dexAt333*beta3(p.I) +
    6*dbeta31*exAt13(p.I) - 6*invgamt11*alpha(p.I)*Power(exAt13(p.I),2) +
    6*dbeta32*exAt23(p.I) - 12*invgamt12*alpha(p.I)*exAt13(p.I)*exAt23(p.I) -
    6*invgamt22*alpha(p.I)*Power(exAt23(p.I),2) - 2*dbeta11*exAt33(p.I) -
    2*dbeta22*exAt33(p.I) + 4*dbeta33*exAt33(p.I) -
    12*invgamt13*alpha(p.I)*exAt13(p.I)*exAt33(p.I) -
    12*invgamt23*alpha(p.I)*exAt23(p.I)*exAt33(p.I) -
    6*invgamt33*alpha(p.I)*Power(exAt33(p.I),2) +
    3*alpha(p.I)*exAt33(p.I)*exKh(p.I) + 6*alpha(p.I)*exAt33(p.I)*Theta(p.I) -
    3*DDalpha33*Power(W(p.I),2) + DDalpha11*gam33*invgam11*Power(W(p.I),2) +
    2*DDalpha12*gam33*invgam12*Power(W(p.I),2) +
    2*DDalpha13*gam33*invgam13*Power(W(p.I),2) +
    DDalpha22*gam33*invgam22*Power(W(p.I),2) +
    2*DDalpha23*gam33*invgam23*Power(W(p.I),2) +
    DDalpha33*gam33*invgam33*Power(W(p.I),2) -
    gam33*invgam11*R11*alpha(p.I)*Power(W(p.I),2) -
    2*gam33*invgam12*R12*alpha(p.I)*Power(W(p.I),2) -
    2*gam33*invgam13*R13*alpha(p.I)*Power(W(p.I),2) -
    gam33*invgam22*R22*alpha(p.I)*Power(W(p.I),2) -
    2*gam33*invgam23*R23*alpha(p.I)*Power(W(p.I),2) +
    3*R33*alpha(p.I)*Power(W(p.I),2) -
    gam33*invgam33*R33*alpha(p.I)*Power(W(p.I),2) +
    8*cpi*gam33*invgam11*Ss11*alpha(p.I)*Power(W(p.I),2) +
    16*cpi*gam33*invgam12*Ss12*alpha(p.I)*Power(W(p.I),2) +
    16*cpi*gam33*invgam13*Ss13*alpha(p.I)*Power(W(p.I),2) +
    8*cpi*gam33*invgam22*Ss22*alpha(p.I)*Power(W(p.I),2) +
    16*cpi*gam33*invgam23*Ss23*alpha(p.I)*Power(W(p.I),2) -
    24*cpi*Ss33*alpha(p.I)*Power(W(p.I),2) +
    8*cpi*gam33*invgam33*Ss33*alpha(p.I)*Power(W(p.I),2))/3.
;

dttrGt1(p.I)
=
(-6*dalpha1*exAtUU11 - 6*dalpha2*exAtUU12 - 6*dalpha3*exAtUU13 +
    4*ddbeta111*invgamt11 + ddbeta122*invgamt11 + ddbeta133*invgamt11 +
    7*ddbeta121*invgamt12 + ddbeta222*invgamt12 + ddbeta233*invgamt12 +
    7*ddbeta131*invgamt13 + ddbeta232*invgamt13 + ddbeta333*invgamt13 +
    3*ddbeta221*invgamt22 + 6*ddbeta231*invgamt23 + 3*ddbeta331*invgamt33 -
    dbeta11*trGtd1 + 2*dbeta22*trGtd1 + 2*dbeta33*trGtd1 -
    3*dbeta21*trGtd2 - 3*dbeta31*trGtd3 + 3*dtrGt11*beta1(p.I) +
    3*dtrGt21*beta2(p.I) + 3*dtrGt31*beta3(p.I) -
    2*alpha(p.I)*(9*dlnW1*exAtUU11 + 9*dlnW2*exAtUU12 + 9*dlnW3*exAtUU13 -
       3*exAtUU11*Gt111 - 6*exAtUU12*Gt112 - 6*exAtUU13*Gt113 -
       3*exAtUU22*Gt122 - 6*exAtUU23*Gt123 - 3*exAtUU33*Gt133 +
       2*dexKh1*invgamt11 + dTheta1*invgamt11 + 2*dexKh2*invgamt12 +
       dTheta2*invgamt12 + 2*dexKh3*invgamt13 + dTheta3*invgamt13 +
       24*cpi*invgamt11*Sm1 + 24*cpi*invgamt12*Sm2 + 24*cpi*invgamt13*Sm3 -
       3*ckappa1*trGtd1 + 3*ckappa1*trGt1(p.I)))/3.
;

dttrGt2(p.I)
=
(-6*dalpha1*exAtUU12 - 6*dalpha2*exAtUU22 - 6*dalpha3*exAtUU23 +
    3*ddbeta112*invgamt11 + ddbeta111*invgamt12 + 7*ddbeta122*invgamt12 +
    ddbeta133*invgamt12 + 6*ddbeta132*invgamt13 + ddbeta121*invgamt22 +
    4*ddbeta222*invgamt22 + ddbeta233*invgamt22 + ddbeta131*invgamt23 +
    7*ddbeta232*invgamt23 + ddbeta333*invgamt23 + 3*ddbeta332*invgamt33 -
    3*dbeta12*trGtd1 + 2*dbeta11*trGtd2 - dbeta22*trGtd2 +
    2*dbeta33*trGtd2 - 3*dbeta32*trGtd3 + 3*dtrGt12*beta1(p.I) +
    3*dtrGt22*beta2(p.I) + 3*dtrGt32*beta3(p.I) -
    2*alpha(p.I)*(9*dlnW1*exAtUU12 + 9*dlnW2*exAtUU22 + 9*dlnW3*exAtUU23 -
       3*exAtUU11*Gt211 - 6*exAtUU12*Gt212 - 6*exAtUU13*Gt213 -
       3*exAtUU22*Gt222 - 6*exAtUU23*Gt223 - 3*exAtUU33*Gt233 +
       2*dexKh1*invgamt12 + dTheta1*invgamt12 + 2*dexKh2*invgamt22 +
       dTheta2*invgamt22 + 2*dexKh3*invgamt23 + dTheta3*invgamt23 +
       24*cpi*invgamt12*Sm1 + 24*cpi*invgamt22*Sm2 + 24*cpi*invgamt23*Sm3 -
       3*ckappa1*trGtd2 + 3*ckappa1*trGt2(p.I)))/3.
;

dttrGt3(p.I)
=
(-6*dalpha1*exAtUU13 - 6*dalpha2*exAtUU23 - 6*dalpha3*exAtUU33 +
    3*ddbeta113*invgamt11 + 6*ddbeta123*invgamt12 + ddbeta111*invgamt13 +
    ddbeta122*invgamt13 + 7*ddbeta133*invgamt13 + 3*ddbeta223*invgamt22 +
    ddbeta121*invgamt23 + ddbeta222*invgamt23 + 7*ddbeta233*invgamt23 +
    ddbeta131*invgamt33 + ddbeta232*invgamt33 + 4*ddbeta333*invgamt33 -
    3*dbeta13*trGtd1 - 3*dbeta23*trGtd2 + 2*dbeta11*trGtd3 +
    2*dbeta22*trGtd3 - dbeta33*trGtd3 + 3*dtrGt13*beta1(p.I) +
    3*dtrGt23*beta2(p.I) + 3*dtrGt33*beta3(p.I) -
    2*alpha(p.I)*(9*dlnW1*exAtUU13 + 9*dlnW2*exAtUU23 + 9*dlnW3*exAtUU33 -
       3*exAtUU11*Gt311 - 6*exAtUU12*Gt312 - 6*exAtUU13*Gt313 -
       3*exAtUU22*Gt322 - 6*exAtUU23*Gt323 - 3*exAtUU33*Gt333 +
       2*dexKh1*invgamt13 + dTheta1*invgamt13 + 2*dexKh2*invgamt23 +
       dTheta2*invgamt23 + 2*dexKh3*invgamt33 + dTheta3*invgamt33 +
       24*cpi*invgamt13*Sm1 + 24*cpi*invgamt23*Sm2 + 24*cpi*invgamt33*Sm3 -
       3*ckappa1*trGtd3 + 3*ckappa1*trGt3(p.I)))/3.
;

dtTheta(p.I)
=
dTheta1*beta1(p.I) + dTheta2*beta2(p.I) + dTheta3*beta3(p.I) -
  (alpha(p.I)*(48*cpi*rho - 3*trR + 3*exAtUU11*exAt11(p.I) +
       6*exAtUU12*exAt12(p.I) + 6*exAtUU13*exAt13(p.I) +
       3*exAtUU22*exAt22(p.I) + 6*exAtUU23*exAt23(p.I) +
       3*exAtUU33*exAt33(p.I) - 2*Power(exKh(p.I),2) + 12*ckappa1*Theta(p.I) +
       6*ckappa1*ckappa2*Theta(p.I) - 8*exKh(p.I)*Theta(p.I) -
       8*Power(Theta(p.I),2)))/6.
;

dtalpha(p.I)
=
dalpha1*beta1(p.I) + dalpha2*beta2(p.I) + dalpha3*beta3(p.I) -
  cmuL*alpha(p.I)*exKh(p.I)
;

dtbeta1(p.I)
=
(-ceta + dbeta11)*beta1(p.I) + dbeta21*beta2(p.I) + dbeta31*beta3(p.I) +
  cmuS*trGt1(p.I)
;

dtbeta2(p.I)
=
dbeta12*beta1(p.I) + (-ceta + dbeta22)*beta2(p.I) + dbeta32*beta3(p.I) +
  cmuS*trGt2(p.I)
;

dtbeta3(p.I)
=
dbeta13*beta1(p.I) + dbeta23*beta2(p.I) - ceta*beta3(p.I) + dbeta33*beta3(p.I) +
  cmuS*trGt3(p.I)
;


});

#endif // #ifndef Z4COWGPU_SET_RHS_HXX

/* Z4cowGPU_set_rhs.hxx */
