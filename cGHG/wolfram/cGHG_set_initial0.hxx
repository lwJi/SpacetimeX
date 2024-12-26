/* cGHG_set_initial0.hxx */
/* Produced with Mathematica */

#ifndef CGHG_SET_INITIAL0_HXX
#define CGHG_SET_INITIAL0_HXX

const GF3D2<CCTK_REAL> &local_ADMdtalpha = gf_ADMdtalpha;
const GF3D2<CCTK_REAL> &local_ADMdtbeta1 = gf_ADMdtbeta(0);
const GF3D2<CCTK_REAL> &local_ADMdtbeta2 = gf_ADMdtbeta(1);
const GF3D2<CCTK_REAL> &local_ADMdtbeta3 = gf_ADMdtbeta(2);

grid.loop_int_device<0, 0, 0, vsize>(
  grid.nghostzones, [=] ARITH_DEVICE(const PointDesc &p) ARITH_INLINE {
  const vbool mask = mask_for_loop_tail<vbool>(p.i, p.imax);
  const GF3D2index index2(layout2, p.I);
  const GF3D5index index5(layout5, p.I);

const vreal x0 = p.x + Arith::iota<vreal>() * p.dx;
const vreal ceta = calceta(x0, p.y, p.z);

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


vreal cbrtdetgamma = 1 / cbrt(invdetgamma);

vreal trGam3d1
=
(cbrtdetgamma*(2*ADMdgamma111*Power(invgamma11,2) + 
      4*ADMdgamma112*invgamma11*invgamma12 + 
      2*ADMdgamma211*invgamma11*invgamma12 + 
      3*ADMdgamma122*Power(invgamma12,2) + 
      ADMdgamma212*Power(invgamma12,2) + 
      4*ADMdgamma113*invgamma11*invgamma13 + 
      2*ADMdgamma311*invgamma11*invgamma13 + 
      6*ADMdgamma123*invgamma12*invgamma13 + 
      ADMdgamma213*invgamma12*invgamma13 + 
      ADMdgamma312*invgamma12*invgamma13 + 
      3*ADMdgamma133*Power(invgamma13,2) + 
      ADMdgamma313*Power(invgamma13,2) - 
      ADMdgamma122*invgamma11*invgamma22 + 
      3*ADMdgamma212*invgamma11*invgamma22 + 
      2*ADMdgamma222*invgamma12*invgamma22 + 
      3*ADMdgamma223*invgamma13*invgamma22 - 
      ADMdgamma322*invgamma13*invgamma22 - 
      2*ADMdgamma123*invgamma11*invgamma23 + 
      3*ADMdgamma213*invgamma11*invgamma23 + 
      3*ADMdgamma312*invgamma11*invgamma23 + 
      ADMdgamma223*invgamma12*invgamma23 + 
      3*ADMdgamma322*invgamma12*invgamma23 + 
      3*ADMdgamma233*invgamma13*invgamma23 + 
      ADMdgamma323*invgamma13*invgamma23 - 
      ADMdgamma133*invgamma11*invgamma33 + 
      3*ADMdgamma313*invgamma11*invgamma33 - 
      ADMdgamma233*invgamma12*invgamma33 + 
      3*ADMdgamma323*invgamma12*invgamma33 + 
      2*ADMdgamma333*invgamma13*invgamma33))/3.
;

vreal trGam3d2
=
(cbrtdetgamma*(2*ADMdgamma111*invgamma11*invgamma12 + 
      3*ADMdgamma211*Power(invgamma12,2) + 
      ADMdgamma113*invgamma12*invgamma13 + 
      3*ADMdgamma311*invgamma12*invgamma13 - 
      ADMdgamma211*invgamma11*invgamma22 + 
      2*ADMdgamma122*invgamma12*invgamma22 + 
      4*ADMdgamma212*invgamma12*invgamma22 + 
      3*ADMdgamma123*invgamma13*invgamma22 - 
      2*ADMdgamma213*invgamma13*invgamma22 + 
      3*ADMdgamma312*invgamma13*invgamma22 + 
      2*ADMdgamma222*Power(invgamma22,2) + 
      ADMdgamma112*(Power(invgamma12,2) + 3*invgamma11*invgamma22) + 
      3*ADMdgamma113*invgamma11*invgamma23 - 
      ADMdgamma311*invgamma11*invgamma23 + 
      ADMdgamma123*invgamma12*invgamma23 + 
      6*ADMdgamma213*invgamma12*invgamma23 + 
      ADMdgamma312*invgamma12*invgamma23 + 
      3*ADMdgamma133*invgamma13*invgamma23 + 
      ADMdgamma313*invgamma13*invgamma23 + 
      4*ADMdgamma223*invgamma22*invgamma23 + 
      2*ADMdgamma322*invgamma22*invgamma23 + 
      3*ADMdgamma233*Power(invgamma23,2) + 
      ADMdgamma323*Power(invgamma23,2) - 
      ADMdgamma133*invgamma12*invgamma33 + 
      3*ADMdgamma313*invgamma12*invgamma33 - 
      ADMdgamma233*invgamma22*invgamma33 + 
      3*ADMdgamma323*invgamma22*invgamma33 + 
      2*ADMdgamma333*invgamma23*invgamma33))/3.
;

vreal trGam3d3
=
(cbrtdetgamma*(2*ADMdgamma111*invgamma11*invgamma13 + 
      ADMdgamma112*invgamma12*invgamma13 + 
      3*ADMdgamma211*invgamma12*invgamma13 + 
      ADMdgamma113*Power(invgamma13,2) + 
      3*ADMdgamma311*Power(invgamma13,2) - 
      ADMdgamma122*invgamma13*invgamma22 + 
      3*ADMdgamma212*invgamma13*invgamma22 + 
      3*ADMdgamma112*invgamma11*invgamma23 - 
      ADMdgamma211*invgamma11*invgamma23 + 
      3*ADMdgamma122*invgamma12*invgamma23 + 
      ADMdgamma212*invgamma12*invgamma23 + 
      ADMdgamma123*invgamma13*invgamma23 + 
      ADMdgamma213*invgamma13*invgamma23 + 
      6*ADMdgamma312*invgamma13*invgamma23 + 
      2*ADMdgamma222*invgamma22*invgamma23 + 
      ADMdgamma223*Power(invgamma23,2) + 
      3*ADMdgamma322*Power(invgamma23,2) + 
      3*ADMdgamma113*invgamma11*invgamma33 - 
      ADMdgamma311*invgamma11*invgamma33 + 
      3*ADMdgamma123*invgamma12*invgamma33 + 
      3*ADMdgamma213*invgamma12*invgamma33 - 
      2*ADMdgamma312*invgamma12*invgamma33 + 
      2*ADMdgamma133*invgamma13*invgamma33 + 
      4*ADMdgamma313*invgamma13*invgamma33 + 
      3*ADMdgamma223*invgamma22*invgamma33 - 
      ADMdgamma322*invgamma22*invgamma33 + 
      2*ADMdgamma233*invgamma23*invgamma33 + 
      4*ADMdgamma323*invgamma23*invgamma33 + 
      2*ADMdgamma333*Power(invgamma33,2)))/3.
;


local_ADMdtalpha.store(mask, index2, 
ADMbeta1*ADMdalpha1 + ADMbeta2*ADMdalpha2 + ADMbeta3*ADMdalpha3 - 
  2*ADMalpha*ADMexK11*invgamma11 - 4*ADMalpha*ADMexK12*invgamma12 - 
  4*ADMalpha*ADMexK13*invgamma13 - 2*ADMalpha*ADMexK22*invgamma22 - 
  4*ADMalpha*ADMexK23*invgamma23 - 2*ADMalpha*ADMexK33*invgamma33
);

local_ADMdtbeta1.store(mask, index2, 
ADMbeta2*ADMdbeta21 + ADMbeta3*ADMdbeta31 + ADMbeta1*(ADMdbeta11 - ceta) + 
  cnu*trGam3d1
);

local_ADMdtbeta2.store(mask, index2, 
ADMbeta1*ADMdbeta12 + ADMbeta3*ADMdbeta32 + ADMbeta2*(ADMdbeta22 - ceta) + 
  cnu*trGam3d2
);

local_ADMdtbeta3.store(mask, index2, 
ADMbeta1*ADMdbeta13 + ADMbeta2*ADMdbeta23 + ADMbeta3*ADMdbeta33 - 
  ADMbeta3*ceta + cnu*trGam3d3
);


});

#endif // #ifndef CGHG_SET_INITIAL0_HXX

/* cGHG_set_initial0.hxx */
