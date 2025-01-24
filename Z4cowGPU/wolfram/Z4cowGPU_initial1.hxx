/* Z4cowGPU_initial1.hxx */
/* Produced with Generato */

#ifndef Z4COWGPU_INITIAL1_HXX
#define Z4COWGPU_INITIAL1_HXX

const auto &gamt11 = gf_gamt(0,0);
const auto &gamt12 = gf_gamt(0,1);
const auto &gamt13 = gf_gamt(0,2);
const auto &gamt22 = gf_gamt(1,1);
const auto &gamt23 = gf_gamt(1,2);
const auto &gamt33 = gf_gamt(2,2);
const auto &exKh = gf_exKh;
const auto &exAt11 = gf_exAt(0,0);
const auto &exAt12 = gf_exAt(0,1);
const auto &exAt13 = gf_exAt(0,2);
const auto &exAt22 = gf_exAt(1,1);
const auto &exAt23 = gf_exAt(1,2);
const auto &exAt33 = gf_exAt(2,2);
const auto &alpha = gf_alpha;
const auto &beta1 = gf_beta(0);
const auto &beta2 = gf_beta(1);
const auto &beta3 = gf_beta(2);

const auto &ADMgam11 = gf_ADMgam(0,0);
const auto &ADMgam12 = gf_ADMgam(0,1);
const auto &ADMgam13 = gf_ADMgam(0,2);
const auto &ADMgam22 = gf_ADMgam(1,1);
const auto &ADMgam23 = gf_ADMgam(1,2);
const auto &ADMgam33 = gf_ADMgam(2,2);
const auto &ADMK11 = gf_ADMK(0,0);
const auto &ADMK12 = gf_ADMK(0,1);
const auto &ADMK13 = gf_ADMK(0,2);
const auto &ADMK22 = gf_ADMK(1,1);
const auto &ADMK23 = gf_ADMK(1,2);
const auto &ADMK33 = gf_ADMK(2,2);
const auto &ADMalpha = gf_ADMalpha;
const auto &ADMbeta1 = gf_ADMbeta(0);
const auto &ADMbeta2 = gf_ADMbeta(1);
const auto &ADMbeta3 = gf_ADMbeta(2);

noinline([&]() __attribute__((__flatten__, __hot__)) {
  grid.loop_int_device<0, 0, 0>(
    grid.nghostzones, [=] ARITH_DEVICE(const PointDesc &p) ARITH_INLINE {

const auto
invdetgamma
=
-(1/(Power(ADMgam13(p.I),2)*ADMgam22(p.I) -
      2*ADMgam12(p.I)*ADMgam13(p.I)*ADMgam23(p.I) +
      Power(ADMgam12(p.I),2)*ADMgam33(p.I) +
      ADMgam11(p.I)*(Power(ADMgam23(p.I),2) - ADMgam22(p.I)*ADMgam33(p.I))))
;

const auto
invgamma11
=
invdetgamma*(-Power(ADMgam23(p.I),2) + ADMgam22(p.I)*ADMgam33(p.I))
;

const auto
invgamma12
=
invdetgamma*(ADMgam13(p.I)*ADMgam23(p.I) - ADMgam12(p.I)*ADMgam33(p.I))
;

const auto
invgamma13
=
invdetgamma*(-(ADMgam13(p.I)*ADMgam22(p.I)) + ADMgam12(p.I)*ADMgam23(p.I))
;

const auto
invgamma22
=
invdetgamma*(-Power(ADMgam13(p.I),2) + ADMgam11(p.I)*ADMgam33(p.I))
;

const auto
invgamma23
=
invdetgamma*(ADMgam12(p.I)*ADMgam13(p.I) - ADMgam11(p.I)*ADMgam23(p.I))
;

const auto
invgamma33
=
invdetgamma*(-Power(ADMgam12(p.I),2) + ADMgam11(p.I)*ADMgam22(p.I))
;

const auto
trexK
=
invgamma11*ADMK11(p.I) + 2*invgamma12*ADMK12(p.I) + 2*invgamma13*ADMK13(p.I) +
  invgamma22*ADMK22(p.I) + 2*invgamma23*ADMK23(p.I) + invgamma33*ADMK33(p.I)
;


const auto tempW = cbrt(sqrt(invdetgamma));

W(p.I)
=
tempW
;

gamt11(p.I)
=
Power(tempW,2)*ADMgam11(p.I)
;

gamt12(p.I)
=
Power(tempW,2)*ADMgam12(p.I)
;

gamt13(p.I)
=
Power(tempW,2)*ADMgam13(p.I)
;

gamt22(p.I)
=
Power(tempW,2)*ADMgam22(p.I)
;

gamt23(p.I)
=
Power(tempW,2)*ADMgam23(p.I)
;

gamt33(p.I)
=
Power(tempW,2)*ADMgam33(p.I)
;

exKh(p.I)
=
trexK - 2*Theta(p.I)
;

exAt11(p.I)
=
Power(tempW,2)*(-0.3333333333333333*(trexK*ADMgam11(p.I)) + ADMK11(p.I))
;

exAt12(p.I)
=
Power(tempW,2)*(-0.3333333333333333*(trexK*ADMgam12(p.I)) + ADMK12(p.I))
;

exAt13(p.I)
=
Power(tempW,2)*(-0.3333333333333333*(trexK*ADMgam13(p.I)) + ADMK13(p.I))
;

exAt22(p.I)
=
Power(tempW,2)*(-0.3333333333333333*(trexK*ADMgam22(p.I)) + ADMK22(p.I))
;

exAt23(p.I)
=
Power(tempW,2)*(-0.3333333333333333*(trexK*ADMgam23(p.I)) + ADMK23(p.I))
;

exAt33(p.I)
=
Power(tempW,2)*(-0.3333333333333333*(trexK*ADMgam33(p.I)) + ADMK33(p.I))
;

Theta(p.I)
=
0
;

alpha(p.I)
=
ADMalpha(p.I)
;

beta1(p.I)
=
ADMbeta1(p.I)
;

beta2(p.I)
=
ADMbeta2(p.I)
;

beta3(p.I)
=
ADMbeta3(p.I)
;


  });
});

#endif // #ifndef Z4COWGPU_INITIAL1_HXX

/* Z4cowGPU_initial1.hxx */
