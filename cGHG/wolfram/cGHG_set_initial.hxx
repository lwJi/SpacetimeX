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

vreal dg4d000
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

vreal dg4d001
=
ADMbeta1*ADMdtgamma11 + ADMbeta2*ADMdtgamma12 + ADMbeta3*ADMdtgamma13 + 
  ADMdtbeta1*ADMgamma11 + ADMdtbeta2*ADMgamma12 + ADMdtbeta3*ADMgamma13
;

vreal dg4d002
=
ADMbeta1*ADMdtgamma12 + ADMbeta2*ADMdtgamma22 + ADMbeta3*ADMdtgamma23 + 
  ADMdtbeta1*ADMgamma12 + ADMdtbeta2*ADMgamma22 + ADMdtbeta3*ADMgamma23
;

vreal dg4d003
=
ADMbeta1*ADMdtgamma13 + ADMbeta2*ADMdtgamma23 + ADMbeta3*ADMdtgamma33 + 
  ADMdtbeta1*ADMgamma13 + ADMdtbeta2*ADMgamma23 + ADMdtbeta3*ADMgamma33
;

vreal dg4d011
=
ADMdtgamma11
;

vreal dg4d012
=
ADMdtgamma12
;

vreal dg4d013
=
ADMdtgamma13
;

vreal dg4d022
=
ADMdtgamma22
;

vreal dg4d023
=
ADMdtgamma23
;

vreal dg4d033
=
ADMdtgamma33
;

vreal dg4d100
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

vreal dg4d101
=
ADMbeta1*ADMdgamma111 + ADMbeta2*ADMdgamma112 + ADMbeta3*ADMdgamma113 + 
  ADMdbeta11*ADMgamma11 + ADMdbeta12*ADMgamma12 + ADMdbeta13*ADMgamma13
;

vreal dg4d102
=
ADMbeta1*ADMdgamma112 + ADMbeta2*ADMdgamma122 + ADMbeta3*ADMdgamma123 + 
  ADMdbeta11*ADMgamma12 + ADMdbeta12*ADMgamma22 + ADMdbeta13*ADMgamma23
;

vreal dg4d103
=
ADMbeta1*ADMdgamma113 + ADMbeta2*ADMdgamma123 + ADMbeta3*ADMdgamma133 + 
  ADMdbeta11*ADMgamma13 + ADMdbeta12*ADMgamma23 + ADMdbeta13*ADMgamma33
;

vreal dg4d111
=
ADMdgamma111
;

vreal dg4d112
=
ADMdgamma112
;

vreal dg4d113
=
ADMdgamma113
;

vreal dg4d122
=
ADMdgamma122
;

vreal dg4d123
=
ADMdgamma123
;

vreal dg4d133
=
ADMdgamma133
;

vreal dg4d200
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

vreal dg4d201
=
ADMbeta1*ADMdgamma211 + ADMbeta2*ADMdgamma212 + ADMbeta3*ADMdgamma213 + 
  ADMdbeta21*ADMgamma11 + ADMdbeta22*ADMgamma12 + ADMdbeta23*ADMgamma13
;

vreal dg4d202
=
ADMbeta1*ADMdgamma212 + ADMbeta2*ADMdgamma222 + ADMbeta3*ADMdgamma223 + 
  ADMdbeta21*ADMgamma12 + ADMdbeta22*ADMgamma22 + ADMdbeta23*ADMgamma23
;

vreal dg4d203
=
ADMbeta1*ADMdgamma213 + ADMbeta2*ADMdgamma223 + ADMbeta3*ADMdgamma233 + 
  ADMdbeta21*ADMgamma13 + ADMdbeta22*ADMgamma23 + ADMdbeta23*ADMgamma33
;

vreal dg4d211
=
ADMdgamma211
;

vreal dg4d212
=
ADMdgamma212
;

vreal dg4d213
=
ADMdgamma213
;

vreal dg4d222
=
ADMdgamma222
;

vreal dg4d223
=
ADMdgamma223
;

vreal dg4d233
=
ADMdgamma233
;

vreal dg4d300
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

vreal dg4d301
=
ADMbeta1*ADMdgamma311 + ADMbeta2*ADMdgamma312 + ADMbeta3*ADMdgamma313 + 
  ADMdbeta31*ADMgamma11 + ADMdbeta32*ADMgamma12 + ADMdbeta33*ADMgamma13
;

vreal dg4d302
=
ADMbeta1*ADMdgamma312 + ADMbeta2*ADMdgamma322 + ADMbeta3*ADMdgamma323 + 
  ADMdbeta31*ADMgamma12 + ADMdbeta32*ADMgamma22 + ADMdbeta33*ADMgamma23
