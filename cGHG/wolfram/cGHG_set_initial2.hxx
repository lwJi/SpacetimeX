/* cGHG_set_initial2.hxx */
/* Produced with Mathematica */

#ifndef CGHG_SET_INITIAL2_HXX
#define CGHG_SET_INITIAL2_HXX

const GF3D2<CCTK_REAL> &local_hthetan = gf_hthetan;
const GF3D2<CCTK_REAL> &local_htheta1 = gf_htheta(0);
const GF3D2<CCTK_REAL> &local_htheta2 = gf_htheta(1);
const GF3D2<CCTK_REAL> &local_htheta3 = gf_htheta(2);

grid.loop_int_device<0, 0, 0, vsize>(
  grid.nghostzones, [=] ARITH_DEVICE(const PointDesc &p) ARITH_INLINE {
  const vbool mask = mask_for_loop_tail<vbool>(p.i, p.imax);
  const GF3D2index index2(layout2, p.I);
  const GF3D5index index5(layout5, p.I);

const auto &tmp_ADMbeta = tl_ADMbeta(mask, index5);
const auto &tmp_dhHn = tl_dhHn(mask, index5);
const auto &tmp_dhH = tl_dhH(mask, index5);

const vreal ADMbeta1 = tmp_ADMbeta(0);
const vreal ADMbeta2 = tmp_ADMbeta(1);
const vreal ADMbeta3 = tmp_ADMbeta(2);
const vreal dhHn1 = tmp_dhHn(0);
const vreal dhHn2 = tmp_dhHn(1);
const vreal dhHn3 = tmp_dhHn(2);
const vreal dhH11 = tmp_dhH(0)(0);
const vreal dhH12 = tmp_dhH(1)(0);
const vreal dhH13 = tmp_dhH(2)(0);
const vreal dhH21 = tmp_dhH(0)(1);
const vreal dhH22 = tmp_dhH(1)(1);
const vreal dhH23 = tmp_dhH(2)(1);
const vreal dhH31 = tmp_dhH(0)(2);
const vreal dhH32 = tmp_dhH(1)(2);
const vreal dhH33 = tmp_dhH(2)(2);

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

#endif // #ifndef CGHG_SET_INITIAL2_HXX

/* cGHG_set_initial2.hxx */
