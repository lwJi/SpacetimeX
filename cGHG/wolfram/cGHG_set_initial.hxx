/* cGHG_set_initial.hxx */
/* Produced with Mathematica */

#ifndef CGHG_SET_INITIAL_HXX
#define CGHG_SET_INITIAL_HXX

const GF3D2<CCTK_REAL> &local_hg11 = gf_hg(0,0);
const GF3D2<CCTK_REAL> &local_hg12 = gf_hg(0,1);
const GF3D2<CCTK_REAL> &local_hg13 = gf_hg(0,2);
const GF3D2<CCTK_REAL> &local_hg22 = gf_hg(1,1);
const GF3D2<CCTK_REAL> &local_hg23 = gf_hg(1,2);
const GF3D2<CCTK_REAL> &local_hg33 = gf_hg(2,2);
const GF3D2<CCTK_REAL> &local_hPi11 = gf_hPi(0,0);
const GF3D2<CCTK_REAL> &local_hPi12 = gf_hPi(0,1);
const GF3D2<CCTK_REAL> &local_hPi13 = gf_hPi(0,2);
const GF3D2<CCTK_REAL> &local_hPi22 = gf_hPi(1,1);
const GF3D2<CCTK_REAL> &local_hPi23 = gf_hPi(1,2);
const GF3D2<CCTK_REAL> &local_hPi33 = gf_hPi(2,2);
const GF3D2<CCTK_REAL> &local_hPhi111 = gf_hPhi(0)(0,0);
const GF3D2<CCTK_REAL> &local_hPhi112 = gf_hPhi(0)(0,1);
const GF3D2<CCTK_REAL> &local_hPhi113 = gf_hPhi(0)(0,2);
const GF3D2<CCTK_REAL> &local_hPhi122 = gf_hPhi(0)(1,1);
const GF3D2<CCTK_REAL> &local_hPhi123 = gf_hPhi(0)(1,2);
const GF3D2<CCTK_REAL> &local_hPhi133 = gf_hPhi(0)(2,2);
const GF3D2<CCTK_REAL> &local_hPhi211 = gf_hPhi(1)(0,0);
const GF3D2<CCTK_REAL> &local_hPhi212 = gf_hPhi(1)(0,1);
const GF3D2<CCTK_REAL> &local_hPhi213 = gf_hPhi(1)(0,2);
const GF3D2<CCTK_REAL> &local_hPhi222 = gf_hPhi(1)(1,1);
const GF3D2<CCTK_REAL> &local_hPhi223 = gf_hPhi(1)(1,2);
const GF3D2<CCTK_REAL> &local_hPhi233 = gf_hPhi(1)(2,2);
const GF3D2<CCTK_REAL> &local_hPhi311 = gf_hPhi(2)(0,0);
const GF3D2<CCTK_REAL> &local_hPhi312 = gf_hPhi(2)(0,1);
const GF3D2<CCTK_REAL> &local_hPhi313 = gf_hPhi(2)(0,2);
const GF3D2<CCTK_REAL> &local_hPhi322 = gf_hPhi(2)(1,1);
const GF3D2<CCTK_REAL> &local_hPhi323 = gf_hPhi(2)(1,2);
const GF3D2<CCTK_REAL> &local_hPhi333 = gf_hPhi(2)(2,2);
const GF3D2<CCTK_REAL> &local_hgn1 = gf_hgn(0);
const GF3D2<CCTK_REAL> &local_hgn2 = gf_hgn(1);
const GF3D2<CCTK_REAL> &local_hgn3 = gf_hgn(2);
const GF3D2<CCTK_REAL> &local_hPin1 = gf_hPin(0);
const GF3D2<CCTK_REAL> &local_hPin2 = gf_hPin(1);
const GF3D2<CCTK_REAL> &local_hPin3 = gf_hPin(2);
const GF3D2<CCTK_REAL> &local_hPhin11 = gf_hPhin(0)(0);
const GF3D2<CCTK_REAL> &local_hPhin12 = gf_hPhin(0)(1);
const GF3D2<CCTK_REAL> &local_hPhin13 = gf_hPhin(0)(2);
const GF3D2<CCTK_REAL> &local_hPhin21 = gf_hPhin(1)(0);
const GF3D2<CCTK_REAL> &local_hPhin22 = gf_hPhin(1)(1);
const GF3D2<CCTK_REAL> &local_hPhin23 = gf_hPhin(1)(2);
const GF3D2<CCTK_REAL> &local_hPhin31 = gf_hPhin(2)(0);
const GF3D2<CCTK_REAL> &local_hPhin32 = gf_hPhin(2)(1);
const GF3D2<CCTK_REAL> &local_hPhin33 = gf_hPhin(2)(2);
const GF3D2<CCTK_REAL> &local_hgnn = gf_hgnn;
const GF3D2<CCTK_REAL> &local_hPinn = gf_hPinn;
const GF3D2<CCTK_REAL> &local_hPhinn1 = gf_hPhinn(0);
const GF3D2<CCTK_REAL> &local_hPhinn2 = gf_hPhinn(1);
const GF3D2<CCTK_REAL> &local_hPhinn3 = gf_hPhinn(2);
const GF3D2<CCTK_REAL> &local_W = gf_W;
const GF3D2<CCTK_REAL> &local_WPi = gf_WPi;
const GF3D2<CCTK_REAL> &local_WPhi1 = gf_WPhi(0);
const GF3D2<CCTK_REAL> &local_WPhi2 = gf_WPhi(1);
const GF3D2<CCTK_REAL> &local_WPhi3 = gf_WPhi(2);
const GF3D2<CCTK_REAL> &local_hHn = gf_hHn;
const GF3D2<CCTK_REAL> &local_hH1 = gf_hH(0);
const GF3D2<CCTK_REAL> &local_hH2 = gf_hH(1);
const GF3D2<CCTK_REAL> &local_hH3 = gf_hH(2);
const GF3D2<CCTK_REAL> &local_hthetan = gf_hthetan;
const GF3D2<CCTK_REAL> &local_htheta1 = gf_htheta(0);
const GF3D2<CCTK_REAL> &local_htheta2 = gf_htheta(1);
const GF3D2<CCTK_REAL> &local_htheta3 = gf_htheta(2);