;

vreal dg4d303
=
ADMbeta1*ADMdgamma313 + ADMbeta2*ADMdgamma323 + ADMbeta3*ADMdgamma333 + 
  ADMdbeta31*ADMgamma13 + ADMdbeta32*ADMgamma23 + ADMdbeta33*ADMgamma33
;

vreal dg4d311
=
ADMdgamma311
;

vreal dg4d312
=
ADMdgamma312
;

vreal dg4d313
=
ADMdgamma313
;

vreal dg4d322
=
ADMdgamma322
;

vreal dg4d323
=
ADMdgamma323
;

vreal dg4d333
=
ADMdgamma333
;

vreal invg4d00
=
-Power(nvec0,2)
;

vreal invg4d01
=
-(nvec0*nvec1)
;

vreal invg4d02
=
-(nvec0*nvec2)
;

vreal invg4d03
=
-(nvec0*nvec3)
;

vreal invg4d11
=
invgamma11 - Power(nvec1,2)
;

vreal invg4d12
=
invgamma12 - nvec1*nvec2
;

vreal invg4d13
=
invgamma13 - nvec1*nvec3
;

vreal invg4d22
=
invgamma22 - Power(nvec2,2)
;

vreal invg4d23
=
invgamma23 - nvec2*nvec3
;

vreal invg4d33
=
invgamma33 - Power(nvec3,2)
;

vreal Gam4d000
=
dg4d000/2.
;

vreal Gam4d001
=
dg4d100/2.
;

vreal Gam4d002
=
dg4d200/2.
;

vreal Gam4d003
=
dg4d300/2.
;

vreal Gam4d011
=
-0.5*dg4d011 + dg4d101
;

vreal Gam4d012
=
(-dg4d012 + dg4d102 + dg4d201)/2.
;

vreal Gam4d013
=
(-dg4d013 + dg4d103 + dg4d301)/2.
;

vreal Gam4d022
=
-0.5*dg4d022 + dg4d202
;

vreal Gam4d023
=
(-dg4d023 + dg4d203 + dg4d302)/2.
;

vreal Gam4d033
=
-0.5*dg4d033 + dg4d303
;

vreal Gam4d100
=
dg4d001 - dg4d100/2.
;

vreal Gam4d101
=
dg4d011/2.
;

vreal Gam4d102
=
(dg4d012 - dg4d102 + dg4d201)/2.
;

vreal Gam4d103
=
(dg4d013 - dg4d103 + dg4d301)/2.
;

vreal Gam4d111
=
dg4d111/2.
;

vreal Gam4d112
=
dg4d211/2.
;

vreal Gam4d113
=
dg4d311/2.
;

vreal Gam4d122
=
-0.5*dg4d122 + dg4d212
;

vreal Gam4d123
=
(-dg4d123 + dg4d213 + dg4d312)/2.
;

vreal Gam4d133
=
-0.5*dg4d133 + dg4d313
;

vreal Gam4d200
=
dg4d002 - dg4d200/2.
;

vreal Gam4d201
=
(dg4d012 + dg4d102 - dg4d201)/2.
;

vreal Gam4d202
=
dg4d022/2.
;

vreal Gam4d203
=
(dg4d023 - dg4d203 + dg4d302)/2.
;

vreal Gam4d211
=
dg4d112 - dg4d211/2.
;

vreal Gam4d212
=
dg4d122/2.
;

vreal Gam4d213
=
(dg4d123 - dg4d213 + dg4d312)/2.
;

vreal Gam4d222
=
dg4d222/2.
;

vreal Gam4d223
=
dg4d322/2.
;

vreal Gam4d233
=
-0.5*dg4d233 + dg4d323
;

vreal Gam4d300
=
dg4d003 - dg4d300/2.
;

vreal Gam4d301
=
(dg4d013 + dg4d103 - dg4d301)/2.
;

vreal Gam4d302
=
(dg4d023 + dg4d203 - dg4d302)/2.
;

vreal Gam4d303
=
dg4d033/2.
;

vreal Gam4d311
=
dg4d113 - dg4d311/2.
;

vreal Gam4d312
=
(dg4d123 + dg4d213 - dg4d312)/2.
;

vreal Gam4d313
=
dg4d133/2.
;

vreal Gam4d322
=
dg4d223 - dg4d322/2.
;

vreal Gam4d323
=
dg4d233/2.
;

vreal Gam4d333
=
dg4d333/2.
;

vreal trGam4d0
=
Gam4d000*invg4d00 + 2*Gam4d001*invg4d01 + 2*Gam4d002*invg4d02 + 
  2*Gam4d003*invg4d03 + Gam4d011*invg4d11 + 2*Gam4d012*invg4d12 + 
  2*Gam4d013*invg4d13 + Gam4d022*invg4d22 + 2*Gam4d023*invg4d23 + 
  Gam4d033*invg4d33
