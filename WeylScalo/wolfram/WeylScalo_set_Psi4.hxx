/* WeylScalo_set_Psi4.hxx */
/* Produced with Generato */

#ifndef WEYLSCALO_SET_PSI4_HXX
#define WEYLSCALO_SET_PSI4_HXX

const auto &Psi4real = gf_Psi4real;
const auto &Psi4imag = gf_Psi4imag;
const auto &exK11 = gf_exK[0];
const auto &exK12 = gf_exK[1];
const auto &exK13 = gf_exK[2];
const auto &exK22 = gf_exK[3];
const auto &exK23 = gf_exK[4];
const auto &exK33 = gf_exK[5];
const auto &alpha = gf_alpha;
const auto &beta1 = gf_beta[0];
const auto &beta2 = gf_beta[1];
const auto &beta3 = gf_beta[2];

noinline([&]() __attribute__((__flatten__, __hot__)) {
grid.loop_int_device<0, 0, 0>(
  grid.nghostzones, [=] ARITH_DEVICE(const PointDesc &p) ARITH_INLINE {
const int ijk = layout2.linear(p.i, p.j, p.k);

const auto dgam111[[ijk]] = calcderivs1_1(gam111[[ij]], p.i, p.j, p.k);
const auto dgam112[[ijk]] = calcderivs1_1(gam112[[ij]], p.i, p.j, p.k);
const auto dgam113[[ijk]] = calcderivs1_1(gam113[[ij]], p.i, p.j, p.k);
const auto dgam122[[ijk]] = calcderivs1_1(gam122[[ij]], p.i, p.j, p.k);
const auto dgam123[[ijk]] = calcderivs1_1(gam123[[ij]], p.i, p.j, p.k);
const auto dgam133[[ijk]] = calcderivs1_1(gam133[[ij]], p.i, p.j, p.k);
const auto dgam211[[ijk]] = calcderivs1_2(gam211[[ij]], p.i, p.j, p.k);
const auto dgam212[[ijk]] = calcderivs1_2(gam212[[ij]], p.i, p.j, p.k);
const auto dgam213[[ijk]] = calcderivs1_2(gam213[[ij]], p.i, p.j, p.k);
const auto dgam222[[ijk]] = calcderivs1_2(gam222[[ij]], p.i, p.j, p.k);
const auto dgam223[[ijk]] = calcderivs1_2(gam223[[ij]], p.i, p.j, p.k);
const auto dgam233[[ijk]] = calcderivs1_2(gam233[[ij]], p.i, p.j, p.k);
const auto dgam311[[ijk]] = calcderivs1_3(gam311[[ij]], p.i, p.j, p.k);
const auto dgam312[[ijk]] = calcderivs1_3(gam312[[ij]], p.i, p.j, p.k);
const auto dgam313[[ijk]] = calcderivs1_3(gam313[[ij]], p.i, p.j, p.k);
const auto dgam322[[ijk]] = calcderivs1_3(gam322[[ij]], p.i, p.j, p.k);
const auto dgam323[[ijk]] = calcderivs1_3(gam323[[ij]], p.i, p.j, p.k);
const auto dgam333[[ijk]] = calcderivs1_3(gam333[[ij]], p.i, p.j, p.k);
const auto dexK111[[ijk]] = calcderivs1_1(exK111[[ij]], p.i, p.j, p.k);
const auto dexK112[[ijk]] = calcderivs1_1(exK112[[ij]], p.i, p.j, p.k);
const auto dexK113[[ijk]] = calcderivs1_1(exK113[[ij]], p.i, p.j, p.k);
const auto dexK122[[ijk]] = calcderivs1_1(exK122[[ij]], p.i, p.j, p.k);
const auto dexK123[[ijk]] = calcderivs1_1(exK123[[ij]], p.i, p.j, p.k);
const auto dexK133[[ijk]] = calcderivs1_1(exK133[[ij]], p.i, p.j, p.k);
const auto dexK211[[ijk]] = calcderivs1_2(exK211[[ij]], p.i, p.j, p.k);
const auto dexK212[[ijk]] = calcderivs1_2(exK212[[ij]], p.i, p.j, p.k);
const auto dexK213[[ijk]] = calcderivs1_2(exK213[[ij]], p.i, p.j, p.k);
const auto dexK222[[ijk]] = calcderivs1_2(exK222[[ij]], p.i, p.j, p.k);
const auto dexK223[[ijk]] = calcderivs1_2(exK223[[ij]], p.i, p.j, p.k);
const auto dexK233[[ijk]] = calcderivs1_2(exK233[[ij]], p.i, p.j, p.k);
const auto dexK311[[ijk]] = calcderivs1_3(exK311[[ij]], p.i, p.j, p.k);
const auto dexK312[[ijk]] = calcderivs1_3(exK312[[ij]], p.i, p.j, p.k);
const auto dexK313[[ijk]] = calcderivs1_3(exK313[[ij]], p.i, p.j, p.k);
const auto dexK322[[ijk]] = calcderivs1_3(exK322[[ij]], p.i, p.j, p.k);
const auto dexK323[[ijk]] = calcderivs1_3(exK323[[ij]], p.i, p.j, p.k);
const auto dexK333[[ijk]] = calcderivs1_3(exK333[[ij]], p.i, p.j, p.k);
const auto ddgam1111[[ijk]] = calcderivs2_11(gam1111[[i]], p.i, p.j, p.k);
const auto ddgam1112[[ijk]] = calcderivs2_11(gam1112[[i]], p.i, p.j, p.k);
const auto ddgam1113[[ijk]] = calcderivs2_11(gam1113[[i]], p.i, p.j, p.k);
const auto ddgam1122[[ijk]] = calcderivs2_11(gam1122[[i]], p.i, p.j, p.k);
const auto ddgam1123[[ijk]] = calcderivs2_11(gam1123[[i]], p.i, p.j, p.k);
const auto ddgam1133[[ijk]] = calcderivs2_11(gam1133[[i]], p.i, p.j, p.k);
const auto ddgam1211[[ijk]] = calcderivs2_12(gam1211[[i]], p.i, p.j, p.k);
const auto ddgam1212[[ijk]] = calcderivs2_12(gam1212[[i]], p.i, p.j, p.k);
const auto ddgam1213[[ijk]] = calcderivs2_12(gam1213[[i]], p.i, p.j, p.k);
const auto ddgam1222[[ijk]] = calcderivs2_12(gam1222[[i]], p.i, p.j, p.k);
const auto ddgam1223[[ijk]] = calcderivs2_12(gam1223[[i]], p.i, p.j, p.k);
const auto ddgam1233[[ijk]] = calcderivs2_12(gam1233[[i]], p.i, p.j, p.k);
const auto ddgam1311[[ijk]] = calcderivs2_13(gam1311[[i]], p.i, p.j, p.k);
const auto ddgam1312[[ijk]] = calcderivs2_13(gam1312[[i]], p.i, p.j, p.k);
const auto ddgam1313[[ijk]] = calcderivs2_13(gam1313[[i]], p.i, p.j, p.k);
const auto ddgam1322[[ijk]] = calcderivs2_13(gam1322[[i]], p.i, p.j, p.k);
const auto ddgam1323[[ijk]] = calcderivs2_13(gam1323[[i]], p.i, p.j, p.k);
const auto ddgam1333[[ijk]] = calcderivs2_13(gam1333[[i]], p.i, p.j, p.k);
const auto ddgam2211[[ijk]] = calcderivs2_22(gam2211[[i]], p.i, p.j, p.k);
const auto ddgam2212[[ijk]] = calcderivs2_22(gam2212[[i]], p.i, p.j, p.k);
const auto ddgam2213[[ijk]] = calcderivs2_22(gam2213[[i]], p.i, p.j, p.k);
const auto ddgam2222[[ijk]] = calcderivs2_22(gam2222[[i]], p.i, p.j, p.k);
const auto ddgam2223[[ijk]] = calcderivs2_22(gam2223[[i]], p.i, p.j, p.k);
const auto ddgam2233[[ijk]] = calcderivs2_22(gam2233[[i]], p.i, p.j, p.k);
const auto ddgam2311[[ijk]] = calcderivs2_23(gam2311[[i]], p.i, p.j, p.k);
const auto ddgam2312[[ijk]] = calcderivs2_23(gam2312[[i]], p.i, p.j, p.k);
const auto ddgam2313[[ijk]] = calcderivs2_23(gam2313[[i]], p.i, p.j, p.k);
const auto ddgam2322[[ijk]] = calcderivs2_23(gam2322[[i]], p.i, p.j, p.k);
const auto ddgam2323[[ijk]] = calcderivs2_23(gam2323[[i]], p.i, p.j, p.k);
const auto ddgam2333[[ijk]] = calcderivs2_23(gam2333[[i]], p.i, p.j, p.k);
const auto ddgam3311[[ijk]] = calcderivs2_33(gam3311[[i]], p.i, p.j, p.k);
const auto ddgam3312[[ijk]] = calcderivs2_33(gam3312[[i]], p.i, p.j, p.k);
const auto ddgam3313[[ijk]] = calcderivs2_33(gam3313[[i]], p.i, p.j, p.k);
const auto ddgam3322[[ijk]] = calcderivs2_33(gam3322[[i]], p.i, p.j, p.k);
const auto ddgam3323[[ijk]] = calcderivs2_33(gam3323[[i]], p.i, p.j, p.k);
const auto ddgam3333[[ijk]] = calcderivs2_33(gam3333[[i]], p.i, p.j, p.k);

const auto
detgam
=
-(Power(g13,2)*g22) + 2*g12*g13*g23 - g11*Power(g23,2) - Power(g12,2)*g33 +
  g11*g22*g33
;

const auto
detinvgam
=
1/detgam
;

const auto
sqrtdetgam
=
Sqrt(detgam)
;

const auto
sqrtdetinvgam
=
1/sqrtdetgam
;

const auto
invgam11
=
detinvgam*(-Power(g23,2) + g22*g33)
;

const auto
invgam12
=
detinvgam*(g13*g23 - g12*g33)
;

const auto
invgam13
=
detinvgam*(-(g13*g22) + g12*g23)
;

const auto
invgam22
=
detinvgam*(-Power(g13,2) + g11*g33)
;

const auto
invgam23
=
detinvgam*(g12*g13 - g11*g23)
;

const auto
invgam33
=
detinvgam*(-Power(g12,2) + g11*g22)
;

const auto
GamDDD111
=
dgam111[ijk]/2.
;

const auto
GamDDD112
=
dgam211[ijk]/2.
;

const auto
GamDDD113
=
dgam311[ijk]/2.
;

const auto
GamDDD122
=
-0.5*dgam122[ijk] + dgam212[ijk]
;

const auto
GamDDD123
=
(-dgam123[ijk] + dgam213[ijk] + dgam312[ijk])/2.
;

const auto
GamDDD133
=
-0.5*dgam133[ijk] + dgam313[ijk]
;

const auto
GamDDD211
=
dgam112[ijk] - dgam211[ijk]/2.
;

const auto
GamDDD212
=
dgam122[ijk]/2.
;

const auto
GamDDD213
=
(dgam123[ijk] - dgam213[ijk] + dgam312[ijk])/2.
;

const auto
GamDDD222
=
dgam222[ijk]/2.
;

const auto
GamDDD223
=
dgam322[ijk]/2.
;

const auto
GamDDD233
=
-0.5*dgam233[ijk] + dgam323[ijk]
;

const auto
GamDDD311
=
dgam113[ijk] - dgam311[ijk]/2.
;

const auto
GamDDD312
=
(dgam123[ijk] + dgam213[ijk] - dgam312[ijk])/2.
;

const auto
GamDDD313
=
dgam133[ijk]/2.
;

const auto
GamDDD322
=
dgam223[ijk] - dgam322[ijk]/2.
;

const auto
GamDDD323
=
dgam233[ijk]/2.
;

const auto
GamDDD333
=
dgam333[ijk]/2.
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
Ricc11
=
Gam112*GamDDD111*invgam12 - Gam111*GamDDD112*invgam12 +
  Gam212*GamDDD211*invgam12 - Gam211*GamDDD212*invgam12 +
  Gam312*GamDDD311*invgam12 - Gam311*GamDDD312*invgam12 +
  Gam113*GamDDD111*invgam13 - Gam111*GamDDD113*invgam13 +
  Gam213*GamDDD211*invgam13 - Gam211*GamDDD213*invgam13 +
  Gam313*GamDDD311*invgam13 - Gam311*GamDDD313*invgam13 +
  Gam112*GamDDD112*invgam22 - Gam111*GamDDD122*invgam22 +
  Gam212*GamDDD212*invgam22 - Gam211*GamDDD222*invgam22 +
  Gam312*GamDDD312*invgam22 - Gam311*GamDDD322*invgam22 +
  Gam113*GamDDD112*invgam23 + Gam112*GamDDD113*invgam23 -
  2*Gam111*GamDDD123*invgam23 + Gam213*GamDDD212*invgam23 +
  Gam212*GamDDD213*invgam23 - 2*Gam211*GamDDD223*invgam23 +
  Gam313*GamDDD312*invgam23 + Gam312*GamDDD313*invgam23 -
  2*Gam311*GamDDD323*invgam23 + Gam113*GamDDD113*invgam33 -
  Gam111*GamDDD133*invgam33 + Gam213*GamDDD213*invgam33 -
  Gam211*GamDDD233*invgam33 + Gam313*GamDDD313*invgam33 -
  Gam311*GamDDD333*invgam33 - (invgam22*ddgam1122[ijk])/2. -
  invgam23*ddgam1123[ijk] - (invgam33*ddgam1133[ijk])/2. +
  invgam22*ddgam1212[ijk] + invgam23*ddgam1213[ijk] +
  invgam23*ddgam1312[ijk] + invgam33*ddgam1313[ijk] -
  (invgam22*ddgam2211[ijk])/2. - invgam23*ddgam2311[ijk] -
  (invgam33*ddgam3311[ijk])/2.
;

const auto
Ricc12
=
(-2*Gam112*GamDDD111*invgam11 + 2*Gam111*GamDDD112*invgam11 -
    2*Gam212*GamDDD211*invgam11 + 2*Gam211*GamDDD212*invgam11 -
    2*Gam312*GamDDD311*invgam11 + 2*Gam311*GamDDD312*invgam11 -
    2*Gam112*GamDDD112*invgam12 + 2*Gam111*GamDDD122*invgam12 -
    2*Gam212*GamDDD212*invgam12 + 2*Gam211*GamDDD222*invgam12 -
    2*Gam312*GamDDD312*invgam12 + 2*Gam311*GamDDD322*invgam12 +
    2*Gam113*GamDDD112*invgam13 - 4*Gam112*GamDDD113*invgam13 +
    2*Gam111*GamDDD123*invgam13 + 2*Gam213*GamDDD212*invgam13 -
    4*Gam212*GamDDD213*invgam13 + 2*Gam211*GamDDD223*invgam13 +
    2*Gam313*GamDDD312*invgam13 - 4*Gam312*GamDDD313*invgam13 +
    2*Gam311*GamDDD323*invgam13 + 2*Gam113*GamDDD122*invgam23 -
    2*Gam112*GamDDD123*invgam23 + 2*Gam213*GamDDD222*invgam23 -
    2*Gam212*GamDDD223*invgam23 + 2*Gam313*GamDDD322*invgam23 -
    2*Gam312*GamDDD323*invgam23 + 2*Gam113*GamDDD123*invgam33 -
    2*Gam112*GamDDD133*invgam33 + 2*Gam213*GamDDD223*invgam33 -
    2*Gam212*GamDDD233*invgam33 + 2*Gam313*GamDDD323*invgam33 -
    2*Gam312*GamDDD333*invgam33 + invgam12*ddgam1122[ijk] +
    invgam13*ddgam1123[ijk] - 2*invgam12*ddgam1212[ijk] -
    invgam13*ddgam1213[ijk] - invgam23*ddgam1223[ijk] -
    invgam33*ddgam1233[ijk] - invgam13*ddgam1312[ijk] +
    invgam23*ddgam1322[ijk] + invgam33*ddgam1323[ijk] +
    invgam12*ddgam2211[ijk] + invgam23*ddgam2213[ijk] +
    invgam13*ddgam2311[ijk] - invgam23*ddgam2312[ijk] +
    invgam33*ddgam2313[ijk] - invgam33*ddgam3312[ijk])/2.
;

const auto
Ricc13
=
(-2*Gam113*GamDDD111*invgam11 + 2*Gam111*GamDDD113*invgam11 -
    2*Gam213*GamDDD211*invgam11 + 2*Gam211*GamDDD213*invgam11 -
    2*Gam313*GamDDD311*invgam11 + 2*Gam311*GamDDD313*invgam11 -
    4*Gam113*GamDDD112*invgam12 + 2*Gam112*GamDDD113*invgam12 +
    2*Gam111*GamDDD123*invgam12 - 4*Gam213*GamDDD212*invgam12 +
    2*Gam212*GamDDD213*invgam12 + 2*Gam211*GamDDD223*invgam12 -
    4*Gam313*GamDDD312*invgam12 + 2*Gam312*GamDDD313*invgam12 +
    2*Gam311*GamDDD323*invgam12 - 2*Gam113*GamDDD113*invgam13 +
    2*Gam111*GamDDD133*invgam13 - 2*Gam213*GamDDD213*invgam13 +
    2*Gam211*GamDDD233*invgam13 - 2*Gam313*GamDDD313*invgam13 +
    2*Gam311*GamDDD333*invgam13 - 2*Gam113*GamDDD122*invgam22 +
    2*Gam112*GamDDD123*invgam22 - 2*Gam213*GamDDD222*invgam22 +
    2*Gam212*GamDDD223*invgam22 - 2*Gam313*GamDDD322*invgam22 +
    2*Gam312*GamDDD323*invgam22 - 2*Gam113*GamDDD123*invgam23 +
    2*Gam112*GamDDD133*invgam23 - 2*Gam213*GamDDD223*invgam23 +
    2*Gam212*GamDDD233*invgam23 - 2*Gam313*GamDDD323*invgam23 +
    2*Gam312*GamDDD333*invgam23 + invgam12*ddgam1123[ijk] +
    invgam13*ddgam1133[ijk] - invgam12*ddgam1213[ijk] +
    invgam22*ddgam1223[ijk] + invgam23*ddgam1233[ijk] -
    invgam12*ddgam1312[ijk] - 2*invgam13*ddgam1313[ijk] -
    invgam22*ddgam1322[ijk] - invgam23*ddgam1323[ijk] -
    invgam22*ddgam2213[ijk] + invgam12*ddgam2311[ijk] +
    invgam22*ddgam2312[ijk] - invgam23*ddgam2313[ijk] +
    invgam13*ddgam3311[ijk] + invgam23*ddgam3312[ijk])/2.
;

const auto
Ricc22
=
-(Gam122*GamDDD111*invgam11) + Gam112*GamDDD112*invgam11 -
  Gam222*GamDDD211*invgam11 + Gam212*GamDDD212*invgam11 -
  Gam322*GamDDD311*invgam11 + Gam312*GamDDD312*invgam11 -
  Gam122*GamDDD112*invgam12 + Gam112*GamDDD122*invgam12 -
  Gam222*GamDDD212*invgam12 + Gam212*GamDDD222*invgam12 -
  Gam322*GamDDD312*invgam12 + Gam312*GamDDD322*invgam12 +
  Gam123*GamDDD112*invgam13 - 2*Gam122*GamDDD113*invgam13 +
  Gam112*GamDDD123*invgam13 + Gam223*GamDDD212*invgam13 -
  2*Gam222*GamDDD213*invgam13 + Gam212*GamDDD223*invgam13 +
  Gam323*GamDDD312*invgam13 - 2*Gam322*GamDDD313*invgam13 +
  Gam312*GamDDD323*invgam13 + Gam123*GamDDD122*invgam23 -
  Gam122*GamDDD123*invgam23 + Gam223*GamDDD222*invgam23 -
  Gam222*GamDDD223*invgam23 + Gam323*GamDDD322*invgam23 -
  Gam322*GamDDD323*invgam23 + Gam123*GamDDD123*invgam33 -
  Gam122*GamDDD133*invgam33 + Gam223*GamDDD223*invgam33 -
  Gam222*GamDDD233*invgam33 + Gam323*GamDDD323*invgam33 -
  Gam322*GamDDD333*invgam33 - (invgam11*ddgam1122[ijk])/2. +
  invgam11*ddgam1212[ijk] + invgam13*ddgam1223[ijk] -
  invgam13*ddgam1322[ijk] - (invgam11*ddgam2211[ijk])/2. -
  invgam13*ddgam2213[ijk] - (invgam33*ddgam2233[ijk])/2. +
  invgam13*ddgam2312[ijk] + invgam33*ddgam2323[ijk] -
  (invgam33*ddgam3322[ijk])/2.
;

const auto
Ricc23
=
(-2*Gam123*GamDDD111*invgam11 + 2*Gam112*GamDDD113*invgam11 -
    2*Gam223*GamDDD211*invgam11 + 2*Gam212*GamDDD213*invgam11 -
    2*Gam323*GamDDD311*invgam11 + 2*Gam312*GamDDD313*invgam11 -
    4*Gam123*GamDDD112*invgam12 + 2*Gam122*GamDDD113*invgam12 +
    2*Gam112*GamDDD123*invgam12 - 4*Gam223*GamDDD212*invgam12 +
    2*Gam222*GamDDD213*invgam12 + 2*Gam212*GamDDD223*invgam12 -
    4*Gam323*GamDDD312*invgam12 + 2*Gam322*GamDDD313*invgam12 +
    2*Gam312*GamDDD323*invgam12 - 2*Gam123*GamDDD113*invgam13 +
    2*Gam112*GamDDD133*invgam13 - 2*Gam223*GamDDD213*invgam13 +
    2*Gam212*GamDDD233*invgam13 - 2*Gam323*GamDDD313*invgam13 +
    2*Gam312*GamDDD333*invgam13 - 2*Gam123*GamDDD122*invgam22 +
    2*Gam122*GamDDD123*invgam22 - 2*Gam223*GamDDD222*invgam22 +
    2*Gam222*GamDDD223*invgam22 - 2*Gam323*GamDDD322*invgam22 +
    2*Gam322*GamDDD323*invgam22 - 2*Gam123*GamDDD123*invgam23 +
    2*Gam122*GamDDD133*invgam23 - 2*Gam223*GamDDD223*invgam23 +
    2*Gam222*GamDDD233*invgam23 - 2*Gam323*GamDDD323*invgam23 +
    2*Gam322*GamDDD333*invgam23 - invgam11*ddgam1123[ijk] +
    invgam11*ddgam1213[ijk] - invgam12*ddgam1223[ijk] +
    invgam13*ddgam1233[ijk] + invgam11*ddgam1312[ijk] +
    invgam12*ddgam1322[ijk] - invgam13*ddgam1323[ijk] +
    invgam12*ddgam2213[ijk] + invgam23*ddgam2233[ijk] -
    invgam11*ddgam2311[ijk] - invgam12*ddgam2312[ijk] -
    invgam13*ddgam2313[ijk] - 2*invgam23*ddgam2323[ijk] +
    invgam13*ddgam3312[ijk] + invgam23*ddgam3322[ijk])/2.
;

const auto
Ricc33
=
-(Gam133*GamDDD111*invgam11) + Gam113*GamDDD113*invgam11 -
  Gam233*GamDDD211*invgam11 + Gam213*GamDDD213*invgam11 -
  Gam333*GamDDD311*invgam11 + Gam313*GamDDD313*invgam11 -
  2*Gam133*GamDDD112*invgam12 + Gam123*GamDDD113*invgam12 +
  Gam113*GamDDD123*invgam12 - 2*Gam233*GamDDD212*invgam12 +
  Gam223*GamDDD213*invgam12 + Gam213*GamDDD223*invgam12 -
  2*Gam333*GamDDD312*invgam12 + Gam323*GamDDD313*invgam12 +
  Gam313*GamDDD323*invgam12 - Gam133*GamDDD113*invgam13 +
  Gam113*GamDDD133*invgam13 - Gam233*GamDDD213*invgam13 +
  Gam213*GamDDD233*invgam13 - Gam333*GamDDD313*invgam13 +
  Gam313*GamDDD333*invgam13 - Gam133*GamDDD122*invgam22 +
  Gam123*GamDDD123*invgam22 - Gam233*GamDDD222*invgam22 +
  Gam223*GamDDD223*invgam22 - Gam333*GamDDD322*invgam22 +
  Gam323*GamDDD323*invgam22 - Gam133*GamDDD123*invgam23 +
  Gam123*GamDDD133*invgam23 - Gam233*GamDDD223*invgam23 +
  Gam223*GamDDD233*invgam23 - Gam333*GamDDD323*invgam23 +
  Gam323*GamDDD333*invgam23 - (invgam11*ddgam1133[ijk])/2. -
  invgam12*ddgam1233[ijk] + invgam11*ddgam1313[ijk] +
  invgam12*ddgam1323[ijk] - (invgam22*ddgam2233[ijk])/2. +
  invgam12*ddgam2313[ijk] + invgam22*ddgam2323[ijk] -
  (invgam11*ddgam3311[ijk])/2. - invgam12*ddgam3312[ijk] -
  (invgam22*ddgam3322[ijk])/2.
;

const auto
trexK
=
invgam11*exK11[ijk] + 2*invgam12*exK12[ijk] + 2*invgam13*exK13[ijk] +
  invgam22*exK22[ijk] + 2*invgam23*exK23[ijk] + invgam33*exK33[ijk]
;

const auto
DexK111
=
dexK111[ijk] - 2*(Gam111*exK11[ijk] + Gam211*exK12[ijk] + Gam311*exK13[ijk])
;

const auto
DexK112
=
dexK112[ijk] - Gam112*exK11[ijk] - Gam111*exK12[ijk] - Gam212*exK12[ijk] -
  Gam312*exK13[ijk] - Gam211*exK22[ijk] - Gam311*exK23[ijk]
;

const auto
DexK113
=
dexK113[ijk] - Gam113*exK11[ijk] - Gam213*exK12[ijk] - Gam111*exK13[ijk] -
  Gam313*exK13[ijk] - Gam211*exK23[ijk] - Gam311*exK33[ijk]
;

const auto
DexK122
=
dexK122[ijk] - 2*(Gam112*exK12[ijk] + Gam212*exK22[ijk] + Gam312*exK23[ijk])
;

const auto
DexK123
=
dexK123[ijk] - Gam113*exK12[ijk] - Gam112*exK13[ijk] - Gam213*exK22[ijk] -
  Gam212*exK23[ijk] - Gam313*exK23[ijk] - Gam312*exK33[ijk]
;

const auto
DexK133
=
dexK133[ijk] - 2*(Gam113*exK13[ijk] + Gam213*exK23[ijk] + Gam313*exK33[ijk])
;

const auto
DexK211
=
dexK211[ijk] - 2*(Gam112*exK11[ijk] + Gam212*exK12[ijk] + Gam312*exK13[ijk])
;

const auto
DexK212
=
dexK212[ijk] - Gam122*exK11[ijk] - Gam112*exK12[ijk] - Gam222*exK12[ijk] -
  Gam322*exK13[ijk] - Gam212*exK22[ijk] - Gam312*exK23[ijk]
;

const auto
DexK213
=
dexK213[ijk] - Gam123*exK11[ijk] - Gam223*exK12[ijk] - Gam112*exK13[ijk] -
  Gam323*exK13[ijk] - Gam212*exK23[ijk] - Gam312*exK33[ijk]
;

const auto
DexK222
=
dexK222[ijk] - 2*(Gam122*exK12[ijk] + Gam222*exK22[ijk] + Gam322*exK23[ijk])
;

const auto
DexK223
=
dexK223[ijk] - Gam123*exK12[ijk] - Gam122*exK13[ijk] - Gam223*exK22[ijk] -
  Gam222*exK23[ijk] - Gam323*exK23[ijk] - Gam322*exK33[ijk]
;

const auto
DexK233
=
dexK233[ijk] - 2*(Gam123*exK13[ijk] + Gam223*exK23[ijk] + Gam323*exK33[ijk])
;

const auto
DexK311
=
dexK311[ijk] - 2*(Gam113*exK11[ijk] + Gam213*exK12[ijk] + Gam313*exK13[ijk])
;

const auto
DexK312
=
dexK312[ijk] - Gam123*exK11[ijk] - Gam113*exK12[ijk] - Gam223*exK12[ijk] -
  Gam323*exK13[ijk] - Gam213*exK22[ijk] - Gam313*exK23[ijk]
;

const auto
DexK313
=
dexK313[ijk] - Gam133*exK11[ijk] - Gam233*exK12[ijk] - Gam113*exK13[ijk] -
  Gam333*exK13[ijk] - Gam213*exK23[ijk] - Gam313*exK33[ijk]
;

const auto
DexK322
=
dexK322[ijk] - 2*(Gam123*exK12[ijk] + Gam223*exK22[ijk] + Gam323*exK23[ijk])
;

const auto
DexK323
=
dexK323[ijk] - Gam133*exK12[ijk] - Gam123*exK13[ijk] - Gam233*exK22[ijk] -
  Gam223*exK23[ijk] - Gam333*exK23[ijk] - Gam323*exK33[ijk]
;

const auto
DexK333
=
dexK333[ijk] - 2*(Gam133*exK13[ijk] + Gam233*exK23[ijk] + Gam333*exK33[ijk])
;

const auto
Epart11
=
Ricc11 - invgam11*Power(exK11[ijk],2) - invgam22*Power(exK12[ijk],2) -
  2*invgam23*exK12[ijk]*exK13[ijk] - invgam33*Power(exK13[ijk],2) +
  exK11[ijk]*(trexK - 2*invgam12*exK12[ijk] - 2*invgam13*exK13[ijk])
;

const auto
Epart12
=
Ricc12 - invgam12*Power(exK12[ijk],2) - invgam23*exK13[ijk]*exK22[ijk] -
  invgam33*exK13[ijk]*exK23[ijk] -
  exK11[ijk]*(invgam12*exK22[ijk] + invgam13*exK23[ijk]) +
  exK12[ijk]*(trexK - invgam11*exK11[ijk] - invgam13*exK13[ijk] -
     invgam22*exK22[ijk] - invgam23*exK23[ijk])
;

const auto
Epart13
=
Ricc13 - invgam13*Power(exK13[ijk],2) - invgam22*exK12[ijk]*exK23[ijk] -
  invgam23*exK12[ijk]*exK33[ijk] -
  exK11[ijk]*(invgam12*exK23[ijk] + invgam13*exK33[ijk]) +
  exK13[ijk]*(trexK - invgam11*exK11[ijk] - invgam12*exK12[ijk] -
     invgam23*exK23[ijk] - invgam33*exK33[ijk])
;

const auto
Epart22
=
Ricc22 - invgam11*Power(exK12[ijk],2) - invgam22*Power(exK22[ijk],2) -
  invgam33*Power(exK23[ijk],2) -
  2*exK12[ijk]*(invgam12*exK22[ijk] + invgam13*exK23[ijk]) +
  exK22[ijk]*(trexK - 2*invgam23*exK23[ijk])
;

const auto
Epart23
=
Ricc23 + trexK*exK23[ijk] - invgam22*exK22[ijk]*exK23[ijk] -
  invgam23*Power(exK23[ijk],2) -
  exK13[ijk]*(invgam12*exK22[ijk] + invgam13*exK23[ijk]) -
  invgam23*exK22[ijk]*exK33[ijk] - invgam33*exK23[ijk]*exK33[ijk] -
  exK12[ijk]*(invgam11*exK13[ijk] + invgam12*exK23[ijk] +
     invgam13*exK33[ijk])
;

const auto
Epart33
=
Ricc33 - invgam11*Power(exK13[ijk],2) - invgam22*Power(exK23[ijk],2) +
  trexK*exK33[ijk] - 2*invgam23*exK23[ijk]*exK33[ijk] -
  invgam33*Power(exK33[ijk],2) -
  2*exK13[ijk]*(invgam12*exK23[ijk] + invgam13*exK33[ijk])
;

const auto
Bpart11
=
(DexK213*g11 - DexK312*g11 - DexK113*g12 + DexK311*g12 + DexK112*g13 -
    DexK211*g13)*sqrtdetinvgam
;

const auto
Bpart12
=
(DexK223*g11 - DexK322*g11 - DexK123*g12 + DexK312*g12 + DexK122*g13 -
    DexK212*g13)*sqrtdetinvgam
;

const auto
Bpart13
=
(DexK233*g11 - DexK323*g11 - DexK133*g12 + DexK313*g12 + DexK123*g13 -
    DexK213*g13)*sqrtdetinvgam
;

const auto
Bpart22
=
(DexK223*g12 - DexK322*g12 - DexK123*g22 + DexK312*g22 + DexK122*g23 -
    DexK212*g23)*sqrtdetinvgam
;

const auto
Bpart23
=
(DexK233*g12 - DexK323*g12 - DexK133*g22 + DexK313*g22 + DexK123*g23 -
    DexK213*g23)*sqrtdetinvgam
;

const auto
Bpart33
=
(DexK233*g13 - DexK323*g13 - DexK133*g23 + DexK313*g23 + DexK123*g33 -
    DexK213*g33)*sqrtdetinvgam
;


const auto
uvec1
=
-Y()
;

const auto
uvec2
=
X()
;

const auto
uvec3
=
0
;

const auto
vvec1
=
X()
;

const auto
vvec2
=
Y()
;

const auto
vvec3
=
Z()
;

const auto
wvec1
=
sqrtdetgam*(-(invgam13*uvec2*vvec1) + invgam12*uvec3*vvec1 +
    invgam13*uvec1*vvec2 - invgam11*uvec3*vvec2 - invgam12*uvec1*vvec3 +
    invgam11*uvec2*vvec3)
;

const auto
wvec2
=
sqrtdetgam*(-(invgam23*uvec2*vvec1) + invgam22*uvec3*vvec1 +
    invgam23*uvec1*vvec2 - invgam12*uvec3*vvec2 - invgam22*uvec1*vvec3 +
    invgam12*uvec2*vvec3)
;

const auto
wvec3
=
sqrtdetgam*(-(invgam33*uvec2*vvec1) + invgam23*uvec3*vvec1 +
    invgam33*uvec1*vvec2 - invgam13*uvec3*vvec2 - invgam23*uvec1*vvec3 +
    invgam13*uvec2*vvec3)
;

const auto
inneruu
=
g11*Power(uvec1,2) + 2*g12*uvec1*uvec2 + g22*Power(uvec2,2) +
  2*g13*uvec1*uvec3 + 2*g23*uvec2*uvec3 + g33*Power(uvec3,2)
;

const auto
Uvec1
=
uvec1/Sqrt(inneruu)
;

const auto
Uvec2
=
uvec2/Sqrt(inneruu)
;

const auto
Uvec3
=
uvec3/Sqrt(inneruu)
;

const auto
innerUv
=
g11*Uvec1*vvec1 + g12*Uvec2*vvec1 + g13*Uvec3*vvec1 + g12*Uvec1*vvec2 +
  g22*Uvec2*vvec2 + g23*Uvec3*vvec2 + g13*Uvec1*vvec3 + g23*Uvec2*vvec3 +
  g33*Uvec3*vvec3
;

const auto
Vtmp1
=
-(innerUv*Uvec1) + vvec1
;

const auto
Vtmp2
=
-(innerUv*Uvec2) + vvec2
;

const auto
Vtmp3
=
-(innerUv*Uvec3) + vvec3
;

const auto
innerVV
=
g11*Power(Vtmp1,2) + 2*g12*Vtmp1*Vtmp2 + g22*Power(Vtmp2,2) +
  2*g13*Vtmp1*Vtmp3 + 2*g23*Vtmp2*Vtmp3 + g33*Power(Vtmp3,2)
;

const auto
Vvec1
=
Vtmp1/Sqrt(innerVV)
;

const auto
Vvec2
=
Vtmp2/Sqrt(innerVV)
;

const auto
Vvec3
=
Vtmp3/Sqrt(innerVV)
;

const auto
innerUw
=
g11*Uvec1*wvec1 + g12*Uvec2*wvec1 + g13*Uvec3*wvec1 + g12*Uvec1*wvec2 +
  g22*Uvec2*wvec2 + g23*Uvec3*wvec2 + g13*Uvec1*wvec3 + g23*Uvec2*wvec3 +
  g33*Uvec3*wvec3
;

const auto
innerVw
=
g11*Vvec1*wvec1 + g12*Vvec2*wvec1 + g13*Vvec3*wvec1 + g12*Vvec1*wvec2 +
  g22*Vvec2*wvec2 + g23*Vvec3*wvec2 + g13*Vvec1*wvec3 + g23*Vvec2*wvec3 +
  g33*Vvec3*wvec3
;

const auto
Wtmp1
=
-(innerUw*Uvec1) - innerVw*Vvec1 + wvec1
;

const auto
Wtmp2
=
-(innerUw*Uvec2) - innerVw*Vvec2 + wvec2
;

const auto
Wtmp3
=
-(innerUw*Uvec3) - innerVw*Vvec3 + wvec3
;

const auto
innerWW
=
g11*Power(Wtmp1,2) + 2*g12*Wtmp1*Wtmp2 + g22*Power(Wtmp2,2) +
  2*g13*Wtmp1*Wtmp3 + 2*g23*Wtmp2*Wtmp3 + g33*Power(Wtmp3,2)
;

const auto
Wvec1
=
Wtmp1/Sqrt(innerWW)
;

const auto
Wvec2
=
Wtmp2/Sqrt(innerWW)
;

const auto
Wvec3
=
Wtmp3/Sqrt(innerWW)
;

const auto
mbmbreal11
=
(-Power(Uvec1,2) + Power(Wvec1,2))/2.
;

const auto
mbmbreal12
=
(-(Uvec1*Uvec2) + Wvec1*Wvec2)/2.
;

const auto
mbmbreal13
=
(-(Uvec1*Uvec3) + Wvec1*Wvec3)/2.
;

const auto
mbmbreal22
=
(-Power(Uvec2,2) + Power(Wvec2,2))/2.
;

const auto
mbmbreal23
=
(-(Uvec2*Uvec3) + Wvec2*Wvec3)/2.
;

const auto
mbmbreal33
=
(-Power(Uvec3,2) + Power(Wvec3,2))/2.
;

const auto
mbmbimag11
=
-(Uvec1*Wvec1)
;

const auto
mbmbimag12
=
(-(Uvec2*Wvec1) - Uvec1*Wvec2)/2.
;

const auto
mbmbimag13
=
(-(Uvec3*Wvec1) - Uvec1*Wvec3)/2.
;

const auto
mbmbimag22
=
-(Uvec2*Wvec2)
;

const auto
mbmbimag23
=
(-(Uvec3*Wvec2) - Uvec2*Wvec3)/2.
;

const auto
mbmbimag33
=
-(Uvec3*Wvec3)
;


Psi4real[ijk]
=
Bpart11*mbmbimag11 + 2*Bpart12*mbmbimag12 + 2*Bpart13*mbmbimag13 +
  Bpart22*mbmbimag22 + 2*Bpart23*mbmbimag23 + Bpart33*mbmbimag33 +
  Epart11*mbmbreal11 + 2*Epart12*mbmbreal12 + 2*Epart13*mbmbreal13 +
  Epart22*mbmbreal22 + 2*Epart23*mbmbreal23 + Epart33*mbmbreal33
;

Psi4imag[ijk]
=
Epart11*mbmbimag11 + 2*Epart12*mbmbimag12 + 2*Epart13*mbmbimag13 +
  Epart22*mbmbimag22 + 2*Epart23*mbmbimag23 + Epart33*mbmbimag33 -
  Bpart11*mbmbreal11 - 2*Bpart12*mbmbreal12 - 2*Bpart13*mbmbreal13 -
  Bpart22*mbmbreal22 - 2*Bpart23*mbmbreal23 - Bpart33*mbmbreal33
;


  });
});

#endif // #ifndef WEYLSCALO_SET_PSI4_HXX

/* WeylScalo_set_Psi4.hxx */