grid.loop_int_device<0, 0, 0, vsize>(
  grid.nghostzones, [=] ARITH_DEVICE(const PointDesc &p) ARITH_INLINE {
  const vbool mask = mask_for_loop_tail<vbool>(p.i, p.imax);
  const GF3D2index index2(layout2, p.I);
  const GF3D5index index5(layout5, p.I);

const auto &tmp_ADMalpha = tl_ADMalpha(mask, index5);
const auto &tmp_ADMbeta = tl_ADMbeta(mask, index5);
const auto &tmp_ADMgamma = tl_ADMgamma(mask, index5);
const auto &tmp_ADMexK = tl_ADMexK(mask, index5);
const auto &tmp_ADMdalpha = tl_ADMdalpha(mask, index5);
const auto &tmp_ADMdbeta = tl_ADMdbeta(mask, index5);
const auto &tmp_ADMdgamma = tl_ADMdgamma(mask, index5);

const vreal ADMalpha = tmp_ADMalpha;
const vreal ADMbeta1 = tmp_ADMbeta(0);
const vreal ADMbeta2 = tmp_ADMbeta(1);
const vreal ADMbeta3 = tmp_ADMbeta(2);
const vreal ADMgamma11 = tmp_ADMgamma(0,0);
const vreal ADMgamma12 = tmp_ADMgamma(0,1);
const vreal ADMgamma13 = tmp_ADMgamma(0,2);
const vreal ADMgamma22 = tmp_ADMgamma(1,1);
const vreal ADMgamma23 = tmp_ADMgamma(1,2);
const vreal ADMgamma33 = tmp_ADMgamma(2,2);
const vreal ADMexK11 = tmp_ADMexK(0,0);
const vreal ADMexK12 = tmp_ADMexK(0,1);
const vreal ADMexK13 = tmp_ADMexK(0,2);
const vreal ADMexK22 = tmp_ADMexK(1,1);
const vreal ADMexK23 = tmp_ADMexK(1,2);
const vreal ADMexK33 = tmp_ADMexK(2,2);
const vreal ADMdalpha1 = tmp_ADMdalpha(0);
const vreal ADMdalpha2 = tmp_ADMdalpha(1);
const vreal ADMdalpha3 = tmp_ADMdalpha(2);
const vreal ADMdbeta11 = tmp_ADMdbeta(0)(0);
const vreal ADMdbeta12 = tmp_ADMdbeta(1)(0);
const vreal ADMdbeta13 = tmp_ADMdbeta(2)(0);
const vreal ADMdbeta21 = tmp_ADMdbeta(0)(1);
const vreal ADMdbeta22 = tmp_ADMdbeta(1)(1);
const vreal ADMdbeta23 = tmp_ADMdbeta(2)(1);
const vreal ADMdbeta31 = tmp_ADMdbeta(0)(2);
const vreal ADMdbeta32 = tmp_ADMdbeta(1)(2);
const vreal ADMdbeta33 = tmp_ADMdbeta(2)(2);
const vreal ADMdgamma111 = tmp_ADMdgamma(0,0)(0);
const vreal ADMdgamma112 = tmp_ADMdgamma(0,1)(0);
const vreal ADMdgamma113 = tmp_ADMdgamma(0,2)(0);
const vreal ADMdgamma122 = tmp_ADMdgamma(1,1)(0);
const vreal ADMdgamma123 = tmp_ADMdgamma(1,2)(0);
const vreal ADMdgamma133 = tmp_ADMdgamma(2,2)(0);
const vreal ADMdgamma211 = tmp_ADMdgamma(0,0)(1);
const vreal ADMdgamma212 = tmp_ADMdgamma(0,1)(1);
const vreal ADMdgamma213 = tmp_ADMdgamma(0,2)(1);
const vreal ADMdgamma222 = tmp_ADMdgamma(1,1)(1);
const vreal ADMdgamma223 = tmp_ADMdgamma(1,2)(1);
const vreal ADMdgamma233 = tmp_ADMdgamma(2,2)(1);
const vreal ADMdgamma311 = tmp_ADMdgamma(0,0)(2);
const vreal ADMdgamma312 = tmp_ADMdgamma(0,1)(2);
const vreal ADMdgamma313 = tmp_ADMdgamma(0,2)(2);
const vreal ADMdgamma322 = tmp_ADMdgamma(1,1)(2);
const vreal ADMdgamma323 = tmp_ADMdgamma(1,2)(2);
const vreal ADMdgamma333 = tmp_ADMdgamma(2,2)(2);

vreal invdetgamma
=
1/(-(Power(ADMgamma13,2)*ADMgamma22) + 2*ADMgamma12*ADMgamma13*ADMgamma23 - 
    ADMgamma11*Power(ADMgamma23,2) - Power(ADMgamma12,2)*ADMgamma33 + 
    ADMgamma11*ADMgamma22*ADMgamma33)
;

vreal invgamma11
=
(-Power(ADMgamma23,2) + ADMgamma22*ADMgamma33)*invdetgamma
;

vreal invgamma12
=
(ADMgamma13*ADMgamma23 - ADMgamma12*ADMgamma33)*invdetgamma
;

vreal invgamma13
=
(-(ADMgamma13*ADMgamma22) + ADMgamma12*ADMgamma23)*invdetgamma
;

vreal invgamma22
=
(-Power(ADMgamma13,2) + ADMgamma11*ADMgamma33)*invdetgamma
;

vreal invgamma23
=
(ADMgamma12*ADMgamma13 - ADMgamma11*ADMgamma23)*invdetgamma
;

vreal invgamma33
=
(-Power(ADMgamma12,2) + ADMgamma11*ADMgamma22)*invdetgamma
;

vreal trexK
=
ADMexK11*invgamma11 + 2*ADMexK12*invgamma12 + 2*ADMexK13*invgamma13 + 
  ADMexK22*invgamma22 + 2*ADMexK23*invgamma23 + ADMexK33*invgamma33
;

vreal nvec0
=
1/ADMalpha
;

vreal nvec1
=
-(ADMbeta1/ADMalpha)
;

vreal nvec2
=
-(ADMbeta2/ADMalpha)
;

vreal nvec3
=
-(ADMbeta3/ADMalpha)
;

vreal dg4000
=
-2*ADMalpha*ADMdtalpha + Power(ADMbeta1,2)*ADMdtgamma11 + 
  Power(ADMbeta2,2)*ADMdtgamma22 + 2*ADMbeta2*ADMbeta3*ADMdtgamma23 + 
  Power(ADMbeta3,2)*ADMdtgamma33 + 2*ADMbeta2*ADMdtbeta1*ADMgamma12 + 
  2*ADMbeta3*ADMdtbeta1*ADMgamma13 + 
  2*ADMbeta1*(ADMbeta2*ADMdtgamma12 + ADMbeta3*ADMdtgamma13 + 
     ADMdtbeta1*ADMgamma11 + ADMdtbeta2*ADMgamma12 + ADMdtbeta3*ADMgamma13) \
+ 2*ADMbeta2*ADMdtbeta2*ADMgamma22 + 2*ADMbeta3*ADMdtbeta2*ADMgamma23 + 
  2*ADMbeta2*ADMdtbeta3*ADMgamma23 + 2*ADMbeta3*ADMdtbeta3*ADMgamma33
;

vreal dg4001
=
ADMbeta1*ADMdtgamma11 + ADMbeta2*ADMdtgamma12 + ADMbeta3*ADMdtgamma13 + 
  ADMdtbeta1*ADMgamma11 + ADMdtbeta2*ADMgamma12 + ADMdtbeta3*ADMgamma13
;

vreal dg4002
=
ADMbeta1*ADMdtgamma12 + ADMbeta2*ADMdtgamma22 + ADMbeta3*ADMdtgamma23 + 
  ADMdtbeta1*ADMgamma12 + ADMdtbeta2*ADMgamma22 + ADMdtbeta3*ADMgamma23
;

vreal dg4003
=
ADMbeta1*ADMdtgamma13 + ADMbeta2*ADMdtgamma23 + ADMbeta3*ADMdtgamma33 + 
  ADMdtbeta1*ADMgamma13 + ADMdtbeta2*ADMgamma23 + ADMdtbeta3*ADMgamma33
;

vreal dg4011
=
ADMdtgamma11
;

vreal dg4012
=
ADMdtgamma12
;

vreal dg4013
=
ADMdtgamma13
;

vreal dg4022
=
ADMdtgamma22
;

vreal dg4023
=
ADMdtgamma23
;

vreal dg4033
=
ADMdtgamma33
;

vreal dg4100
=
-2*ADMalpha*ADMdalpha1 + Power(ADMbeta1,2)*ADMdgamma111 + 
  Power(ADMbeta2,2)*ADMdgamma122 + 2*ADMbeta2*ADMbeta3*ADMdgamma123 + 
  Power(ADMbeta3,2)*ADMdgamma133 + 2*ADMbeta2*ADMdbeta11*ADMgamma12 + 
  2*ADMbeta3*ADMdbeta11*ADMgamma13 + 
  2*ADMbeta1*(ADMbeta2*ADMdgamma112 + ADMbeta3*ADMdgamma113 + 
     ADMdbeta11*ADMgamma11 + ADMdbeta12*ADMgamma12 + ADMdbeta13*ADMgamma13) \
+ 2*ADMbeta2*ADMdbeta12*ADMgamma22 + 2*ADMbeta3*ADMdbeta12*ADMgamma23 + 
  2*ADMbeta2*ADMdbeta13*ADMgamma23 + 2*ADMbeta3*ADMdbeta13*ADMgamma33
;

vreal dg4101
=
ADMbeta1*ADMdgamma111 + ADMbeta2*ADMdgamma112 + ADMbeta3*ADMdgamma113 + 
  ADMdbeta11*ADMgamma11 + ADMdbeta12*ADMgamma12 + ADMdbeta13*ADMgamma13
;

vreal dg4102
=
ADMbeta1*ADMdgamma112 + ADMbeta2*ADMdgamma122 + ADMbeta3*ADMdgamma123 + 
  ADMdbeta11*ADMgamma12 + ADMdbeta12*ADMgamma22 + ADMdbeta13*ADMgamma23
;

vreal dg4103
=
ADMbeta1*ADMdgamma113 + ADMbeta2*ADMdgamma123 + ADMbeta3*ADMdgamma133 + 
  ADMdbeta11*ADMgamma13 + ADMdbeta12*ADMgamma23 + ADMdbeta13*ADMgamma33
;

vreal dg4111
=
ADMdgamma111
;

vreal dg4112
=
ADMdgamma112
;

vreal dg4113
=
ADMdgamma113
;

vreal dg4122
=
ADMdgamma122
;

vreal dg4123
=
ADMdgamma123
;

vreal dg4133
=
ADMdgamma133
;

vreal dg4200
=
-2*ADMalpha*ADMdalpha2 + Power(ADMbeta1,2)*ADMdgamma211 + 
  Power(ADMbeta2,2)*ADMdgamma222 + 2*ADMbeta2*ADMbeta3*ADMdgamma223 + 
  Power(ADMbeta3,2)*ADMdgamma233 + 2*ADMbeta2*ADMdbeta21*ADMgamma12 + 
  2*ADMbeta3*ADMdbeta21*ADMgamma13 + 
  2*ADMbeta1*(ADMbeta2*ADMdgamma212 + ADMbeta3*ADMdgamma213 + 
     ADMdbeta21*ADMgamma11 + ADMdbeta22*ADMgamma12 + ADMdbeta23*ADMgamma13) \
+ 2*ADMbeta2*ADMdbeta22*ADMgamma22 + 2*ADMbeta3*ADMdbeta22*ADMgamma23 + 
  2*ADMbeta2*ADMdbeta23*ADMgamma23 + 2*ADMbeta3*ADMdbeta23*ADMgamma33
;

vreal dg4201
=
ADMbeta1*ADMdgamma211 + ADMbeta2*ADMdgamma212 + ADMbeta3*ADMdgamma213 + 
  ADMdbeta21*ADMgamma11 + ADMdbeta22*ADMgamma12 + ADMdbeta23*ADMgamma13
;

vreal dg4202
=
ADMbeta1*ADMdgamma212 + ADMbeta2*ADMdgamma222 + ADMbeta3*ADMdgamma223 + 
  ADMdbeta21*ADMgamma12 + ADMdbeta22*ADMgamma22 + ADMdbeta23*ADMgamma23
;

vreal dg4203
=
ADMbeta1*ADMdgamma213 + ADMbeta2*ADMdgamma223 + ADMbeta3*ADMdgamma233 + 
  ADMdbeta21*ADMgamma13 + ADMdbeta22*ADMgamma23 + ADMdbeta23*ADMgamma33
;

vreal dg4211
=
ADMdgamma211
;

vreal dg4212
=
ADMdgamma212
;

vreal dg4213
=
ADMdgamma213
;

vreal dg4222
=
ADMdgamma222
;

vreal dg4223
=
ADMdgamma223
;

vreal dg4233
=
ADMdgamma233
;

vreal dg4300
=
-2*ADMalpha*ADMdalpha3 + Power(ADMbeta1,2)*ADMdgamma311 + 
  Power(ADMbeta2,2)*ADMdgamma322 + 2*ADMbeta2*ADMbeta3*ADMdgamma323 + 
  Power(ADMbeta3,2)*ADMdgamma333 + 2*ADMbeta2*ADMdbeta31*ADMgamma12 + 
  2*ADMbeta3*ADMdbeta31*ADMgamma13 + 
  2*ADMbeta1*(ADMbeta2*ADMdgamma312 + ADMbeta3*ADMdgamma313 + 
     ADMdbeta31*ADMgamma11 + ADMdbeta32*ADMgamma12 + ADMdbeta33*ADMgamma13) \
+ 2*ADMbeta2*ADMdbeta32*ADMgamma22 + 2*ADMbeta3*ADMdbeta32*ADMgamma23 + 
  2*ADMbeta2*ADMdbeta33*ADMgamma23 + 2*ADMbeta3*ADMdbeta33*ADMgamma33
;

vreal dg4301
=
ADMbeta1*ADMdgamma311 + ADMbeta2*ADMdgamma312 + ADMbeta3*ADMdgamma313 + 
  ADMdbeta31*ADMgamma11 + ADMdbeta32*ADMgamma12 + ADMdbeta33*ADMgamma13
;

vreal dg4302
=
ADMbeta1*ADMdgamma312 + ADMbeta2*ADMdgamma322 + ADMbeta3*ADMdgamma323 + 
  ADMdbeta31*ADMgamma12 + ADMdbeta32*ADMgamma22 + ADMdbeta33*ADMgamma23
;

vreal dg4303
=
ADMbeta1*ADMdgamma313 + ADMbeta2*ADMdgamma323 + ADMbeta3*ADMdgamma333 + 
  ADMdbeta31*ADMgamma13 + ADMdbeta32*ADMgamma23 + ADMdbeta33*ADMgamma33
;

vreal dg4311
=
ADMdgamma311
;

vreal dg4312
=
ADMdgamma312
;

vreal dg4313
=
ADMdgamma313
;

vreal dg4322
=
ADMdgamma322
;

vreal dg4323
=
ADMdgamma323
;

vreal dg4333
=
ADMdgamma333
;

vreal invg400
=
-Power(nvec0,2)
;

vreal invg401
=
-(nvec0*nvec1)
;

vreal invg402
=
-(nvec0*nvec2)
;

vreal invg403
=
-(nvec0*nvec3)
;

vreal invg411
=
invgamma11 - Power(nvec1,2)
;

vreal invg412
=
invgamma12 - nvec1*nvec2
;

vreal invg413
=
invgamma13 - nvec1*nvec3
;

vreal invg422
=
invgamma22 - Power(nvec2,2)
;

vreal invg423
=
invgamma23 - nvec2*nvec3
;

vreal invg433
=
invgamma33 - Power(nvec3,2)
;

vreal Gam4000
=
dg4000/2.
;

vreal Gam4001
=
dg4100/2.
;

vreal Gam4002
=
dg4200/2.
;

vreal Gam4003
=
dg4300/2.
;

vreal Gam4011
=
-0.5*dg4011 + dg4101
;

vreal Gam4012
=
(-dg4012 + dg4102 + dg4201)/2.
;

vreal Gam4013
=
(-dg4013 + dg4103 + dg4301)/2.
;

vreal Gam4022
=
-0.5*dg4022 + dg4202
;

vreal Gam4023
=
(-dg4023 + dg4203 + dg4302)/2.
;

vreal Gam4033
=
-0.5*dg4033 + dg4303
;

vreal Gam4100
=
dg4001 - dg4100/2.
;

vreal Gam4101
=
dg4011/2.
;

vreal Gam4102
=
(dg4012 - dg4102 + dg4201)/2.
;

vreal Gam4103
=
(dg4013 - dg4103 + dg4301)/2.
;

vreal Gam4111
=
dg4111/2.
;

vreal Gam4112
=
dg4211/2.
;

vreal Gam4113
=
dg4311/2.
;

vreal Gam4122
=
-0.5*dg4122 + dg4212
;

vreal Gam4123
=
(-dg4123 + dg4213 + dg4312)/2.
;

vreal Gam4133
=
-0.5*dg4133 + dg4313
;

vreal Gam4200
=
dg4002 - dg4200/2.
;

vreal Gam4201
=
(dg4012 + dg4102 - dg4201)/2.
;

vreal Gam4202
=
dg4022/2.
;

vreal Gam4203
=
(dg4023 - dg4203 + dg4302)/2.
;

vreal Gam4211
=
dg4112 - dg4211/2.
;

vreal Gam4212
=
dg4122/2.
;

vreal Gam4213
=
(dg4123 - dg4213 + dg4312)/2.
;

vreal Gam4222
=
dg4222/2.
;

vreal Gam4223
=
dg4322/2.
;

vreal Gam4233
=
-0.5*dg4233 + dg4323
;

vreal Gam4300
=
dg4003 - dg4300/2.
;

vreal Gam4301
=
(dg4013 + dg4103 - dg4301)/2.
;

vreal Gam4302
=
(dg4023 + dg4203 - dg4302)/2.
;

vreal Gam4303
=
dg4033/2.
;

vreal Gam4311
=
dg4113 - dg4311/2.
;

vreal Gam4312
=
(dg4123 + dg4213 - dg4312)/2.
;

vreal Gam4313
=
dg4133/2.
;

vreal Gam4322
=
dg4223 - dg4322/2.
;

vreal Gam4323
=
dg4233/2.
;

vreal Gam4333
=
dg4333/2.
;

vreal trGam40
=
Gam4000*invg400 + 2*Gam4001*invg401 + 2*Gam4002*invg402 + 
  2*Gam4003*invg403 + Gam4011*invg411 + 2*Gam4012*invg412 + 
  2*Gam4013*invg413 + Gam4022*invg422 + 2*Gam4023*invg423 + Gam4033*invg433
;

vreal trGam41
=
Gam4100*invg400 + 2*Gam4101*invg401 + 2*Gam4102*invg402 + 
  2*Gam4103*invg403 + Gam4111*invg411 + 2*Gam4112*invg412 + 
  2*Gam4113*invg413 + Gam4122*invg422 + 2*Gam4123*invg423 + Gam4133*invg433
;

vreal trGam42
=
Gam4200*invg400 + 2*Gam4201*invg401 + 2*Gam4202*invg402 + 
  2*Gam4203*invg403 + Gam4211*invg411 + 2*Gam4212*invg412 + 
  2*Gam4213*invg413 + Gam4222*invg422 + 2*Gam4223*invg423 + Gam4233*invg433
;

vreal trGam43
=
Gam4300*invg400 + 2*Gam4301*invg401 + 2*Gam4302*invg402 + 
  2*Gam4303*invg403 + Gam4311*invg411 + 2*Gam4312*invg412 + 
  2*Gam4313*invg413 + Gam4322*invg422 + 2*Gam4323*invg423 + Gam4333*invg433
;


local_hg11.store(mask, index2, 
ADMgamma11*Power(W,2)
);

local_hg12.store(mask, index2, 
ADMgamma12*Power(W,2)
);

local_hg13.store(mask, index2, 
ADMgamma13*Power(W,2)
);

local_hg22.store(mask, index2, 
ADMgamma22*Power(W,2)
);

local_hg23.store(mask, index2, 
ADMgamma23*Power(W,2)
);

local_hg33.store(mask, index2, 
ADMgamma33*Power(W,2)
);

local_hPi11.store(mask, index2, 
-(W*(ADMalpha*(dg4011*nvec0 + dg4111*nvec1 + dg4211*nvec2 + dg4311*nvec3)*
       W - 2*ADMgamma11*WPi))
);

local_hPi12.store(mask, index2, 
-(W*(ADMalpha*(dg4012*nvec0 + dg4112*nvec1 + dg4212*nvec2 + dg4312*nvec3)*
       W - 2*ADMgamma12*WPi))
);

local_hPi13.store(mask, index2, 
-(W*(ADMalpha*(dg4013*nvec0 + dg4113*nvec1 + dg4213*nvec2 + dg4313*nvec3)*
       W - 2*ADMgamma13*WPi))
);

local_hPi22.store(mask, index2, 
-(W*(ADMalpha*(dg4022*nvec0 + dg4122*nvec1 + dg4222*nvec2 + dg4322*nvec3)*
       W - 2*ADMgamma22*WPi))
);

local_hPi23.store(mask, index2, 
-(W*(ADMalpha*(dg4023*nvec0 + dg4123*nvec1 + dg4223*nvec2 + dg4323*nvec3)*
       W - 2*ADMgamma23*WPi))
);

local_hPi33.store(mask, index2, 
-(W*(ADMalpha*(dg4033*nvec0 + dg4133*nvec1 + dg4233*nvec2 + dg4333*nvec3)*
       W - 2*ADMgamma33*WPi))
);

local_hPhi111.store(mask, index2, 
W*(ADMalpha*dg4111*W + 2*ADMgamma11*WPhi1)
);

local_hPhi112.store(mask, index2, 
W*(ADMalpha*dg4112*W + 2*ADMgamma12*WPhi1)
);

local_hPhi113.store(mask, index2, 
W*(ADMalpha*dg4113*W + 2*ADMgamma13*WPhi1)
);

local_hPhi122.store(mask, index2, 
W*(ADMalpha*dg4122*W + 2*ADMgamma22*WPhi1)
);

local_hPhi123.store(mask, index2, 
W*(ADMalpha*dg4123*W + 2*ADMgamma23*WPhi1)
);

local_hPhi133.store(mask, index2, 
W*(ADMalpha*dg4133*W + 2*ADMgamma33*WPhi1)
);

local_hPhi211.store(mask, index2, 
W*(ADMalpha*dg4211*W + 2*ADMgamma11*WPhi2)
);

local_hPhi212.store(mask, index2, 
W*(ADMalpha*dg4212*W + 2*ADMgamma12*WPhi2)
);

local_hPhi213.store(mask, index2, 
W*(ADMalpha*dg4213*W + 2*ADMgamma13*WPhi2)
);

local_hPhi222.store(mask, index2, 
W*(ADMalpha*dg4222*W + 2*ADMgamma22*WPhi2)
);

local_hPhi223.store(mask, index2, 
W*(ADMalpha*dg4223*W + 2*ADMgamma23*WPhi2)
);

local_hPhi233.store(mask, index2, 
W*(ADMalpha*dg4233*W + 2*ADMgamma33*WPhi2)
);

local_hPhi311.store(mask, index2, 
W*(ADMalpha*dg4311*W + 2*ADMgamma11*WPhi3)
);

local_hPhi312.store(mask, index2, 
W*(ADMalpha*dg4312*W + 2*ADMgamma12*WPhi3)
);

local_hPhi313.store(mask, index2, 
W*(ADMalpha*dg4313*W + 2*ADMgamma13*WPhi3)
);

local_hPhi322.store(mask, index2, 
W*(ADMalpha*dg4322*W + 2*ADMgamma22*WPhi3)
);

local_hPhi323.store(mask, index2, 
W*(ADMalpha*dg4323*W + 2*ADMgamma23*WPhi3)
);

local_hPhi333.store(mask, index2, 
W*(ADMalpha*dg4333*W + 2*ADMgamma33*WPhi3)
);

local_hgn1.store(mask, index2, 
ADMbeta1
);

local_hgn2.store(mask, index2, 
ADMbeta2
);

local_hgn3.store(mask, index2, 
ADMbeta3
);

local_hPin1.store(mask, index2, 
-(Power(ADMalpha,2)*(dg4001*invgamma11*Power(nvec0,2) + 
      dg4002*invgamma12*Power(nvec0,2) + dg4003*invgamma13*Power(nvec0,2) + 
      dg4011*invgamma11*nvec0*nvec1 + dg4101*invgamma11*nvec0*nvec1 + 
      dg4012*invgamma12*nvec0*nvec1 + dg4102*invgamma12*nvec0*nvec1 + 
      dg4013*invgamma13*nvec0*nvec1 + dg4103*invgamma13*nvec0*nvec1 + 
      dg4111*invgamma11*Power(nvec1,2) + dg4112*invgamma12*Power(nvec1,2) + 
      dg4113*invgamma13*Power(nvec1,2) + dg4012*invgamma11*nvec0*nvec2 + 
      dg4201*invgamma11*nvec0*nvec2 + dg4022*invgamma12*nvec0*nvec2 + 
      dg4202*invgamma12*nvec0*nvec2 + dg4023*invgamma13*nvec0*nvec2 + 
      dg4203*invgamma13*nvec0*nvec2 + dg4112*invgamma11*nvec1*nvec2 + 
      dg4211*invgamma11*nvec1*nvec2 + dg4122*invgamma12*nvec1*nvec2 + 
      dg4212*invgamma12*nvec1*nvec2 + dg4123*invgamma13*nvec1*nvec2 + 
      dg4213*invgamma13*nvec1*nvec2 + dg4212*invgamma11*Power(nvec2,2) + 
      dg4222*invgamma12*Power(nvec2,2) + dg4223*invgamma13*Power(nvec2,2) + 
      dg4013*invgamma11*nvec0*nvec3 + dg4301*invgamma11*nvec0*nvec3 + 
      dg4023*invgamma12*nvec0*nvec3 + dg4302*invgamma12*nvec0*nvec3 + 
      dg4033*invgamma13*nvec0*nvec3 + dg4303*invgamma13*nvec0*nvec3 + 
      dg4113*invgamma11*nvec1*nvec3 + dg4311*invgamma11*nvec1*nvec3 + 
      dg4123*invgamma12*nvec1*nvec3 + dg4312*invgamma12*nvec1*nvec3 + 
      dg4133*invgamma13*nvec1*nvec3 + dg4313*invgamma13*nvec1*nvec3 + 
      dg4213*invgamma11*nvec2*nvec3 + dg4312*invgamma11*nvec2*nvec3 + 
      dg4223*invgamma12*nvec2*nvec3 + dg4322*invgamma12*nvec2*nvec3 + 
      dg4233*invgamma13*nvec2*nvec3 + dg4323*invgamma13*nvec2*nvec3 + 
      dg4313*invgamma11*Power(nvec3,2) + dg4323*invgamma12*Power(nvec3,2) + 
      dg4333*invgamma13*Power(nvec3,2)))
);

local_hPin2.store(mask, index2, 
-(Power(ADMalpha,2)*(dg4001*invgamma12*Power(nvec0,2) + 
      dg4002*invgamma22*Power(nvec0,2) + dg4003*invgamma23*Power(nvec0,2) + 
      dg4011*invgamma12*nvec0*nvec1 + dg4101*invgamma12*nvec0*nvec1 + 
      dg4012*invgamma22*nvec0*nvec1 + dg4102*invgamma22*nvec0*nvec1 + 
      dg4013*invgamma23*nvec0*nvec1 + dg4103*invgamma23*nvec0*nvec1 + 
      dg4111*invgamma12*Power(nvec1,2) + dg4112*invgamma22*Power(nvec1,2) + 
      dg4113*invgamma23*Power(nvec1,2) + dg4012*invgamma12*nvec0*nvec2 + 
      dg4201*invgamma12*nvec0*nvec2 + dg4022*invgamma22*nvec0*nvec2 + 
      dg4202*invgamma22*nvec0*nvec2 + dg4023*invgamma23*nvec0*nvec2 + 
      dg4203*invgamma23*nvec0*nvec2 + dg4112*invgamma12*nvec1*nvec2 + 
      dg4211*invgamma12*nvec1*nvec2 + dg4122*invgamma22*nvec1*nvec2 + 
      dg4212*invgamma22*nvec1*nvec2 + dg4123*invgamma23*nvec1*nvec2 + 
      dg4213*invgamma23*nvec1*nvec2 + dg4212*invgamma12*Power(nvec2,2) + 
      dg4222*invgamma22*Power(nvec2,2) + dg4223*invgamma23*Power(nvec2,2) + 
      dg4013*invgamma12*nvec0*nvec3 + dg4301*invgamma12*nvec0*nvec3 + 
      dg4023*invgamma22*nvec0*nvec3 + dg4302*invgamma22*nvec0*nvec3 + 
      dg4033*invgamma23*nvec0*nvec3 + dg4303*invgamma23*nvec0*nvec3 + 
      dg4113*invgamma12*nvec1*nvec3 + dg4311*invgamma12*nvec1*nvec3 + 
      dg4123*invgamma22*nvec1*nvec3 + dg4312*invgamma22*nvec1*nvec3 + 
      dg4133*invgamma23*nvec1*nvec3 + dg4313*invgamma23*nvec1*nvec3 + 
      dg4213*invgamma12*nvec2*nvec3 + dg4312*invgamma12*nvec2*nvec3 + 
      dg4223*invgamma22*nvec2*nvec3 + dg4322*invgamma22*nvec2*nvec3 + 
      dg4233*invgamma23*nvec2*nvec3 + dg4323*invgamma23*nvec2*nvec3 + 
      dg4313*invgamma12*Power(nvec3,2) + dg4323*invgamma22*Power(nvec3,2) + 
      dg4333*invgamma23*Power(nvec3,2)))
);

local_hPin3.store(mask, index2, 
-(Power(ADMalpha,2)*(dg4001*invgamma13*Power(nvec0,2) + 
      dg4002*invgamma23*Power(nvec0,2) + dg4003*invgamma33*Power(nvec0,2) + 
      dg4011*invgamma13*nvec0*nvec1 + dg4101*invgamma13*nvec0*nvec1 + 
      dg4012*invgamma23*nvec0*nvec1 + dg4102*invgamma23*nvec0*nvec1 + 
      dg4013*invgamma33*nvec0*nvec1 + dg4103*invgamma33*nvec0*nvec1 + 
      dg4111*invgamma13*Power(nvec1,2) + dg4112*invgamma23*Power(nvec1,2) + 
      dg4113*invgamma33*Power(nvec1,2) + dg4012*invgamma13*nvec0*nvec2 + 
      dg4201*invgamma13*nvec0*nvec2 + dg4022*invgamma23*nvec0*nvec2 + 
      dg4202*invgamma23*nvec0*nvec2 + dg4023*invgamma33*nvec0*nvec2 + 
      dg4203*invgamma33*nvec0*nvec2 + dg4112*invgamma13*nvec1*nvec2 + 
      dg4211*invgamma13*nvec1*nvec2 + dg4122*invgamma23*nvec1*nvec2 + 
      dg4212*invgamma23*nvec1*nvec2 + dg4123*invgamma33*nvec1*nvec2 + 
      dg4213*invgamma33*nvec1*nvec2 + dg4212*invgamma13*Power(nvec2,2) + 
      dg4222*invgamma23*Power(nvec2,2) + dg4223*invgamma33*Power(nvec2,2) + 
      dg4013*invgamma13*nvec0*nvec3 + dg4301*invgamma13*nvec0*nvec3 + 
      dg4023*invgamma23*nvec0*nvec3 + dg4302*invgamma23*nvec0*nvec3 + 
      dg4033*invgamma33*nvec0*nvec3 + dg4303*invgamma33*nvec0*nvec3 + 
      dg4113*invgamma13*nvec1*nvec3 + dg4311*invgamma13*nvec1*nvec3 + 
      dg4123*invgamma23*nvec1*nvec3 + dg4312*invgamma23*nvec1*nvec3 + 
      dg4133*invgamma33*nvec1*nvec3 + dg4313*invgamma33*nvec1*nvec3 + 
      dg4213*invgamma13*nvec2*nvec3 + dg4312*invgamma13*nvec2*nvec3 + 
      dg4223*invgamma23*nvec2*nvec3 + dg4322*invgamma23*nvec2*nvec3 + 
      dg4233*invgamma33*nvec2*nvec3 + dg4323*invgamma33*nvec2*nvec3 + 
      dg4313*invgamma13*Power(nvec3,2) + dg4323*invgamma23*Power(nvec3,2) + 
      dg4333*invgamma33*Power(nvec3,2)))
);

local_hPhin11.store(mask, index2, 
Power(ADMalpha,2)*(dg4101*invgamma11*nvec0 + dg4102*invgamma12*nvec0 + 
    dg4103*invgamma13*nvec0 + dg4111*invgamma11*nvec1 + 
    dg4112*invgamma12*nvec1 + dg4113*invgamma13*nvec1 + 
    dg4112*invgamma11*nvec2 + dg4122*invgamma12*nvec2 + 
    dg4123*invgamma13*nvec2 + dg4113*invgamma11*nvec3 + 
    dg4123*invgamma12*nvec3 + dg4133*invgamma13*nvec3)
);

local_hPhin12.store(mask, index2, 
Power(ADMalpha,2)*(dg4101*invgamma12*nvec0 + dg4102*invgamma22*nvec0 + 
    dg4103*invgamma23*nvec0 + dg4111*invgamma12*nvec1 + 
    dg4112*invgamma22*nvec1 + dg4113*invgamma23*nvec1 + 
    dg4112*invgamma12*nvec2 + dg4122*invgamma22*nvec2 + 
    dg4123*invgamma23*nvec2 + dg4113*invgamma12*nvec3 + 
    dg4123*invgamma22*nvec3 + dg4133*invgamma23*nvec3)
);

local_hPhin13.store(mask, index2, 
Power(ADMalpha,2)*(dg4101*invgamma13*nvec0 + dg4102*invgamma23*nvec0 + 
    dg4103*invgamma33*nvec0 + dg4111*invgamma13*nvec1 + 
    dg4112*invgamma23*nvec1 + dg4113*invgamma33*nvec1 + 
    dg4112*invgamma13*nvec2 + dg4122*invgamma23*nvec2 + 
    dg4123*invgamma33*nvec2 + dg4113*invgamma13*nvec3 + 
    dg4123*invgamma23*nvec3 + dg4133*invgamma33*nvec3)
);

local_hPhin21.store(mask, index2, 
Power(ADMalpha,2)*(dg4201*invgamma11*nvec0 + dg4202*invgamma12*nvec0 + 
    dg4203*invgamma13*nvec0 + dg4211*invgamma11*nvec1 + 
    dg4212*invgamma12*nvec1 + dg4213*invgamma13*nvec1 + 
    dg4212*invgamma11*nvec2 + dg4222*invgamma12*nvec2 + 
    dg4223*invgamma13*nvec2 + dg4213*invgamma11*nvec3 + 
    dg4223*invgamma12*nvec3 + dg4233*invgamma13*nvec3)
);

local_hPhin22.store(mask, index2, 
Power(ADMalpha,2)*(dg4201*invgamma12*nvec0 + dg4202*invgamma22*nvec0 + 
    dg4203*invgamma23*nvec0 + dg4211*invgamma12*nvec1 + 
    dg4212*invgamma22*nvec1 + dg4213*invgamma23*nvec1 + 
    dg4212*invgamma12*nvec2 + dg4222*invgamma22*nvec2 + 
    dg4223*invgamma23*nvec2 + dg4213*invgamma12*nvec3 + 
    dg4223*invgamma22*nvec3 + dg4233*invgamma23*nvec3)
);

local_hPhin23.store(mask, index2, 
Power(ADMalpha,2)*(dg4201*invgamma13*nvec0 + dg4202*invgamma23*nvec0 + 
    dg4203*invgamma33*nvec0 + dg4211*invgamma13*nvec1 + 
    dg4212*invgamma23*nvec1 + dg4213*invgamma33*nvec1 + 
    dg4212*invgamma13*nvec2 + dg4222*invgamma23*nvec2 + 
    dg4223*invgamma33*nvec2 + dg4213*invgamma13*nvec3 + 
    dg4223*invgamma23*nvec3 + dg4233*invgamma33*nvec3)
);

local_hPhin31.store(mask, index2, 
Power(ADMalpha,2)*(dg4301*invgamma11*nvec0 + dg4302*invgamma12*nvec0 + 
    dg4303*invgamma13*nvec0 + dg4311*invgamma11*nvec1 + 
    dg4312*invgamma12*nvec1 + dg4313*invgamma13*nvec1 + 
    dg4312*invgamma11*nvec2 + dg4322*invgamma12*nvec2 + 
    dg4323*invgamma13*nvec2 + dg4313*invgamma11*nvec3 + 
    dg4323*invgamma12*nvec3 + dg4333*invgamma13*nvec3)
);

local_hPhin32.store(mask, index2, 
Power(ADMalpha,2)*(dg4301*invgamma12*nvec0 + dg4302*invgamma22*nvec0 + 
    dg4303*invgamma23*nvec0 + dg4311*invgamma12*nvec1 + 
    dg4312*invgamma22*nvec1 + dg4313*invgamma23*nvec1 + 
    dg4312*invgamma12*nvec2 + dg4322*invgamma22*nvec2 + 
    dg4323*invgamma23*nvec2 + dg4313*invgamma12*nvec3 + 
    dg4323*invgamma22*nvec3 + dg4333*invgamma23*nvec3)
);

local_hPhin33.store(mask, index2, 
Power(ADMalpha,2)*(dg4301*invgamma13*nvec0 + dg4302*invgamma23*nvec0 + 
    dg4303*invgamma33*nvec0 + dg4311*invgamma13*nvec1 + 
    dg4312*invgamma23*nvec1 + dg4313*invgamma33*nvec1 + 
    dg4312*invgamma13*nvec2 + dg4322*invgamma23*nvec2 + 
    dg4323*invgamma33*nvec2 + dg4313*invgamma13*nvec3 + 
    dg4323*invgamma23*nvec3 + dg4333*invgamma33*nvec3)
);

local_hgnn.store(mask, index2, 
-2*ADMalpha
);

local_hPinn.store(mask, index2, 
-(Power(ADMalpha,2)*(dg4000*Power(nvec0,3) + 2*dg4001*Power(nvec0,2)*nvec1 + 
      dg4100*Power(nvec0,2)*nvec1 + dg4011*nvec0*Power(nvec1,2) + 
      2*dg4101*nvec0*Power(nvec1,2) + dg4111*Power(nvec1,3) + 
      2*dg4002*Power(nvec0,2)*nvec2 + dg4200*Power(nvec0,2)*nvec2 + 
      2*dg4012*nvec0*nvec1*nvec2 + 2*dg4102*nvec0*nvec1*nvec2 + 
      2*dg4201*nvec0*nvec1*nvec2 + 2*dg4112*Power(nvec1,2)*nvec2 + 
      dg4211*Power(nvec1,2)*nvec2 + dg4022*nvec0*Power(nvec2,2) + 
      2*dg4202*nvec0*Power(nvec2,2) + dg4122*nvec1*Power(nvec2,2) + 
      2*dg4212*nvec1*Power(nvec2,2) + dg4222*Power(nvec2,3) + 
      2*dg4003*Power(nvec0,2)*nvec3 + dg4300*Power(nvec0,2)*nvec3 + 
      2*dg4013*nvec0*nvec1*nvec3 + 2*dg4103*nvec0*nvec1*nvec3 + 
      2*dg4301*nvec0*nvec1*nvec3 + 2*dg4113*Power(nvec1,2)*nvec3 + 
      dg4311*Power(nvec1,2)*nvec3 + 2*dg4023*nvec0*nvec2*nvec3 + 
      2*dg4203*nvec0*nvec2*nvec3 + 2*dg4302*nvec0*nvec2*nvec3 + 
      2*dg4123*nvec1*nvec2*nvec3 + 2*dg4213*nvec1*nvec2*nvec3 + 
      2*dg4312*nvec1*nvec2*nvec3 + 2*dg4223*Power(nvec2,2)*nvec3 + 
      dg4322*Power(nvec2,2)*nvec3 + dg4033*nvec0*Power(nvec3,2) + 
      2*dg4303*nvec0*Power(nvec3,2) + dg4133*nvec1*Power(nvec3,2) + 
      2*dg4313*nvec1*Power(nvec3,2) + dg4233*nvec2*Power(nvec3,2) + 
      2*dg4323*nvec2*Power(nvec3,2) + dg4333*Power(nvec3,3)))
);

local_hPhinn1.store(mask, index2, 
Power(ADMalpha,2)*(dg4100*Power(nvec0,2) + 2*dg4101*nvec0*nvec1 + 
    dg4111*Power(nvec1,2) + 2*dg4102*nvec0*nvec2 + 2*dg4112*nvec1*nvec2 + 
    dg4122*Power(nvec2,2) + 2*dg4103*nvec0*nvec3 + 2*dg4113*nvec1*nvec3 + 
    2*dg4123*nvec2*nvec3 + dg4133*Power(nvec3,2))
);

local_hPhinn2.store(mask, index2, 
Power(ADMalpha,2)*(dg4200*Power(nvec0,2) + 2*dg4201*nvec0*nvec1 + 
    dg4211*Power(nvec1,2) + 2*dg4202*nvec0*nvec2 + 2*dg4212*nvec1*nvec2 + 
    dg4222*Power(nvec2,2) + 2*dg4203*nvec0*nvec3 + 2*dg4213*nvec1*nvec3 + 
    2*dg4223*nvec2*nvec3 + dg4233*Power(nvec3,2))
);

local_hPhinn3.store(mask, index2, 
Power(ADMalpha,2)*(dg4300*Power(nvec0,2) + 2*dg4301*nvec0*nvec1 + 
    dg4311*Power(nvec1,2) + 2*dg4302*nvec0*nvec2 + 2*dg4312*nvec1*nvec2 + 
    dg4322*Power(nvec2,2) + 2*dg4303*nvec0*nvec3 + 2*dg4313*nvec1*nvec3 + 
    2*dg4323*nvec2*nvec3 + dg4333*Power(nvec3,2))
);

local_W.store(mask, index2, 
Power(invdetgamma,0.16666666666666666)
);

local_WPi.store(mask, index2, 
(ADMalpha*W*(ADMdgamma111*invgamma11*nvec1 + 
      2*ADMdgamma112*invgamma12*nvec1 + 2*ADMdgamma113*invgamma13*nvec1 + 
      ADMdgamma122*invgamma22*nvec1 + 2*ADMdgamma123*invgamma23*nvec1 + 
      ADMdgamma133*invgamma33*nvec1 + ADMdgamma211*invgamma11*nvec2 + 
      2*ADMdgamma212*invgamma12*nvec2 + 2*ADMdgamma213*invgamma13*nvec2 + 
      ADMdgamma222*invgamma22*nvec2 + 2*ADMdgamma223*invgamma23*nvec2 + 
      ADMdgamma233*invgamma33*nvec2 + ADMdgamma311*invgamma11*nvec3 + 
      2*ADMdgamma312*invgamma12*nvec3 + 2*ADMdgamma313*invgamma13*nvec3 + 
      ADMdgamma322*invgamma22*nvec3 + 2*ADMdgamma323*invgamma23*nvec3 + 
      ADMdgamma333*invgamma33*nvec3 + 
      invgamma11*nvec0*ADMdgamma(List(0,-cart),List(1,-cart),
        List(1,-cart)) + 2*invgamma12*nvec0*
       ADMdgamma(List(0,-cart),List(1,-cart),List(2,-cart)) + 
      2*invgamma13*nvec0*ADMdgamma(List(0,-cart),List(1,-cart),
        List(3,-cart)) + invgamma22*nvec0*
       ADMdgamma(List(0,-cart),List(2,-cart),List(2,-cart)) + 
      2*invgamma23*nvec0*ADMdgamma(List(0,-cart),List(2,-cart),
        List(3,-cart)) + invgamma33*nvec0*
       ADMdgamma(List(0,-cart),List(3,-cart),List(3,-cart))))/6.
);

local_WPhi1.store(mask, index2, 
-0.16666666666666666*(ADMalpha*
    (ADMdgamma111*invgamma11 + 2*ADMdgamma112*invgamma12 + 
      2*ADMdgamma113*invgamma13 + ADMdgamma122*invgamma22 + 
      2*ADMdgamma123*invgamma23 + ADMdgamma133*invgamma33)*W)
);

local_WPhi2.store(mask, index2, 
-0.16666666666666666*(ADMalpha*
    (ADMdgamma211*invgamma11 + 2*ADMdgamma212*invgamma12 + 
      2*ADMdgamma213*invgamma13 + ADMdgamma222*invgamma22 + 
      2*ADMdgamma223*invgamma23 + ADMdgamma233*invgamma33)*W)
);

local_WPhi3.store(mask, index2, 
-0.16666666666666666*(ADMalpha*
    (ADMdgamma311*invgamma11 + 2*ADMdgamma312*invgamma12 + 
      2*ADMdgamma313*invgamma13 + ADMdgamma322*invgamma22 + 
      2*ADMdgamma323*invgamma23 + ADMdgamma333*invgamma33)*W)
);

local_hHn.store(mask, index2, 
-(ADMalpha*(nvec0*trGam40 + nvec1*trGam41 + nvec2*trGam42 + nvec3*trGam43))
);

local_hH1.store(mask, index2, 
-(Power(ADMalpha,2)*trGam41*Power(W,2))
);

local_hH2.store(mask, index2, 
-(Power(ADMalpha,2)*trGam42*Power(W,2))
);

local_hH3.store(mask, index2, 
-(Power(ADMalpha,2)*trGam43*Power(W,2))
);

local_hthetan.store(mask, index2, 
-(ADMbeta1*dhHn1) - ADMbeta2*dhHn2 - ADMbeta3*dhHn3
);

local_htheta1.store(mask, index2, 
-(ADMbeta1*dhH11) - ADMbeta2*dhH21 - ADMbeta3*dhH31
);

local_htheta2.store(mask, index2, 
-(ADMbeta1*dhH12) - ADMbeta2*dhH22 - ADMbeta3*dhH32
);

local_htheta3.store(mask, index2, 
-(ADMbeta1*dhH13) - ADMbeta2*dhH23 - ADMbeta3*dhH33
);


});

#endif // #ifndef CGHG_SET_INITIAL_HXX

/* cGHG_set_initial.hxx */