;

vreal trGam4d1
=
Gam4d100*invg4d00 + 2*Gam4d101*invg4d01 + 2*Gam4d102*invg4d02 + 
  2*Gam4d103*invg4d03 + Gam4d111*invg4d11 + 2*Gam4d112*invg4d12 + 
  2*Gam4d113*invg4d13 + Gam4d122*invg4d22 + 2*Gam4d123*invg4d23 + 
  Gam4d133*invg4d33
;

vreal trGam4d2
=
Gam4d200*invg4d00 + 2*Gam4d201*invg4d01 + 2*Gam4d202*invg4d02 + 
  2*Gam4d203*invg4d03 + Gam4d211*invg4d11 + 2*Gam4d212*invg4d12 + 
  2*Gam4d213*invg4d13 + Gam4d222*invg4d22 + 2*Gam4d223*invg4d23 + 
  Gam4d233*invg4d33
;

vreal trGam4d3
=
Gam4d300*invg4d00 + 2*Gam4d301*invg4d01 + 2*Gam4d302*invg4d02 + 
  2*Gam4d303*invg4d03 + Gam4d311*invg4d11 + 2*Gam4d312*invg4d12 + 
  2*Gam4d313*invg4d13 + Gam4d322*invg4d22 + 2*Gam4d323*invg4d23 + 
  Gam4d333*invg4d33
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
-(W*(ADMalpha*(dg4d011*nvec0 + dg4d111*nvec1 + dg4d211*nvec2 + 
         dg4d311*nvec3)*W - 2*ADMgamma11*WPi))
);

local_hPi12.store(mask, index2, 
-(W*(ADMalpha*(dg4d012*nvec0 + dg4d112*nvec1 + dg4d212*nvec2 + 
         dg4d312*nvec3)*W - 2*ADMgamma12*WPi))
);

local_hPi13.store(mask, index2, 
-(W*(ADMalpha*(dg4d013*nvec0 + dg4d113*nvec1 + dg4d213*nvec2 + 
         dg4d313*nvec3)*W - 2*ADMgamma13*WPi))
);

local_hPi22.store(mask, index2, 
-(W*(ADMalpha*(dg4d022*nvec0 + dg4d122*nvec1 + dg4d222*nvec2 + 
         dg4d322*nvec3)*W - 2*ADMgamma22*WPi))
);

local_hPi23.store(mask, index2, 
-(W*(ADMalpha*(dg4d023*nvec0 + dg4d123*nvec1 + dg4d223*nvec2 + 
         dg4d323*nvec3)*W - 2*ADMgamma23*WPi))
);

local_hPi33.store(mask, index2, 
-(W*(ADMalpha*(dg4d033*nvec0 + dg4d133*nvec1 + dg4d233*nvec2 + 
         dg4d333*nvec3)*W - 2*ADMgamma33*WPi))
);

local_hPhi111.store(mask, index2, 
W*(ADMalpha*dg4d111*W + 2*ADMgamma11*WPhi1)
);

local_hPhi112.store(mask, index2, 
W*(ADMalpha*dg4d112*W + 2*ADMgamma12*WPhi1)
);

local_hPhi113.store(mask, index2, 
W*(ADMalpha*dg4d113*W + 2*ADMgamma13*WPhi1)
);

local_hPhi122.store(mask, index2, 
W*(ADMalpha*dg4d122*W + 2*ADMgamma22*WPhi1)
);

local_hPhi123.store(mask, index2, 
W*(ADMalpha*dg4d123*W + 2*ADMgamma23*WPhi1)
);

local_hPhi133.store(mask, index2, 
W*(ADMalpha*dg4d133*W + 2*ADMgamma33*WPhi1)
);

local_hPhi211.store(mask, index2, 
W*(ADMalpha*dg4d211*W + 2*ADMgamma11*WPhi2)
);

local_hPhi212.store(mask, index2, 
W*(ADMalpha*dg4d212*W + 2*ADMgamma12*WPhi2)
);

local_hPhi213.store(mask, index2, 
W*(ADMalpha*dg4d213*W + 2*ADMgamma13*WPhi2)
);

local_hPhi222.store(mask, index2, 
W*(ADMalpha*dg4d222*W + 2*ADMgamma22*WPhi2)
);

local_hPhi223.store(mask, index2, 
W*(ADMalpha*dg4d223*W + 2*ADMgamma23*WPhi2)
);

local_hPhi233.store(mask, index2, 
W*(ADMalpha*dg4d233*W + 2*ADMgamma33*WPhi2)
);

local_hPhi311.store(mask, index2, 
W*(ADMalpha*dg4d311*W + 2*ADMgamma11*WPhi3)
);

local_hPhi312.store(mask, index2, 
W*(ADMalpha*dg4d312*W + 2*ADMgamma12*WPhi3)
);

local_hPhi313.store(mask, index2, 
W*(ADMalpha*dg4d313*W + 2*ADMgamma13*WPhi3)
);

local_hPhi322.store(mask, index2, 
W*(ADMalpha*dg4d322*W + 2*ADMgamma22*WPhi3)
);

local_hPhi323.store(mask, index2, 
W*(ADMalpha*dg4d323*W + 2*ADMgamma23*WPhi3)
);

local_hPhi333.store(mask, index2, 
W*(ADMalpha*dg4d333*W + 2*ADMgamma33*WPhi3)
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
-(Power(ADMalpha,2)*(dg4d001*invgamma11*Power(nvec0,2) + 
      dg4d002*invgamma12*Power(nvec0,2) + 
      dg4d003*invgamma13*Power(nvec0,2) + dg4d011*invgamma11*nvec0*nvec1 + 
      dg4d101*invgamma11*nvec0*nvec1 + dg4d012*invgamma12*nvec0*nvec1 + 
      dg4d102*invgamma12*nvec0*nvec1 + dg4d013*invgamma13*nvec0*nvec1 + 
      dg4d103*invgamma13*nvec0*nvec1 + dg4d111*invgamma11*Power(nvec1,2) + 
      dg4d112*invgamma12*Power(nvec1,2) + 
      dg4d113*invgamma13*Power(nvec1,2) + dg4d012*invgamma11*nvec0*nvec2 + 
      dg4d201*invgamma11*nvec0*nvec2 + dg4d022*invgamma12*nvec0*nvec2 + 
      dg4d202*invgamma12*nvec0*nvec2 + dg4d023*invgamma13*nvec0*nvec2 + 
      dg4d203*invgamma13*nvec0*nvec2 + dg4d112*invgamma11*nvec1*nvec2 + 
      dg4d211*invgamma11*nvec1*nvec2 + dg4d122*invgamma12*nvec1*nvec2 + 
      dg4d212*invgamma12*nvec1*nvec2 + dg4d123*invgamma13*nvec1*nvec2 + 
      dg4d213*invgamma13*nvec1*nvec2 + dg4d212*invgamma11*Power(nvec2,2) + 
      dg4d222*invgamma12*Power(nvec2,2) + 
      dg4d223*invgamma13*Power(nvec2,2) + dg4d013*invgamma11*nvec0*nvec3 + 
      dg4d301*invgamma11*nvec0*nvec3 + dg4d023*invgamma12*nvec0*nvec3 + 
      dg4d302*invgamma12*nvec0*nvec3 + dg4d033*invgamma13*nvec0*nvec3 + 
      dg4d303*invgamma13*nvec0*nvec3 + dg4d113*invgamma11*nvec1*nvec3 + 
      dg4d311*invgamma11*nvec1*nvec3 + dg4d123*invgamma12*nvec1*nvec3 + 
      dg4d312*invgamma12*nvec1*nvec3 + dg4d133*invgamma13*nvec1*nvec3 + 
      dg4d313*invgamma13*nvec1*nvec3 + dg4d213*invgamma11*nvec2*nvec3 + 
      dg4d312*invgamma11*nvec2*nvec3 + dg4d223*invgamma12*nvec2*nvec3 + 
      dg4d322*invgamma12*nvec2*nvec3 + dg4d233*invgamma13*nvec2*nvec3 + 
      dg4d323*invgamma13*nvec2*nvec3 + dg4d313*invgamma11*Power(nvec3,2) + 
      dg4d323*invgamma12*Power(nvec3,2) + dg4d333*invgamma13*Power(nvec3,2)))
);

local_hPin2.store(mask, index2, 
-(Power(ADMalpha,2)*(dg4d001*invgamma12*Power(nvec0,2) + 
      dg4d002*invgamma22*Power(nvec0,2) + 
      dg4d003*invgamma23*Power(nvec0,2) + dg4d011*invgamma12*nvec0*nvec1 + 
      dg4d101*invgamma12*nvec0*nvec1 + dg4d012*invgamma22*nvec0*nvec1 + 
      dg4d102*invgamma22*nvec0*nvec1 + dg4d013*invgamma23*nvec0*nvec1 + 
      dg4d103*invgamma23*nvec0*nvec1 + dg4d111*invgamma12*Power(nvec1,2) + 
      dg4d112*invgamma22*Power(nvec1,2) + 
      dg4d113*invgamma23*Power(nvec1,2) + dg4d012*invgamma12*nvec0*nvec2 + 
      dg4d201*invgamma12*nvec0*nvec2 + dg4d022*invgamma22*nvec0*nvec2 + 
      dg4d202*invgamma22*nvec0*nvec2 + dg4d023*invgamma23*nvec0*nvec2 + 
      dg4d203*invgamma23*nvec0*nvec2 + dg4d112*invgamma12*nvec1*nvec2 + 
      dg4d211*invgamma12*nvec1*nvec2 + dg4d122*invgamma22*nvec1*nvec2 + 
      dg4d212*invgamma22*nvec1*nvec2 + dg4d123*invgamma23*nvec1*nvec2 + 
      dg4d213*invgamma23*nvec1*nvec2 + dg4d212*invgamma12*Power(nvec2,2) + 
      dg4d222*invgamma22*Power(nvec2,2) + 
      dg4d223*invgamma23*Power(nvec2,2) + dg4d013*invgamma12*nvec0*nvec3 + 
      dg4d301*invgamma12*nvec0*nvec3 + dg4d023*invgamma22*nvec0*nvec3 + 
      dg4d302*invgamma22*nvec0*nvec3 + dg4d033*invgamma23*nvec0*nvec3 + 
      dg4d303*invgamma23*nvec0*nvec3 + dg4d113*invgamma12*nvec1*nvec3 + 
      dg4d311*invgamma12*nvec1*nvec3 + dg4d123*invgamma22*nvec1*nvec3 + 
      dg4d312*invgamma22*nvec1*nvec3 + dg4d133*invgamma23*nvec1*nvec3 + 
      dg4d313*invgamma23*nvec1*nvec3 + dg4d213*invgamma12*nvec2*nvec3 + 
      dg4d312*invgamma12*nvec2*nvec3 + dg4d223*invgamma22*nvec2*nvec3 + 
      dg4d322*invgamma22*nvec2*nvec3 + dg4d233*invgamma23*nvec2*nvec3 + 
      dg4d323*invgamma23*nvec2*nvec3 + dg4d313*invgamma12*Power(nvec3,2) + 
      dg4d323*invgamma22*Power(nvec3,2) + dg4d333*invgamma23*Power(nvec3,2)))
);

local_hPin3.store(mask, index2, 
-(Power(ADMalpha,2)*(dg4d001*invgamma13*Power(nvec0,2) + 
      dg4d002*invgamma23*Power(nvec0,2) + 
      dg4d003*invgamma33*Power(nvec0,2) + dg4d011*invgamma13*nvec0*nvec1 + 
      dg4d101*invgamma13*nvec0*nvec1 + dg4d012*invgamma23*nvec0*nvec1 + 
      dg4d102*invgamma23*nvec0*nvec1 + dg4d013*invgamma33*nvec0*nvec1 + 
      dg4d103*invgamma33*nvec0*nvec1 + dg4d111*invgamma13*Power(nvec1,2) + 
      dg4d112*invgamma23*Power(nvec1,2) + 
      dg4d113*invgamma33*Power(nvec1,2) + dg4d012*invgamma13*nvec0*nvec2 + 
      dg4d201*invgamma13*nvec0*nvec2 + dg4d022*invgamma23*nvec0*nvec2 + 
      dg4d202*invgamma23*nvec0*nvec2 + dg4d023*invgamma33*nvec0*nvec2 + 
      dg4d203*invgamma33*nvec0*nvec2 + dg4d112*invgamma13*nvec1*nvec2 + 
      dg4d211*invgamma13*nvec1*nvec2 + dg4d122*invgamma23*nvec1*nvec2 + 
      dg4d212*invgamma23*nvec1*nvec2 + dg4d123*invgamma33*nvec1*nvec2 + 
      dg4d213*invgamma33*nvec1*nvec2 + dg4d212*invgamma13*Power(nvec2,2) + 
      dg4d222*invgamma23*Power(nvec2,2) + 
      dg4d223*invgamma33*Power(nvec2,2) + dg4d013*invgamma13*nvec0*nvec3 + 
      dg4d301*invgamma13*nvec0*nvec3 + dg4d023*invgamma23*nvec0*nvec3 + 
      dg4d302*invgamma23*nvec0*nvec3 + dg4d033*invgamma33*nvec0*nvec3 + 
      dg4d303*invgamma33*nvec0*nvec3 + dg4d113*invgamma13*nvec1*nvec3 + 
      dg4d311*invgamma13*nvec1*nvec3 + dg4d123*invgamma23*nvec1*nvec3 + 
      dg4d312*invgamma23*nvec1*nvec3 + dg4d133*invgamma33*nvec1*nvec3 + 
      dg4d313*invgamma33*nvec1*nvec3 + dg4d213*invgamma13*nvec2*nvec3 + 
      dg4d312*invgamma13*nvec2*nvec3 + dg4d223*invgamma23*nvec2*nvec3 + 
      dg4d322*invgamma23*nvec2*nvec3 + dg4d233*invgamma33*nvec2*nvec3 + 
      dg4d323*invgamma33*nvec2*nvec3 + dg4d313*invgamma13*Power(nvec3,2) + 
      dg4d323*invgamma23*Power(nvec3,2) + dg4d333*invgamma33*Power(nvec3,2)))
);

local_hPhin11.store(mask, index2, 
Power(ADMalpha,2)*(dg4d101*invgamma11*nvec0 + dg4d102*invgamma12*nvec0 + 
    dg4d103*invgamma13*nvec0 + dg4d111*invgamma11*nvec1 + 
    dg4d112*invgamma12*nvec1 + dg4d113*invgamma13*nvec1 + 
    dg4d112*invgamma11*nvec2 + dg4d122*invgamma12*nvec2 + 
    dg4d123*invgamma13*nvec2 + dg4d113*invgamma11*nvec3 + 
    dg4d123*invgamma12*nvec3 + dg4d133*invgamma13*nvec3)
);

local_hPhin12.store(mask, index2, 
Power(ADMalpha,2)*(dg4d101*invgamma12*nvec0 + dg4d102*invgamma22*nvec0 + 
    dg4d103*invgamma23*nvec0 + dg4d111*invgamma12*nvec1 + 
    dg4d112*invgamma22*nvec1 + dg4d113*invgamma23*nvec1 + 
    dg4d112*invgamma12*nvec2 + dg4d122*invgamma22*nvec2 + 
    dg4d123*invgamma23*nvec2 + dg4d113*invgamma12*nvec3 + 
    dg4d123*invgamma22*nvec3 + dg4d133*invgamma23*nvec3)
);

local_hPhin13.store(mask, index2, 
Power(ADMalpha,2)*(dg4d101*invgamma13*nvec0 + dg4d102*invgamma23*nvec0 + 
    dg4d103*invgamma33*nvec0 + dg4d111*invgamma13*nvec1 + 
    dg4d112*invgamma23*nvec1 + dg4d113*invgamma33*nvec1 + 
    dg4d112*invgamma13*nvec2 + dg4d122*invgamma23*nvec2 + 
    dg4d123*invgamma33*nvec2 + dg4d113*invgamma13*nvec3 + 
    dg4d123*invgamma23*nvec3 + dg4d133*invgamma33*nvec3)
);

local_hPhin21.store(mask, index2, 
Power(ADMalpha,2)*(dg4d201*invgamma11*nvec0 + dg4d202*invgamma12*nvec0 + 
    dg4d203*invgamma13*nvec0 + dg4d211*invgamma11*nvec1 + 
    dg4d212*invgamma12*nvec1 + dg4d213*invgamma13*nvec1 + 
    dg4d212*invgamma11*nvec2 + dg4d222*invgamma12*nvec2 + 
    dg4d223*invgamma13*nvec2 + dg4d213*invgamma11*nvec3 + 
    dg4d223*invgamma12*nvec3 + dg4d233*invgamma13*nvec3)
);

local_hPhin22.store(mask, index2, 
Power(ADMalpha,2)*(dg4d201*invgamma12*nvec0 + dg4d202*invgamma22*nvec0 + 
    dg4d203*invgamma23*nvec0 + dg4d211*invgamma12*nvec1 + 
    dg4d212*invgamma22*nvec1 + dg4d213*invgamma23*nvec1 + 
    dg4d212*invgamma12*nvec2 + dg4d222*invgamma22*nvec2 + 
    dg4d223*invgamma23*nvec2 + dg4d213*invgamma12*nvec3 + 
    dg4d223*invgamma22*nvec3 + dg4d233*invgamma23*nvec3)
);

local_hPhin23.store(mask, index2, 
Power(ADMalpha,2)*(dg4d201*invgamma13*nvec0 + dg4d202*invgamma23*nvec0 + 
    dg4d203*invgamma33*nvec0 + dg4d211*invgamma13*nvec1 + 
    dg4d212*invgamma23*nvec1 + dg4d213*invgamma33*nvec1 + 
    dg4d212*invgamma13*nvec2 + dg4d222*invgamma23*nvec2 + 
    dg4d223*invgamma33*nvec2 + dg4d213*invgamma13*nvec3 + 
    dg4d223*invgamma23*nvec3 + dg4d233*invgamma33*nvec3)
);

local_hPhin31.store(mask, index2, 
Power(ADMalpha,2)*(dg4d301*invgamma11*nvec0 + dg4d302*invgamma12*nvec0 + 
    dg4d303*invgamma13*nvec0 + dg4d311*invgamma11*nvec1 + 
    dg4d312*invgamma12*nvec1 + dg4d313*invgamma13*nvec1 + 
    dg4d312*invgamma11*nvec2 + dg4d322*invgamma12*nvec2 + 
    dg4d323*invgamma13*nvec2 + dg4d313*invgamma11*nvec3 + 
    dg4d323*invgamma12*nvec3 + dg4d333*invgamma13*nvec3)
);

local_hPhin32.store(mask, index2, 
Power(ADMalpha,2)*(dg4d301*invgamma12*nvec0 + dg4d302*invgamma22*nvec0 + 
    dg4d303*invgamma23*nvec0 + dg4d311*invgamma12*nvec1 + 
    dg4d312*invgamma22*nvec1 + dg4d313*invgamma23*nvec1 + 
    dg4d312*invgamma12*nvec2 + dg4d322*invgamma22*nvec2 + 
    dg4d323*invgamma23*nvec2 + dg4d313*invgamma12*nvec3 + 
    dg4d323*invgamma22*nvec3 + dg4d333*invgamma23*nvec3)
);

local_hPhin33.store(mask, index2, 
Power(ADMalpha,2)*(dg4d301*invgamma13*nvec0 + dg4d302*invgamma23*nvec0 + 
    dg4d303*invgamma33*nvec0 + dg4d311*invgamma13*nvec1 + 
    dg4d312*invgamma23*nvec1 + dg4d313*invgamma33*nvec1 + 
    dg4d312*invgamma13*nvec2 + dg4d322*invgamma23*nvec2 + 
    dg4d323*invgamma33*nvec2 + dg4d313*invgamma13*nvec3 + 
    dg4d323*invgamma23*nvec3 + dg4d333*invgamma33*nvec3)
);

local_hgnn.store(mask, index2, 
-2*ADMalpha
);

local_hPinn.store(mask, index2, 
-(Power(ADMalpha,2)*(dg4d000*Power(nvec0,3) + 
      2*dg4d001*Power(nvec0,2)*nvec1 + dg4d100*Power(nvec0,2)*nvec1 + 
      dg4d011*nvec0*Power(nvec1,2) + 2*dg4d101*nvec0*Power(nvec1,2) + 
      dg4d111*Power(nvec1,3) + 2*dg4d002*Power(nvec0,2)*nvec2 + 
      dg4d200*Power(nvec0,2)*nvec2 + 2*dg4d012*nvec0*nvec1*nvec2 + 
      2*dg4d102*nvec0*nvec1*nvec2 + 2*dg4d201*nvec0*nvec1*nvec2 + 
      2*dg4d112*Power(nvec1,2)*nvec2 + dg4d211*Power(nvec1,2)*nvec2 + 
      dg4d022*nvec0*Power(nvec2,2) + 2*dg4d202*nvec0*Power(nvec2,2) + 
      dg4d122*nvec1*Power(nvec2,2) + 2*dg4d212*nvec1*Power(nvec2,2) + 
      dg4d222*Power(nvec2,3) + 2*dg4d003*Power(nvec0,2)*nvec3 + 
      dg4d300*Power(nvec0,2)*nvec3 + 2*dg4d013*nvec0*nvec1*nvec3 + 
      2*dg4d103*nvec0*nvec1*nvec3 + 2*dg4d301*nvec0*nvec1*nvec3 + 
      2*dg4d113*Power(nvec1,2)*nvec3 + dg4d311*Power(nvec1,2)*nvec3 + 
      2*dg4d023*nvec0*nvec2*nvec3 + 2*dg4d203*nvec0*nvec2*nvec3 + 
      2*dg4d302*nvec0*nvec2*nvec3 + 2*dg4d123*nvec1*nvec2*nvec3 + 
      2*dg4d213*nvec1*nvec2*nvec3 + 2*dg4d312*nvec1*nvec2*nvec3 + 
      2*dg4d223*Power(nvec2,2)*nvec3 + dg4d322*Power(nvec2,2)*nvec3 + 
      dg4d033*nvec0*Power(nvec3,2) + 2*dg4d303*nvec0*Power(nvec3,2) + 
      dg4d133*nvec1*Power(nvec3,2) + 2*dg4d313*nvec1*Power(nvec3,2) + 
      dg4d233*nvec2*Power(nvec3,2) + 2*dg4d323*nvec2*Power(nvec3,2) + 
      dg4d333*Power(nvec3,3)))
);

local_hPhinn1.store(mask, index2, 
Power(ADMalpha,2)*(dg4d100*Power(nvec0,2) + 2*dg4d101*nvec0*nvec1 + 
    dg4d111*Power(nvec1,2) + 2*dg4d102*nvec0*nvec2 + 2*dg4d112*nvec1*nvec2 + 
    dg4d122*Power(nvec2,2) + 2*dg4d103*nvec0*nvec3 + 2*dg4d113*nvec1*nvec3 + 
    2*dg4d123*nvec2*nvec3 + dg4d133*Power(nvec3,2))
);

local_hPhinn2.store(mask, index2, 
Power(ADMalpha,2)*(dg4d200*Power(nvec0,2) + 2*dg4d201*nvec0*nvec1 + 
    dg4d211*Power(nvec1,2) + 2*dg4d202*nvec0*nvec2 + 2*dg4d212*nvec1*nvec2 + 
    dg4d222*Power(nvec2,2) + 2*dg4d203*nvec0*nvec3 + 2*dg4d213*nvec1*nvec3 + 
    2*dg4d223*nvec2*nvec3 + dg4d233*Power(nvec3,2))
);

local_hPhinn3.store(mask, index2, 
Power(ADMalpha,2)*(dg4d300*Power(nvec0,2) + 2*dg4d301*nvec0*nvec1 + 
    dg4d311*Power(nvec1,2) + 2*dg4d302*nvec0*nvec2 + 2*dg4d312*nvec1*nvec2 + 
    dg4d322*Power(nvec2,2) + 2*dg4d303*nvec0*nvec3 + 2*dg4d313*nvec1*nvec3 + 
    2*dg4d323*nvec2*nvec3 + dg4d333*Power(nvec3,2))
);

local_W.store(mask, index2, 
Power(invdetgamma,0.16666666666666666)
);

local_WPi.store(mask, index2, 
(ADMalpha*(dg4d011*invgamma11*nvec0 + 2*dg4d012*invgamma12*nvec0 + 
      2*dg4d013*invgamma13*nvec0 + dg4d022*invgamma22*nvec0 + 
      2*dg4d023*invgamma23*nvec0 + dg4d033*invgamma33*nvec0 + 
      dg4d111*invgamma11*nvec1 + 2*dg4d112*invgamma12*nvec1 + 
      2*dg4d113*invgamma13*nvec1 + dg4d122*invgamma22*nvec1 + 
      2*dg4d123*invgamma23*nvec1 + dg4d133*invgamma33*nvec1 + 
      dg4d211*invgamma11*nvec2 + 2*dg4d212*invgamma12*nvec2 + 
      2*dg4d213*invgamma13*nvec2 + dg4d222*invgamma22*nvec2 + 
      2*dg4d223*invgamma23*nvec2 + dg4d233*invgamma33*nvec2 + 
      dg4d311*invgamma11*nvec3 + 2*dg4d312*invgamma12*nvec3 + 
      2*dg4d313*invgamma13*nvec3 + dg4d322*invgamma22*nvec3 + 
      2*dg4d323*invgamma23*nvec3 + dg4d333*invgamma33*nvec3)*W)/6.
);

local_WPhi1.store(mask, index2, 
-0.16666666666666666*(ADMalpha*
    (dg4d111*invgamma11 + 2*dg4d112*invgamma12 + 2*dg4d113*invgamma13 + 
      dg4d122*invgamma22 + 2*dg4d123*invgamma23 + dg4d133*invgamma33)*W)
);

local_WPhi2.store(mask, index2, 
-0.16666666666666666*(ADMalpha*
    (dg4d211*invgamma11 + 2*dg4d212*invgamma12 + 2*dg4d213*invgamma13 + 
      dg4d222*invgamma22 + 2*dg4d223*invgamma23 + dg4d233*invgamma33)*W)
);

local_WPhi3.store(mask, index2, 
-0.16666666666666666*(ADMalpha*
    (dg4d311*invgamma11 + 2*dg4d312*invgamma12 + 2*dg4d313*invgamma13 + 
      dg4d322*invgamma22 + 2*dg4d323*invgamma23 + dg4d333*invgamma33)*W)
);

local_hHn.store(mask, index2, 
-(ADMalpha*(nvec0*trGam4d0 + nvec1*trGam4d1 + nvec2*trGam4d2 + 
      nvec3*trGam4d3))
);

local_hH1.store(mask, index2, 
-(Power(ADMalpha,2)*trGam4d1*Power(W,2))
);

local_hH2.store(mask, index2, 
-(Power(ADMalpha,2)*trGam4d2*Power(W,2))
);

local_hH3.store(mask, index2, 
-(Power(ADMalpha,2)*trGam4d3*Power(W,2))
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
