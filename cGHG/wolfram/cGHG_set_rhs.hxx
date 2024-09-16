/* cGHG_set_rhs.hxx */
/* Produced with Mathematica */

#ifndef CGHG_SET_RHS_HXX
#define CGHG_SET_RHS_HXX

const GF3D2<CCTK_REAL> &local_dthg11 = gf_dthg(0,0);
const GF3D2<CCTK_REAL> &local_dthg12 = gf_dthg(0,1);
const GF3D2<CCTK_REAL> &local_dthg13 = gf_dthg(0,2);
const GF3D2<CCTK_REAL> &local_dthg22 = gf_dthg(1,1);
const GF3D2<CCTK_REAL> &local_dthg23 = gf_dthg(1,2);
const GF3D2<CCTK_REAL> &local_dthg33 = gf_dthg(2,2);
const GF3D2<CCTK_REAL> &local_dthPi11 = gf_dthPi(0,0);
const GF3D2<CCTK_REAL> &local_dthPi12 = gf_dthPi(0,1);
const GF3D2<CCTK_REAL> &local_dthPi13 = gf_dthPi(0,2);
const GF3D2<CCTK_REAL> &local_dthPi22 = gf_dthPi(1,1);
const GF3D2<CCTK_REAL> &local_dthPi23 = gf_dthPi(1,2);
const GF3D2<CCTK_REAL> &local_dthPi33 = gf_dthPi(2,2);
const GF3D2<CCTK_REAL> &local_dthPhi111 = gf_dthPhi(0)(0,0);
const GF3D2<CCTK_REAL> &local_dthPhi112 = gf_dthPhi(0)(0,1);
const GF3D2<CCTK_REAL> &local_dthPhi113 = gf_dthPhi(0)(0,2);
const GF3D2<CCTK_REAL> &local_dthPhi122 = gf_dthPhi(0)(1,1);
const GF3D2<CCTK_REAL> &local_dthPhi123 = gf_dthPhi(0)(1,2);
const GF3D2<CCTK_REAL> &local_dthPhi133 = gf_dthPhi(0)(2,2);
const GF3D2<CCTK_REAL> &local_dthPhi211 = gf_dthPhi(1)(0,0);
const GF3D2<CCTK_REAL> &local_dthPhi212 = gf_dthPhi(1)(0,1);
const GF3D2<CCTK_REAL> &local_dthPhi213 = gf_dthPhi(1)(0,2);
const GF3D2<CCTK_REAL> &local_dthPhi222 = gf_dthPhi(1)(1,1);
const GF3D2<CCTK_REAL> &local_dthPhi223 = gf_dthPhi(1)(1,2);
const GF3D2<CCTK_REAL> &local_dthPhi233 = gf_dthPhi(1)(2,2);
const GF3D2<CCTK_REAL> &local_dthPhi311 = gf_dthPhi(2)(0,0);
const GF3D2<CCTK_REAL> &local_dthPhi312 = gf_dthPhi(2)(0,1);
const GF3D2<CCTK_REAL> &local_dthPhi313 = gf_dthPhi(2)(0,2);
const GF3D2<CCTK_REAL> &local_dthPhi322 = gf_dthPhi(2)(1,1);
const GF3D2<CCTK_REAL> &local_dthPhi323 = gf_dthPhi(2)(1,2);
const GF3D2<CCTK_REAL> &local_dthPhi333 = gf_dthPhi(2)(2,2);
const GF3D2<CCTK_REAL> &local_dthgn1 = gf_dthgn(0);
const GF3D2<CCTK_REAL> &local_dthgn2 = gf_dthgn(1);
const GF3D2<CCTK_REAL> &local_dthgn3 = gf_dthgn(2);
const GF3D2<CCTK_REAL> &local_dthPin1 = gf_dthPin(0);
const GF3D2<CCTK_REAL> &local_dthPin2 = gf_dthPin(1);
const GF3D2<CCTK_REAL> &local_dthPin3 = gf_dthPin(2);
const GF3D2<CCTK_REAL> &local_dthPhin11 = gf_dthPhin(0)(0);
const GF3D2<CCTK_REAL> &local_dthPhin12 = gf_dthPhin(0)(1);
const GF3D2<CCTK_REAL> &local_dthPhin13 = gf_dthPhin(0)(2);
const GF3D2<CCTK_REAL> &local_dthPhin21 = gf_dthPhin(1)(0);
const GF3D2<CCTK_REAL> &local_dthPhin22 = gf_dthPhin(1)(1);
const GF3D2<CCTK_REAL> &local_dthPhin23 = gf_dthPhin(1)(2);
const GF3D2<CCTK_REAL> &local_dthPhin31 = gf_dthPhin(2)(0);
const GF3D2<CCTK_REAL> &local_dthPhin32 = gf_dthPhin(2)(1);
const GF3D2<CCTK_REAL> &local_dthPhin33 = gf_dthPhin(2)(2);
const GF3D2<CCTK_REAL> &local_dthgnn = gf_dthgnn;
const GF3D2<CCTK_REAL> &local_dthPinn = gf_dthPinn;
const GF3D2<CCTK_REAL> &local_dthPhinn1 = gf_dthPhinn(0);
const GF3D2<CCTK_REAL> &local_dthPhinn2 = gf_dthPhinn(1);
const GF3D2<CCTK_REAL> &local_dthPhinn3 = gf_dthPhinn(2);
const GF3D2<CCTK_REAL> &local_dtW = gf_dtW;
const GF3D2<CCTK_REAL> &local_dtWPi = gf_dtWPi;
const GF3D2<CCTK_REAL> &local_dtWPhi1 = gf_dtWPhi(0);
const GF3D2<CCTK_REAL> &local_dtWPhi2 = gf_dtWPhi(1);
const GF3D2<CCTK_REAL> &local_dtWPhi3 = gf_dtWPhi(2);
const GF3D2<CCTK_REAL> &local_dthHn = gf_dthHn;
const GF3D2<CCTK_REAL> &local_dthH1 = gf_dthH(0);
const GF3D2<CCTK_REAL> &local_dthH2 = gf_dthH(1);
const GF3D2<CCTK_REAL> &local_dthH3 = gf_dthH(2);
const GF3D2<CCTK_REAL> &local_dththetan = gf_dththetan;
const GF3D2<CCTK_REAL> &local_dththeta1 = gf_dththeta(0);
const GF3D2<CCTK_REAL> &local_dththeta2 = gf_dththeta(1);
const GF3D2<CCTK_REAL> &local_dththeta3 = gf_dththeta(2);

noinline([&]() __attribute__((__flatten__, __hot__)) {
  grid.loop_int_device<0, 0, 0, vsize>(
    grid.nghostzones, [=] ARITH_DEVICE(const PointDesc &p) ARITH_INLINE {
    const vbool mask = mask_for_loop_tail<vbool>(p.i, p.imax);
    const GF3D2index index2(layout2, p.I);
    const GF3D5index index5(layout5, p.I);

const vreal x0 = p.x + Arith::iota<vreal>() * p.dx;
const vreal ceta = calceta(x0, p.y, p.z);

const auto &tmp_hg = tl_hg(mask, index5);
const auto &tmp_hPi = tl_hPi(mask, index5);
const auto &tmp_hPhi = tl_hPhi(mask, index5);
const auto &tmp_hgn = tl_hgn(mask, index5);
const auto &tmp_hPin = tl_hPin(mask, index5);
const auto &tmp_hPhin = tl_hPhin(mask, index5);
const auto &tmp_hgnn = tl_hgnn(mask, index5);
const auto &tmp_hPinn = tl_hPinn(mask, index5);
const auto &tmp_hPhinn = tl_hPhinn(mask, index5);
const auto &tmp_W = tl_W(mask, index5);
const auto &tmp_WPi = tl_WPi(mask, index5);
const auto &tmp_WPhi = tl_WPhi(mask, index5);
const auto &tmp_hHn = tl_hHn(mask, index5);
const auto &tmp_hH = tl_hH(mask, index5);
const auto &tmp_hthetan = tl_hthetan(mask, index5);
const auto &tmp_htheta = tl_htheta(mask, index5);
const auto &tmp_dhg = tl_dhg(mask, index5);
const auto &tmp_dhPi = tl_dhPi(mask, index5);
const auto &tmp_dhPhi = tl_dhPhi(mask, index5);
const auto &tmp_dhgn = tl_dhgn(mask, index5);
const auto &tmp_dhPin = tl_dhPin(mask, index5);
const auto &tmp_dhPhin = tl_dhPhin(mask, index5);
const auto &tmp_dhgnn = tl_dhgnn(mask, index5);
const auto &tmp_dhPinn = tl_dhPinn(mask, index5);
const auto &tmp_dhPhinn = tl_dhPhinn(mask, index5);
const auto &tmp_dW = tl_dW(mask, index5);
const auto &tmp_dWPi = tl_dWPi(mask, index5);
const auto &tmp_dWPhi = tl_dWPhi(mask, index5);
const auto &tmp_dhHn = tl_dhHn(mask, index5);
const auto &tmp_dhH = tl_dhH(mask, index5);
const auto &tmp_dhthetan = tl_dhthetan(mask, index5);
const auto &tmp_dhtheta = tl_dhtheta(mask, index5);

const vreal hg11 = tmp_hg(0,0);
const vreal hg12 = tmp_hg(0,1);
const vreal hg13 = tmp_hg(0,2);
const vreal hg22 = tmp_hg(1,1);
const vreal hg23 = tmp_hg(1,2);
const vreal hg33 = tmp_hg(2,2);
const vreal hPi11 = tmp_hPi(0,0);
const vreal hPi12 = tmp_hPi(0,1);
const vreal hPi13 = tmp_hPi(0,2);
const vreal hPi22 = tmp_hPi(1,1);
const vreal hPi23 = tmp_hPi(1,2);
const vreal hPi33 = tmp_hPi(2,2);
const vreal hPhi111 = tmp_hPhi(0)(0,0);
const vreal hPhi112 = tmp_hPhi(0)(0,1);
const vreal hPhi113 = tmp_hPhi(0)(0,2);
const vreal hPhi122 = tmp_hPhi(0)(1,1);
const vreal hPhi123 = tmp_hPhi(0)(1,2);
const vreal hPhi133 = tmp_hPhi(0)(2,2);
const vreal hPhi211 = tmp_hPhi(1)(0,0);
const vreal hPhi212 = tmp_hPhi(1)(0,1);
const vreal hPhi213 = tmp_hPhi(1)(0,2);
const vreal hPhi222 = tmp_hPhi(1)(1,1);
const vreal hPhi223 = tmp_hPhi(1)(1,2);
const vreal hPhi233 = tmp_hPhi(1)(2,2);
const vreal hPhi311 = tmp_hPhi(2)(0,0);
const vreal hPhi312 = tmp_hPhi(2)(0,1);
const vreal hPhi313 = tmp_hPhi(2)(0,2);
const vreal hPhi322 = tmp_hPhi(2)(1,1);
const vreal hPhi323 = tmp_hPhi(2)(1,2);
const vreal hPhi333 = tmp_hPhi(2)(2,2);
const vreal hgn1 = tmp_hgn(0);
const vreal hgn2 = tmp_hgn(1);
const vreal hgn3 = tmp_hgn(2);
const vreal hPin1 = tmp_hPin(0);
const vreal hPin2 = tmp_hPin(1);
const vreal hPin3 = tmp_hPin(2);
const vreal hPhin11 = tmp_hPhin(0)(0);
const vreal hPhin12 = tmp_hPhin(0)(1);
const vreal hPhin13 = tmp_hPhin(0)(2);
const vreal hPhin21 = tmp_hPhin(1)(0);
const vreal hPhin22 = tmp_hPhin(1)(1);
const vreal hPhin23 = tmp_hPhin(1)(2);
const vreal hPhin31 = tmp_hPhin(2)(0);
const vreal hPhin32 = tmp_hPhin(2)(1);
const vreal hPhin33 = tmp_hPhin(2)(2);
const vreal hgnn = tmp_hgnn;
const vreal hPinn = tmp_hPinn;
const vreal hPhinn1 = tmp_hPhinn(0);
const vreal hPhinn2 = tmp_hPhinn(1);
const vreal hPhinn3 = tmp_hPhinn(2);
const vreal W = tmp_W;
const vreal WPi = tmp_WPi;
const vreal WPhi1 = tmp_WPhi(0);
const vreal WPhi2 = tmp_WPhi(1);
const vreal WPhi3 = tmp_WPhi(2);
const vreal hHn = tmp_hHn;
const vreal hH1 = tmp_hH(0);
const vreal hH2 = tmp_hH(1);
const vreal hH3 = tmp_hH(2);
const vreal hthetan = tmp_hthetan;
const vreal htheta1 = tmp_htheta(0);
const vreal htheta2 = tmp_htheta(1);
const vreal htheta3 = tmp_htheta(2);
const vreal dhg111 = tmp_dhg(0,0)(0);
const vreal dhg112 = tmp_dhg(0,1)(0);
const vreal dhg113 = tmp_dhg(0,2)(0);
const vreal dhg122 = tmp_dhg(1,1)(0);
const vreal dhg123 = tmp_dhg(1,2)(0);
const vreal dhg133 = tmp_dhg(2,2)(0);
const vreal dhg211 = tmp_dhg(0,0)(1);
const vreal dhg212 = tmp_dhg(0,1)(1);
const vreal dhg213 = tmp_dhg(0,2)(1);
const vreal dhg222 = tmp_dhg(1,1)(1);
const vreal dhg223 = tmp_dhg(1,2)(1);
const vreal dhg233 = tmp_dhg(2,2)(1);
const vreal dhg311 = tmp_dhg(0,0)(2);
const vreal dhg312 = tmp_dhg(0,1)(2);
const vreal dhg313 = tmp_dhg(0,2)(2);
const vreal dhg322 = tmp_dhg(1,1)(2);
const vreal dhg323 = tmp_dhg(1,2)(2);
const vreal dhg333 = tmp_dhg(2,2)(2);
const vreal dhPi111 = tmp_dhPi(0,0)(0);
const vreal dhPi112 = tmp_dhPi(0,1)(0);
const vreal dhPi113 = tmp_dhPi(0,2)(0);
const vreal dhPi122 = tmp_dhPi(1,1)(0);
const vreal dhPi123 = tmp_dhPi(1,2)(0);
const vreal dhPi133 = tmp_dhPi(2,2)(0);
const vreal dhPi211 = tmp_dhPi(0,0)(1);
const vreal dhPi212 = tmp_dhPi(0,1)(1);
const vreal dhPi213 = tmp_dhPi(0,2)(1);
const vreal dhPi222 = tmp_dhPi(1,1)(1);
const vreal dhPi223 = tmp_dhPi(1,2)(1);
const vreal dhPi233 = tmp_dhPi(2,2)(1);
const vreal dhPi311 = tmp_dhPi(0,0)(2);
const vreal dhPi312 = tmp_dhPi(0,1)(2);
const vreal dhPi313 = tmp_dhPi(0,2)(2);
const vreal dhPi322 = tmp_dhPi(1,1)(2);
const vreal dhPi323 = tmp_dhPi(1,2)(2);
const vreal dhPi333 = tmp_dhPi(2,2)(2);
const vreal dhPhi1111 = tmp_dhPhi(0)(0,0)(0);
const vreal dhPhi1112 = tmp_dhPhi(0)(0,1)(0);
const vreal dhPhi1113 = tmp_dhPhi(0)(0,2)(0);
const vreal dhPhi1122 = tmp_dhPhi(0)(1,1)(0);
const vreal dhPhi1123 = tmp_dhPhi(0)(1,2)(0);
const vreal dhPhi1133 = tmp_dhPhi(0)(2,2)(0);
const vreal dhPhi1211 = tmp_dhPhi(1)(0,0)(0);
const vreal dhPhi1212 = tmp_dhPhi(1)(0,1)(0);
const vreal dhPhi1213 = tmp_dhPhi(1)(0,2)(0);
const vreal dhPhi1222 = tmp_dhPhi(1)(1,1)(0);
const vreal dhPhi1223 = tmp_dhPhi(1)(1,2)(0);
const vreal dhPhi1233 = tmp_dhPhi(1)(2,2)(0);
const vreal dhPhi1311 = tmp_dhPhi(2)(0,0)(0);
const vreal dhPhi1312 = tmp_dhPhi(2)(0,1)(0);
const vreal dhPhi1313 = tmp_dhPhi(2)(0,2)(0);
const vreal dhPhi1322 = tmp_dhPhi(2)(1,1)(0);
const vreal dhPhi1323 = tmp_dhPhi(2)(1,2)(0);
const vreal dhPhi1333 = tmp_dhPhi(2)(2,2)(0);
const vreal dhPhi2111 = tmp_dhPhi(0)(0,0)(1);
const vreal dhPhi2112 = tmp_dhPhi(0)(0,1)(1);
const vreal dhPhi2113 = tmp_dhPhi(0)(0,2)(1);
const vreal dhPhi2122 = tmp_dhPhi(0)(1,1)(1);
const vreal dhPhi2123 = tmp_dhPhi(0)(1,2)(1);
const vreal dhPhi2133 = tmp_dhPhi(0)(2,2)(1);
const vreal dhPhi2211 = tmp_dhPhi(1)(0,0)(1);
const vreal dhPhi2212 = tmp_dhPhi(1)(0,1)(1);
const vreal dhPhi2213 = tmp_dhPhi(1)(0,2)(1);
const vreal dhPhi2222 = tmp_dhPhi(1)(1,1)(1);
const vreal dhPhi2223 = tmp_dhPhi(1)(1,2)(1);
const vreal dhPhi2233 = tmp_dhPhi(1)(2,2)(1);
const vreal dhPhi2311 = tmp_dhPhi(2)(0,0)(1);
const vreal dhPhi2312 = tmp_dhPhi(2)(0,1)(1);
const vreal dhPhi2313 = tmp_dhPhi(2)(0,2)(1);
const vreal dhPhi2322 = tmp_dhPhi(2)(1,1)(1);
const vreal dhPhi2323 = tmp_dhPhi(2)(1,2)(1);
const vreal dhPhi2333 = tmp_dhPhi(2)(2,2)(1);
const vreal dhPhi3111 = tmp_dhPhi(0)(0,0)(2);
const vreal dhPhi3112 = tmp_dhPhi(0)(0,1)(2);
const vreal dhPhi3113 = tmp_dhPhi(0)(0,2)(2);
const vreal dhPhi3122 = tmp_dhPhi(0)(1,1)(2);
const vreal dhPhi3123 = tmp_dhPhi(0)(1,2)(2);
const vreal dhPhi3133 = tmp_dhPhi(0)(2,2)(2);
const vreal dhPhi3211 = tmp_dhPhi(1)(0,0)(2);
const vreal dhPhi3212 = tmp_dhPhi(1)(0,1)(2);
const vreal dhPhi3213 = tmp_dhPhi(1)(0,2)(2);
const vreal dhPhi3222 = tmp_dhPhi(1)(1,1)(2);
const vreal dhPhi3223 = tmp_dhPhi(1)(1,2)(2);
const vreal dhPhi3233 = tmp_dhPhi(1)(2,2)(2);
const vreal dhPhi3311 = tmp_dhPhi(2)(0,0)(2);
const vreal dhPhi3312 = tmp_dhPhi(2)(0,1)(2);
const vreal dhPhi3313 = tmp_dhPhi(2)(0,2)(2);
const vreal dhPhi3322 = tmp_dhPhi(2)(1,1)(2);
const vreal dhPhi3323 = tmp_dhPhi(2)(1,2)(2);
const vreal dhPhi3333 = tmp_dhPhi(2)(2,2)(2);
const vreal dhgn11 = tmp_dhgn(0)(0);
const vreal dhgn12 = tmp_dhgn(1)(0);
const vreal dhgn13 = tmp_dhgn(2)(0);
const vreal dhgn21 = tmp_dhgn(0)(1);
const vreal dhgn22 = tmp_dhgn(1)(1);
const vreal dhgn23 = tmp_dhgn(2)(1);
const vreal dhgn31 = tmp_dhgn(0)(2);
const vreal dhgn32 = tmp_dhgn(1)(2);
const vreal dhgn33 = tmp_dhgn(2)(2);
const vreal dhPin11 = tmp_dhPin(0)(0);
const vreal dhPin12 = tmp_dhPin(1)(0);
const vreal dhPin13 = tmp_dhPin(2)(0);
const vreal dhPin21 = tmp_dhPin(0)(1);
const vreal dhPin22 = tmp_dhPin(1)(1);
const vreal dhPin23 = tmp_dhPin(2)(1);
const vreal dhPin31 = tmp_dhPin(0)(2);
const vreal dhPin32 = tmp_dhPin(1)(2);
const vreal dhPin33 = tmp_dhPin(2)(2);
const vreal dhPhin111 = tmp_dhPhin(0)(0)(0);
const vreal dhPhin112 = tmp_dhPhin(0)(1)(0);
const vreal dhPhin113 = tmp_dhPhin(0)(2)(0);
const vreal dhPhin121 = tmp_dhPhin(1)(0)(0);
const vreal dhPhin122 = tmp_dhPhin(1)(1)(0);
const vreal dhPhin123 = tmp_dhPhin(1)(2)(0);
const vreal dhPhin131 = tmp_dhPhin(2)(0)(0);
const vreal dhPhin132 = tmp_dhPhin(2)(1)(0);
const vreal dhPhin133 = tmp_dhPhin(2)(2)(0);
const vreal dhPhin211 = tmp_dhPhin(0)(0)(1);
const vreal dhPhin212 = tmp_dhPhin(0)(1)(1);
const vreal dhPhin213 = tmp_dhPhin(0)(2)(1);
const vreal dhPhin221 = tmp_dhPhin(1)(0)(1);
const vreal dhPhin222 = tmp_dhPhin(1)(1)(1);
const vreal dhPhin223 = tmp_dhPhin(1)(2)(1);
const vreal dhPhin231 = tmp_dhPhin(2)(0)(1);
const vreal dhPhin232 = tmp_dhPhin(2)(1)(1);
const vreal dhPhin233 = tmp_dhPhin(2)(2)(1);
const vreal dhPhin311 = tmp_dhPhin(0)(0)(2);
const vreal dhPhin312 = tmp_dhPhin(0)(1)(2);
const vreal dhPhin313 = tmp_dhPhin(0)(2)(2);
const vreal dhPhin321 = tmp_dhPhin(1)(0)(2);
const vreal dhPhin322 = tmp_dhPhin(1)(1)(2);
const vreal dhPhin323 = tmp_dhPhin(1)(2)(2);
const vreal dhPhin331 = tmp_dhPhin(2)(0)(2);
const vreal dhPhin332 = tmp_dhPhin(2)(1)(2);
const vreal dhPhin333 = tmp_dhPhin(2)(2)(2);
const vreal dhgnn1 = tmp_dhgnn(0);
const vreal dhgnn2 = tmp_dhgnn(1);
const vreal dhgnn3 = tmp_dhgnn(2);
const vreal dhPinn1 = tmp_dhPinn(0);
const vreal dhPinn2 = tmp_dhPinn(1);
const vreal dhPinn3 = tmp_dhPinn(2);
const vreal dhPhinn11 = tmp_dhPhinn(0)(0);
const vreal dhPhinn12 = tmp_dhPhinn(1)(0);
const vreal dhPhinn13 = tmp_dhPhinn(2)(0);
const vreal dhPhinn21 = tmp_dhPhinn(0)(1);
const vreal dhPhinn22 = tmp_dhPhinn(1)(1);
const vreal dhPhinn23 = tmp_dhPhinn(2)(1);
const vreal dhPhinn31 = tmp_dhPhinn(0)(2);
const vreal dhPhinn32 = tmp_dhPhinn(1)(2);
const vreal dhPhinn33 = tmp_dhPhinn(2)(2);
const vreal dW1 = tmp_dW(0);
const vreal dW2 = tmp_dW(1);
const vreal dW3 = tmp_dW(2);
const vreal dWPi1 = tmp_dWPi(0);
const vreal dWPi2 = tmp_dWPi(1);
const vreal dWPi3 = tmp_dWPi(2);
const vreal dWPhi11 = tmp_dWPhi(0)(0);
const vreal dWPhi12 = tmp_dWPhi(1)(0);
const vreal dWPhi13 = tmp_dWPhi(2)(0);
const vreal dWPhi21 = tmp_dWPhi(0)(1);
const vreal dWPhi22 = tmp_dWPhi(1)(1);
const vreal dWPhi23 = tmp_dWPhi(2)(1);
const vreal dWPhi31 = tmp_dWPhi(0)(2);
const vreal dWPhi32 = tmp_dWPhi(1)(2);
const vreal dWPhi33 = tmp_dWPhi(2)(2);
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
const vreal dhthetan1 = tmp_dhthetan(0);
const vreal dhthetan2 = tmp_dhthetan(1);
const vreal dhthetan3 = tmp_dhthetan(2);
const vreal dhtheta11 = tmp_dhtheta(0)(0);
const vreal dhtheta12 = tmp_dhtheta(1)(0);
const vreal dhtheta13 = tmp_dhtheta(2)(0);
const vreal dhtheta21 = tmp_dhtheta(0)(1);
const vreal dhtheta22 = tmp_dhtheta(1)(1);
const vreal dhtheta23 = tmp_dhtheta(2)(1);
const vreal dhtheta31 = tmp_dhtheta(0)(2);
const vreal dhtheta32 = tmp_dhtheta(1)(2);
const vreal dhtheta33 = tmp_dhtheta(2)(2);

vreal alpha
=
-0.5*hgnn
;

vreal beta1
=
hgn1
;

vreal beta2
=
hgn2
;

vreal beta3
=
hgn3
;

vreal invhg11
=
-Power(hg23,2) + hg22*hg33
;

vreal invhg12
=
hg13*hg23 - hg12*hg33
;

vreal invhg13
=
-(hg13*hg22) + hg12*hg23
;

vreal invhg22
=
-Power(hg13,2) + hg11*hg33
;

vreal invhg23
=
hg12*hg13 - hg11*hg23
;

vreal invhg33
=
-Power(hg12,2) + hg11*hg22
;

vreal invgam11
=
invhg11*Power(W,2)
;

vreal invgam12
=
invhg12*Power(W,2)
;

vreal invgam13
=
invhg13*Power(W,2)
;

vreal invgam22
=
invhg22*Power(W,2)
;

vreal invgam23
=
invhg23*Power(W,2)
;

vreal invgam33
=
invhg33*Power(W,2)
;

vreal hPinD1
=
hg11*hPin1 + hg12*hPin2 + hg13*hPin3
;

vreal hPinD2
=
hg12*hPin1 + hg22*hPin2 + hg23*hPin3
;

vreal hPinD3
=
hg13*hPin1 + hg23*hPin2 + hg33*hPin3
;

vreal hPhinD11
=
hg11*hPhin11 + hg12*hPhin12 + hg13*hPhin13
;

vreal hPhinD12
=
hg12*hPhin11 + hg22*hPhin12 + hg23*hPhin13
;

vreal hPhinD13
=
hg13*hPhin11 + hg23*hPhin12 + hg33*hPhin13
;

vreal hPhinD21
=
hg11*hPhin21 + hg12*hPhin22 + hg13*hPhin23
;

vreal hPhinD22
=
hg12*hPhin21 + hg22*hPhin22 + hg23*hPhin23
;

vreal hPhinD23
=
hg13*hPhin21 + hg23*hPhin22 + hg33*hPhin23
;

vreal hPhinD31
=
hg11*hPhin31 + hg12*hPhin32 + hg13*hPhin33
;

vreal hPhinD32
=
hg12*hPhin31 + hg22*hPhin32 + hg23*hPhin33
;

vreal hPhinD33
=
hg13*hPhin31 + hg23*hPhin32 + hg33*hPhin33
;

vreal hGam111
=
hPhi111/2.
;

vreal hGam112
=
hPhi211/2.
;

vreal hGam113
=
hPhi311/2.
;

vreal hGam122
=
-0.5*hPhi122 + hPhi212
;

vreal hGam123
=
(-hPhi123 + hPhi213 + hPhi312)/2.
;

vreal hGam133
=
-0.5*hPhi133 + hPhi313
;

vreal hGam211
=
hPhi112 - hPhi211/2.
;

vreal hGam212
=
hPhi122/2.
;

vreal hGam213
=
(hPhi123 - hPhi213 + hPhi312)/2.
;

vreal hGam222
=
hPhi222/2.
;

vreal hGam223
=
hPhi322/2.
;

vreal hGam233
=
-0.5*hPhi233 + hPhi323
;

vreal hGam311
=
hPhi113 - hPhi311/2.
;

vreal hGam312
=
(hPhi123 + hPhi213 - hPhi312)/2.
;

vreal hGam313
=
hPhi133/2.
;

vreal hGam322
=
hPhi223 - hPhi322/2.
;

vreal hGam323
=
hPhi233/2.
;

vreal hGam333
=
hPhi333/2.
;

vreal hGamnmix11
=
-0.5*hPi11
;

vreal hGamnmix12
=
-0.5*(hPhinD12 - hPhinD21 + alpha*hPi12)/alpha
;

vreal hGamnmix13
=
-0.5*(hPhinD13 - hPhinD31 + alpha*hPi13)/alpha
;

vreal hGamnmix21
=
-0.5*(-hPhinD12 + hPhinD21 + alpha*hPi12)/alpha
;

vreal hGamnmix22
=
-0.5*hPi22
;

vreal hGamnmix23
=
-0.5*(hPhinD23 - hPhinD32 + alpha*hPi23)/alpha
;

vreal hGamnmix31
=
-0.5*(-hPhinD13 + hPhinD31 + alpha*hPi13)/alpha
;

vreal hGamnmix32
=
-0.5*(-hPhinD23 + hPhinD32 + alpha*hPi23)/alpha
;

vreal hGamnmix33
=
-0.5*hPi33
;

vreal hGamn11
=
hPhinD11/alpha + hPi11/2.
;

vreal hGamn12
=
(hPhinD12 + hPhinD21 + alpha*hPi12)/(2.*alpha)
;

vreal hGamn13
=
(hPhinD13 + hPhinD31 + alpha*hPi13)/(2.*alpha)
;

vreal hGamn22
=
hPhinD22/alpha + hPi22/2.
;

vreal hGamn23
=
(hPhinD23 + hPhinD32 + alpha*hPi23)/(2.*alpha)
;

vreal hGamn33
=
hPhinD33/alpha + hPi33/2.
;

vreal trhGamn
=
hPinn/(2.*alpha) + hGamn11*invhg11 + 2*hGamn12*invhg12 + 2*hGamn13*invhg13 + 
  hGamn22*invhg22 + 2*hGamn23*invhg23 + hGamn33*invhg33 - (3*WPi)/W
;

vreal trhGam1
=
hPinD1 + (hPhinn1*Power(W,2))/2. + 
  alpha*W*(hGam111*invhg11*W + 2*hGam112*invhg12*W + 2*hGam113*invhg13*W + 
     hGam122*invhg22*W + 2*hGam123*invhg23*W + hGam133*invhg33*W + WPhi1)
;

vreal trhGam2
=
hPinD2 + (hPhinn2*Power(W,2))/2. + 
  alpha*W*(hGam211*invhg11*W + 2*hGam212*invhg12*W + 2*hGam213*invhg13*W + 
     hGam222*invhg22*W + 2*hGam223*invhg23*W + hGam233*invhg33*W + WPhi2)
;

vreal trhGam3
=
hPinD3 + (hPhinn3*Power(W,2))/2. + 
  alpha*W*(hGam311*invhg11*W + 2*hGam312*invhg12*W + 2*hGam313*invhg13*W + 
     hGam322*invhg22*W + 2*hGam323*invhg23*W + hGam333*invhg33*W + WPhi3)
;

vreal trPi
=
(4*Power(hPhin11,2) + 8*hPhin12*hPhin21 + 4*Power(hPhin22,2) + 
    8*hPhin13*hPhin31 + 8*hPhin23*hPhin32 + 4*Power(hPhin33,2) + 
    4*hPhinn1*hPin1 + 4*hPhinn2*hPin2 + 4*hPhinn3*hPin3 + 
    4*hH1*hPhinn1*invhg11 + 4*hH2*hPhinn1*invhg12 + 4*hH1*hPhinn2*invhg12 + 
    4*hH3*hPhinn1*invhg13 + 4*hH1*hPhinn3*invhg13 + 4*hH2*hPhinn2*invhg22 + 
    4*hH3*hPhinn2*invhg23 + 4*hH2*hPhinn3*invhg23 + 4*hH3*hPhinn3*invhg33 + 
    4*alpha*(hHn*(hPhin11 + hPhin22 + hPhin33) - 
       hH2*hPhi111*invhg11*invhg12 - hH2*hPhi112*Power(invhg12,2) - 
       hH2*hPhi211*Power(invhg12,2) - hH3*hPhi111*invhg11*invhg13 - 
       hH3*hPhi112*invhg12*invhg13 - hH2*hPhi113*invhg12*invhg13 - 
       hH3*hPhi211*invhg12*invhg13 - hH2*hPhi311*invhg12*invhg13 - 
       hH3*hPhi113*Power(invhg13,2) - hH3*hPhi311*Power(invhg13,2) - 
       hH2*hPhi112*invhg11*invhg22 - hH2*hPhi122*invhg12*invhg22 - 
       2*hH2*hPhi212*invhg12*invhg22 - hH2*hPhi123*invhg13*invhg22 - 
       hH3*hPhi212*invhg13*invhg22 - hH2*hPhi312*invhg13*invhg22 - 
       hH2*hPhi222*Power(invhg22,2) - hH3*hPhi112*invhg11*invhg23 - 
       hH2*hPhi113*invhg11*invhg23 - hH3*hPhi122*invhg12*invhg23 - 
       hH2*hPhi123*invhg12*invhg23 - hH3*hPhi212*invhg12*invhg23 - 
       2*hH2*hPhi213*invhg12*invhg23 - hH2*hPhi312*invhg12*invhg23 - 
       hH3*hPhi123*invhg13*invhg23 - hH2*hPhi133*invhg13*invhg23 - 
       hH3*hPhi213*invhg13*invhg23 - 2*hH3*hPhi312*invhg13*invhg23 - 
       hH2*hPhi313*invhg13*invhg23 - hH3*hPhi222*invhg22*invhg23 - 
       2*hH2*hPhi223*invhg22*invhg23 - hH2*hPhi322*invhg22*invhg23 - 
       hH3*hPhi223*Power(invhg23,2) - hH2*hPhi233*Power(invhg23,2) - 
       hH3*hPhi322*Power(invhg23,2) - hH2*hPhi323*Power(invhg23,2) - 
       hH3*hPhi113*invhg11*invhg33 - hH3*hPhi123*invhg12*invhg33 - 
       hH3*hPhi213*invhg12*invhg33 - hH2*hPhi313*invhg12*invhg33 - 
       hH3*hPhi133*invhg13*invhg33 - 2*hH3*hPhi313*invhg13*invhg33 - 
       hH3*hPhi223*invhg22*invhg33 - hH2*hPhi323*invhg22*invhg33 - 
       hH3*hPhi233*invhg23*invhg33 - 2*hH3*hPhi323*invhg23*invhg33 - 
       hH2*hPhi333*invhg23*invhg33 - hH3*hPhi333*Power(invhg33,2) - 
       hH1*(hPhi111*Power(invhg11,2) + 2*hPhi112*invhg11*invhg12 + 
          hPhi211*invhg11*invhg12 + hPhi122*Power(invhg12,2) + 
          hPhi212*Power(invhg12,2) + 2*hPhi113*invhg11*invhg13 + 
          hPhi311*invhg11*invhg13 + 2*hPhi123*invhg12*invhg13 + 
          hPhi213*invhg12*invhg13 + hPhi312*invhg12*invhg13 + 
          hPhi133*Power(invhg13,2) + hPhi313*Power(invhg13,2) + 
          hPhi212*invhg11*invhg22 + hPhi222*invhg12*invhg22 + 
          hPhi223*invhg13*invhg22 + hPhi213*invhg11*invhg23 + 
          hPhi312*invhg11*invhg23 + hPhi223*invhg12*invhg23 + 
          hPhi322*invhg12*invhg23 + hPhi233*invhg13*invhg23 + 
          hPhi323*invhg13*invhg23 + hPhi313*invhg11*invhg33 + 
          hPhi323*invhg12*invhg33 + hPhi333*invhg13*invhg33)) + 
    Power(hPhinn1,2)*invhg11*Power(W,2) + 
    2*hPhinn1*hPhinn2*invhg12*Power(W,2) + 
    2*hPhinn1*hPhinn3*invhg13*Power(W,2) + 
    Power(hPhinn2,2)*invhg22*Power(W,2) + 
    2*hPhinn2*hPhinn3*invhg23*Power(W,2) + 
    Power(hPhinn3,2)*invhg33*Power(W,2) + 
    2*Power(alpha,2)*(2*Power(hGam111,2)*Power(invhg11,3)*Power(W,2) - 
       Power(hPhi111,2)*Power(invhg11,3)*Power(W,2) + 
       4*Power(hGam112,2)*invhg11*Power(invhg12,2)*Power(W,2) + 
       8*hGam112*hGam211*invhg11*Power(invhg12,2)*Power(W,2) - 
       2*Power(hPhi112,2)*invhg11*Power(invhg12,2)*Power(W,2) - 
       4*hPhi112*hPhi211*invhg11*Power(invhg12,2)*Power(W,2) + 
       4*hGam122*hGam211*Power(invhg12,3)*Power(W,2) + 
       8*hGam112*hGam212*Power(invhg12,3)*Power(W,2) - 
       2*hPhi122*hPhi211*Power(invhg12,3)*Power(W,2) - 
       4*hPhi112*hPhi212*Power(invhg12,3)*Power(W,2) + 
       8*hGam112*hGam113*invhg11*invhg12*invhg13*Power(W,2) + 
       8*hGam113*hGam211*invhg11*invhg12*invhg13*Power(W,2) + 
       8*hGam112*hGam311*invhg11*invhg12*invhg13*Power(W,2) - 
       4*hPhi112*hPhi113*invhg11*invhg12*invhg13*Power(W,2) - 
       4*hPhi113*hPhi211*invhg11*invhg12*invhg13*Power(W,2) - 
       4*hPhi112*hPhi311*invhg11*invhg12*invhg13*Power(W,2) + 
       8*hGam123*hGam211*Power(invhg12,2)*invhg13*Power(W,2) + 
       8*hGam113*hGam212*Power(invhg12,2)*invhg13*Power(W,2) + 
       8*hGam112*hGam213*Power(invhg12,2)*invhg13*Power(W,2) + 
       4*hGam122*hGam311*Power(invhg12,2)*invhg13*Power(W,2) + 
       8*hGam112*hGam312*Power(invhg12,2)*invhg13*Power(W,2) - 
       4*hPhi123*hPhi211*Power(invhg12,2)*invhg13*Power(W,2) - 
       4*hPhi113*hPhi212*Power(invhg12,2)*invhg13*Power(W,2) - 
       4*hPhi112*hPhi213*Power(invhg12,2)*invhg13*Power(W,2) - 
       2*hPhi122*hPhi311*Power(invhg12,2)*invhg13*Power(W,2) - 
       4*hPhi112*hPhi312*Power(invhg12,2)*invhg13*Power(W,2) + 
       4*Power(hGam113,2)*invhg11*Power(invhg13,2)*Power(W,2) + 
       8*hGam113*hGam311*invhg11*Power(invhg13,2)*Power(W,2) - 
       2*Power(hPhi113,2)*invhg11*Power(invhg13,2)*Power(W,2) - 
       4*hPhi113*hPhi311*invhg11*Power(invhg13,2)*Power(W,2) + 
       4*hGam133*hGam211*invhg12*Power(invhg13,2)*Power(W,2) + 
       8*hGam113*hGam213*invhg12*Power(invhg13,2)*Power(W,2) + 
       8*hGam123*hGam311*invhg12*Power(invhg13,2)*Power(W,2) + 
       8*hGam113*hGam312*invhg12*Power(invhg13,2)*Power(W,2) + 
       8*hGam112*hGam313*invhg12*Power(invhg13,2)*Power(W,2) - 
       2*hPhi133*hPhi211*invhg12*Power(invhg13,2)*Power(W,2) - 
       4*hPhi113*hPhi213*invhg12*Power(invhg13,2)*Power(W,2) - 
       4*hPhi123*hPhi311*invhg12*Power(invhg13,2)*Power(W,2) - 
       4*hPhi113*hPhi312*invhg12*Power(invhg13,2)*Power(W,2) - 
       4*hPhi112*hPhi313*invhg12*Power(invhg13,2)*Power(W,2) + 
       4*hGam133*hGam311*Power(invhg13,3)*Power(W,2) + 
       8*hGam113*hGam313*Power(invhg13,3)*Power(W,2) - 
       2*hPhi133*hPhi311*Power(invhg13,3)*Power(W,2) - 
       4*hPhi113*hPhi313*Power(invhg13,3)*Power(W,2) + 
       4*hGam111*(2*hGam112*Power(invhg11,2)*invhg12 + 
          hGam211*Power(invhg11,2)*invhg12 + 
          hGam122*invhg11*Power(invhg12,2) + 
          2*hGam212*invhg11*Power(invhg12,2) + hGam222*Power(invhg12,3) + 
          2*hGam113*Power(invhg11,2)*invhg13 + 
          hGam311*Power(invhg11,2)*invhg13 + 
          2*hGam123*invhg11*invhg12*invhg13 + 
          2*hGam213*invhg11*invhg12*invhg13 + 
          2*hGam312*invhg11*invhg12*invhg13 + 
          2*hGam223*Power(invhg12,2)*invhg13 + 
          hGam322*Power(invhg12,2)*invhg13 + 
          hGam133*invhg11*Power(invhg13,2) + 
          2*hGam313*invhg11*Power(invhg13,2) + 
          hGam233*invhg12*Power(invhg13,2) + 
          2*hGam323*invhg12*Power(invhg13,2) + hGam333*Power(invhg13,3))*
        Power(W,2) + 4*Power(hGam112,2)*Power(invhg11,2)*invhg22*
        Power(W,2) + 2*Power(hGam211,2)*Power(invhg11,2)*invhg22*
        Power(W,2) - 2*Power(hPhi112,2)*Power(invhg11,2)*invhg22*
        Power(W,2) - Power(hPhi211,2)*Power(invhg11,2)*invhg22*Power(W,2) + 
       8*hGam112*hGam122*invhg11*invhg12*invhg22*Power(W,2) + 
       8*hGam112*hGam212*invhg11*invhg12*invhg22*Power(W,2) + 
       8*hGam211*hGam212*invhg11*invhg12*invhg22*Power(W,2) - 
       4*hPhi112*hPhi122*invhg11*invhg12*invhg22*Power(W,2) - 
       4*hPhi112*hPhi212*invhg11*invhg12*invhg22*Power(W,2) - 
       4*hPhi211*hPhi212*invhg11*invhg12*invhg22*Power(W,2) + 
       8*hGam122*hGam212*Power(invhg12,2)*invhg22*Power(W,2) + 
       4*Power(hGam212,2)*Power(invhg12,2)*invhg22*Power(W,2) + 
       8*hGam112*hGam222*Power(invhg12,2)*invhg22*Power(W,2) + 
       4*hGam211*hGam222*Power(invhg12,2)*invhg22*Power(W,2) - 
       4*hPhi122*hPhi212*Power(invhg12,2)*invhg22*Power(W,2) - 
       2*Power(hPhi212,2)*Power(invhg12,2)*invhg22*Power(W,2) - 
       4*hPhi112*hPhi222*Power(invhg12,2)*invhg22*Power(W,2) - 
       2*hPhi211*hPhi222*Power(invhg12,2)*invhg22*Power(W,2) + 
       8*hGam112*hGam123*invhg11*invhg13*invhg22*Power(W,2) + 
       8*hGam211*hGam213*invhg11*invhg13*invhg22*Power(W,2) + 
       8*hGam112*hGam312*invhg11*invhg13*invhg22*Power(W,2) - 
       4*hPhi112*hPhi123*invhg11*invhg13*invhg22*Power(W,2) - 
       4*hPhi211*hPhi213*invhg11*invhg13*invhg22*Power(W,2) - 
       4*hPhi112*hPhi312*invhg11*invhg13*invhg22*Power(W,2) + 
       8*hGam123*hGam212*invhg12*invhg13*invhg22*Power(W,2) + 
       8*hGam212*hGam213*invhg12*invhg13*invhg22*Power(W,2) + 
       8*hGam112*hGam223*invhg12*invhg13*invhg22*Power(W,2) + 
       8*hGam211*hGam223*invhg12*invhg13*invhg22*Power(W,2) + 
       8*hGam122*hGam312*invhg12*invhg13*invhg22*Power(W,2) + 
       8*hGam112*hGam322*invhg12*invhg13*invhg22*Power(W,2) - 
       4*hPhi123*hPhi212*invhg12*invhg13*invhg22*Power(W,2) - 
       4*hPhi212*hPhi213*invhg12*invhg13*invhg22*Power(W,2) - 
       4*hPhi112*hPhi223*invhg12*invhg13*invhg22*Power(W,2) - 
       4*hPhi211*hPhi223*invhg12*invhg13*invhg22*Power(W,2) - 
       4*hPhi122*hPhi312*invhg12*invhg13*invhg22*Power(W,2) - 
       4*hPhi112*hPhi322*invhg12*invhg13*invhg22*Power(W,2) + 
       4*Power(hGam213,2)*Power(invhg13,2)*invhg22*Power(W,2) + 
       4*hGam211*hGam233*Power(invhg13,2)*invhg22*Power(W,2) + 
       8*hGam123*hGam312*Power(invhg13,2)*invhg22*Power(W,2) + 
       8*hGam112*hGam323*Power(invhg13,2)*invhg22*Power(W,2) - 
       2*Power(hPhi213,2)*Power(invhg13,2)*invhg22*Power(W,2) - 
       2*hPhi211*hPhi233*Power(invhg13,2)*invhg22*Power(W,2) - 
       4*hPhi123*hPhi312*Power(invhg13,2)*invhg22*Power(W,2) - 
       4*hPhi112*hPhi323*Power(invhg13,2)*invhg22*Power(W,2) + 
       2*Power(hGam122,2)*invhg11*Power(invhg22,2)*Power(W,2) + 
       4*Power(hGam212,2)*invhg11*Power(invhg22,2)*Power(W,2) - 
       Power(hPhi122,2)*invhg11*Power(invhg22,2)*Power(W,2) - 
       2*Power(hPhi212,2)*invhg11*Power(invhg22,2)*Power(W,2) + 
       4*hGam122*hGam222*invhg12*Power(invhg22,2)*Power(W,2) + 
       8*hGam212*hGam222*invhg12*Power(invhg22,2)*Power(W,2) - 
       2*hPhi122*hPhi222*invhg12*Power(invhg22,2)*Power(W,2) - 
       4*hPhi212*hPhi222*invhg12*Power(invhg22,2)*Power(W,2) + 
       8*hGam212*hGam223*invhg13*Power(invhg22,2)*Power(W,2) + 
       4*hGam122*hGam322*invhg13*Power(invhg22,2)*Power(W,2) - 
       4*hPhi212*hPhi223*invhg13*Power(invhg22,2)*Power(W,2) - 
       2*hPhi122*hPhi322*invhg13*Power(invhg22,2)*Power(W,2) + 
       2*Power(hGam222,2)*Power(invhg22,3)*Power(W,2) - 
       Power(hPhi222,2)*Power(invhg22,3)*Power(W,2) + 
       8*hGam112*hGam113*Power(invhg11,2)*invhg23*Power(W,2) + 
       4*hGam211*hGam311*Power(invhg11,2)*invhg23*Power(W,2) - 
       4*hPhi112*hPhi113*Power(invhg11,2)*invhg23*Power(W,2) - 
       2*hPhi211*hPhi311*Power(invhg11,2)*invhg23*Power(W,2) + 
       8*hGam113*hGam122*invhg11*invhg12*invhg23*Power(W,2) + 
       8*hGam112*hGam123*invhg11*invhg12*invhg23*Power(W,2) + 
       8*hGam113*hGam212*invhg11*invhg12*invhg23*Power(W,2) + 
       8*hGam112*hGam213*invhg11*invhg12*invhg23*Power(W,2) + 
       8*hGam212*hGam311*invhg11*invhg12*invhg23*Power(W,2) + 
       8*hGam211*hGam312*invhg11*invhg12*invhg23*Power(W,2) - 
       4*hPhi113*hPhi122*invhg11*invhg12*invhg23*Power(W,2) - 
       4*hPhi112*hPhi123*invhg11*invhg12*invhg23*Power(W,2) - 
       4*hPhi113*hPhi212*invhg11*invhg12*invhg23*Power(W,2) - 
       4*hPhi112*hPhi213*invhg11*invhg12*invhg23*Power(W,2) - 
       4*hPhi212*hPhi311*invhg11*invhg12*invhg23*Power(W,2) - 
       4*hPhi211*hPhi312*invhg11*invhg12*invhg23*Power(W,2) + 
       8*hGam123*hGam212*Power(invhg12,2)*invhg23*Power(W,2) + 
       8*hGam122*hGam213*Power(invhg12,2)*invhg23*Power(W,2) + 
       8*hGam113*hGam222*Power(invhg12,2)*invhg23*Power(W,2) + 
       8*hGam112*hGam223*Power(invhg12,2)*invhg23*Power(W,2) + 
       4*hGam222*hGam311*Power(invhg12,2)*invhg23*Power(W,2) + 
       8*hGam212*hGam312*Power(invhg12,2)*invhg23*Power(W,2) + 
       4*hGam211*hGam322*Power(invhg12,2)*invhg23*Power(W,2) - 
       4*hPhi123*hPhi212*Power(invhg12,2)*invhg23*Power(W,2) - 
       4*hPhi122*hPhi213*Power(invhg12,2)*invhg23*Power(W,2) - 
       4*hPhi113*hPhi222*Power(invhg12,2)*invhg23*Power(W,2) - 
       4*hPhi112*hPhi223*Power(invhg12,2)*invhg23*Power(W,2) - 
       2*hPhi222*hPhi311*Power(invhg12,2)*invhg23*Power(W,2) - 
       4*hPhi212*hPhi312*Power(invhg12,2)*invhg23*Power(W,2) - 
       2*hPhi211*hPhi322*Power(invhg12,2)*invhg23*Power(W,2) + 
       8*hGam113*hGam123*invhg11*invhg13*invhg23*Power(W,2) + 
       8*hGam112*hGam133*invhg11*invhg13*invhg23*Power(W,2) + 
       8*hGam213*hGam311*invhg11*invhg13*invhg23*Power(W,2) + 
       8*hGam113*hGam312*invhg11*invhg13*invhg23*Power(W,2) + 
       8*hGam112*hGam313*invhg11*invhg13*invhg23*Power(W,2) + 
       8*hGam211*hGam313*invhg11*invhg13*invhg23*Power(W,2) - 
       4*hPhi113*hPhi123*invhg11*invhg13*invhg23*Power(W,2) - 
       4*hPhi112*hPhi133*invhg11*invhg13*invhg23*Power(W,2) - 
       4*hPhi213*hPhi311*invhg11*invhg13*invhg23*Power(W,2) - 
       4*hPhi113*hPhi312*invhg11*invhg13*invhg23*Power(W,2) - 
       4*hPhi112*hPhi313*invhg11*invhg13*invhg23*Power(W,2) - 
       4*hPhi211*hPhi313*invhg11*invhg13*invhg23*Power(W,2) + 
       8*hGam133*hGam212*invhg12*invhg13*invhg23*Power(W,2) + 
       8*hGam123*hGam213*invhg12*invhg13*invhg23*Power(W,2) + 
       8*hGam113*hGam223*invhg12*invhg13*invhg23*Power(W,2) + 
       8*hGam112*hGam233*invhg12*invhg13*invhg23*Power(W,2) + 
       8*hGam223*hGam311*invhg12*invhg13*invhg23*Power(W,2) + 
       8*hGam123*hGam312*invhg12*invhg13*invhg23*Power(W,2) + 
       8*hGam213*hGam312*invhg12*invhg13*invhg23*Power(W,2) + 
       8*hGam122*hGam313*invhg12*invhg13*invhg23*Power(W,2) + 
       8*hGam212*hGam313*invhg12*invhg13*invhg23*Power(W,2) + 
       8*hGam113*hGam322*invhg12*invhg13*invhg23*Power(W,2) + 
       8*hGam112*hGam323*invhg12*invhg13*invhg23*Power(W,2) + 
       8*hGam211*hGam323*invhg12*invhg13*invhg23*Power(W,2) - 
       4*hPhi133*hPhi212*invhg12*invhg13*invhg23*Power(W,2) - 
       4*hPhi123*hPhi213*invhg12*invhg13*invhg23*Power(W,2) - 
       4*hPhi113*hPhi223*invhg12*invhg13*invhg23*Power(W,2) - 
       4*hPhi112*hPhi233*invhg12*invhg13*invhg23*Power(W,2) - 
       4*hPhi223*hPhi311*invhg12*invhg13*invhg23*Power(W,2) - 
       4*hPhi123*hPhi312*invhg12*invhg13*invhg23*Power(W,2) - 
       4*hPhi213*hPhi312*invhg12*invhg13*invhg23*Power(W,2) - 
       4*hPhi122*hPhi313*invhg12*invhg13*invhg23*Power(W,2) - 
       4*hPhi212*hPhi313*invhg12*invhg13*invhg23*Power(W,2) - 
       4*hPhi113*hPhi322*invhg12*invhg13*invhg23*Power(W,2) - 
       4*hPhi112*hPhi323*invhg12*invhg13*invhg23*Power(W,2) - 
       4*hPhi211*hPhi323*invhg12*invhg13*invhg23*Power(W,2) + 
       4*hGam233*hGam311*Power(invhg13,2)*invhg23*Power(W,2) + 
       8*hGam133*hGam312*Power(invhg13,2)*invhg23*Power(W,2) + 
       8*hGam123*hGam313*Power(invhg13,2)*invhg23*Power(W,2) + 
       8*hGam213*hGam313*Power(invhg13,2)*invhg23*Power(W,2) + 
       8*hGam113*hGam323*Power(invhg13,2)*invhg23*Power(W,2) + 
       8*hGam112*hGam333*Power(invhg13,2)*invhg23*Power(W,2) + 
       4*hGam211*hGam333*Power(invhg13,2)*invhg23*Power(W,2) - 
       2*hPhi233*hPhi311*Power(invhg13,2)*invhg23*Power(W,2) - 
       4*hPhi133*hPhi312*Power(invhg13,2)*invhg23*Power(W,2) - 
       4*hPhi123*hPhi313*Power(invhg13,2)*invhg23*Power(W,2) - 
       4*hPhi213*hPhi313*Power(invhg13,2)*invhg23*Power(W,2) - 
       4*hPhi113*hPhi323*Power(invhg13,2)*invhg23*Power(W,2) - 
       4*hPhi112*hPhi333*Power(invhg13,2)*invhg23*Power(W,2) - 
       2*hPhi211*hPhi333*Power(invhg13,2)*invhg23*Power(W,2) + 
       8*hGam122*hGam123*invhg11*invhg22*invhg23*Power(W,2) + 
       8*hGam212*hGam213*invhg11*invhg22*invhg23*Power(W,2) + 
       8*hGam212*hGam312*invhg11*invhg22*invhg23*Power(W,2) - 
       4*hPhi122*hPhi123*invhg11*invhg22*invhg23*Power(W,2) - 
       4*hPhi212*hPhi213*invhg11*invhg22*invhg23*Power(W,2) - 
       4*hPhi212*hPhi312*invhg11*invhg22*invhg23*Power(W,2) + 
       8*hGam123*hGam222*invhg12*invhg22*invhg23*Power(W,2) + 
       8*hGam213*hGam222*invhg12*invhg22*invhg23*Power(W,2) + 
       8*hGam122*hGam223*invhg12*invhg22*invhg23*Power(W,2) + 
       8*hGam212*hGam223*invhg12*invhg22*invhg23*Power(W,2) + 
       8*hGam222*hGam312*invhg12*invhg22*invhg23*Power(W,2) + 
       8*hGam212*hGam322*invhg12*invhg22*invhg23*Power(W,2) - 
       4*hPhi123*hPhi222*invhg12*invhg22*invhg23*Power(W,2) - 
       4*hPhi213*hPhi222*invhg12*invhg22*invhg23*Power(W,2) - 
       4*hPhi122*hPhi223*invhg12*invhg22*invhg23*Power(W,2) - 
       4*hPhi212*hPhi223*invhg12*invhg22*invhg23*Power(W,2) - 
       4*hPhi222*hPhi312*invhg12*invhg22*invhg23*Power(W,2) - 
       4*hPhi212*hPhi322*invhg12*invhg22*invhg23*Power(W,2) + 
       8*hGam213*hGam223*invhg13*invhg22*invhg23*Power(W,2) + 
       8*hGam212*hGam233*invhg13*invhg22*invhg23*Power(W,2) + 
       8*hGam223*hGam312*invhg13*invhg22*invhg23*Power(W,2) + 
       8*hGam123*hGam322*invhg13*invhg22*invhg23*Power(W,2) + 
       8*hGam122*hGam323*invhg13*invhg22*invhg23*Power(W,2) + 
       8*hGam212*hGam323*invhg13*invhg22*invhg23*Power(W,2) - 
       4*hPhi213*hPhi223*invhg13*invhg22*invhg23*Power(W,2) - 
       4*hPhi212*hPhi233*invhg13*invhg22*invhg23*Power(W,2) - 
       4*hPhi223*hPhi312*invhg13*invhg22*invhg23*Power(W,2) - 
       4*hPhi123*hPhi322*invhg13*invhg22*invhg23*Power(W,2) - 
       4*hPhi122*hPhi323*invhg13*invhg22*invhg23*Power(W,2) - 
       4*hPhi212*hPhi323*invhg13*invhg22*invhg23*Power(W,2) + 
       8*hGam222*hGam223*Power(invhg22,2)*invhg23*Power(W,2) + 
       4*hGam222*hGam322*Power(invhg22,2)*invhg23*Power(W,2) - 
       4*hPhi222*hPhi223*Power(invhg22,2)*invhg23*Power(W,2) - 
       2*hPhi222*hPhi322*Power(invhg22,2)*invhg23*Power(W,2) + 
       4*Power(hGam123,2)*invhg11*Power(invhg23,2)*Power(W,2) + 
       4*hGam122*hGam133*invhg11*Power(invhg23,2)*Power(W,2) + 
       8*hGam213*hGam312*invhg11*Power(invhg23,2)*Power(W,2) + 
       8*hGam212*hGam313*invhg11*Power(invhg23,2)*Power(W,2) - 
       2*Power(hPhi123,2)*invhg11*Power(invhg23,2)*Power(W,2) - 
       2*hPhi122*hPhi133*invhg11*Power(invhg23,2)*Power(W,2) - 
       4*hPhi213*hPhi312*invhg11*Power(invhg23,2)*Power(W,2) - 
       4*hPhi212*hPhi313*invhg11*Power(invhg23,2)*Power(W,2) + 
       4*hGam133*hGam222*invhg12*Power(invhg23,2)*Power(W,2) + 
       8*hGam123*hGam223*invhg12*Power(invhg23,2)*Power(W,2) + 
       4*hGam122*hGam233*invhg12*Power(invhg23,2)*Power(W,2) + 
       8*hGam223*hGam312*invhg12*Power(invhg23,2)*Power(W,2) + 
       8*hGam222*hGam313*invhg12*Power(invhg23,2)*Power(W,2) + 
       8*hGam213*hGam322*invhg12*Power(invhg23,2)*Power(W,2) + 
       8*hGam212*hGam323*invhg12*Power(invhg23,2)*Power(W,2) - 
       2*hPhi133*hPhi222*invhg12*Power(invhg23,2)*Power(W,2) - 
       4*hPhi123*hPhi223*invhg12*Power(invhg23,2)*Power(W,2) - 
       2*hPhi122*hPhi233*invhg12*Power(invhg23,2)*Power(W,2) - 
       4*hPhi223*hPhi312*invhg12*Power(invhg23,2)*Power(W,2) - 
       4*hPhi222*hPhi313*invhg12*Power(invhg23,2)*Power(W,2) - 
       4*hPhi213*hPhi322*invhg12*Power(invhg23,2)*Power(W,2) - 
       4*hPhi212*hPhi323*invhg12*Power(invhg23,2)*Power(W,2) + 
       8*hGam233*hGam312*invhg13*Power(invhg23,2)*Power(W,2) + 
       8*hGam223*hGam313*invhg13*Power(invhg23,2)*Power(W,2) + 
       4*hGam133*hGam322*invhg13*Power(invhg23,2)*Power(W,2) + 
       8*hGam123*hGam323*invhg13*Power(invhg23,2)*Power(W,2) + 
       8*hGam213*hGam323*invhg13*Power(invhg23,2)*Power(W,2) + 
       4*hGam122*hGam333*invhg13*Power(invhg23,2)*Power(W,2) + 
       8*hGam212*hGam333*invhg13*Power(invhg23,2)*Power(W,2) - 
       4*hPhi233*hPhi312*invhg13*Power(invhg23,2)*Power(W,2) - 
       4*hPhi223*hPhi313*invhg13*Power(invhg23,2)*Power(W,2) - 
       2*hPhi133*hPhi322*invhg13*Power(invhg23,2)*Power(W,2) - 
       4*hPhi123*hPhi323*invhg13*Power(invhg23,2)*Power(W,2) - 
       4*hPhi213*hPhi323*invhg13*Power(invhg23,2)*Power(W,2) - 
       2*hPhi122*hPhi333*invhg13*Power(invhg23,2)*Power(W,2) - 
       4*hPhi212*hPhi333*invhg13*Power(invhg23,2)*Power(W,2) + 
       4*Power(hGam223,2)*invhg22*Power(invhg23,2)*Power(W,2) + 
       4*hGam222*hGam233*invhg22*Power(invhg23,2)*Power(W,2) + 
       8*hGam223*hGam322*invhg22*Power(invhg23,2)*Power(W,2) + 
       8*hGam222*hGam323*invhg22*Power(invhg23,2)*Power(W,2) - 
       2*Power(hPhi223,2)*invhg22*Power(invhg23,2)*Power(W,2) - 
       2*hPhi222*hPhi233*invhg22*Power(invhg23,2)*Power(W,2) - 
       4*hPhi223*hPhi322*invhg22*Power(invhg23,2)*Power(W,2) - 
       4*hPhi222*hPhi323*invhg22*Power(invhg23,2)*Power(W,2) + 
       4*hGam233*hGam322*Power(invhg23,3)*Power(W,2) + 
       8*hGam223*hGam323*Power(invhg23,3)*Power(W,2) + 
       4*hGam222*hGam333*Power(invhg23,3)*Power(W,2) - 
       2*hPhi233*hPhi322*Power(invhg23,3)*Power(W,2) - 
       4*hPhi223*hPhi323*Power(invhg23,3)*Power(W,2) - 
       2*hPhi222*hPhi333*Power(invhg23,3)*Power(W,2) + 
       4*Power(hGam113,2)*Power(invhg11,2)*invhg33*Power(W,2) + 
       2*Power(hGam311,2)*Power(invhg11,2)*invhg33*Power(W,2) - 
       2*Power(hPhi113,2)*Power(invhg11,2)*invhg33*Power(W,2) - 
       Power(hPhi311,2)*Power(invhg11,2)*invhg33*Power(W,2) + 
       8*hGam113*hGam123*invhg11*invhg12*invhg33*Power(W,2) + 
       8*hGam113*hGam213*invhg11*invhg12*invhg33*Power(W,2) + 
       8*hGam311*hGam312*invhg11*invhg12*invhg33*Power(W,2) - 
       4*hPhi113*hPhi123*invhg11*invhg12*invhg33*Power(W,2) - 
       4*hPhi113*hPhi213*invhg11*invhg12*invhg33*Power(W,2) - 
       4*hPhi311*hPhi312*invhg11*invhg12*invhg33*Power(W,2) + 
       8*hGam123*hGam213*Power(invhg12,2)*invhg33*Power(W,2) + 
       8*hGam113*hGam223*Power(invhg12,2)*invhg33*Power(W,2) + 
       4*Power(hGam312,2)*Power(invhg12,2)*invhg33*Power(W,2) + 
       4*hGam311*hGam322*Power(invhg12,2)*invhg33*Power(W,2) - 
       4*hPhi123*hPhi213*Power(invhg12,2)*invhg33*Power(W,2) - 
       4*hPhi113*hPhi223*Power(invhg12,2)*invhg33*Power(W,2) - 
       2*Power(hPhi312,2)*Power(invhg12,2)*invhg33*Power(W,2) - 
       2*hPhi311*hPhi322*Power(invhg12,2)*invhg33*Power(W,2) + 
       8*hGam113*hGam133*invhg11*invhg13*invhg33*Power(W,2) + 
       8*hGam113*hGam313*invhg11*invhg13*invhg33*Power(W,2) + 
       8*hGam311*hGam313*invhg11*invhg13*invhg33*Power(W,2) - 
       4*hPhi113*hPhi133*invhg11*invhg13*invhg33*Power(W,2) - 
       4*hPhi113*hPhi313*invhg11*invhg13*invhg33*Power(W,2) - 
       4*hPhi311*hPhi313*invhg11*invhg13*invhg33*Power(W,2) + 
       8*hGam133*hGam213*invhg12*invhg13*invhg33*Power(W,2) + 
       8*hGam113*hGam233*invhg12*invhg13*invhg33*Power(W,2) + 
       8*hGam123*hGam313*invhg12*invhg13*invhg33*Power(W,2) + 
       8*hGam312*hGam313*invhg12*invhg13*invhg33*Power(W,2) + 
       8*hGam113*hGam323*invhg12*invhg13*invhg33*Power(W,2) + 
       8*hGam311*hGam323*invhg12*invhg13*invhg33*Power(W,2) - 
       4*hPhi133*hPhi213*invhg12*invhg13*invhg33*Power(W,2) - 
       4*hPhi113*hPhi233*invhg12*invhg13*invhg33*Power(W,2) - 
       4*hPhi123*hPhi313*invhg12*invhg13*invhg33*Power(W,2) - 
       4*hPhi312*hPhi313*invhg12*invhg13*invhg33*Power(W,2) - 
       4*hPhi113*hPhi323*invhg12*invhg13*invhg33*Power(W,2) - 
       4*hPhi311*hPhi323*invhg12*invhg13*invhg33*Power(W,2) + 
       8*hGam133*hGam313*Power(invhg13,2)*invhg33*Power(W,2) + 
       4*Power(hGam313,2)*Power(invhg13,2)*invhg33*Power(W,2) + 
       8*hGam113*hGam333*Power(invhg13,2)*invhg33*Power(W,2) + 
       4*hGam311*hGam333*Power(invhg13,2)*invhg33*Power(W,2) - 
       4*hPhi133*hPhi313*Power(invhg13,2)*invhg33*Power(W,2) - 
       2*Power(hPhi313,2)*Power(invhg13,2)*invhg33*Power(W,2) - 
       4*hPhi113*hPhi333*Power(invhg13,2)*invhg33*Power(W,2) - 
       2*hPhi311*hPhi333*Power(invhg13,2)*invhg33*Power(W,2) + 
       4*Power(hGam123,2)*invhg11*invhg22*invhg33*Power(W,2) + 
       4*Power(hGam213,2)*invhg11*invhg22*invhg33*Power(W,2) + 
       4*Power(hGam312,2)*invhg11*invhg22*invhg33*Power(W,2) - 
       2*Power(hPhi123,2)*invhg11*invhg22*invhg33*Power(W,2) - 
       2*Power(hPhi213,2)*invhg11*invhg22*invhg33*Power(W,2) - 
       2*Power(hPhi312,2)*invhg11*invhg22*invhg33*Power(W,2) + 
       8*hGam123*hGam223*invhg12*invhg22*invhg33*Power(W,2) + 
       8*hGam213*hGam223*invhg12*invhg22*invhg33*Power(W,2) + 
       8*hGam312*hGam322*invhg12*invhg22*invhg33*Power(W,2) - 
       4*hPhi123*hPhi223*invhg12*invhg22*invhg33*Power(W,2) - 
       4*hPhi213*hPhi223*invhg12*invhg22*invhg33*Power(W,2) - 
       4*hPhi312*hPhi322*invhg12*invhg22*invhg33*Power(W,2) + 
       8*hGam213*hGam233*invhg13*invhg22*invhg33*Power(W,2) + 
       8*hGam123*hGam323*invhg13*invhg22*invhg33*Power(W,2) + 
       8*hGam312*hGam323*invhg13*invhg22*invhg33*Power(W,2) - 
       4*hPhi213*hPhi233*invhg13*invhg22*invhg33*Power(W,2) - 
       4*hPhi123*hPhi323*invhg13*invhg22*invhg33*Power(W,2) - 
       4*hPhi312*hPhi323*invhg13*invhg22*invhg33*Power(W,2) + 
       4*Power(hGam223,2)*Power(invhg22,2)*invhg33*Power(W,2) + 
       2*Power(hGam322,2)*Power(invhg22,2)*invhg33*Power(W,2) - 
       2*Power(hPhi223,2)*Power(invhg22,2)*invhg33*Power(W,2) - 
       Power(hPhi322,2)*Power(invhg22,2)*invhg33*Power(W,2) + 
       8*hGam123*hGam133*invhg11*invhg23*invhg33*Power(W,2) + 
       8*hGam213*hGam313*invhg11*invhg23*invhg33*Power(W,2) + 
       8*hGam312*hGam313*invhg11*invhg23*invhg33*Power(W,2) - 
       4*hPhi123*hPhi133*invhg11*invhg23*invhg33*Power(W,2) - 
       4*hPhi213*hPhi313*invhg11*invhg23*invhg33*Power(W,2) - 
       4*hPhi312*hPhi313*invhg11*invhg23*invhg33*Power(W,2) + 
       8*hGam133*hGam223*invhg12*invhg23*invhg33*Power(W,2) + 
       8*hGam123*hGam233*invhg12*invhg23*invhg33*Power(W,2) + 
       8*hGam223*hGam313*invhg12*invhg23*invhg33*Power(W,2) + 
       8*hGam313*hGam322*invhg12*invhg23*invhg33*Power(W,2) + 
       8*hGam213*hGam323*invhg12*invhg23*invhg33*Power(W,2) + 
       8*hGam312*hGam323*invhg12*invhg23*invhg33*Power(W,2) - 
       4*hPhi133*hPhi223*invhg12*invhg23*invhg33*Power(W,2) - 
       4*hPhi123*hPhi233*invhg12*invhg23*invhg33*Power(W,2) - 
       4*hPhi223*hPhi313*invhg12*invhg23*invhg33*Power(W,2) - 
       4*hPhi313*hPhi322*invhg12*invhg23*invhg33*Power(W,2) - 
       4*hPhi213*hPhi323*invhg12*invhg23*invhg33*Power(W,2) - 
       4*hPhi312*hPhi323*invhg12*invhg23*invhg33*Power(W,2) + 
       8*hGam233*hGam313*invhg13*invhg23*invhg33*Power(W,2) + 
       8*hGam133*hGam323*invhg13*invhg23*invhg33*Power(W,2) + 
       8*hGam313*hGam323*invhg13*invhg23*invhg33*Power(W,2) + 
       8*hGam123*hGam333*invhg13*invhg23*invhg33*Power(W,2) + 
       8*hGam213*hGam333*invhg13*invhg23*invhg33*Power(W,2) + 
       8*hGam312*hGam333*invhg13*invhg23*invhg33*Power(W,2) - 
       4*hPhi233*hPhi313*invhg13*invhg23*invhg33*Power(W,2) - 
       4*hPhi133*hPhi323*invhg13*invhg23*invhg33*Power(W,2) - 
       4*hPhi313*hPhi323*invhg13*invhg23*invhg33*Power(W,2) - 
       4*hPhi123*hPhi333*invhg13*invhg23*invhg33*Power(W,2) - 
       4*hPhi213*hPhi333*invhg13*invhg23*invhg33*Power(W,2) - 
       4*hPhi312*hPhi333*invhg13*invhg23*invhg33*Power(W,2) + 
       8*hGam223*hGam233*invhg22*invhg23*invhg33*Power(W,2) + 
       8*hGam223*hGam323*invhg22*invhg23*invhg33*Power(W,2) + 
       8*hGam322*hGam323*invhg22*invhg23*invhg33*Power(W,2) - 
       4*hPhi223*hPhi233*invhg22*invhg23*invhg33*Power(W,2) - 
       4*hPhi223*hPhi323*invhg22*invhg23*invhg33*Power(W,2) - 
       4*hPhi322*hPhi323*invhg22*invhg23*invhg33*Power(W,2) + 
       8*hGam233*hGam323*Power(invhg23,2)*invhg33*Power(W,2) + 
       4*Power(hGam323,2)*Power(invhg23,2)*invhg33*Power(W,2) + 
       8*hGam223*hGam333*Power(invhg23,2)*invhg33*Power(W,2) + 
       4*hGam322*hGam333*Power(invhg23,2)*invhg33*Power(W,2) - 
       4*hPhi233*hPhi323*Power(invhg23,2)*invhg33*Power(W,2) - 
       2*Power(hPhi323,2)*Power(invhg23,2)*invhg33*Power(W,2) - 
       4*hPhi223*hPhi333*Power(invhg23,2)*invhg33*Power(W,2) - 
       2*hPhi322*hPhi333*Power(invhg23,2)*invhg33*Power(W,2) + 
       2*Power(hGam133,2)*invhg11*Power(invhg33,2)*Power(W,2) + 
       4*Power(hGam313,2)*invhg11*Power(invhg33,2)*Power(W,2) - 
       Power(hPhi133,2)*invhg11*Power(invhg33,2)*Power(W,2) - 
       2*Power(hPhi313,2)*invhg11*Power(invhg33,2)*Power(W,2) + 
       4*hGam133*hGam233*invhg12*Power(invhg33,2)*Power(W,2) + 
       8*hGam313*hGam323*invhg12*Power(invhg33,2)*Power(W,2) - 
       2*hPhi133*hPhi233*invhg12*Power(invhg33,2)*Power(W,2) - 
       4*hPhi313*hPhi323*invhg12*Power(invhg33,2)*Power(W,2) + 
       4*hGam133*hGam333*invhg13*Power(invhg33,2)*Power(W,2) + 
       8*hGam313*hGam333*invhg13*Power(invhg33,2)*Power(W,2) - 
       2*hPhi133*hPhi333*invhg13*Power(invhg33,2)*Power(W,2) - 
       4*hPhi313*hPhi333*invhg13*Power(invhg33,2)*Power(W,2) + 
       2*Power(hGam233,2)*invhg22*Power(invhg33,2)*Power(W,2) + 
       4*Power(hGam323,2)*invhg22*Power(invhg33,2)*Power(W,2) - 
       Power(hPhi233,2)*invhg22*Power(invhg33,2)*Power(W,2) - 
       2*Power(hPhi323,2)*invhg22*Power(invhg33,2)*Power(W,2) + 
       4*hGam233*hGam333*invhg23*Power(invhg33,2)*Power(W,2) + 
       8*hGam323*hGam333*invhg23*Power(invhg33,2)*Power(W,2) - 
       2*hPhi233*hPhi333*invhg23*Power(invhg33,2)*Power(W,2) - 
       4*hPhi323*hPhi333*invhg23*Power(invhg33,2)*Power(W,2) + 
       2*Power(hGam333,2)*Power(invhg33,3)*Power(W,2) - 
       Power(hPhi333,2)*Power(invhg33,3)*Power(W,2) + 
       8*hPhi112*invhg11*invhg12*W*WPhi1 + 
       4*hPhi211*invhg11*invhg12*W*WPhi1 + 
       4*hPhi122*Power(invhg12,2)*W*WPhi1 + 
       4*hPhi212*Power(invhg12,2)*W*WPhi1 + 
       8*hPhi113*invhg11*invhg13*W*WPhi1 + 
       4*hPhi311*invhg11*invhg13*W*WPhi1 + 
       8*hPhi123*invhg12*invhg13*W*WPhi1 + 
       4*hPhi213*invhg12*invhg13*W*WPhi1 + 
       4*hPhi312*invhg12*invhg13*W*WPhi1 + 
       4*hPhi133*Power(invhg13,2)*W*WPhi1 + 
       4*hPhi313*Power(invhg13,2)*W*WPhi1 + 
       4*hPhi212*invhg11*invhg22*W*WPhi1 + 
       4*hPhi222*invhg12*invhg22*W*WPhi1 + 
       4*hPhi223*invhg13*invhg22*W*WPhi1 + 
       4*hPhi213*invhg11*invhg23*W*WPhi1 + 
       4*hPhi312*invhg11*invhg23*W*WPhi1 + 
       4*hPhi223*invhg12*invhg23*W*WPhi1 + 
       4*hPhi322*invhg12*invhg23*W*WPhi1 + 
       4*hPhi233*invhg13*invhg23*W*WPhi1 + 
       4*hPhi323*invhg13*invhg23*W*WPhi1 + 
       4*hPhi313*invhg11*invhg33*W*WPhi1 + 
       4*hPhi323*invhg12*invhg33*W*WPhi1 + 
       4*hPhi333*invhg13*invhg33*W*WPhi1 + 2*invhg11*Power(WPhi1,2) + 
       4*hPhi112*Power(invhg12,2)*W*WPhi2 + 
       4*hPhi211*Power(invhg12,2)*W*WPhi2 + 
       4*hPhi113*invhg12*invhg13*W*WPhi2 + 
       4*hPhi311*invhg12*invhg13*W*WPhi2 + 
       4*hPhi112*invhg11*invhg22*W*WPhi2 + 
       4*hPhi122*invhg12*invhg22*W*WPhi2 + 
       8*hPhi212*invhg12*invhg22*W*WPhi2 + 
       4*hPhi123*invhg13*invhg22*W*WPhi2 + 
       4*hPhi312*invhg13*invhg22*W*WPhi2 + 
       4*hPhi222*Power(invhg22,2)*W*WPhi2 + 
       4*hPhi113*invhg11*invhg23*W*WPhi2 + 
       4*hPhi123*invhg12*invhg23*W*WPhi2 + 
       8*hPhi213*invhg12*invhg23*W*WPhi2 + 
       4*hPhi312*invhg12*invhg23*W*WPhi2 + 
       4*hPhi133*invhg13*invhg23*W*WPhi2 + 
       4*hPhi313*invhg13*invhg23*W*WPhi2 + 
       8*hPhi223*invhg22*invhg23*W*WPhi2 + 
       4*hPhi322*invhg22*invhg23*W*WPhi2 + 
       4*hPhi233*Power(invhg23,2)*W*WPhi2 + 
       4*hPhi323*Power(invhg23,2)*W*WPhi2 + 
       4*hPhi313*invhg12*invhg33*W*WPhi2 + 
       4*hPhi323*invhg22*invhg33*W*WPhi2 + 
       4*hPhi333*invhg23*invhg33*W*WPhi2 + 4*invhg12*WPhi1*WPhi2 + 
       2*invhg22*Power(WPhi2,2) + 4*hPhi112*invhg12*invhg13*W*WPhi3 + 
       4*hPhi211*invhg12*invhg13*W*WPhi3 + 
       4*hPhi113*Power(invhg13,2)*W*WPhi3 + 
       4*hPhi311*Power(invhg13,2)*W*WPhi3 + 
       4*hPhi212*invhg13*invhg22*W*WPhi3 + 
       4*hPhi112*invhg11*invhg23*W*WPhi3 + 
       4*hPhi122*invhg12*invhg23*W*WPhi3 + 
       4*hPhi212*invhg12*invhg23*W*WPhi3 + 
       4*hPhi123*invhg13*invhg23*W*WPhi3 + 
       4*hPhi213*invhg13*invhg23*W*WPhi3 + 
       8*hPhi312*invhg13*invhg23*W*WPhi3 + 
       4*hPhi222*invhg22*invhg23*W*WPhi3 + 
       4*hPhi223*Power(invhg23,2)*W*WPhi3 + 
       4*hPhi322*Power(invhg23,2)*W*WPhi3 + 
       4*hPhi113*invhg11*invhg33*W*WPhi3 + 
       4*hPhi123*invhg12*invhg33*W*WPhi3 + 
       4*hPhi213*invhg12*invhg33*W*WPhi3 + 
       4*hPhi133*invhg13*invhg33*W*WPhi3 + 
       8*hPhi313*invhg13*invhg33*W*WPhi3 + 
       4*hPhi223*invhg22*invhg33*W*WPhi3 + 
       4*hPhi233*invhg23*invhg33*W*WPhi3 + 
       8*hPhi323*invhg23*invhg33*W*WPhi3 + 
       4*hPhi333*Power(invhg33,2)*W*WPhi3 + 4*invhg13*WPhi1*WPhi3 + 
       4*invhg23*WPhi2*WPhi3 + 2*invhg33*Power(WPhi3,2) - 
       2*hPhi111*W*(2*hPhi112*Power(invhg11,2)*invhg12*W + 
          hPhi211*Power(invhg11,2)*invhg12*W + 
          hPhi122*invhg11*Power(invhg12,2)*W + 
          2*hPhi212*invhg11*Power(invhg12,2)*W + 
          hPhi222*Power(invhg12,3)*W + 
          2*hPhi113*Power(invhg11,2)*invhg13*W + 
          hPhi311*Power(invhg11,2)*invhg13*W + 
          2*hPhi123*invhg11*invhg12*invhg13*W + 
          2*hPhi213*invhg11*invhg12*invhg13*W + 
          2*hPhi312*invhg11*invhg12*invhg13*W + 
          2*hPhi223*Power(invhg12,2)*invhg13*W + 
          hPhi322*Power(invhg12,2)*invhg13*W + 
          hPhi133*invhg11*Power(invhg13,2)*W + 
          2*hPhi313*invhg11*Power(invhg13,2)*W + 
          hPhi233*invhg12*Power(invhg13,2)*W + 
          2*hPhi323*invhg12*Power(invhg13,2)*W + 
          hPhi333*Power(invhg13,3)*W - 2*Power(invhg11,2)*WPhi1 - 
          2*invhg11*invhg12*WPhi2 - 2*invhg11*invhg13*WPhi3)))/
  (6.*Power(alpha,2))
;

vreal hGn
=
(2*(hPhin11 + hPhin22 + hPhin33))/alpha + hPinn/2. - (6*WPi)/W
;

vreal hG1
=
ceta*(hg11*hgn1 + hg12*hgn2 + hg13*hgn3) - hPinD1 - 
  (cnu*(hPhi111*invhg11 + hPhi112*invhg12 + hPhi211*invhg12 + 
       hPhi113*invhg13 + hPhi311*invhg13 + hPhi212*invhg22 + 
       hPhi213*invhg23 + hPhi312*invhg23 + hPhi313*invhg33))/alpha
;

vreal hG2
=
ceta*(hg12*hgn1 + hg22*hgn2 + hg23*hgn3) - hPinD2 - 
  (cnu*(hPhi112*invhg11 + hPhi122*invhg12 + hPhi212*invhg12 + 
       hPhi123*invhg13 + hPhi312*invhg13 + hPhi222*invhg22 + 
       hPhi223*invhg23 + hPhi322*invhg23 + hPhi323*invhg33))/alpha
;

vreal hG3
=
ceta*(hg13*hgn1 + hg23*hgn2 + hg33*hgn3) - hPinD3 - 
  (cnu*(hPhi113*invhg11 + hPhi123*invhg12 + hPhi213*invhg12 + 
       hPhi133*invhg13 + hPhi313*invhg13 + hPhi223*invhg22 + 
       hPhi233*invhg23 + hPhi323*invhg23 + hPhi333*invhg33))/alpha
;

vreal hFn
=
-(crhoL*hGn) - trhGamn
;

vreal hF1
=
-(crhoS*hG1) - trhGam1
;

vreal hF2
=
-(crhoS*hG2) - trhGam2
;

vreal hF3
=
-(crhoS*hG3) - trhGam3
;

vreal adnhHn
=
cmuL*(hFn - hHn) + hthetan
;

vreal adnhH1
=
cmuS*(hF1 - hH1) + htheta1
;

vreal adnhH2
=
cmuS*(hF2 - hH2) + htheta2
;

vreal adnhH3
=
cmuS*(hF3 - hH3) + htheta3
;


local_dthg11.store(mask, index2, 
beta1*(1 + cgamma1)*dhg111 + beta2*(1 + cgamma1)*dhg211 + beta3*dhg311 + 
  beta3*cgamma1*dhg311 - (cgamma1*
     (beta1*hPhi111 + beta2*hPhi211 + beta3*hPhi311))/alpha - hPi11
);

local_dthg12.store(mask, index2, 
beta1*(1 + cgamma1)*dhg112 + beta2*(1 + cgamma1)*dhg212 + beta3*dhg312 + 
  beta3*cgamma1*dhg312 - (cgamma1*
     (beta1*hPhi112 + beta2*hPhi212 + beta3*hPhi312))/alpha - hPi12
);

local_dthg13.store(mask, index2, 
beta1*(1 + cgamma1)*dhg113 + beta2*(1 + cgamma1)*dhg213 + beta3*dhg313 + 
  beta3*cgamma1*dhg313 - (cgamma1*
     (beta1*hPhi113 + beta2*hPhi213 + beta3*hPhi313))/alpha - hPi13
);

local_dthg22.store(mask, index2, 
beta1*(1 + cgamma1)*dhg122 + beta2*(1 + cgamma1)*dhg222 + beta3*dhg322 + 
  beta3*cgamma1*dhg322 - (cgamma1*
     (beta1*hPhi122 + beta2*hPhi222 + beta3*hPhi322))/alpha - hPi22
);

local_dthg23.store(mask, index2, 
beta1*(1 + cgamma1)*dhg123 + beta2*(1 + cgamma1)*dhg223 + beta3*dhg323 + 
  beta3*cgamma1*dhg323 - (cgamma1*
     (beta1*hPhi123 + beta2*hPhi223 + beta3*hPhi323))/alpha - hPi23
);

local_dthg33.store(mask, index2, 
beta1*(1 + cgamma1)*dhg133 + beta2*(1 + cgamma1)*dhg233 + beta3*dhg333 + 
  beta3*cgamma1*dhg333 - (cgamma1*
     (beta1*hPhi133 + beta2*hPhi233 + beta3*hPhi333))/alpha - hPi33
);

local_dthPi11.store(mask, index2, 
-0.16666666666666666*(6*Power(alpha,3)*
      (dhPhi1111*invgam11 + dhPhi1211*invgam12 + dhPhi2111*invgam12 + 
        dhPhi1311*invgam13 + dhPhi3111*invgam13 + dhPhi2211*invgam22 + 
        dhPhi2311*invgam23 + dhPhi3211*invgam23 + dhPhi3311*invgam33) + 
     3*(4*hH1*hPhinn1 + 4*hPhinn1*hPinD1 + 
        4*(Power(hPhinD11,2)*invhg11 + 2*hPhinD11*hPhinD21*invhg12 + 
           2*hPhinD11*hPhinD31*invhg13 + Power(hPhinD21,2)*invhg22 + 
           2*hPhinD21*hPhinD31*invhg23 + Power(hPhinD31,2)*invhg33) + 
        Power(hPhinn1,2)*Power(W,2)) + 
     3*alpha*(2*beta1*cgamma1*cgamma2*hPhi111 + 
        2*beta2*cgamma1*cgamma2*hPhi211 + 
        2*beta3*cgamma1*cgamma2*hPhi311 + 2*hPhi111*hPin1 + 
        2*hPhi211*hPin2 + 2*hPhi311*hPin3 - 4*hGam111*hH1*invhg11 - 
        4*hGam211*hH1*invhg12 - 4*hGam111*hH2*invhg12 - 
        4*hGam311*hH1*invhg13 - 4*hGam111*hH3*invhg13 - 
        4*hGam211*hH2*invhg22 - 4*hGam311*hH2*invhg23 - 
        4*hGam211*hH3*invhg23 - 4*hGam311*hH3*invhg33 + 
        hPhi111*hPhinn1*invhg11*Power(W,2) + 
        hPhi211*hPhinn1*invhg12*Power(W,2) + 
        hPhi111*hPhinn2*invhg12*Power(W,2) + 
        hPhi311*hPhinn1*invhg13*Power(W,2) + 
        hPhi111*hPhinn3*invhg13*Power(W,2) + 
        hPhi211*hPhinn2*invhg22*Power(W,2) + 
        hPhi311*hPhinn2*invhg23*Power(W,2) + 
        hPhi211*hPhinn3*invhg23*Power(W,2) + 
        hPhi311*hPhinn3*invhg33*Power(W,2)) - 
     2*Power(alpha,2)*(3*beta3*cgamma1*cgamma2*dhg311 - 6*dhH11 + 
        3*beta1*(cgamma1*cgamma2*dhg111 + dhPi111) + 
        3*beta2*(cgamma1*cgamma2*dhg211 + dhPi211) + 3*beta3*dhPi311 - 
        6*hGamn11*hHn + 2*dhH11*hg11*invhg11 + 
        12*Power(hGamnmix11,2)*invhg11 - 6*Power(hPi11,2)*invhg11 + 
        2*dhH12*hg11*invhg12 + 2*dhH21*hg11*invhg12 + 
        24*hGamnmix11*hGamnmix12*invhg12 - 12*hPi11*hPi12*invhg12 + 
        2*dhH13*hg11*invhg13 + 2*dhH31*hg11*invhg13 + 
        24*hGamnmix11*hGamnmix13*invhg13 - 12*hPi11*hPi13*invhg13 + 
        2*dhH22*hg11*invhg22 + 12*Power(hGamnmix12,2)*invhg22 - 
        6*Power(hPi12,2)*invhg22 + 2*dhH23*hg11*invhg23 + 
        2*dhH32*hg11*invhg23 + 24*hGamnmix12*hGamnmix13*invhg23 - 
        12*hPi12*hPi13*invhg23 + 2*dhH33*hg11*invhg33 + 
        12*Power(hGamnmix13,2)*invhg33 - 6*Power(hPi13,2)*invhg33 + 
        3*hg11*trPi - 6*Power(hGam111,2)*Power(invhg11,2)*Power(W,2) + 
        6*Power(hPhi111,2)*Power(invhg11,2)*Power(W,2) - 
        24*hGam111*hGam112*invhg11*invhg12*Power(W,2) + 
        12*hPhi111*hPhi112*invhg11*invhg12*Power(W,2) + 
        12*hPhi111*hPhi211*invhg11*invhg12*Power(W,2) - 
        12*Power(hGam112,2)*Power(invhg12,2)*Power(W,2) - 
        12*hGam111*hGam122*Power(invhg12,2)*Power(W,2) + 
        12*hPhi112*hPhi211*Power(invhg12,2)*Power(W,2) + 
        12*hPhi111*hPhi212*Power(invhg12,2)*Power(W,2) - 
        24*hGam111*hGam113*invhg11*invhg13*Power(W,2) + 
        12*hPhi111*hPhi113*invhg11*invhg13*Power(W,2) + 
        12*hPhi111*hPhi311*invhg11*invhg13*Power(W,2) - 
        24*hGam112*hGam113*invhg12*invhg13*Power(W,2) - 
        24*hGam111*hGam123*invhg12*invhg13*Power(W,2) + 
        12*hPhi113*hPhi211*invhg12*invhg13*Power(W,2) + 
        12*hPhi111*hPhi213*invhg12*invhg13*Power(W,2) + 
        12*hPhi112*hPhi311*invhg12*invhg13*Power(W,2) + 
        12*hPhi111*hPhi312*invhg12*invhg13*Power(W,2) - 
        12*Power(hGam113,2)*Power(invhg13,2)*Power(W,2) - 
        12*hGam111*hGam133*Power(invhg13,2)*Power(W,2) + 
        12*hPhi113*hPhi311*Power(invhg13,2)*Power(W,2) + 
        12*hPhi111*hPhi313*Power(invhg13,2)*Power(W,2) - 
        12*Power(hGam112,2)*invhg11*invhg22*Power(W,2) + 
        6*Power(hPhi112,2)*invhg11*invhg22*Power(W,2) + 
        6*Power(hPhi211,2)*invhg11*invhg22*Power(W,2) - 
        24*hGam112*hGam122*invhg12*invhg22*Power(W,2) + 
        12*hPhi112*hPhi212*invhg12*invhg22*Power(W,2) + 
        12*hPhi211*hPhi212*invhg12*invhg22*Power(W,2) - 
        24*hGam112*hGam123*invhg13*invhg22*Power(W,2) + 
        12*hPhi211*hPhi213*invhg13*invhg22*Power(W,2) + 
        12*hPhi112*hPhi312*invhg13*invhg22*Power(W,2) - 
        6*Power(hGam122,2)*Power(invhg22,2)*Power(W,2) + 
        6*Power(hPhi212,2)*Power(invhg22,2)*Power(W,2) - 
        24*hGam112*hGam113*invhg11*invhg23*Power(W,2) + 
        12*hPhi112*hPhi113*invhg11*invhg23*Power(W,2) + 
        12*hPhi211*hPhi311*invhg11*invhg23*Power(W,2) - 
        24*hGam113*hGam122*invhg12*invhg23*Power(W,2) - 
        24*hGam112*hGam123*invhg12*invhg23*Power(W,2) + 
        12*hPhi113*hPhi212*invhg12*invhg23*Power(W,2) + 
        12*hPhi112*hPhi213*invhg12*invhg23*Power(W,2) + 
        12*hPhi212*hPhi311*invhg12*invhg23*Power(W,2) + 
        12*hPhi211*hPhi312*invhg12*invhg23*Power(W,2) - 
        24*hGam113*hGam123*invhg13*invhg23*Power(W,2) - 
        24*hGam112*hGam133*invhg13*invhg23*Power(W,2) + 
        12*hPhi213*hPhi311*invhg13*invhg23*Power(W,2) + 
        12*hPhi113*hPhi312*invhg13*invhg23*Power(W,2) + 
        12*hPhi112*hPhi313*invhg13*invhg23*Power(W,2) + 
        12*hPhi211*hPhi313*invhg13*invhg23*Power(W,2) - 
        24*hGam122*hGam123*invhg22*invhg23*Power(W,2) + 
        12*hPhi212*hPhi213*invhg22*invhg23*Power(W,2) + 
        12*hPhi212*hPhi312*invhg22*invhg23*Power(W,2) - 
        12*Power(hGam123,2)*Power(invhg23,2)*Power(W,2) - 
        12*hGam122*hGam133*Power(invhg23,2)*Power(W,2) + 
        12*hPhi213*hPhi312*Power(invhg23,2)*Power(W,2) + 
        12*hPhi212*hPhi313*Power(invhg23,2)*Power(W,2) - 
        12*Power(hGam113,2)*invhg11*invhg33*Power(W,2) + 
        6*Power(hPhi113,2)*invhg11*invhg33*Power(W,2) + 
        6*Power(hPhi311,2)*invhg11*invhg33*Power(W,2) - 
        24*hGam113*hGam123*invhg12*invhg33*Power(W,2) + 
        12*hPhi113*hPhi213*invhg12*invhg33*Power(W,2) + 
        12*hPhi311*hPhi312*invhg12*invhg33*Power(W,2) - 
        24*hGam113*hGam133*invhg13*invhg33*Power(W,2) + 
        12*hPhi113*hPhi313*invhg13*invhg33*Power(W,2) + 
        12*hPhi311*hPhi313*invhg13*invhg33*Power(W,2) - 
        12*Power(hGam123,2)*invhg22*invhg33*Power(W,2) + 
        6*Power(hPhi213,2)*invhg22*invhg33*Power(W,2) + 
        6*Power(hPhi312,2)*invhg22*invhg33*Power(W,2) - 
        24*hGam123*hGam133*invhg23*invhg33*Power(W,2) + 
        12*hPhi213*hPhi313*invhg23*invhg33*Power(W,2) + 
        12*hPhi312*hPhi313*invhg23*invhg33*Power(W,2) - 
        6*Power(hGam133,2)*Power(invhg33,2)*Power(W,2) + 
        6*Power(hPhi313,2)*Power(invhg33,2)*Power(W,2) + 
        24*hGam111*invhg11*W*WPhi1 - 24*hPhi111*invhg11*W*WPhi1 + 
        24*hGam112*invhg12*W*WPhi1 - 12*hPhi112*invhg12*W*WPhi1 - 
        24*hPhi211*invhg12*W*WPhi1 + 24*hGam113*invhg13*W*WPhi1 - 
        12*hPhi113*invhg13*W*WPhi1 - 24*hPhi311*invhg13*W*WPhi1 - 
        12*hPhi212*invhg22*W*WPhi1 - 12*hPhi213*invhg23*W*WPhi1 - 
        12*hPhi312*invhg23*W*WPhi1 - 12*hPhi313*invhg33*W*WPhi1 - 
        6*Power(WPhi1,2) + 24*hGam111*invhg12*W*WPhi2 - 
        12*hPhi111*invhg12*W*WPhi2 + 24*hGam112*invhg22*W*WPhi2 - 
        12*hPhi211*invhg22*W*WPhi2 + 24*hGam113*invhg23*W*WPhi2 - 
        12*hPhi311*invhg23*W*WPhi2 + 24*hGam111*invhg13*W*WPhi3 - 
        12*hPhi111*invhg13*W*WPhi3 + 24*hGam112*invhg23*W*WPhi3 - 
        12*hPhi211*invhg23*W*WPhi3 + 24*hGam113*invhg33*W*WPhi3 - 
        12*hPhi311*invhg33*W*WPhi3))/Power(alpha,2)
);

local_dthPi12.store(mask, index2, 
-0.16666666666666666*(6*Power(alpha,3)*
      (dhPhi1112*invgam11 + dhPhi1212*invgam12 + dhPhi2112*invgam12 + 
        dhPhi1312*invgam13 + dhPhi3112*invgam13 + dhPhi2212*invgam22 + 
        dhPhi2312*invgam23 + dhPhi3212*invgam23 + dhPhi3312*invgam33) + 
     3*(2*hH2*hPhinn1 + 2*hH1*hPhinn2 + 2*hPhinn2*hPinD1 + 
        2*hPhinn1*hPinD2 + 4*hPhinD11*hPhinD12*invhg11 + 
        4*hPhinD12*hPhinD21*invhg12 + 4*hPhinD11*hPhinD22*invhg12 + 
        4*hPhinD12*hPhinD31*invhg13 + 4*hPhinD11*hPhinD32*invhg13 + 
        4*hPhinD21*hPhinD22*invhg22 + 4*hPhinD22*hPhinD31*invhg23 + 
        4*hPhinD21*hPhinD32*invhg23 + 4*hPhinD31*hPhinD32*invhg33 + 
        hPhinn1*hPhinn2*Power(W,2)) + 
     3*alpha*(2*beta1*cgamma1*cgamma2*hPhi112 + 
        2*beta2*cgamma1*cgamma2*hPhi212 + 
        2*beta3*cgamma1*cgamma2*hPhi312 + 2*hPhi112*hPin1 + 
        2*hPhi212*hPin2 + 2*hPhi312*hPin3 - 4*hGam112*hH1*invhg11 - 
        4*hGam212*hH1*invhg12 - 4*hGam112*hH2*invhg12 - 
        4*hGam312*hH1*invhg13 - 4*hGam112*hH3*invhg13 - 
        4*hGam212*hH2*invhg22 - 4*hGam312*hH2*invhg23 - 
        4*hGam212*hH3*invhg23 - 4*hGam312*hH3*invhg33 + 
        hPhi112*hPhinn1*invhg11*Power(W,2) + 
        hPhi212*hPhinn1*invhg12*Power(W,2) + 
        hPhi112*hPhinn2*invhg12*Power(W,2) + 
        hPhi312*hPhinn1*invhg13*Power(W,2) + 
        hPhi112*hPhinn3*invhg13*Power(W,2) + 
        hPhi212*hPhinn2*invhg22*Power(W,2) + 
        hPhi312*hPhinn2*invhg23*Power(W,2) + 
        hPhi212*hPhinn3*invhg23*Power(W,2) + 
        hPhi312*hPhinn3*invhg33*Power(W,2)) - 
     2*Power(alpha,2)*(3*beta3*cgamma1*cgamma2*dhg312 - 3*dhH12 - 3*dhH21 + 
        3*beta1*(cgamma1*cgamma2*dhg112 + dhPi112) + 
        3*beta2*(cgamma1*cgamma2*dhg212 + dhPi212) + 3*beta3*dhPi312 - 
        6*hGamn12*hHn + 2*dhH11*hg12*invhg11 + 
        12*hGamnmix11*hGamnmix21*invhg11 - 6*hPi11*hPi12*invhg11 + 
        2*dhH12*hg12*invhg12 + 2*dhH21*hg12*invhg12 + 
        12*hGamnmix12*hGamnmix21*invhg12 + 
        12*hGamnmix11*hGamnmix22*invhg12 - 6*Power(hPi12,2)*invhg12 - 
        6*hPi11*hPi22*invhg12 + 2*dhH13*hg12*invhg13 + 
        2*dhH31*hg12*invhg13 + 12*hGamnmix13*hGamnmix21*invhg13 + 
        12*hGamnmix11*hGamnmix23*invhg13 - 6*hPi12*hPi13*invhg13 - 
        6*hPi11*hPi23*invhg13 + 2*dhH22*hg12*invhg22 + 
        12*hGamnmix12*hGamnmix22*invhg22 - 6*hPi12*hPi22*invhg22 + 
        2*dhH23*hg12*invhg23 + 2*dhH32*hg12*invhg23 + 
        12*hGamnmix13*hGamnmix22*invhg23 + 
        12*hGamnmix12*hGamnmix23*invhg23 - 6*hPi13*hPi22*invhg23 - 
        6*hPi12*hPi23*invhg23 + 2*dhH33*hg12*invhg33 + 
        12*hGamnmix13*hGamnmix23*invhg33 - 6*hPi13*hPi23*invhg33 + 
        3*hg12*trPi - 6*hGam111*hGam211*Power(invhg11,2)*Power(W,2) + 
        6*hPhi111*hPhi112*Power(invhg11,2)*Power(W,2) - 
        12*hGam112*hGam211*invhg11*invhg12*Power(W,2) - 
        12*hGam111*hGam212*invhg11*invhg12*Power(W,2) + 
        6*Power(hPhi112,2)*invhg11*invhg12*Power(W,2) + 
        6*hPhi111*hPhi122*invhg11*invhg12*Power(W,2) + 
        6*hPhi112*hPhi211*invhg11*invhg12*Power(W,2) + 
        6*hPhi111*hPhi212*invhg11*invhg12*Power(W,2) - 
        6*hGam122*hGam211*Power(invhg12,2)*Power(W,2) - 
        12*hGam112*hGam212*Power(invhg12,2)*Power(W,2) - 
        6*hGam111*hGam222*Power(invhg12,2)*Power(W,2) + 
        6*hPhi122*hPhi211*Power(invhg12,2)*Power(W,2) + 
        12*hPhi112*hPhi212*Power(invhg12,2)*Power(W,2) + 
        6*hPhi111*hPhi222*Power(invhg12,2)*Power(W,2) - 
        12*hGam113*hGam211*invhg11*invhg13*Power(W,2) - 
        12*hGam111*hGam213*invhg11*invhg13*Power(W,2) + 
        6*hPhi112*hPhi113*invhg11*invhg13*Power(W,2) + 
        6*hPhi111*hPhi123*invhg11*invhg13*Power(W,2) + 
        6*hPhi112*hPhi311*invhg11*invhg13*Power(W,2) + 
        6*hPhi111*hPhi312*invhg11*invhg13*Power(W,2) - 
        12*hGam123*hGam211*invhg12*invhg13*Power(W,2) - 
        12*hGam113*hGam212*invhg12*invhg13*Power(W,2) - 
        12*hGam112*hGam213*invhg12*invhg13*Power(W,2) - 
        12*hGam111*hGam223*invhg12*invhg13*Power(W,2) + 
        6*hPhi123*hPhi211*invhg12*invhg13*Power(W,2) + 
        6*hPhi113*hPhi212*invhg12*invhg13*Power(W,2) + 
        6*hPhi112*hPhi213*invhg12*invhg13*Power(W,2) + 
        6*hPhi111*hPhi223*invhg12*invhg13*Power(W,2) + 
        6*hPhi122*hPhi311*invhg12*invhg13*Power(W,2) + 
        12*hPhi112*hPhi312*invhg12*invhg13*Power(W,2) + 
        6*hPhi111*hPhi322*invhg12*invhg13*Power(W,2) - 
        6*hGam133*hGam211*Power(invhg13,2)*Power(W,2) - 
        12*hGam113*hGam213*Power(invhg13,2)*Power(W,2) - 
        6*hGam111*hGam233*Power(invhg13,2)*Power(W,2) + 
        6*hPhi123*hPhi311*Power(invhg13,2)*Power(W,2) + 
        6*hPhi113*hPhi312*Power(invhg13,2)*Power(W,2) + 
        6*hPhi112*hPhi313*Power(invhg13,2)*Power(W,2) + 
        6*hPhi111*hPhi323*Power(invhg13,2)*Power(W,2) - 
        12*hGam112*hGam212*invhg11*invhg22*Power(W,2) + 
        6*hPhi112*hPhi122*invhg11*invhg22*Power(W,2) + 
        6*hPhi211*hPhi212*invhg11*invhg22*Power(W,2) - 
        12*hGam122*hGam212*invhg12*invhg22*Power(W,2) - 
        12*hGam112*hGam222*invhg12*invhg22*Power(W,2) + 
        6*hPhi122*hPhi212*invhg12*invhg22*Power(W,2) + 
        6*Power(hPhi212,2)*invhg12*invhg22*Power(W,2) + 
        6*hPhi112*hPhi222*invhg12*invhg22*Power(W,2) + 
        6*hPhi211*hPhi222*invhg12*invhg22*Power(W,2) - 
        12*hGam123*hGam212*invhg13*invhg22*Power(W,2) - 
        12*hGam112*hGam223*invhg13*invhg22*Power(W,2) + 
        6*hPhi212*hPhi213*invhg13*invhg22*Power(W,2) + 
        6*hPhi211*hPhi223*invhg13*invhg22*Power(W,2) + 
        6*hPhi122*hPhi312*invhg13*invhg22*Power(W,2) + 
        6*hPhi112*hPhi322*invhg13*invhg22*Power(W,2) - 
        6*hGam122*hGam222*Power(invhg22,2)*Power(W,2) + 
        6*hPhi212*hPhi222*Power(invhg22,2)*Power(W,2) - 
        12*hGam113*hGam212*invhg11*invhg23*Power(W,2) - 
        12*hGam112*hGam213*invhg11*invhg23*Power(W,2) + 
        6*hPhi113*hPhi122*invhg11*invhg23*Power(W,2) + 
        6*hPhi112*hPhi123*invhg11*invhg23*Power(W,2) + 
        6*hPhi212*hPhi311*invhg11*invhg23*Power(W,2) + 
        6*hPhi211*hPhi312*invhg11*invhg23*Power(W,2) - 
        12*hGam123*hGam212*invhg12*invhg23*Power(W,2) - 
        12*hGam122*hGam213*invhg12*invhg23*Power(W,2) - 
        12*hGam113*hGam222*invhg12*invhg23*Power(W,2) - 
        12*hGam112*hGam223*invhg12*invhg23*Power(W,2) + 
        6*hPhi123*hPhi212*invhg12*invhg23*Power(W,2) + 
        6*hPhi122*hPhi213*invhg12*invhg23*Power(W,2) + 
        6*hPhi113*hPhi222*invhg12*invhg23*Power(W,2) + 
        6*hPhi112*hPhi223*invhg12*invhg23*Power(W,2) + 
        6*hPhi222*hPhi311*invhg12*invhg23*Power(W,2) + 
        12*hPhi212*hPhi312*invhg12*invhg23*Power(W,2) + 
        6*hPhi211*hPhi322*invhg12*invhg23*Power(W,2) - 
        12*hGam133*hGam212*invhg13*invhg23*Power(W,2) - 
        12*hGam123*hGam213*invhg13*invhg23*Power(W,2) - 
        12*hGam113*hGam223*invhg13*invhg23*Power(W,2) - 
        12*hGam112*hGam233*invhg13*invhg23*Power(W,2) + 
        6*hPhi223*hPhi311*invhg13*invhg23*Power(W,2) + 
        6*hPhi123*hPhi312*invhg13*invhg23*Power(W,2) + 
        6*hPhi213*hPhi312*invhg13*invhg23*Power(W,2) + 
        6*hPhi122*hPhi313*invhg13*invhg23*Power(W,2) + 
        6*hPhi212*hPhi313*invhg13*invhg23*Power(W,2) + 
        6*hPhi113*hPhi322*invhg13*invhg23*Power(W,2) + 
        6*hPhi112*hPhi323*invhg13*invhg23*Power(W,2) + 
        6*hPhi211*hPhi323*invhg13*invhg23*Power(W,2) - 
        12*hGam123*hGam222*invhg22*invhg23*Power(W,2) - 
        12*hGam122*hGam223*invhg22*invhg23*Power(W,2) + 
        6*hPhi213*hPhi222*invhg22*invhg23*Power(W,2) + 
        6*hPhi212*hPhi223*invhg22*invhg23*Power(W,2) + 
        6*hPhi222*hPhi312*invhg22*invhg23*Power(W,2) + 
        6*hPhi212*hPhi322*invhg22*invhg23*Power(W,2) - 
        6*hGam133*hGam222*Power(invhg23,2)*Power(W,2) - 
        12*hGam123*hGam223*Power(invhg23,2)*Power(W,2) - 
        6*hGam122*hGam233*Power(invhg23,2)*Power(W,2) + 
        6*hPhi223*hPhi312*Power(invhg23,2)*Power(W,2) + 
        6*hPhi222*hPhi313*Power(invhg23,2)*Power(W,2) + 
        6*hPhi213*hPhi322*Power(invhg23,2)*Power(W,2) + 
        6*hPhi212*hPhi323*Power(invhg23,2)*Power(W,2) - 
        12*hGam113*hGam213*invhg11*invhg33*Power(W,2) + 
        6*hPhi113*hPhi123*invhg11*invhg33*Power(W,2) + 
        6*hPhi311*hPhi312*invhg11*invhg33*Power(W,2) - 
        12*hGam123*hGam213*invhg12*invhg33*Power(W,2) - 
        12*hGam113*hGam223*invhg12*invhg33*Power(W,2) + 
        6*hPhi123*hPhi213*invhg12*invhg33*Power(W,2) + 
        6*hPhi113*hPhi223*invhg12*invhg33*Power(W,2) + 
        6*Power(hPhi312,2)*invhg12*invhg33*Power(W,2) + 
        6*hPhi311*hPhi322*invhg12*invhg33*Power(W,2) - 
        12*hGam133*hGam213*invhg13*invhg33*Power(W,2) - 
        12*hGam113*hGam233*invhg13*invhg33*Power(W,2) + 
        6*hPhi123*hPhi313*invhg13*invhg33*Power(W,2) + 
        6*hPhi312*hPhi313*invhg13*invhg33*Power(W,2) + 
        6*hPhi113*hPhi323*invhg13*invhg33*Power(W,2) + 
        6*hPhi311*hPhi323*invhg13*invhg33*Power(W,2) - 
        12*hGam123*hGam223*invhg22*invhg33*Power(W,2) + 
        6*hPhi213*hPhi223*invhg22*invhg33*Power(W,2) + 
        6*hPhi312*hPhi322*invhg22*invhg33*Power(W,2) - 
        12*hGam133*hGam223*invhg23*invhg33*Power(W,2) - 
        12*hGam123*hGam233*invhg23*invhg33*Power(W,2) + 
        6*hPhi223*hPhi313*invhg23*invhg33*Power(W,2) + 
        6*hPhi313*hPhi322*invhg23*invhg33*Power(W,2) + 
        6*hPhi213*hPhi323*invhg23*invhg33*Power(W,2) + 
        6*hPhi312*hPhi323*invhg23*invhg33*Power(W,2) - 
        6*hGam133*hGam233*Power(invhg33,2)*Power(W,2) + 
        6*hPhi313*hPhi323*Power(invhg33,2)*Power(W,2) + 
        12*hGam112*invhg11*W*WPhi1 + 12*hGam211*invhg11*W*WPhi1 - 
        18*hPhi112*invhg11*W*WPhi1 + 12*hGam122*invhg12*W*WPhi1 + 
        12*hGam212*invhg12*W*WPhi1 - 6*hPhi122*invhg12*W*WPhi1 - 
        18*hPhi212*invhg12*W*WPhi1 + 12*hGam123*invhg13*W*WPhi1 + 
        12*hGam213*invhg13*W*WPhi1 - 6*hPhi123*invhg13*W*WPhi1 - 
        18*hPhi312*invhg13*W*WPhi1 - 6*hPhi222*invhg22*W*WPhi1 - 
        6*hPhi223*invhg23*W*WPhi1 - 6*hPhi322*invhg23*W*WPhi1 - 
        6*hPhi323*invhg33*W*WPhi1 - 6*hPhi111*invhg11*W*WPhi2 + 
        12*hGam112*invhg12*W*WPhi2 + 12*hGam211*invhg12*W*WPhi2 - 
        18*hPhi112*invhg12*W*WPhi2 - 6*hPhi211*invhg12*W*WPhi2 - 
        6*hPhi113*invhg13*W*WPhi2 - 6*hPhi311*invhg13*W*WPhi2 + 
        12*hGam122*invhg22*W*WPhi2 + 12*hGam212*invhg22*W*WPhi2 - 
        18*hPhi212*invhg22*W*WPhi2 + 12*hGam123*invhg23*W*WPhi2 + 
        12*hGam213*invhg23*W*WPhi2 - 6*hPhi213*invhg23*W*WPhi2 - 
        18*hPhi312*invhg23*W*WPhi2 - 6*hPhi313*invhg33*W*WPhi2 - 
        6*WPhi1*WPhi2 + 12*hGam112*invhg13*W*WPhi3 + 
        12*hGam211*invhg13*W*WPhi3 - 12*hPhi112*invhg13*W*WPhi3 + 
        12*hGam122*invhg23*W*WPhi3 + 12*hGam212*invhg23*W*WPhi3 - 
        12*hPhi212*invhg23*W*WPhi3 + 12*hGam123*invhg33*W*WPhi3 + 
        12*hGam213*invhg33*W*WPhi3 - 12*hPhi312*invhg33*W*WPhi3))/
   Power(alpha,2)
);

local_dthPi13.store(mask, index2, 
-0.16666666666666666*(6*Power(alpha,3)*
      (dhPhi1113*invgam11 + dhPhi1213*invgam12 + dhPhi2113*invgam12 + 
        dhPhi1313*invgam13 + dhPhi3113*invgam13 + dhPhi2213*invgam22 + 
        dhPhi2313*invgam23 + dhPhi3213*invgam23 + dhPhi3313*invgam33) + 
     3*(2*hH3*hPhinn1 + 2*hH1*hPhinn3 + 2*hPhinn3*hPinD1 + 
        2*hPhinn1*hPinD3 + 4*hPhinD11*hPhinD13*invhg11 + 
        4*hPhinD13*hPhinD21*invhg12 + 4*hPhinD11*hPhinD23*invhg12 + 
        4*hPhinD13*hPhinD31*invhg13 + 4*hPhinD11*hPhinD33*invhg13 + 
        4*hPhinD21*hPhinD23*invhg22 + 4*hPhinD23*hPhinD31*invhg23 + 
        4*hPhinD21*hPhinD33*invhg23 + 4*hPhinD31*hPhinD33*invhg33 + 
        hPhinn1*hPhinn3*Power(W,2)) + 
     3*alpha*(2*beta1*cgamma1*cgamma2*hPhi113 + 
        2*beta2*cgamma1*cgamma2*hPhi213 + 
        2*beta3*cgamma1*cgamma2*hPhi313 + 2*hPhi113*hPin1 + 
        2*hPhi213*hPin2 + 2*hPhi313*hPin3 - 4*hGam113*hH1*invhg11 - 
        4*hGam213*hH1*invhg12 - 4*hGam113*hH2*invhg12 - 
        4*hGam313*hH1*invhg13 - 4*hGam113*hH3*invhg13 - 
        4*hGam213*hH2*invhg22 - 4*hGam313*hH2*invhg23 - 
        4*hGam213*hH3*invhg23 - 4*hGam313*hH3*invhg33 + 
        hPhi113*hPhinn1*invhg11*Power(W,2) + 
        hPhi213*hPhinn1*invhg12*Power(W,2) + 
        hPhi113*hPhinn2*invhg12*Power(W,2) + 
        hPhi313*hPhinn1*invhg13*Power(W,2) + 
        hPhi113*hPhinn3*invhg13*Power(W,2) + 
        hPhi213*hPhinn2*invhg22*Power(W,2) + 
        hPhi313*hPhinn2*invhg23*Power(W,2) + 
        hPhi213*hPhinn3*invhg23*Power(W,2) + 
        hPhi313*hPhinn3*invhg33*Power(W,2)) - 
     2*Power(alpha,2)*(3*beta3*cgamma1*cgamma2*dhg313 - 3*dhH13 - 3*dhH31 + 
        3*beta1*(cgamma1*cgamma2*dhg113 + dhPi113) + 
        3*beta2*(cgamma1*cgamma2*dhg213 + dhPi213) + 3*beta3*dhPi313 - 
        6*hGamn13*hHn + 2*dhH11*hg13*invhg11 + 
        12*hGamnmix11*hGamnmix31*invhg11 - 6*hPi11*hPi13*invhg11 + 
        2*dhH12*hg13*invhg12 + 2*dhH21*hg13*invhg12 + 
        12*hGamnmix12*hGamnmix31*invhg12 + 
        12*hGamnmix11*hGamnmix32*invhg12 - 6*hPi12*hPi13*invhg12 - 
        6*hPi11*hPi23*invhg12 + 2*dhH13*hg13*invhg13 + 
        2*dhH31*hg13*invhg13 + 12*hGamnmix13*hGamnmix31*invhg13 + 
        12*hGamnmix11*hGamnmix33*invhg13 - 6*Power(hPi13,2)*invhg13 - 
        6*hPi11*hPi33*invhg13 + 2*dhH22*hg13*invhg22 + 
        12*hGamnmix12*hGamnmix32*invhg22 - 6*hPi12*hPi23*invhg22 + 
        2*dhH23*hg13*invhg23 + 2*dhH32*hg13*invhg23 + 
        12*hGamnmix13*hGamnmix32*invhg23 + 
        12*hGamnmix12*hGamnmix33*invhg23 - 6*hPi13*hPi23*invhg23 - 
        6*hPi12*hPi33*invhg23 + 2*dhH33*hg13*invhg33 + 
        12*hGamnmix13*hGamnmix33*invhg33 - 6*hPi13*hPi33*invhg33 + 
        3*hg13*trPi - 6*hGam111*hGam311*Power(invhg11,2)*Power(W,2) + 
        6*hPhi111*hPhi113*Power(invhg11,2)*Power(W,2) - 
        12*hGam112*hGam311*invhg11*invhg12*Power(W,2) - 
        12*hGam111*hGam312*invhg11*invhg12*Power(W,2) + 
        6*hPhi112*hPhi113*invhg11*invhg12*Power(W,2) + 
        6*hPhi111*hPhi123*invhg11*invhg12*Power(W,2) + 
        6*hPhi113*hPhi211*invhg11*invhg12*Power(W,2) + 
        6*hPhi111*hPhi213*invhg11*invhg12*Power(W,2) - 
        6*hGam122*hGam311*Power(invhg12,2)*Power(W,2) - 
        12*hGam112*hGam312*Power(invhg12,2)*Power(W,2) - 
        6*hGam111*hGam322*Power(invhg12,2)*Power(W,2) + 
        6*hPhi123*hPhi211*Power(invhg12,2)*Power(W,2) + 
        6*hPhi113*hPhi212*Power(invhg12,2)*Power(W,2) + 
        6*hPhi112*hPhi213*Power(invhg12,2)*Power(W,2) + 
        6*hPhi111*hPhi223*Power(invhg12,2)*Power(W,2) - 
        12*hGam113*hGam311*invhg11*invhg13*Power(W,2) - 
        12*hGam111*hGam313*invhg11*invhg13*Power(W,2) + 
        6*Power(hPhi113,2)*invhg11*invhg13*Power(W,2) + 
        6*hPhi111*hPhi133*invhg11*invhg13*Power(W,2) + 
        6*hPhi113*hPhi311*invhg11*invhg13*Power(W,2) + 
        6*hPhi111*hPhi313*invhg11*invhg13*Power(W,2) - 
        12*hGam123*hGam311*invhg12*invhg13*Power(W,2) - 
        12*hGam113*hGam312*invhg12*invhg13*Power(W,2) - 
        12*hGam112*hGam313*invhg12*invhg13*Power(W,2) - 
        12*hGam111*hGam323*invhg12*invhg13*Power(W,2) + 
        6*hPhi133*hPhi211*invhg12*invhg13*Power(W,2) + 
        12*hPhi113*hPhi213*invhg12*invhg13*Power(W,2) + 
        6*hPhi111*hPhi233*invhg12*invhg13*Power(W,2) + 
        6*hPhi123*hPhi311*invhg12*invhg13*Power(W,2) + 
        6*hPhi113*hPhi312*invhg12*invhg13*Power(W,2) + 
        6*hPhi112*hPhi313*invhg12*invhg13*Power(W,2) + 
        6*hPhi111*hPhi323*invhg12*invhg13*Power(W,2) - 
        6*hGam133*hGam311*Power(invhg13,2)*Power(W,2) - 
        12*hGam113*hGam313*Power(invhg13,2)*Power(W,2) - 
        6*hGam111*hGam333*Power(invhg13,2)*Power(W,2) + 
        6*hPhi133*hPhi311*Power(invhg13,2)*Power(W,2) + 
        12*hPhi113*hPhi313*Power(invhg13,2)*Power(W,2) + 
        6*hPhi111*hPhi333*Power(invhg13,2)*Power(W,2) - 
        12*hGam112*hGam312*invhg11*invhg22*Power(W,2) + 
        6*hPhi112*hPhi123*invhg11*invhg22*Power(W,2) + 
        6*hPhi211*hPhi213*invhg11*invhg22*Power(W,2) - 
        12*hGam122*hGam312*invhg12*invhg22*Power(W,2) - 
        12*hGam112*hGam322*invhg12*invhg22*Power(W,2) + 
        6*hPhi123*hPhi212*invhg12*invhg22*Power(W,2) + 
        6*hPhi212*hPhi213*invhg12*invhg22*Power(W,2) + 
        6*hPhi112*hPhi223*invhg12*invhg22*Power(W,2) + 
        6*hPhi211*hPhi223*invhg12*invhg22*Power(W,2) - 
        12*hGam123*hGam312*invhg13*invhg22*Power(W,2) - 
        12*hGam112*hGam323*invhg13*invhg22*Power(W,2) + 
        6*Power(hPhi213,2)*invhg13*invhg22*Power(W,2) + 
        6*hPhi211*hPhi233*invhg13*invhg22*Power(W,2) + 
        6*hPhi123*hPhi312*invhg13*invhg22*Power(W,2) + 
        6*hPhi112*hPhi323*invhg13*invhg22*Power(W,2) - 
        6*hGam122*hGam322*Power(invhg22,2)*Power(W,2) + 
        6*hPhi212*hPhi223*Power(invhg22,2)*Power(W,2) - 
        12*hGam113*hGam312*invhg11*invhg23*Power(W,2) - 
        12*hGam112*hGam313*invhg11*invhg23*Power(W,2) + 
        6*hPhi113*hPhi123*invhg11*invhg23*Power(W,2) + 
        6*hPhi112*hPhi133*invhg11*invhg23*Power(W,2) + 
        6*hPhi213*hPhi311*invhg11*invhg23*Power(W,2) + 
        6*hPhi211*hPhi313*invhg11*invhg23*Power(W,2) - 
        12*hGam123*hGam312*invhg12*invhg23*Power(W,2) - 
        12*hGam122*hGam313*invhg12*invhg23*Power(W,2) - 
        12*hGam113*hGam322*invhg12*invhg23*Power(W,2) - 
        12*hGam112*hGam323*invhg12*invhg23*Power(W,2) + 
        6*hPhi133*hPhi212*invhg12*invhg23*Power(W,2) + 
        6*hPhi123*hPhi213*invhg12*invhg23*Power(W,2) + 
        6*hPhi113*hPhi223*invhg12*invhg23*Power(W,2) + 
        6*hPhi112*hPhi233*invhg12*invhg23*Power(W,2) + 
        6*hPhi223*hPhi311*invhg12*invhg23*Power(W,2) + 
        6*hPhi213*hPhi312*invhg12*invhg23*Power(W,2) + 
        6*hPhi212*hPhi313*invhg12*invhg23*Power(W,2) + 
        6*hPhi211*hPhi323*invhg12*invhg23*Power(W,2) - 
        12*hGam133*hGam312*invhg13*invhg23*Power(W,2) - 
        12*hGam123*hGam313*invhg13*invhg23*Power(W,2) - 
        12*hGam113*hGam323*invhg13*invhg23*Power(W,2) - 
        12*hGam112*hGam333*invhg13*invhg23*Power(W,2) + 
        6*hPhi233*hPhi311*invhg13*invhg23*Power(W,2) + 
        6*hPhi133*hPhi312*invhg13*invhg23*Power(W,2) + 
        6*hPhi123*hPhi313*invhg13*invhg23*Power(W,2) + 
        12*hPhi213*hPhi313*invhg13*invhg23*Power(W,2) + 
        6*hPhi113*hPhi323*invhg13*invhg23*Power(W,2) + 
        6*hPhi112*hPhi333*invhg13*invhg23*Power(W,2) + 
        6*hPhi211*hPhi333*invhg13*invhg23*Power(W,2) - 
        12*hGam123*hGam322*invhg22*invhg23*Power(W,2) - 
        12*hGam122*hGam323*invhg22*invhg23*Power(W,2) + 
        6*hPhi213*hPhi223*invhg22*invhg23*Power(W,2) + 
        6*hPhi212*hPhi233*invhg22*invhg23*Power(W,2) + 
        6*hPhi223*hPhi312*invhg22*invhg23*Power(W,2) + 
        6*hPhi212*hPhi323*invhg22*invhg23*Power(W,2) - 
        6*hGam133*hGam322*Power(invhg23,2)*Power(W,2) - 
        12*hGam123*hGam323*Power(invhg23,2)*Power(W,2) - 
        6*hGam122*hGam333*Power(invhg23,2)*Power(W,2) + 
        6*hPhi233*hPhi312*Power(invhg23,2)*Power(W,2) + 
        6*hPhi223*hPhi313*Power(invhg23,2)*Power(W,2) + 
        6*hPhi213*hPhi323*Power(invhg23,2)*Power(W,2) + 
        6*hPhi212*hPhi333*Power(invhg23,2)*Power(W,2) - 
        12*hGam113*hGam313*invhg11*invhg33*Power(W,2) + 
        6*hPhi113*hPhi133*invhg11*invhg33*Power(W,2) + 
        6*hPhi311*hPhi313*invhg11*invhg33*Power(W,2) - 
        12*hGam123*hGam313*invhg12*invhg33*Power(W,2) - 
        12*hGam113*hGam323*invhg12*invhg33*Power(W,2) + 
        6*hPhi133*hPhi213*invhg12*invhg33*Power(W,2) + 
        6*hPhi113*hPhi233*invhg12*invhg33*Power(W,2) + 
        6*hPhi312*hPhi313*invhg12*invhg33*Power(W,2) + 
        6*hPhi311*hPhi323*invhg12*invhg33*Power(W,2) - 
        12*hGam133*hGam313*invhg13*invhg33*Power(W,2) - 
        12*hGam113*hGam333*invhg13*invhg33*Power(W,2) + 
        6*hPhi133*hPhi313*invhg13*invhg33*Power(W,2) + 
        6*Power(hPhi313,2)*invhg13*invhg33*Power(W,2) + 
        6*hPhi113*hPhi333*invhg13*invhg33*Power(W,2) + 
        6*hPhi311*hPhi333*invhg13*invhg33*Power(W,2) - 
        12*hGam123*hGam323*invhg22*invhg33*Power(W,2) + 
        6*hPhi213*hPhi233*invhg22*invhg33*Power(W,2) + 
        6*hPhi312*hPhi323*invhg22*invhg33*Power(W,2) - 
        12*hGam133*hGam323*invhg23*invhg33*Power(W,2) - 
        12*hGam123*hGam333*invhg23*invhg33*Power(W,2) + 
        6*hPhi233*hPhi313*invhg23*invhg33*Power(W,2) + 
        6*hPhi313*hPhi323*invhg23*invhg33*Power(W,2) + 
        6*hPhi213*hPhi333*invhg23*invhg33*Power(W,2) + 
        6*hPhi312*hPhi333*invhg23*invhg33*Power(W,2) - 
        6*hGam133*hGam333*Power(invhg33,2)*Power(W,2) + 
        6*hPhi313*hPhi333*Power(invhg33,2)*Power(W,2) + 
        12*hGam113*invhg11*W*WPhi1 + 12*hGam311*invhg11*W*WPhi1 - 
        18*hPhi113*invhg11*W*WPhi1 + 12*hGam123*invhg12*W*WPhi1 + 
        12*hGam312*invhg12*W*WPhi1 - 6*hPhi123*invhg12*W*WPhi1 - 
        18*hPhi213*invhg12*W*WPhi1 + 12*hGam133*invhg13*W*WPhi1 + 
        12*hGam313*invhg13*W*WPhi1 - 6*hPhi133*invhg13*W*WPhi1 - 
        18*hPhi313*invhg13*W*WPhi1 - 6*hPhi223*invhg22*W*WPhi1 - 
        6*hPhi233*invhg23*W*WPhi1 - 6*hPhi323*invhg23*W*WPhi1 - 
        6*hPhi333*invhg33*W*WPhi1 + 12*hGam113*invhg12*W*WPhi2 + 
        12*hGam311*invhg12*W*WPhi2 - 12*hPhi113*invhg12*W*WPhi2 + 
        12*hGam123*invhg22*W*WPhi2 + 12*hGam312*invhg22*W*WPhi2 - 
        12*hPhi213*invhg22*W*WPhi2 + 12*hGam133*invhg23*W*WPhi2 + 
        12*hGam313*invhg23*W*WPhi2 - 12*hPhi313*invhg23*W*WPhi2 - 
        6*hPhi111*invhg11*W*WPhi3 - 6*hPhi112*invhg12*W*WPhi3 - 
        6*hPhi211*invhg12*W*WPhi3 + 12*hGam113*invhg13*W*WPhi3 + 
        12*hGam311*invhg13*W*WPhi3 - 18*hPhi113*invhg13*W*WPhi3 - 
        6*hPhi311*invhg13*W*WPhi3 - 6*hPhi212*invhg22*W*WPhi3 + 
        12*hGam123*invhg23*W*WPhi3 + 12*hGam312*invhg23*W*WPhi3 - 
        18*hPhi213*invhg23*W*WPhi3 - 6*hPhi312*invhg23*W*WPhi3 + 
        12*hGam133*invhg33*W*WPhi3 + 12*hGam313*invhg33*W*WPhi3 - 
        18*hPhi313*invhg33*W*WPhi3 - 6*WPhi1*WPhi3))/Power(alpha,2)
);

local_dthPi22.store(mask, index2, 
-0.16666666666666666*(6*Power(alpha,3)*
      (dhPhi1122*invgam11 + dhPhi1222*invgam12 + dhPhi2122*invgam12 + 
        dhPhi1322*invgam13 + dhPhi3122*invgam13 + dhPhi2222*invgam22 + 
        dhPhi2322*invgam23 + dhPhi3222*invgam23 + dhPhi3322*invgam33) + 
     3*(4*hH2*hPhinn2 + 4*hPhinn2*hPinD2 + 
        4*(Power(hPhinD12,2)*invhg11 + 2*hPhinD12*hPhinD22*invhg12 + 
           2*hPhinD12*hPhinD32*invhg13 + Power(hPhinD22,2)*invhg22 + 
           2*hPhinD22*hPhinD32*invhg23 + Power(hPhinD32,2)*invhg33) + 
        Power(hPhinn2,2)*Power(W,2)) + 
     3*alpha*(2*beta1*cgamma1*cgamma2*hPhi122 + 
        2*beta2*cgamma1*cgamma2*hPhi222 + 
        2*beta3*cgamma1*cgamma2*hPhi322 + 2*hPhi122*hPin1 + 
        2*hPhi222*hPin2 + 2*hPhi322*hPin3 - 4*hGam122*hH1*invhg11 - 
        4*hGam222*hH1*invhg12 - 4*hGam122*hH2*invhg12 - 
        4*hGam322*hH1*invhg13 - 4*hGam122*hH3*invhg13 - 
        4*hGam222*hH2*invhg22 - 4*hGam322*hH2*invhg23 - 
        4*hGam222*hH3*invhg23 - 4*hGam322*hH3*invhg33 + 
        hPhi122*hPhinn1*invhg11*Power(W,2) + 
        hPhi222*hPhinn1*invhg12*Power(W,2) + 
        hPhi122*hPhinn2*invhg12*Power(W,2) + 
        hPhi322*hPhinn1*invhg13*Power(W,2) + 
        hPhi122*hPhinn3*invhg13*Power(W,2) + 
        hPhi222*hPhinn2*invhg22*Power(W,2) + 
        hPhi322*hPhinn2*invhg23*Power(W,2) + 
        hPhi222*hPhinn3*invhg23*Power(W,2) + 
        hPhi322*hPhinn3*invhg33*Power(W,2)) - 
     2*Power(alpha,2)*(3*beta3*cgamma1*cgamma2*dhg322 - 6*dhH22 + 
        3*beta1*(cgamma1*cgamma2*dhg122 + dhPi122) + 
        3*beta2*(cgamma1*cgamma2*dhg222 + dhPi222) + 3*beta3*dhPi322 - 
        6*hGamn22*hHn + 2*dhH11*hg22*invhg11 + 
        12*Power(hGamnmix21,2)*invhg11 - 6*Power(hPi12,2)*invhg11 + 
        2*dhH12*hg22*invhg12 + 2*dhH21*hg22*invhg12 + 
        24*hGamnmix21*hGamnmix22*invhg12 - 12*hPi12*hPi22*invhg12 + 
        2*dhH13*hg22*invhg13 + 2*dhH31*hg22*invhg13 + 
        24*hGamnmix21*hGamnmix23*invhg13 - 12*hPi12*hPi23*invhg13 + 
        2*dhH22*hg22*invhg22 + 12*Power(hGamnmix22,2)*invhg22 - 
        6*Power(hPi22,2)*invhg22 + 2*dhH23*hg22*invhg23 + 
        2*dhH32*hg22*invhg23 + 24*hGamnmix22*hGamnmix23*invhg23 - 
        12*hPi22*hPi23*invhg23 + 2*dhH33*hg22*invhg33 + 
        12*Power(hGamnmix23,2)*invhg33 - 6*Power(hPi23,2)*invhg33 + 
        3*hg22*trPi - 6*Power(hGam211,2)*Power(invhg11,2)*Power(W,2) + 
        6*Power(hPhi112,2)*Power(invhg11,2)*Power(W,2) - 
        24*hGam211*hGam212*invhg11*invhg12*Power(W,2) + 
        12*hPhi112*hPhi122*invhg11*invhg12*Power(W,2) + 
        12*hPhi112*hPhi212*invhg11*invhg12*Power(W,2) - 
        12*Power(hGam212,2)*Power(invhg12,2)*Power(W,2) - 
        12*hGam211*hGam222*Power(invhg12,2)*Power(W,2) + 
        12*hPhi122*hPhi212*Power(invhg12,2)*Power(W,2) + 
        12*hPhi112*hPhi222*Power(invhg12,2)*Power(W,2) - 
        24*hGam211*hGam213*invhg11*invhg13*Power(W,2) + 
        12*hPhi112*hPhi123*invhg11*invhg13*Power(W,2) + 
        12*hPhi112*hPhi312*invhg11*invhg13*Power(W,2) - 
        24*hGam212*hGam213*invhg12*invhg13*Power(W,2) - 
        24*hGam211*hGam223*invhg12*invhg13*Power(W,2) + 
        12*hPhi123*hPhi212*invhg12*invhg13*Power(W,2) + 
        12*hPhi112*hPhi223*invhg12*invhg13*Power(W,2) + 
        12*hPhi122*hPhi312*invhg12*invhg13*Power(W,2) + 
        12*hPhi112*hPhi322*invhg12*invhg13*Power(W,2) - 
        12*Power(hGam213,2)*Power(invhg13,2)*Power(W,2) - 
        12*hGam211*hGam233*Power(invhg13,2)*Power(W,2) + 
        12*hPhi123*hPhi312*Power(invhg13,2)*Power(W,2) + 
        12*hPhi112*hPhi323*Power(invhg13,2)*Power(W,2) - 
        12*Power(hGam212,2)*invhg11*invhg22*Power(W,2) + 
        6*Power(hPhi122,2)*invhg11*invhg22*Power(W,2) + 
        6*Power(hPhi212,2)*invhg11*invhg22*Power(W,2) - 
        24*hGam212*hGam222*invhg12*invhg22*Power(W,2) + 
        12*hPhi122*hPhi222*invhg12*invhg22*Power(W,2) + 
        12*hPhi212*hPhi222*invhg12*invhg22*Power(W,2) - 
        24*hGam212*hGam223*invhg13*invhg22*Power(W,2) + 
        12*hPhi212*hPhi223*invhg13*invhg22*Power(W,2) + 
        12*hPhi122*hPhi322*invhg13*invhg22*Power(W,2) - 
        6*Power(hGam222,2)*Power(invhg22,2)*Power(W,2) + 
        6*Power(hPhi222,2)*Power(invhg22,2)*Power(W,2) - 
        24*hGam212*hGam213*invhg11*invhg23*Power(W,2) + 
        12*hPhi122*hPhi123*invhg11*invhg23*Power(W,2) + 
        12*hPhi212*hPhi312*invhg11*invhg23*Power(W,2) - 
        24*hGam213*hGam222*invhg12*invhg23*Power(W,2) - 
        24*hGam212*hGam223*invhg12*invhg23*Power(W,2) + 
        12*hPhi123*hPhi222*invhg12*invhg23*Power(W,2) + 
        12*hPhi122*hPhi223*invhg12*invhg23*Power(W,2) + 
        12*hPhi222*hPhi312*invhg12*invhg23*Power(W,2) + 
        12*hPhi212*hPhi322*invhg12*invhg23*Power(W,2) - 
        24*hGam213*hGam223*invhg13*invhg23*Power(W,2) - 
        24*hGam212*hGam233*invhg13*invhg23*Power(W,2) + 
        12*hPhi223*hPhi312*invhg13*invhg23*Power(W,2) + 
        12*hPhi123*hPhi322*invhg13*invhg23*Power(W,2) + 
        12*hPhi122*hPhi323*invhg13*invhg23*Power(W,2) + 
        12*hPhi212*hPhi323*invhg13*invhg23*Power(W,2) - 
        24*hGam222*hGam223*invhg22*invhg23*Power(W,2) + 
        12*hPhi222*hPhi223*invhg22*invhg23*Power(W,2) + 
        12*hPhi222*hPhi322*invhg22*invhg23*Power(W,2) - 
        12*Power(hGam223,2)*Power(invhg23,2)*Power(W,2) - 
        12*hGam222*hGam233*Power(invhg23,2)*Power(W,2) + 
        12*hPhi223*hPhi322*Power(invhg23,2)*Power(W,2) + 
        12*hPhi222*hPhi323*Power(invhg23,2)*Power(W,2) - 
        12*Power(hGam213,2)*invhg11*invhg33*Power(W,2) + 
        6*Power(hPhi123,2)*invhg11*invhg33*Power(W,2) + 
        6*Power(hPhi312,2)*invhg11*invhg33*Power(W,2) - 
        24*hGam213*hGam223*invhg12*invhg33*Power(W,2) + 
        12*hPhi123*hPhi223*invhg12*invhg33*Power(W,2) + 
        12*hPhi312*hPhi322*invhg12*invhg33*Power(W,2) - 
        24*hGam213*hGam233*invhg13*invhg33*Power(W,2) + 
        12*hPhi123*hPhi323*invhg13*invhg33*Power(W,2) + 
        12*hPhi312*hPhi323*invhg13*invhg33*Power(W,2) - 
        12*Power(hGam223,2)*invhg22*invhg33*Power(W,2) + 
        6*Power(hPhi223,2)*invhg22*invhg33*Power(W,2) + 
        6*Power(hPhi322,2)*invhg22*invhg33*Power(W,2) - 
        24*hGam223*hGam233*invhg23*invhg33*Power(W,2) + 
        12*hPhi223*hPhi323*invhg23*invhg33*Power(W,2) + 
        12*hPhi322*hPhi323*invhg23*invhg33*Power(W,2) - 
        6*Power(hGam233,2)*Power(invhg33,2)*Power(W,2) + 
        6*Power(hPhi323,2)*Power(invhg33,2)*Power(W,2) + 
        24*hGam212*invhg11*W*WPhi1 - 12*hPhi122*invhg11*W*WPhi1 + 
        24*hGam222*invhg12*W*WPhi1 - 12*hPhi222*invhg12*W*WPhi1 + 
        24*hGam223*invhg13*W*WPhi1 - 12*hPhi322*invhg13*W*WPhi1 - 
        12*hPhi112*invhg11*W*WPhi2 + 24*hGam212*invhg12*W*WPhi2 - 
        24*hPhi122*invhg12*W*WPhi2 - 12*hPhi212*invhg12*W*WPhi2 - 
        12*hPhi123*invhg13*W*WPhi2 - 12*hPhi312*invhg13*W*WPhi2 + 
        24*hGam222*invhg22*W*WPhi2 - 24*hPhi222*invhg22*W*WPhi2 + 
        24*hGam223*invhg23*W*WPhi2 - 12*hPhi223*invhg23*W*WPhi2 - 
        24*hPhi322*invhg23*W*WPhi2 - 12*hPhi323*invhg33*W*WPhi2 - 
        6*Power(WPhi2,2) + 24*hGam212*invhg13*W*WPhi3 - 
        12*hPhi122*invhg13*W*WPhi3 + 24*hGam222*invhg23*W*WPhi3 - 
        12*hPhi222*invhg23*W*WPhi3 + 24*hGam223*invhg33*W*WPhi3 - 
        12*hPhi322*invhg33*W*WPhi3))/Power(alpha,2)
);

local_dthPi23.store(mask, index2, 
-0.16666666666666666*(6*Power(alpha,3)*
      (dhPhi1123*invgam11 + dhPhi1223*invgam12 + dhPhi2123*invgam12 + 
        dhPhi1323*invgam13 + dhPhi3123*invgam13 + dhPhi2223*invgam22 + 
        dhPhi2323*invgam23 + dhPhi3223*invgam23 + dhPhi3323*invgam33) + 
     3*(2*hH3*hPhinn2 + 2*hH2*hPhinn3 + 2*hPhinn3*hPinD2 + 
        2*hPhinn2*hPinD3 + 4*hPhinD12*hPhinD13*invhg11 + 
        4*hPhinD13*hPhinD22*invhg12 + 4*hPhinD12*hPhinD23*invhg12 + 
        4*hPhinD13*hPhinD32*invhg13 + 4*hPhinD12*hPhinD33*invhg13 + 
        4*hPhinD22*hPhinD23*invhg22 + 4*hPhinD23*hPhinD32*invhg23 + 
        4*hPhinD22*hPhinD33*invhg23 + 4*hPhinD32*hPhinD33*invhg33 + 
        hPhinn2*hPhinn3*Power(W,2)) + 
     3*alpha*(2*beta1*cgamma1*cgamma2*hPhi123 + 
        2*beta2*cgamma1*cgamma2*hPhi223 + 
        2*beta3*cgamma1*cgamma2*hPhi323 + 2*hPhi123*hPin1 + 
        2*hPhi223*hPin2 + 2*hPhi323*hPin3 - 4*hGam123*hH1*invhg11 - 
        4*hGam223*hH1*invhg12 - 4*hGam123*hH2*invhg12 - 
        4*hGam323*hH1*invhg13 - 4*hGam123*hH3*invhg13 - 
        4*hGam223*hH2*invhg22 - 4*hGam323*hH2*invhg23 - 
        4*hGam223*hH3*invhg23 - 4*hGam323*hH3*invhg33 + 
        hPhi123*hPhinn1*invhg11*Power(W,2) + 
        hPhi223*hPhinn1*invhg12*Power(W,2) + 
        hPhi123*hPhinn2*invhg12*Power(W,2) + 
        hPhi323*hPhinn1*invhg13*Power(W,2) + 
        hPhi123*hPhinn3*invhg13*Power(W,2) + 
        hPhi223*hPhinn2*invhg22*Power(W,2) + 
        hPhi323*hPhinn2*invhg23*Power(W,2) + 
        hPhi223*hPhinn3*invhg23*Power(W,2) + 
        hPhi323*hPhinn3*invhg33*Power(W,2)) - 
     2*Power(alpha,2)*(3*beta3*cgamma1*cgamma2*dhg323 - 3*dhH23 - 3*dhH32 + 
        3*beta1*(cgamma1*cgamma2*dhg123 + dhPi123) + 
        3*beta2*(cgamma1*cgamma2*dhg223 + dhPi223) + 3*beta3*dhPi323 - 
        6*hGamn23*hHn + 2*dhH11*hg23*invhg11 + 
        12*hGamnmix21*hGamnmix31*invhg11 - 6*hPi12*hPi13*invhg11 + 
        2*dhH12*hg23*invhg12 + 2*dhH21*hg23*invhg12 + 
        12*hGamnmix22*hGamnmix31*invhg12 + 
        12*hGamnmix21*hGamnmix32*invhg12 - 6*hPi13*hPi22*invhg12 - 
        6*hPi12*hPi23*invhg12 + 2*dhH13*hg23*invhg13 + 
        2*dhH31*hg23*invhg13 + 12*hGamnmix23*hGamnmix31*invhg13 + 
        12*hGamnmix21*hGamnmix33*invhg13 - 6*hPi13*hPi23*invhg13 - 
        6*hPi12*hPi33*invhg13 + 2*dhH22*hg23*invhg22 + 
        12*hGamnmix22*hGamnmix32*invhg22 - 6*hPi22*hPi23*invhg22 + 
        2*dhH23*hg23*invhg23 + 2*dhH32*hg23*invhg23 + 
        12*hGamnmix23*hGamnmix32*invhg23 + 
        12*hGamnmix22*hGamnmix33*invhg23 - 6*Power(hPi23,2)*invhg23 - 
        6*hPi22*hPi33*invhg23 + 2*dhH33*hg23*invhg33 + 
        12*hGamnmix23*hGamnmix33*invhg33 - 6*hPi23*hPi33*invhg33 + 
        3*hg23*trPi - 6*hGam211*hGam311*Power(invhg11,2)*Power(W,2) + 
        6*hPhi112*hPhi113*Power(invhg11,2)*Power(W,2) - 
        12*hGam212*hGam311*invhg11*invhg12*Power(W,2) - 
        12*hGam211*hGam312*invhg11*invhg12*Power(W,2) + 
        6*hPhi113*hPhi122*invhg11*invhg12*Power(W,2) + 
        6*hPhi112*hPhi123*invhg11*invhg12*Power(W,2) + 
        6*hPhi113*hPhi212*invhg11*invhg12*Power(W,2) + 
        6*hPhi112*hPhi213*invhg11*invhg12*Power(W,2) - 
        6*hGam222*hGam311*Power(invhg12,2)*Power(W,2) - 
        12*hGam212*hGam312*Power(invhg12,2)*Power(W,2) - 
        6*hGam211*hGam322*Power(invhg12,2)*Power(W,2) + 
        6*hPhi123*hPhi212*Power(invhg12,2)*Power(W,2) + 
        6*hPhi122*hPhi213*Power(invhg12,2)*Power(W,2) + 
        6*hPhi113*hPhi222*Power(invhg12,2)*Power(W,2) + 
        6*hPhi112*hPhi223*Power(invhg12,2)*Power(W,2) - 
        12*hGam213*hGam311*invhg11*invhg13*Power(W,2) - 
        12*hGam211*hGam313*invhg11*invhg13*Power(W,2) + 
        6*hPhi113*hPhi123*invhg11*invhg13*Power(W,2) + 
        6*hPhi112*hPhi133*invhg11*invhg13*Power(W,2) + 
        6*hPhi113*hPhi312*invhg11*invhg13*Power(W,2) + 
        6*hPhi112*hPhi313*invhg11*invhg13*Power(W,2) - 
        12*hGam223*hGam311*invhg12*invhg13*Power(W,2) - 
        12*hGam213*hGam312*invhg12*invhg13*Power(W,2) - 
        12*hGam212*hGam313*invhg12*invhg13*Power(W,2) - 
        12*hGam211*hGam323*invhg12*invhg13*Power(W,2) + 
        6*hPhi133*hPhi212*invhg12*invhg13*Power(W,2) + 
        6*hPhi123*hPhi213*invhg12*invhg13*Power(W,2) + 
        6*hPhi113*hPhi223*invhg12*invhg13*Power(W,2) + 
        6*hPhi112*hPhi233*invhg12*invhg13*Power(W,2) + 
        6*hPhi123*hPhi312*invhg12*invhg13*Power(W,2) + 
        6*hPhi122*hPhi313*invhg12*invhg13*Power(W,2) + 
        6*hPhi113*hPhi322*invhg12*invhg13*Power(W,2) + 
        6*hPhi112*hPhi323*invhg12*invhg13*Power(W,2) - 
        6*hGam233*hGam311*Power(invhg13,2)*Power(W,2) - 
        12*hGam213*hGam313*Power(invhg13,2)*Power(W,2) - 
        6*hGam211*hGam333*Power(invhg13,2)*Power(W,2) + 
        6*hPhi133*hPhi312*Power(invhg13,2)*Power(W,2) + 
        6*hPhi123*hPhi313*Power(invhg13,2)*Power(W,2) + 
        6*hPhi113*hPhi323*Power(invhg13,2)*Power(W,2) + 
        6*hPhi112*hPhi333*Power(invhg13,2)*Power(W,2) - 
        12*hGam212*hGam312*invhg11*invhg22*Power(W,2) + 
        6*hPhi122*hPhi123*invhg11*invhg22*Power(W,2) + 
        6*hPhi212*hPhi213*invhg11*invhg22*Power(W,2) - 
        12*hGam222*hGam312*invhg12*invhg22*Power(W,2) - 
        12*hGam212*hGam322*invhg12*invhg22*Power(W,2) + 
        6*hPhi123*hPhi222*invhg12*invhg22*Power(W,2) + 
        6*hPhi213*hPhi222*invhg12*invhg22*Power(W,2) + 
        6*hPhi122*hPhi223*invhg12*invhg22*Power(W,2) + 
        6*hPhi212*hPhi223*invhg12*invhg22*Power(W,2) - 
        12*hGam223*hGam312*invhg13*invhg22*Power(W,2) - 
        12*hGam212*hGam323*invhg13*invhg22*Power(W,2) + 
        6*hPhi213*hPhi223*invhg13*invhg22*Power(W,2) + 
        6*hPhi212*hPhi233*invhg13*invhg22*Power(W,2) + 
        6*hPhi123*hPhi322*invhg13*invhg22*Power(W,2) + 
        6*hPhi122*hPhi323*invhg13*invhg22*Power(W,2) - 
        6*hGam222*hGam322*Power(invhg22,2)*Power(W,2) + 
        6*hPhi222*hPhi223*Power(invhg22,2)*Power(W,2) - 
        12*hGam213*hGam312*invhg11*invhg23*Power(W,2) - 
        12*hGam212*hGam313*invhg11*invhg23*Power(W,2) + 
        6*Power(hPhi123,2)*invhg11*invhg23*Power(W,2) + 
        6*hPhi122*hPhi133*invhg11*invhg23*Power(W,2) + 
        6*hPhi213*hPhi312*invhg11*invhg23*Power(W,2) + 
        6*hPhi212*hPhi313*invhg11*invhg23*Power(W,2) - 
        12*hGam223*hGam312*invhg12*invhg23*Power(W,2) - 
        12*hGam222*hGam313*invhg12*invhg23*Power(W,2) - 
        12*hGam213*hGam322*invhg12*invhg23*Power(W,2) - 
        12*hGam212*hGam323*invhg12*invhg23*Power(W,2) + 
        6*hPhi133*hPhi222*invhg12*invhg23*Power(W,2) + 
        12*hPhi123*hPhi223*invhg12*invhg23*Power(W,2) + 
        6*hPhi122*hPhi233*invhg12*invhg23*Power(W,2) + 
        6*hPhi223*hPhi312*invhg12*invhg23*Power(W,2) + 
        6*hPhi222*hPhi313*invhg12*invhg23*Power(W,2) + 
        6*hPhi213*hPhi322*invhg12*invhg23*Power(W,2) + 
        6*hPhi212*hPhi323*invhg12*invhg23*Power(W,2) - 
        12*hGam233*hGam312*invhg13*invhg23*Power(W,2) - 
        12*hGam223*hGam313*invhg13*invhg23*Power(W,2) - 
        12*hGam213*hGam323*invhg13*invhg23*Power(W,2) - 
        12*hGam212*hGam333*invhg13*invhg23*Power(W,2) + 
        6*hPhi233*hPhi312*invhg13*invhg23*Power(W,2) + 
        6*hPhi223*hPhi313*invhg13*invhg23*Power(W,2) + 
        6*hPhi133*hPhi322*invhg13*invhg23*Power(W,2) + 
        12*hPhi123*hPhi323*invhg13*invhg23*Power(W,2) + 
        6*hPhi213*hPhi323*invhg13*invhg23*Power(W,2) + 
        6*hPhi122*hPhi333*invhg13*invhg23*Power(W,2) + 
        6*hPhi212*hPhi333*invhg13*invhg23*Power(W,2) - 
        12*hGam223*hGam322*invhg22*invhg23*Power(W,2) - 
        12*hGam222*hGam323*invhg22*invhg23*Power(W,2) + 
        6*Power(hPhi223,2)*invhg22*invhg23*Power(W,2) + 
        6*hPhi222*hPhi233*invhg22*invhg23*Power(W,2) + 
        6*hPhi223*hPhi322*invhg22*invhg23*Power(W,2) + 
        6*hPhi222*hPhi323*invhg22*invhg23*Power(W,2) - 
        6*hGam233*hGam322*Power(invhg23,2)*Power(W,2) - 
        12*hGam223*hGam323*Power(invhg23,2)*Power(W,2) - 
        6*hGam222*hGam333*Power(invhg23,2)*Power(W,2) + 
        6*hPhi233*hPhi322*Power(invhg23,2)*Power(W,2) + 
        12*hPhi223*hPhi323*Power(invhg23,2)*Power(W,2) + 
        6*hPhi222*hPhi333*Power(invhg23,2)*Power(W,2) - 
        12*hGam213*hGam313*invhg11*invhg33*Power(W,2) + 
        6*hPhi123*hPhi133*invhg11*invhg33*Power(W,2) + 
        6*hPhi312*hPhi313*invhg11*invhg33*Power(W,2) - 
        12*hGam223*hGam313*invhg12*invhg33*Power(W,2) - 
        12*hGam213*hGam323*invhg12*invhg33*Power(W,2) + 
        6*hPhi133*hPhi223*invhg12*invhg33*Power(W,2) + 
        6*hPhi123*hPhi233*invhg12*invhg33*Power(W,2) + 
        6*hPhi313*hPhi322*invhg12*invhg33*Power(W,2) + 
        6*hPhi312*hPhi323*invhg12*invhg33*Power(W,2) - 
        12*hGam233*hGam313*invhg13*invhg33*Power(W,2) - 
        12*hGam213*hGam333*invhg13*invhg33*Power(W,2) + 
        6*hPhi133*hPhi323*invhg13*invhg33*Power(W,2) + 
        6*hPhi313*hPhi323*invhg13*invhg33*Power(W,2) + 
        6*hPhi123*hPhi333*invhg13*invhg33*Power(W,2) + 
        6*hPhi312*hPhi333*invhg13*invhg33*Power(W,2) - 
        12*hGam223*hGam323*invhg22*invhg33*Power(W,2) + 
        6*hPhi223*hPhi233*invhg22*invhg33*Power(W,2) + 
        6*hPhi322*hPhi323*invhg22*invhg33*Power(W,2) - 
        12*hGam233*hGam323*invhg23*invhg33*Power(W,2) - 
        12*hGam223*hGam333*invhg23*invhg33*Power(W,2) + 
        6*hPhi233*hPhi323*invhg23*invhg33*Power(W,2) + 
        6*Power(hPhi323,2)*invhg23*invhg33*Power(W,2) + 
        6*hPhi223*hPhi333*invhg23*invhg33*Power(W,2) + 
        6*hPhi322*hPhi333*invhg23*invhg33*Power(W,2) - 
        6*hGam233*hGam333*Power(invhg33,2)*Power(W,2) + 
        6*hPhi323*hPhi333*Power(invhg33,2)*Power(W,2) + 
        12*hGam213*invhg11*W*WPhi1 + 12*hGam312*invhg11*W*WPhi1 - 
        12*hPhi123*invhg11*W*WPhi1 + 12*hGam223*invhg12*W*WPhi1 + 
        12*hGam322*invhg12*W*WPhi1 - 12*hPhi223*invhg12*W*WPhi1 + 
        12*hGam233*invhg13*W*WPhi1 + 12*hGam323*invhg13*W*WPhi1 - 
        12*hPhi323*invhg13*W*WPhi1 - 6*hPhi113*invhg11*W*WPhi2 + 
        12*hGam213*invhg12*W*WPhi2 + 12*hGam312*invhg12*W*WPhi2 - 
        18*hPhi123*invhg12*W*WPhi2 - 6*hPhi213*invhg12*W*WPhi2 - 
        6*hPhi133*invhg13*W*WPhi2 - 6*hPhi313*invhg13*W*WPhi2 + 
        12*hGam223*invhg22*W*WPhi2 + 12*hGam322*invhg22*W*WPhi2 - 
        18*hPhi223*invhg22*W*WPhi2 + 12*hGam233*invhg23*W*WPhi2 + 
        12*hGam323*invhg23*W*WPhi2 - 6*hPhi233*invhg23*W*WPhi2 - 
        18*hPhi323*invhg23*W*WPhi2 - 6*hPhi333*invhg33*W*WPhi2 - 
        6*hPhi112*invhg11*W*WPhi3 - 6*hPhi122*invhg12*W*WPhi3 - 
        6*hPhi212*invhg12*W*WPhi3 + 12*hGam213*invhg13*W*WPhi3 + 
        12*hGam312*invhg13*W*WPhi3 - 18*hPhi123*invhg13*W*WPhi3 - 
        6*hPhi312*invhg13*W*WPhi3 - 6*hPhi222*invhg22*W*WPhi3 + 
        12*hGam223*invhg23*W*WPhi3 + 12*hGam322*invhg23*W*WPhi3 - 
        18*hPhi223*invhg23*W*WPhi3 - 6*hPhi322*invhg23*W*WPhi3 + 
        12*hGam233*invhg33*W*WPhi3 + 12*hGam323*invhg33*W*WPhi3 - 
        18*hPhi323*invhg33*W*WPhi3 - 6*WPhi2*WPhi3))/Power(alpha,2)
);

local_dthPi33.store(mask, index2, 
-0.16666666666666666*(6*Power(alpha,3)*
      (dhPhi1133*invgam11 + dhPhi1233*invgam12 + dhPhi2133*invgam12 + 
        dhPhi1333*invgam13 + dhPhi3133*invgam13 + dhPhi2233*invgam22 + 
        dhPhi2333*invgam23 + dhPhi3233*invgam23 + dhPhi3333*invgam33) + 
     3*(4*hH3*hPhinn3 + 4*hPhinn3*hPinD3 + 
        4*(Power(hPhinD13,2)*invhg11 + 2*hPhinD13*hPhinD23*invhg12 + 
           2*hPhinD13*hPhinD33*invhg13 + Power(hPhinD23,2)*invhg22 + 
           2*hPhinD23*hPhinD33*invhg23 + Power(hPhinD33,2)*invhg33) + 
        Power(hPhinn3,2)*Power(W,2)) + 
     3*alpha*(2*beta1*cgamma1*cgamma2*hPhi133 + 
        2*beta2*cgamma1*cgamma2*hPhi233 + 
        2*beta3*cgamma1*cgamma2*hPhi333 + 2*hPhi133*hPin1 + 
        2*hPhi233*hPin2 + 2*hPhi333*hPin3 - 4*hGam133*hH1*invhg11 - 
        4*hGam233*hH1*invhg12 - 4*hGam133*hH2*invhg12 - 
        4*hGam333*hH1*invhg13 - 4*hGam133*hH3*invhg13 - 
        4*hGam233*hH2*invhg22 - 4*hGam333*hH2*invhg23 - 
        4*hGam233*hH3*invhg23 - 4*hGam333*hH3*invhg33 + 
        hPhi133*hPhinn1*invhg11*Power(W,2) + 
        hPhi233*hPhinn1*invhg12*Power(W,2) + 
        hPhi133*hPhinn2*invhg12*Power(W,2) + 
        hPhi333*hPhinn1*invhg13*Power(W,2) + 
        hPhi133*hPhinn3*invhg13*Power(W,2) + 
        hPhi233*hPhinn2*invhg22*Power(W,2) + 
        hPhi333*hPhinn2*invhg23*Power(W,2) + 
        hPhi233*hPhinn3*invhg23*Power(W,2) + 
        hPhi333*hPhinn3*invhg33*Power(W,2)) - 
     2*Power(alpha,2)*(3*beta3*cgamma1*cgamma2*dhg333 - 6*dhH33 + 
        3*beta1*(cgamma1*cgamma2*dhg133 + dhPi133) + 
        3*beta2*(cgamma1*cgamma2*dhg233 + dhPi233) + 3*beta3*dhPi333 - 
        6*hGamn33*hHn + 2*dhH11*hg33*invhg11 + 
        12*Power(hGamnmix31,2)*invhg11 - 6*Power(hPi13,2)*invhg11 + 
        2*dhH12*hg33*invhg12 + 2*dhH21*hg33*invhg12 + 
        24*hGamnmix31*hGamnmix32*invhg12 - 12*hPi13*hPi23*invhg12 + 
        2*dhH13*hg33*invhg13 + 2*dhH31*hg33*invhg13 + 
        24*hGamnmix31*hGamnmix33*invhg13 - 12*hPi13*hPi33*invhg13 + 
        2*dhH22*hg33*invhg22 + 12*Power(hGamnmix32,2)*invhg22 - 
        6*Power(hPi23,2)*invhg22 + 2*dhH23*hg33*invhg23 + 
        2*dhH32*hg33*invhg23 + 24*hGamnmix32*hGamnmix33*invhg23 - 
        12*hPi23*hPi33*invhg23 + 2*dhH33*hg33*invhg33 + 
        12*Power(hGamnmix33,2)*invhg33 - 6*Power(hPi33,2)*invhg33 + 
        3*hg33*trPi - 6*Power(hGam311,2)*Power(invhg11,2)*Power(W,2) + 
        6*Power(hPhi113,2)*Power(invhg11,2)*Power(W,2) - 
        24*hGam311*hGam312*invhg11*invhg12*Power(W,2) + 
        12*hPhi113*hPhi123*invhg11*invhg12*Power(W,2) + 
        12*hPhi113*hPhi213*invhg11*invhg12*Power(W,2) - 
        12*Power(hGam312,2)*Power(invhg12,2)*Power(W,2) - 
        12*hGam311*hGam322*Power(invhg12,2)*Power(W,2) + 
        12*hPhi123*hPhi213*Power(invhg12,2)*Power(W,2) + 
        12*hPhi113*hPhi223*Power(invhg12,2)*Power(W,2) - 
        24*hGam311*hGam313*invhg11*invhg13*Power(W,2) + 
        12*hPhi113*hPhi133*invhg11*invhg13*Power(W,2) + 
        12*hPhi113*hPhi313*invhg11*invhg13*Power(W,2) - 
        24*hGam312*hGam313*invhg12*invhg13*Power(W,2) - 
        24*hGam311*hGam323*invhg12*invhg13*Power(W,2) + 
        12*hPhi133*hPhi213*invhg12*invhg13*Power(W,2) + 
        12*hPhi113*hPhi233*invhg12*invhg13*Power(W,2) + 
        12*hPhi123*hPhi313*invhg12*invhg13*Power(W,2) + 
        12*hPhi113*hPhi323*invhg12*invhg13*Power(W,2) - 
        12*Power(hGam313,2)*Power(invhg13,2)*Power(W,2) - 
        12*hGam311*hGam333*Power(invhg13,2)*Power(W,2) + 
        12*hPhi133*hPhi313*Power(invhg13,2)*Power(W,2) + 
        12*hPhi113*hPhi333*Power(invhg13,2)*Power(W,2) - 
        12*Power(hGam312,2)*invhg11*invhg22*Power(W,2) + 
        6*Power(hPhi123,2)*invhg11*invhg22*Power(W,2) + 
        6*Power(hPhi213,2)*invhg11*invhg22*Power(W,2) - 
        24*hGam312*hGam322*invhg12*invhg22*Power(W,2) + 
        12*hPhi123*hPhi223*invhg12*invhg22*Power(W,2) + 
        12*hPhi213*hPhi223*invhg12*invhg22*Power(W,2) - 
        24*hGam312*hGam323*invhg13*invhg22*Power(W,2) + 
        12*hPhi213*hPhi233*invhg13*invhg22*Power(W,2) + 
        12*hPhi123*hPhi323*invhg13*invhg22*Power(W,2) - 
        6*Power(hGam322,2)*Power(invhg22,2)*Power(W,2) + 
        6*Power(hPhi223,2)*Power(invhg22,2)*Power(W,2) - 
        24*hGam312*hGam313*invhg11*invhg23*Power(W,2) + 
        12*hPhi123*hPhi133*invhg11*invhg23*Power(W,2) + 
        12*hPhi213*hPhi313*invhg11*invhg23*Power(W,2) - 
        24*hGam313*hGam322*invhg12*invhg23*Power(W,2) - 
        24*hGam312*hGam323*invhg12*invhg23*Power(W,2) + 
        12*hPhi133*hPhi223*invhg12*invhg23*Power(W,2) + 
        12*hPhi123*hPhi233*invhg12*invhg23*Power(W,2) + 
        12*hPhi223*hPhi313*invhg12*invhg23*Power(W,2) + 
        12*hPhi213*hPhi323*invhg12*invhg23*Power(W,2) - 
        24*hGam313*hGam323*invhg13*invhg23*Power(W,2) - 
        24*hGam312*hGam333*invhg13*invhg23*Power(W,2) + 
        12*hPhi233*hPhi313*invhg13*invhg23*Power(W,2) + 
        12*hPhi133*hPhi323*invhg13*invhg23*Power(W,2) + 
        12*hPhi123*hPhi333*invhg13*invhg23*Power(W,2) + 
        12*hPhi213*hPhi333*invhg13*invhg23*Power(W,2) - 
        24*hGam322*hGam323*invhg22*invhg23*Power(W,2) + 
        12*hPhi223*hPhi233*invhg22*invhg23*Power(W,2) + 
        12*hPhi223*hPhi323*invhg22*invhg23*Power(W,2) - 
        12*Power(hGam323,2)*Power(invhg23,2)*Power(W,2) - 
        12*hGam322*hGam333*Power(invhg23,2)*Power(W,2) + 
        12*hPhi233*hPhi323*Power(invhg23,2)*Power(W,2) + 
        12*hPhi223*hPhi333*Power(invhg23,2)*Power(W,2) - 
        12*Power(hGam313,2)*invhg11*invhg33*Power(W,2) + 
        6*Power(hPhi133,2)*invhg11*invhg33*Power(W,2) + 
        6*Power(hPhi313,2)*invhg11*invhg33*Power(W,2) - 
        24*hGam313*hGam323*invhg12*invhg33*Power(W,2) + 
        12*hPhi133*hPhi233*invhg12*invhg33*Power(W,2) + 
        12*hPhi313*hPhi323*invhg12*invhg33*Power(W,2) - 
        24*hGam313*hGam333*invhg13*invhg33*Power(W,2) + 
        12*hPhi133*hPhi333*invhg13*invhg33*Power(W,2) + 
        12*hPhi313*hPhi333*invhg13*invhg33*Power(W,2) - 
        12*Power(hGam323,2)*invhg22*invhg33*Power(W,2) + 
        6*Power(hPhi233,2)*invhg22*invhg33*Power(W,2) + 
        6*Power(hPhi323,2)*invhg22*invhg33*Power(W,2) - 
        24*hGam323*hGam333*invhg23*invhg33*Power(W,2) + 
        12*hPhi233*hPhi333*invhg23*invhg33*Power(W,2) + 
        12*hPhi323*hPhi333*invhg23*invhg33*Power(W,2) - 
        6*Power(hGam333,2)*Power(invhg33,2)*Power(W,2) + 
        6*Power(hPhi333,2)*Power(invhg33,2)*Power(W,2) + 
        24*hGam313*invhg11*W*WPhi1 - 12*hPhi133*invhg11*W*WPhi1 + 
        24*hGam323*invhg12*W*WPhi1 - 12*hPhi233*invhg12*W*WPhi1 + 
        24*hGam333*invhg13*W*WPhi1 - 12*hPhi333*invhg13*W*WPhi1 + 
        24*hGam313*invhg12*W*WPhi2 - 12*hPhi133*invhg12*W*WPhi2 + 
        24*hGam323*invhg22*W*WPhi2 - 12*hPhi233*invhg22*W*WPhi2 + 
        24*hGam333*invhg23*W*WPhi2 - 12*hPhi333*invhg23*W*WPhi2 - 
        12*hPhi113*invhg11*W*WPhi3 - 12*hPhi123*invhg12*W*WPhi3 - 
        12*hPhi213*invhg12*W*WPhi3 + 24*hGam313*invhg13*W*WPhi3 - 
        24*hPhi133*invhg13*W*WPhi3 - 12*hPhi313*invhg13*W*WPhi3 - 
        12*hPhi223*invhg22*W*WPhi3 + 24*hGam323*invhg23*W*WPhi3 - 
        24*hPhi233*invhg23*W*WPhi3 - 12*hPhi323*invhg23*W*WPhi3 + 
        24*hGam333*invhg33*W*WPhi3 - 24*hPhi333*invhg33*W*WPhi3 - 
        6*Power(WPhi3,2)))/Power(alpha,2)
);

local_dthPhi111.store(mask, index2, 
beta1*dhPhi1111 + beta2*dhPhi2111 + beta3*dhPhi3111 + 
  alpha*(cgamma2*dhg111 - dhPi111) - cgamma2*hPhi111 + 
  (hPhi211*hPhin12 + hPhi311*hPhin13 + hPhi111*(hPhin11 + hPinn/2.))/alpha
);

local_dthPhi112.store(mask, index2, 
beta1*dhPhi1112 + beta2*dhPhi2112 + beta3*dhPhi3112 + 
  alpha*(cgamma2*dhg112 - dhPi112) - cgamma2*hPhi112 + 
  (hPhi212*hPhin12 + hPhi312*hPhin13 + hPhi112*(hPhin11 + hPinn/2.))/alpha
);

local_dthPhi113.store(mask, index2, 
beta1*dhPhi1113 + beta2*dhPhi2113 + beta3*dhPhi3113 + 
  alpha*(cgamma2*dhg113 - dhPi113) - cgamma2*hPhi113 + 
  (hPhi213*hPhin12 + hPhi313*hPhin13 + hPhi113*(hPhin11 + hPinn/2.))/alpha
);

local_dthPhi122.store(mask, index2, 
beta1*dhPhi1122 + beta2*dhPhi2122 + beta3*dhPhi3122 + 
  alpha*(cgamma2*dhg122 - dhPi122) - cgamma2*hPhi122 + 
  (hPhi222*hPhin12 + hPhi322*hPhin13 + hPhi122*(hPhin11 + hPinn/2.))/alpha
);

local_dthPhi123.store(mask, index2, 
beta1*dhPhi1123 + beta2*dhPhi2123 + beta3*dhPhi3123 + 
  alpha*(cgamma2*dhg123 - dhPi123) - cgamma2*hPhi123 + 
  (hPhi223*hPhin12 + hPhi323*hPhin13 + hPhi123*(hPhin11 + hPinn/2.))/alpha
);

local_dthPhi133.store(mask, index2, 
beta1*dhPhi1133 + beta2*dhPhi2133 + beta3*dhPhi3133 + 
  alpha*(cgamma2*dhg133 - dhPi133) - cgamma2*hPhi133 + 
  (hPhi233*hPhin12 + hPhi333*hPhin13 + hPhi133*(hPhin11 + hPinn/2.))/alpha
);

local_dthPhi211.store(mask, index2, 
beta1*dhPhi1211 + beta2*dhPhi2211 + beta3*dhPhi3211 + 
  alpha*(cgamma2*dhg211 - dhPi211) - cgamma2*hPhi211 + 
  (hPhi111*hPhin21 + hPhi211*hPhin22 + hPhi311*hPhin23 + (hPhi211*hPinn)/2.)/
   alpha
);

local_dthPhi212.store(mask, index2, 
beta1*dhPhi1212 + beta2*dhPhi2212 + beta3*dhPhi3212 + 
  alpha*(cgamma2*dhg212 - dhPi212) - cgamma2*hPhi212 + 
  (hPhi112*hPhin21 + hPhi212*hPhin22 + hPhi312*hPhin23 + (hPhi212*hPinn)/2.)/
   alpha
);

local_dthPhi213.store(mask, index2, 
beta1*dhPhi1213 + beta2*dhPhi2213 + beta3*dhPhi3213 + 
  alpha*(cgamma2*dhg213 - dhPi213) - cgamma2*hPhi213 + 
  (hPhi113*hPhin21 + hPhi213*hPhin22 + hPhi313*hPhin23 + (hPhi213*hPinn)/2.)/
   alpha
);

local_dthPhi222.store(mask, index2, 
beta1*dhPhi1222 + beta2*dhPhi2222 + beta3*dhPhi3222 + 
  alpha*(cgamma2*dhg222 - dhPi222) - cgamma2*hPhi222 + 
  (hPhi122*hPhin21 + hPhi222*hPhin22 + hPhi322*hPhin23 + (hPhi222*hPinn)/2.)/
   alpha
);

local_dthPhi223.store(mask, index2, 
beta1*dhPhi1223 + beta2*dhPhi2223 + beta3*dhPhi3223 + 
  alpha*(cgamma2*dhg223 - dhPi223) - cgamma2*hPhi223 + 
  (hPhi123*hPhin21 + hPhi223*hPhin22 + hPhi323*hPhin23 + (hPhi223*hPinn)/2.)/
   alpha
);

local_dthPhi233.store(mask, index2, 
beta1*dhPhi1233 + beta2*dhPhi2233 + beta3*dhPhi3233 + 
  alpha*(cgamma2*dhg233 - dhPi233) - cgamma2*hPhi233 + 
  (hPhi133*hPhin21 + hPhi233*hPhin22 + hPhi333*hPhin23 + (hPhi233*hPinn)/2.)/
   alpha
);

local_dthPhi311.store(mask, index2, 
beta1*dhPhi1311 + beta2*dhPhi2311 + beta3*dhPhi3311 + 
  alpha*(cgamma2*dhg311 - dhPi311) - cgamma2*hPhi311 + 
  (hPhi111*hPhin31 + hPhi211*hPhin32 + hPhi311*hPhin33 + (hPhi311*hPinn)/2.)/
   alpha
);

local_dthPhi312.store(mask, index2, 
beta1*dhPhi1312 + beta2*dhPhi2312 + beta3*dhPhi3312 + 
  alpha*(cgamma2*dhg312 - dhPi312) - cgamma2*hPhi312 + 
  (hPhi112*hPhin31 + hPhi212*hPhin32 + hPhi312*hPhin33 + (hPhi312*hPinn)/2.)/
   alpha
);

local_dthPhi313.store(mask, index2, 
beta1*dhPhi1313 + beta2*dhPhi2313 + beta3*dhPhi3313 + 
  alpha*(cgamma2*dhg313 - dhPi313) - cgamma2*hPhi313 + 
  (hPhi113*hPhin31 + hPhi213*hPhin32 + hPhi313*hPhin33 + (hPhi313*hPinn)/2.)/
   alpha
);

local_dthPhi322.store(mask, index2, 
beta1*dhPhi1322 + beta2*dhPhi2322 + beta3*dhPhi3322 + 
  alpha*(cgamma2*dhg322 - dhPi322) - cgamma2*hPhi322 + 
  (hPhi122*hPhin31 + hPhi222*hPhin32 + hPhi322*hPhin33 + (hPhi322*hPinn)/2.)/
   alpha
);

local_dthPhi323.store(mask, index2, 
beta1*dhPhi1323 + beta2*dhPhi2323 + beta3*dhPhi3323 + 
  alpha*(cgamma2*dhg323 - dhPi323) - cgamma2*hPhi323 + 
  (hPhi123*hPhin31 + hPhi223*hPhin32 + hPhi323*hPhin33 + (hPhi323*hPinn)/2.)/
   alpha
);

local_dthPhi333.store(mask, index2, 
beta1*dhPhi1333 + beta2*dhPhi2333 + beta3*dhPhi3333 + 
  alpha*(cgamma2*dhg333 - dhPi333) - cgamma2*hPhi333 + 
  (hPhi133*hPhin31 + hPhi233*hPhin32 + hPhi333*hPhin33 + (hPhi333*hPinn)/2.)/
   alpha
);

local_dthgn1.store(mask, index2, 
beta1*(1 + cgamma1)*dhgn11 + beta2*(1 + cgamma1)*dhgn21 + beta3*dhgn31 + 
  beta3*cgamma1*dhgn31 - (cgamma1*
     (beta1*hPhin11 + beta2*hPhin21 + beta3*hPhin31))/alpha - hPin1
);

local_dthgn2.store(mask, index2, 
beta1*(1 + cgamma1)*dhgn12 + beta2*(1 + cgamma1)*dhgn22 + beta3*dhgn32 + 
  beta3*cgamma1*dhgn32 - (cgamma1*
     (beta1*hPhin12 + beta2*hPhin22 + beta3*hPhin32))/alpha - hPin2
);

local_dthgn3.store(mask, index2, 
beta1*(1 + cgamma1)*dhgn13 + beta2*(1 + cgamma1)*dhgn23 + beta3*dhgn33 + 
  beta3*cgamma1*dhgn33 - (cgamma1*
     (beta1*hPhin13 + beta2*hPhin23 + beta3*hPhin33))/alpha - hPin3
);

local_dthPin1.store(mask, index2, 
-0.5*(2*beta1*cgamma1*cgamma2*hPhin11 + 2*beta2*cgamma1*cgamma2*hPhin21 + 
     2*beta3*cgamma1*cgamma2*hPhin31 + 2*hPhin11*hPin1 + 2*hPhin21*hPin2 + 
     2*hPhin31*hPin3 - 2*hPin1*hPinn + 2*hH1*hPhin11*invhg11 + 
     2*hH2*hPhin12*invhg11 + 2*hH3*hPhin13*invhg11 - 2*hH1*hPinn*invhg11 + 
     2*hH1*hPhin21*invhg12 + 2*hH2*hPhin22*invhg12 + 
     2*hH3*hPhin23*invhg12 - 2*hH2*hPinn*invhg12 + 2*hH1*hPhin31*invhg13 + 
     2*hH2*hPhin32*invhg13 + 2*hH3*hPhin33*invhg13 - 2*hH3*hPinn*invhg13 + 
     5*hPhin11*hPhinn1*invhg11*Power(W,2) + 
     hPhinn1*hPinn*invhg11*Power(W,2) + 
     5*hPhin21*hPhinn1*invhg12*Power(W,2) + 
     5*hPhin11*hPhinn2*invhg12*Power(W,2) + 
     hPhinn2*hPinn*invhg12*Power(W,2) + 
     5*hPhin31*hPhinn1*invhg13*Power(W,2) + 
     5*hPhin11*hPhinn3*invhg13*Power(W,2) + 
     hPhinn3*hPinn*invhg13*Power(W,2) + 
     2*Power(alpha,3)*(dhHn1*invhg11 + dhHn2*invhg12 + dhHn3*invhg13)*
      Power(W,2) + 5*hPhin21*hPhinn2*invhg22*Power(W,2) + 
     5*hPhin31*hPhinn2*invhg23*Power(W,2) + 
     5*hPhin21*hPhinn3*invhg23*Power(W,2) + 
     5*hPhin31*hPhinn3*invhg33*Power(W,2) - 
     2*alpha*(beta2*cgamma1*cgamma2*dhgn21 + 
        beta3*cgamma1*cgamma2*dhgn31 + 
        beta1*(cgamma1*cgamma2*dhgn11 + dhPin11) + beta2*dhPin21 + 
        beta3*dhPin31 - adnhH1*invhg11 + 
        2*hGamnmix11*hH1*Power(invhg11,2) - adnhH2*invhg12 + 
        2*hGamnmix12*hH1*invhg11*invhg12 + 
        2*hGamnmix21*hH1*invhg11*invhg12 + 
        2*hGamnmix11*hH2*invhg11*invhg12 + 
        2*hGamnmix22*hH1*Power(invhg12,2) + 
        2*hGamnmix12*hH2*Power(invhg12,2) - adnhH3*invhg13 + 
        2*hGamnmix13*hH1*invhg11*invhg13 + 
        2*hGamnmix31*hH1*invhg11*invhg13 + 
        2*hGamnmix11*hH3*invhg11*invhg13 + 
        2*hGamnmix23*hH1*invhg12*invhg13 + 
        2*hGamnmix32*hH1*invhg12*invhg13 + 
        2*hGamnmix13*hH2*invhg12*invhg13 + 
        2*hGamnmix12*hH3*invhg12*invhg13 + 
        2*hGamnmix33*hH1*Power(invhg13,2) + 
        2*hGamnmix13*hH3*Power(invhg13,2) + 
        2*hGamnmix21*hH2*invhg11*invhg22 + 
        2*hGamnmix22*hH2*invhg12*invhg22 + 
        2*hGamnmix23*hH2*invhg13*invhg22 + 
        2*hGamnmix31*hH2*invhg11*invhg23 + 
        2*hGamnmix21*hH3*invhg11*invhg23 + 
        2*hGamnmix32*hH2*invhg12*invhg23 + 
        2*hGamnmix22*hH3*invhg12*invhg23 + 
        2*hGamnmix33*hH2*invhg13*invhg23 + 
        2*hGamnmix23*hH3*invhg13*invhg23 + 
        2*hGamnmix31*hH3*invhg11*invhg33 + 
        2*hGamnmix32*hH3*invhg12*invhg33 + 
        2*hGamnmix33*hH3*invhg13*invhg33 - 
        hHn*hPhinn1*invhg11*Power(W,2) + 
        2*hGamnmix11*hPhinn1*Power(invhg11,2)*Power(W,2) - 
        hHn*hPhinn2*invhg12*Power(W,2) + 
        2*hGamnmix12*hPhinn1*invhg11*invhg12*Power(W,2) + 
        2*hGamnmix21*hPhinn1*invhg11*invhg12*Power(W,2) + 
        2*hGamnmix11*hPhinn2*invhg11*invhg12*Power(W,2) + 
        2*hGamnmix22*hPhinn1*Power(invhg12,2)*Power(W,2) + 
        2*hGamnmix21*hPhinn2*Power(invhg12,2)*Power(W,2) - 
        hHn*hPhinn3*invhg13*Power(W,2) + 
        2*hGamnmix13*hPhinn1*invhg11*invhg13*Power(W,2) + 
        2*hGamnmix31*hPhinn1*invhg11*invhg13*Power(W,2) + 
        2*hGamnmix11*hPhinn3*invhg11*invhg13*Power(W,2) + 
        2*hGamnmix23*hPhinn1*invhg12*invhg13*Power(W,2) + 
        2*hGamnmix32*hPhinn1*invhg12*invhg13*Power(W,2) + 
        2*hGamnmix31*hPhinn2*invhg12*invhg13*Power(W,2) + 
        2*hGamnmix21*hPhinn3*invhg12*invhg13*Power(W,2) + 
        2*hGamnmix33*hPhinn1*Power(invhg13,2)*Power(W,2) + 
        2*hGamnmix31*hPhinn3*Power(invhg13,2)*Power(W,2) + 
        2*hGamnmix12*hPhinn2*invhg11*invhg22*Power(W,2) + 
        2*hGamnmix22*hPhinn2*invhg12*invhg22*Power(W,2) + 
        2*hGamnmix32*hPhinn2*invhg13*invhg22*Power(W,2) + 
        2*hGamnmix13*hPhinn2*invhg11*invhg23*Power(W,2) + 
        2*hGamnmix12*hPhinn3*invhg11*invhg23*Power(W,2) + 
        2*hGamnmix23*hPhinn2*invhg12*invhg23*Power(W,2) + 
        2*hGamnmix22*hPhinn3*invhg12*invhg23*Power(W,2) + 
        2*hGamnmix33*hPhinn2*invhg13*invhg23*Power(W,2) + 
        2*hGamnmix32*hPhinn3*invhg13*invhg23*Power(W,2) + 
        2*hGamnmix13*hPhinn3*invhg11*invhg33*Power(W,2) + 
        2*hGamnmix23*hPhinn3*invhg12*invhg33*Power(W,2) + 
        2*hGamnmix33*hPhinn3*invhg13*invhg33*Power(W,2) - 
        2*hPhin11*invhg11*W*WPhi1 - 2*hPhin22*invhg11*W*WPhi1 - 
        2*hPhin33*invhg11*W*WPhi1 - 2*hPhin11*invhg12*W*WPhi2 - 
        2*hPhin22*invhg12*W*WPhi2 - 2*hPhin33*invhg12*W*WPhi2 - 
        2*hPhin11*invhg13*W*WPhi3 - 2*hPhin22*invhg13*W*WPhi3 - 
        2*hPhin33*invhg13*W*WPhi3 + 2*hPhinn1*invhg11*W*WPi + 
        2*hPhinn2*invhg12*W*WPi + 2*hPhinn3*invhg13*W*WPi) + 
     2*Power(alpha,2)*(dhPhin111*invgam11 + dhPhin121*invgam12 + 
        dhPhin211*invgam12 + dhPhin131*invgam13 + dhPhin311*invgam13 + 
        dhPhin221*invgam22 + dhPhin231*invgam23 + dhPhin321*invgam23 + 
        dhPhin331*invgam33 + cgamma0*hH1*invhg11 + cgamma0*hH2*invhg12 + 
        cgamma0*hH3*invhg13 + cgamma0*invhg11*trhGam1 + 
        cgamma0*invhg12*trhGam2 + cgamma0*invhg13*trhGam3 + 
        2*hGam111*hGamn11*Power(invhg11,3)*Power(W,2) + 
        4*hGam112*hGamn11*Power(invhg11,2)*invhg12*Power(W,2) + 
        2*hGam211*hGamn11*Power(invhg11,2)*invhg12*Power(W,2) + 
        4*hGam111*hGamn12*Power(invhg11,2)*invhg12*Power(W,2) + 
        2*hGam122*hGamn11*invhg11*Power(invhg12,2)*Power(W,2) + 
        4*hGam212*hGamn11*invhg11*Power(invhg12,2)*Power(W,2) + 
        4*hGam112*hGamn12*invhg11*Power(invhg12,2)*Power(W,2) + 
        4*hGam211*hGamn12*invhg11*Power(invhg12,2)*Power(W,2) + 
        2*hGam111*hGamn22*invhg11*Power(invhg12,2)*Power(W,2) + 
        2*hGam222*hGamn11*Power(invhg12,3)*Power(W,2) + 
        4*hGam212*hGamn12*Power(invhg12,3)*Power(W,2) + 
        2*hGam211*hGamn22*Power(invhg12,3)*Power(W,2) + 
        4*hGam113*hGamn11*Power(invhg11,2)*invhg13*Power(W,2) + 
        2*hGam311*hGamn11*Power(invhg11,2)*invhg13*Power(W,2) + 
        4*hGam111*hGamn13*Power(invhg11,2)*invhg13*Power(W,2) + 
        4*hGam123*hGamn11*invhg11*invhg12*invhg13*Power(W,2) + 
        4*hGam213*hGamn11*invhg11*invhg12*invhg13*Power(W,2) + 
        4*hGam312*hGamn11*invhg11*invhg12*invhg13*Power(W,2) + 
        4*hGam113*hGamn12*invhg11*invhg12*invhg13*Power(W,2) + 
        4*hGam311*hGamn12*invhg11*invhg12*invhg13*Power(W,2) + 
        4*hGam112*hGamn13*invhg11*invhg12*invhg13*Power(W,2) + 
        4*hGam211*hGamn13*invhg11*invhg12*invhg13*Power(W,2) + 
        4*hGam111*hGamn23*invhg11*invhg12*invhg13*Power(W,2) + 
        4*hGam223*hGamn11*Power(invhg12,2)*invhg13*Power(W,2) + 
        2*hGam322*hGamn11*Power(invhg12,2)*invhg13*Power(W,2) + 
        4*hGam213*hGamn12*Power(invhg12,2)*invhg13*Power(W,2) + 
        4*hGam312*hGamn12*Power(invhg12,2)*invhg13*Power(W,2) + 
        4*hGam212*hGamn13*Power(invhg12,2)*invhg13*Power(W,2) + 
        2*hGam311*hGamn22*Power(invhg12,2)*invhg13*Power(W,2) + 
        4*hGam211*hGamn23*Power(invhg12,2)*invhg13*Power(W,2) + 
        2*hGam133*hGamn11*invhg11*Power(invhg13,2)*Power(W,2) + 
        4*hGam313*hGamn11*invhg11*Power(invhg13,2)*Power(W,2) + 
        4*hGam113*hGamn13*invhg11*Power(invhg13,2)*Power(W,2) + 
        4*hGam311*hGamn13*invhg11*Power(invhg13,2)*Power(W,2) + 
        2*hGam111*hGamn33*invhg11*Power(invhg13,2)*Power(W,2) + 
        2*hGam233*hGamn11*invhg12*Power(invhg13,2)*Power(W,2) + 
        4*hGam323*hGamn11*invhg12*Power(invhg13,2)*Power(W,2) + 
        4*hGam313*hGamn12*invhg12*Power(invhg13,2)*Power(W,2) + 
        4*hGam213*hGamn13*invhg12*Power(invhg13,2)*Power(W,2) + 
        4*hGam312*hGamn13*invhg12*Power(invhg13,2)*Power(W,2) + 
        4*hGam311*hGamn23*invhg12*Power(invhg13,2)*Power(W,2) + 
        2*hGam211*hGamn33*invhg12*Power(invhg13,2)*Power(W,2) + 
        2*hGam333*hGamn11*Power(invhg13,3)*Power(W,2) + 
        4*hGam313*hGamn13*Power(invhg13,3)*Power(W,2) + 
        2*hGam311*hGamn33*Power(invhg13,3)*Power(W,2) + 
        4*hGam112*hGamn12*Power(invhg11,2)*invhg22*Power(W,2) + 
        4*hGam122*hGamn12*invhg11*invhg12*invhg22*Power(W,2) + 
        4*hGam212*hGamn12*invhg11*invhg12*invhg22*Power(W,2) + 
        4*hGam112*hGamn22*invhg11*invhg12*invhg22*Power(W,2) + 
        4*hGam222*hGamn12*Power(invhg12,2)*invhg22*Power(W,2) + 
        4*hGam212*hGamn22*Power(invhg12,2)*invhg22*Power(W,2) + 
        4*hGam123*hGamn12*invhg11*invhg13*invhg22*Power(W,2) + 
        4*hGam312*hGamn12*invhg11*invhg13*invhg22*Power(W,2) + 
        4*hGam112*hGamn23*invhg11*invhg13*invhg22*Power(W,2) + 
        4*hGam223*hGamn12*invhg12*invhg13*invhg22*Power(W,2) + 
        4*hGam322*hGamn12*invhg12*invhg13*invhg22*Power(W,2) + 
        4*hGam312*hGamn22*invhg12*invhg13*invhg22*Power(W,2) + 
        4*hGam212*hGamn23*invhg12*invhg13*invhg22*Power(W,2) + 
        4*hGam323*hGamn12*Power(invhg13,2)*invhg22*Power(W,2) + 
        4*hGam312*hGamn23*Power(invhg13,2)*invhg22*Power(W,2) + 
        2*hGam122*hGamn22*invhg11*Power(invhg22,2)*Power(W,2) + 
        2*hGam222*hGamn22*invhg12*Power(invhg22,2)*Power(W,2) + 
        2*hGam322*hGamn22*invhg13*Power(invhg22,2)*Power(W,2) + 
        4*hGam113*hGamn12*Power(invhg11,2)*invhg23*Power(W,2) + 
        4*hGam112*hGamn13*Power(invhg11,2)*invhg23*Power(W,2) + 
        4*hGam123*hGamn12*invhg11*invhg12*invhg23*Power(W,2) + 
        4*hGam213*hGamn12*invhg11*invhg12*invhg23*Power(W,2) + 
        4*hGam122*hGamn13*invhg11*invhg12*invhg23*Power(W,2) + 
        4*hGam212*hGamn13*invhg11*invhg12*invhg23*Power(W,2) + 
        4*hGam113*hGamn22*invhg11*invhg12*invhg23*Power(W,2) + 
        4*hGam112*hGamn23*invhg11*invhg12*invhg23*Power(W,2) + 
        4*hGam223*hGamn12*Power(invhg12,2)*invhg23*Power(W,2) + 
        4*hGam222*hGamn13*Power(invhg12,2)*invhg23*Power(W,2) + 
        4*hGam213*hGamn22*Power(invhg12,2)*invhg23*Power(W,2) + 
        4*hGam212*hGamn23*Power(invhg12,2)*invhg23*Power(W,2) + 
        4*hGam133*hGamn12*invhg11*invhg13*invhg23*Power(W,2) + 
        4*hGam313*hGamn12*invhg11*invhg13*invhg23*Power(W,2) + 
        4*hGam123*hGamn13*invhg11*invhg13*invhg23*Power(W,2) + 
        4*hGam312*hGamn13*invhg11*invhg13*invhg23*Power(W,2) + 
        4*hGam113*hGamn23*invhg11*invhg13*invhg23*Power(W,2) + 
        4*hGam112*hGamn33*invhg11*invhg13*invhg23*Power(W,2) + 
        4*hGam233*hGamn12*invhg12*invhg13*invhg23*Power(W,2) + 
        4*hGam323*hGamn12*invhg12*invhg13*invhg23*Power(W,2) + 
        4*hGam223*hGamn13*invhg12*invhg13*invhg23*Power(W,2) + 
        4*hGam322*hGamn13*invhg12*invhg13*invhg23*Power(W,2) + 
        4*hGam313*hGamn22*invhg12*invhg13*invhg23*Power(W,2) + 
        4*hGam213*hGamn23*invhg12*invhg13*invhg23*Power(W,2) + 
        4*hGam312*hGamn23*invhg12*invhg13*invhg23*Power(W,2) + 
        4*hGam212*hGamn33*invhg12*invhg13*invhg23*Power(W,2) + 
        4*hGam333*hGamn12*Power(invhg13,2)*invhg23*Power(W,2) + 
        4*hGam323*hGamn13*Power(invhg13,2)*invhg23*Power(W,2) + 
        4*hGam313*hGamn23*Power(invhg13,2)*invhg23*Power(W,2) + 
        4*hGam312*hGamn33*Power(invhg13,2)*invhg23*Power(W,2) + 
        4*hGam123*hGamn22*invhg11*invhg22*invhg23*Power(W,2) + 
        4*hGam122*hGamn23*invhg11*invhg22*invhg23*Power(W,2) + 
        4*hGam223*hGamn22*invhg12*invhg22*invhg23*Power(W,2) + 
        4*hGam222*hGamn23*invhg12*invhg22*invhg23*Power(W,2) + 
        4*hGam323*hGamn22*invhg13*invhg22*invhg23*Power(W,2) + 
        4*hGam322*hGamn23*invhg13*invhg22*invhg23*Power(W,2) + 
        2*hGam133*hGamn22*invhg11*Power(invhg23,2)*Power(W,2) + 
        4*hGam123*hGamn23*invhg11*Power(invhg23,2)*Power(W,2) + 
        2*hGam122*hGamn33*invhg11*Power(invhg23,2)*Power(W,2) + 
        2*hGam233*hGamn22*invhg12*Power(invhg23,2)*Power(W,2) + 
        4*hGam223*hGamn23*invhg12*Power(invhg23,2)*Power(W,2) + 
        2*hGam222*hGamn33*invhg12*Power(invhg23,2)*Power(W,2) + 
        2*hGam333*hGamn22*invhg13*Power(invhg23,2)*Power(W,2) + 
        4*hGam323*hGamn23*invhg13*Power(invhg23,2)*Power(W,2) + 
        2*hGam322*hGamn33*invhg13*Power(invhg23,2)*Power(W,2) + 
        4*hGam113*hGamn13*Power(invhg11,2)*invhg33*Power(W,2) + 
        4*hGam123*hGamn13*invhg11*invhg12*invhg33*Power(W,2) + 
        4*hGam213*hGamn13*invhg11*invhg12*invhg33*Power(W,2) + 
        4*hGam113*hGamn23*invhg11*invhg12*invhg33*Power(W,2) + 
        4*hGam223*hGamn13*Power(invhg12,2)*invhg33*Power(W,2) + 
        4*hGam213*hGamn23*Power(invhg12,2)*invhg33*Power(W,2) + 
        4*hGam133*hGamn13*invhg11*invhg13*invhg33*Power(W,2) + 
        4*hGam313*hGamn13*invhg11*invhg13*invhg33*Power(W,2) + 
        4*hGam113*hGamn33*invhg11*invhg13*invhg33*Power(W,2) + 
        4*hGam233*hGamn13*invhg12*invhg13*invhg33*Power(W,2) + 
        4*hGam323*hGamn13*invhg12*invhg13*invhg33*Power(W,2) + 
        4*hGam313*hGamn23*invhg12*invhg13*invhg33*Power(W,2) + 
        4*hGam213*hGamn33*invhg12*invhg13*invhg33*Power(W,2) + 
        4*hGam333*hGamn13*Power(invhg13,2)*invhg33*Power(W,2) + 
        4*hGam313*hGamn33*Power(invhg13,2)*invhg33*Power(W,2) + 
        4*hGam123*hGamn23*invhg11*invhg22*invhg33*Power(W,2) + 
        4*hGam223*hGamn23*invhg12*invhg22*invhg33*Power(W,2) + 
        4*hGam323*hGamn23*invhg13*invhg22*invhg33*Power(W,2) + 
        4*hGam133*hGamn23*invhg11*invhg23*invhg33*Power(W,2) + 
        4*hGam123*hGamn33*invhg11*invhg23*invhg33*Power(W,2) + 
        4*hGam233*hGamn23*invhg12*invhg23*invhg33*Power(W,2) + 
        4*hGam223*hGamn33*invhg12*invhg23*invhg33*Power(W,2) + 
        4*hGam333*hGamn23*invhg13*invhg23*invhg33*Power(W,2) + 
        4*hGam323*hGamn33*invhg13*invhg23*invhg33*Power(W,2) + 
        2*hGam133*hGamn33*invhg11*Power(invhg33,2)*Power(W,2) + 
        2*hGam233*hGamn33*invhg12*Power(invhg33,2)*Power(W,2) + 
        2*hGam333*hGamn33*invhg13*Power(invhg33,2)*Power(W,2) - 
        4*hGamn11*Power(invhg11,2)*W*WPhi1 - 
        8*hGamn12*invhg11*invhg12*W*WPhi1 - 
        4*hGamn22*Power(invhg12,2)*W*WPhi1 - 
        8*hGamn13*invhg11*invhg13*W*WPhi1 - 
        8*hGamn23*invhg12*invhg13*W*WPhi1 - 
        4*hGamn33*Power(invhg13,2)*W*WPhi1 - 
        4*hGamn11*invhg11*invhg12*W*WPhi2 - 
        4*hGamn12*Power(invhg12,2)*W*WPhi2 - 
        4*hGamn13*invhg12*invhg13*W*WPhi2 - 
        4*hGamn12*invhg11*invhg22*W*WPhi2 - 
        4*hGamn22*invhg12*invhg22*W*WPhi2 - 
        4*hGamn23*invhg13*invhg22*W*WPhi2 - 
        4*hGamn13*invhg11*invhg23*W*WPhi2 - 
        4*hGamn23*invhg12*invhg23*W*WPhi2 - 
        4*hGamn33*invhg13*invhg23*W*WPhi2 - 
        4*hGamn11*invhg11*invhg13*W*WPhi3 - 
        4*hGamn12*invhg12*invhg13*W*WPhi3 - 
        4*hGamn13*Power(invhg13,2)*W*WPhi3 - 
        4*hGamn12*invhg11*invhg23*W*WPhi3 - 
        4*hGamn22*invhg12*invhg23*W*WPhi3 - 
        4*hGamn23*invhg13*invhg23*W*WPhi3 - 
        4*hGamn13*invhg11*invhg33*W*WPhi3 - 
        4*hGamn23*invhg12*invhg33*W*WPhi3 - 
        4*hGamn33*invhg13*invhg33*W*WPhi3 - 
        2*hPhi111*Power(invhg11,2)*W*WPi - 
        4*hPhi112*invhg11*invhg12*W*WPi - 2*hPhi211*invhg11*invhg12*W*WPi - 
        2*hPhi122*Power(invhg12,2)*W*WPi - 
        2*hPhi212*Power(invhg12,2)*W*WPi - 
        4*hPhi113*invhg11*invhg13*W*WPi - 2*hPhi311*invhg11*invhg13*W*WPi - 
        4*hPhi123*invhg12*invhg13*W*WPi - 2*hPhi213*invhg12*invhg13*W*WPi - 
        2*hPhi312*invhg12*invhg13*W*WPi - 
        2*hPhi133*Power(invhg13,2)*W*WPi - 
        2*hPhi313*Power(invhg13,2)*W*WPi - 
        2*hPhi212*invhg11*invhg22*W*WPi - 2*hPhi222*invhg12*invhg22*W*WPi - 
        2*hPhi223*invhg13*invhg22*W*WPi - 2*hPhi213*invhg11*invhg23*W*WPi - 
        2*hPhi312*invhg11*invhg23*W*WPi - 2*hPhi223*invhg12*invhg23*W*WPi - 
        2*hPhi322*invhg12*invhg23*W*WPi - 2*hPhi233*invhg13*invhg23*W*WPi - 
        2*hPhi323*invhg13*invhg23*W*WPi - 2*hPhi313*invhg11*invhg33*W*WPi - 
        2*hPhi323*invhg12*invhg33*W*WPi - 2*hPhi333*invhg13*invhg33*W*WPi - 
        2*invhg11*WPhi1*WPi - 2*invhg12*WPhi2*WPi - 2*invhg13*WPhi3*WPi))/
   alpha
);

local_dthPin2.store(mask, index2, 
-0.5*(2*beta1*cgamma1*cgamma2*hPhin12 + 2*beta2*cgamma1*cgamma2*hPhin22 + 
     2*beta3*cgamma1*cgamma2*hPhin32 + 2*hPhin12*hPin1 + 2*hPhin22*hPin2 + 
     2*hPhin32*hPin3 - 2*hPin2*hPinn + 2*hH1*hPhin11*invhg12 + 
     2*hH2*hPhin12*invhg12 + 2*hH3*hPhin13*invhg12 - 2*hH1*hPinn*invhg12 + 
     2*hH1*hPhin21*invhg22 + 2*hH2*hPhin22*invhg22 + 
     2*hH3*hPhin23*invhg22 - 2*hH2*hPinn*invhg22 + 2*hH1*hPhin31*invhg23 + 
     2*hH2*hPhin32*invhg23 + 2*hH3*hPhin33*invhg23 - 2*hH3*hPinn*invhg23 + 
     5*hPhin12*hPhinn1*invhg11*Power(W,2) + 
     5*hPhin22*hPhinn1*invhg12*Power(W,2) + 
     5*hPhin12*hPhinn2*invhg12*Power(W,2) + 
     hPhinn1*hPinn*invhg12*Power(W,2) + 
     5*hPhin32*hPhinn1*invhg13*Power(W,2) + 
     5*hPhin12*hPhinn3*invhg13*Power(W,2) + 
     5*hPhin22*hPhinn2*invhg22*Power(W,2) + 
     hPhinn2*hPinn*invhg22*Power(W,2) + 
     5*hPhin32*hPhinn2*invhg23*Power(W,2) + 
     5*hPhin22*hPhinn3*invhg23*Power(W,2) + 
     hPhinn3*hPinn*invhg23*Power(W,2) + 
     2*Power(alpha,3)*(dhHn1*invhg12 + dhHn2*invhg22 + dhHn3*invhg23)*
      Power(W,2) + 5*hPhin32*hPhinn3*invhg33*Power(W,2) - 
     2*alpha*(beta2*cgamma1*cgamma2*dhgn22 + 
        beta3*cgamma1*cgamma2*dhgn32 + 
        beta1*(cgamma1*cgamma2*dhgn12 + dhPin12) + beta2*dhPin22 + 
        beta3*dhPin32 - adnhH1*invhg12 + 
        2*hGamnmix11*hH1*invhg11*invhg12 + 
        2*hGamnmix21*hH1*Power(invhg12,2) + 
        2*hGamnmix11*hH2*Power(invhg12,2) + 
        2*hGamnmix31*hH1*invhg12*invhg13 + 
        2*hGamnmix11*hH3*invhg12*invhg13 - adnhH2*invhg22 + 
        2*hGamnmix12*hH1*invhg11*invhg22 + 
        2*hGamnmix22*hH1*invhg12*invhg22 + 
        2*hGamnmix12*hH2*invhg12*invhg22 + 
        2*hGamnmix21*hH2*invhg12*invhg22 + 
        2*hGamnmix32*hH1*invhg13*invhg22 + 
        2*hGamnmix12*hH3*invhg13*invhg22 + 
        2*hGamnmix22*hH2*Power(invhg22,2) - adnhH3*invhg23 + 
        2*hGamnmix13*hH1*invhg11*invhg23 + 
        2*hGamnmix23*hH1*invhg12*invhg23 + 
        2*hGamnmix13*hH2*invhg12*invhg23 + 
        2*hGamnmix31*hH2*invhg12*invhg23 + 
        2*hGamnmix21*hH3*invhg12*invhg23 + 
        2*hGamnmix33*hH1*invhg13*invhg23 + 
        2*hGamnmix13*hH3*invhg13*invhg23 + 
        2*hGamnmix23*hH2*invhg22*invhg23 + 
        2*hGamnmix32*hH2*invhg22*invhg23 + 
        2*hGamnmix22*hH3*invhg22*invhg23 + 
        2*hGamnmix33*hH2*Power(invhg23,2) + 
        2*hGamnmix23*hH3*Power(invhg23,2) + 
        2*hGamnmix31*hH3*invhg12*invhg33 + 
        2*hGamnmix32*hH3*invhg22*invhg33 + 
        2*hGamnmix33*hH3*invhg23*invhg33 - 
        hHn*hPhinn1*invhg12*Power(W,2) + 
        2*hGamnmix11*hPhinn1*invhg11*invhg12*Power(W,2) + 
        2*hGamnmix12*hPhinn1*Power(invhg12,2)*Power(W,2) + 
        2*hGamnmix11*hPhinn2*Power(invhg12,2)*Power(W,2) + 
        2*hGamnmix13*hPhinn1*invhg12*invhg13*Power(W,2) + 
        2*hGamnmix11*hPhinn3*invhg12*invhg13*Power(W,2) - 
        hHn*hPhinn2*invhg22*Power(W,2) + 
        2*hGamnmix21*hPhinn1*invhg11*invhg22*Power(W,2) + 
        2*hGamnmix22*hPhinn1*invhg12*invhg22*Power(W,2) + 
        2*hGamnmix12*hPhinn2*invhg12*invhg22*Power(W,2) + 
        2*hGamnmix21*hPhinn2*invhg12*invhg22*Power(W,2) + 
        2*hGamnmix23*hPhinn1*invhg13*invhg22*Power(W,2) + 
        2*hGamnmix21*hPhinn3*invhg13*invhg22*Power(W,2) + 
        2*hGamnmix22*hPhinn2*Power(invhg22,2)*Power(W,2) - 
        hHn*hPhinn3*invhg23*Power(W,2) + 
        2*hGamnmix31*hPhinn1*invhg11*invhg23*Power(W,2) + 
        2*hGamnmix32*hPhinn1*invhg12*invhg23*Power(W,2) + 
        2*hGamnmix13*hPhinn2*invhg12*invhg23*Power(W,2) + 
        2*hGamnmix31*hPhinn2*invhg12*invhg23*Power(W,2) + 
        2*hGamnmix12*hPhinn3*invhg12*invhg23*Power(W,2) + 
        2*hGamnmix33*hPhinn1*invhg13*invhg23*Power(W,2) + 
        2*hGamnmix31*hPhinn3*invhg13*invhg23*Power(W,2) + 
        2*hGamnmix23*hPhinn2*invhg22*invhg23*Power(W,2) + 
        2*hGamnmix32*hPhinn2*invhg22*invhg23*Power(W,2) + 
        2*hGamnmix22*hPhinn3*invhg22*invhg23*Power(W,2) + 
        2*hGamnmix33*hPhinn2*Power(invhg23,2)*Power(W,2) + 
        2*hGamnmix32*hPhinn3*Power(invhg23,2)*Power(W,2) + 
        2*hGamnmix13*hPhinn3*invhg12*invhg33*Power(W,2) + 
        2*hGamnmix23*hPhinn3*invhg22*invhg33*Power(W,2) + 
        2*hGamnmix33*hPhinn3*invhg23*invhg33*Power(W,2) - 
        2*hPhin11*invhg12*W*WPhi1 - 2*hPhin22*invhg12*W*WPhi1 - 
        2*hPhin33*invhg12*W*WPhi1 - 2*hPhin11*invhg22*W*WPhi2 - 
        2*hPhin22*invhg22*W*WPhi2 - 2*hPhin33*invhg22*W*WPhi2 - 
        2*hPhin11*invhg23*W*WPhi3 - 2*hPhin22*invhg23*W*WPhi3 - 
        2*hPhin33*invhg23*W*WPhi3 + 2*hPhinn1*invhg12*W*WPi + 
        2*hPhinn2*invhg22*W*WPi + 2*hPhinn3*invhg23*W*WPi) + 
     2*Power(alpha,2)*(dhPhin112*invgam11 + dhPhin122*invgam12 + 
        dhPhin212*invgam12 + dhPhin132*invgam13 + dhPhin312*invgam13 + 
        dhPhin222*invgam22 + dhPhin232*invgam23 + dhPhin322*invgam23 + 
        dhPhin332*invgam33 + cgamma0*hH1*invhg12 + cgamma0*hH2*invhg22 + 
        cgamma0*hH3*invhg23 + cgamma0*invhg12*trhGam1 + 
        cgamma0*invhg22*trhGam2 + cgamma0*invhg23*trhGam3 + 
        2*hGam111*hGamn11*Power(invhg11,2)*invhg12*Power(W,2) + 
        4*hGam112*hGamn11*invhg11*Power(invhg12,2)*Power(W,2) + 
        4*hGam111*hGamn12*invhg11*Power(invhg12,2)*Power(W,2) + 
        2*hGam122*hGamn11*Power(invhg12,3)*Power(W,2) + 
        4*hGam112*hGamn12*Power(invhg12,3)*Power(W,2) + 
        2*hGam111*hGamn22*Power(invhg12,3)*Power(W,2) + 
        4*hGam113*hGamn11*invhg11*invhg12*invhg13*Power(W,2) + 
        4*hGam111*hGamn13*invhg11*invhg12*invhg13*Power(W,2) + 
        4*hGam123*hGamn11*Power(invhg12,2)*invhg13*Power(W,2) + 
        4*hGam113*hGamn12*Power(invhg12,2)*invhg13*Power(W,2) + 
        4*hGam112*hGamn13*Power(invhg12,2)*invhg13*Power(W,2) + 
        4*hGam111*hGamn23*Power(invhg12,2)*invhg13*Power(W,2) + 
        2*hGam133*hGamn11*invhg12*Power(invhg13,2)*Power(W,2) + 
        4*hGam113*hGamn13*invhg12*Power(invhg13,2)*Power(W,2) + 
        2*hGam111*hGamn33*invhg12*Power(invhg13,2)*Power(W,2) + 
        2*hGam211*hGamn11*Power(invhg11,2)*invhg22*Power(W,2) + 
        4*hGam212*hGamn11*invhg11*invhg12*invhg22*Power(W,2) + 
        4*hGam112*hGamn12*invhg11*invhg12*invhg22*Power(W,2) + 
        4*hGam211*hGamn12*invhg11*invhg12*invhg22*Power(W,2) + 
        2*hGam222*hGamn11*Power(invhg12,2)*invhg22*Power(W,2) + 
        4*hGam122*hGamn12*Power(invhg12,2)*invhg22*Power(W,2) + 
        4*hGam212*hGamn12*Power(invhg12,2)*invhg22*Power(W,2) + 
        4*hGam112*hGamn22*Power(invhg12,2)*invhg22*Power(W,2) + 
        2*hGam211*hGamn22*Power(invhg12,2)*invhg22*Power(W,2) + 
        4*hGam213*hGamn11*invhg11*invhg13*invhg22*Power(W,2) + 
        4*hGam211*hGamn13*invhg11*invhg13*invhg22*Power(W,2) + 
        4*hGam223*hGamn11*invhg12*invhg13*invhg22*Power(W,2) + 
        4*hGam123*hGamn12*invhg12*invhg13*invhg22*Power(W,2) + 
        4*hGam213*hGamn12*invhg12*invhg13*invhg22*Power(W,2) + 
        4*hGam212*hGamn13*invhg12*invhg13*invhg22*Power(W,2) + 
        4*hGam112*hGamn23*invhg12*invhg13*invhg22*Power(W,2) + 
        4*hGam211*hGamn23*invhg12*invhg13*invhg22*Power(W,2) + 
        2*hGam233*hGamn11*Power(invhg13,2)*invhg22*Power(W,2) + 
        4*hGam213*hGamn13*Power(invhg13,2)*invhg22*Power(W,2) + 
        2*hGam211*hGamn33*Power(invhg13,2)*invhg22*Power(W,2) + 
        4*hGam212*hGamn12*invhg11*Power(invhg22,2)*Power(W,2) + 
        4*hGam222*hGamn12*invhg12*Power(invhg22,2)*Power(W,2) + 
        2*hGam122*hGamn22*invhg12*Power(invhg22,2)*Power(W,2) + 
        4*hGam212*hGamn22*invhg12*Power(invhg22,2)*Power(W,2) + 
        4*hGam223*hGamn12*invhg13*Power(invhg22,2)*Power(W,2) + 
        4*hGam212*hGamn23*invhg13*Power(invhg22,2)*Power(W,2) + 
        2*hGam222*hGamn22*Power(invhg22,3)*Power(W,2) + 
        2*hGam311*hGamn11*Power(invhg11,2)*invhg23*Power(W,2) + 
        4*hGam312*hGamn11*invhg11*invhg12*invhg23*Power(W,2) + 
        4*hGam113*hGamn12*invhg11*invhg12*invhg23*Power(W,2) + 
        4*hGam311*hGamn12*invhg11*invhg12*invhg23*Power(W,2) + 
        4*hGam112*hGamn13*invhg11*invhg12*invhg23*Power(W,2) + 
        2*hGam322*hGamn11*Power(invhg12,2)*invhg23*Power(W,2) + 
        4*hGam123*hGamn12*Power(invhg12,2)*invhg23*Power(W,2) + 
        4*hGam312*hGamn12*Power(invhg12,2)*invhg23*Power(W,2) + 
        4*hGam122*hGamn13*Power(invhg12,2)*invhg23*Power(W,2) + 
        4*hGam113*hGamn22*Power(invhg12,2)*invhg23*Power(W,2) + 
        2*hGam311*hGamn22*Power(invhg12,2)*invhg23*Power(W,2) + 
        4*hGam112*hGamn23*Power(invhg12,2)*invhg23*Power(W,2) + 
        4*hGam313*hGamn11*invhg11*invhg13*invhg23*Power(W,2) + 
        4*hGam311*hGamn13*invhg11*invhg13*invhg23*Power(W,2) + 
        4*hGam323*hGamn11*invhg12*invhg13*invhg23*Power(W,2) + 
        4*hGam133*hGamn12*invhg12*invhg13*invhg23*Power(W,2) + 
        4*hGam313*hGamn12*invhg12*invhg13*invhg23*Power(W,2) + 
        4*hGam123*hGamn13*invhg12*invhg13*invhg23*Power(W,2) + 
        4*hGam312*hGamn13*invhg12*invhg13*invhg23*Power(W,2) + 
        4*hGam113*hGamn23*invhg12*invhg13*invhg23*Power(W,2) + 
        4*hGam311*hGamn23*invhg12*invhg13*invhg23*Power(W,2) + 
        4*hGam112*hGamn33*invhg12*invhg13*invhg23*Power(W,2) + 
        2*hGam333*hGamn11*Power(invhg13,2)*invhg23*Power(W,2) + 
        4*hGam313*hGamn13*Power(invhg13,2)*invhg23*Power(W,2) + 
        2*hGam311*hGamn33*Power(invhg13,2)*invhg23*Power(W,2) + 
        4*hGam213*hGamn12*invhg11*invhg22*invhg23*Power(W,2) + 
        4*hGam312*hGamn12*invhg11*invhg22*invhg23*Power(W,2) + 
        4*hGam212*hGamn13*invhg11*invhg22*invhg23*Power(W,2) + 
        4*hGam223*hGamn12*invhg12*invhg22*invhg23*Power(W,2) + 
        4*hGam322*hGamn12*invhg12*invhg22*invhg23*Power(W,2) + 
        4*hGam222*hGamn13*invhg12*invhg22*invhg23*Power(W,2) + 
        4*hGam123*hGamn22*invhg12*invhg22*invhg23*Power(W,2) + 
        4*hGam213*hGamn22*invhg12*invhg22*invhg23*Power(W,2) + 
        4*hGam312*hGamn22*invhg12*invhg22*invhg23*Power(W,2) + 
        4*hGam122*hGamn23*invhg12*invhg22*invhg23*Power(W,2) + 
        4*hGam212*hGamn23*invhg12*invhg22*invhg23*Power(W,2) + 
        4*hGam233*hGamn12*invhg13*invhg22*invhg23*Power(W,2) + 
        4*hGam323*hGamn12*invhg13*invhg22*invhg23*Power(W,2) + 
        4*hGam223*hGamn13*invhg13*invhg22*invhg23*Power(W,2) + 
        4*hGam213*hGamn23*invhg13*invhg22*invhg23*Power(W,2) + 
        4*hGam312*hGamn23*invhg13*invhg22*invhg23*Power(W,2) + 
        4*hGam212*hGamn33*invhg13*invhg22*invhg23*Power(W,2) + 
        4*hGam223*hGamn22*Power(invhg22,2)*invhg23*Power(W,2) + 
        2*hGam322*hGamn22*Power(invhg22,2)*invhg23*Power(W,2) + 
        4*hGam222*hGamn23*Power(invhg22,2)*invhg23*Power(W,2) + 
        4*hGam313*hGamn12*invhg11*Power(invhg23,2)*Power(W,2) + 
        4*hGam312*hGamn13*invhg11*Power(invhg23,2)*Power(W,2) + 
        4*hGam323*hGamn12*invhg12*Power(invhg23,2)*Power(W,2) + 
        4*hGam322*hGamn13*invhg12*Power(invhg23,2)*Power(W,2) + 
        2*hGam133*hGamn22*invhg12*Power(invhg23,2)*Power(W,2) + 
        4*hGam313*hGamn22*invhg12*Power(invhg23,2)*Power(W,2) + 
        4*hGam123*hGamn23*invhg12*Power(invhg23,2)*Power(W,2) + 
        4*hGam312*hGamn23*invhg12*Power(invhg23,2)*Power(W,2) + 
        2*hGam122*hGamn33*invhg12*Power(invhg23,2)*Power(W,2) + 
        4*hGam333*hGamn12*invhg13*Power(invhg23,2)*Power(W,2) + 
        4*hGam323*hGamn13*invhg13*Power(invhg23,2)*Power(W,2) + 
        4*hGam313*hGamn23*invhg13*Power(invhg23,2)*Power(W,2) + 
        4*hGam312*hGamn33*invhg13*Power(invhg23,2)*Power(W,2) + 
        2*hGam233*hGamn22*invhg22*Power(invhg23,2)*Power(W,2) + 
        4*hGam323*hGamn22*invhg22*Power(invhg23,2)*Power(W,2) + 
        4*hGam223*hGamn23*invhg22*Power(invhg23,2)*Power(W,2) + 
        4*hGam322*hGamn23*invhg22*Power(invhg23,2)*Power(W,2) + 
        2*hGam222*hGamn33*invhg22*Power(invhg23,2)*Power(W,2) + 
        2*hGam333*hGamn22*Power(invhg23,3)*Power(W,2) + 
        4*hGam323*hGamn23*Power(invhg23,3)*Power(W,2) + 
        2*hGam322*hGamn33*Power(invhg23,3)*Power(W,2) + 
        4*hGam113*hGamn13*invhg11*invhg12*invhg33*Power(W,2) + 
        4*hGam123*hGamn13*Power(invhg12,2)*invhg33*Power(W,2) + 
        4*hGam113*hGamn23*Power(invhg12,2)*invhg33*Power(W,2) + 
        4*hGam133*hGamn13*invhg12*invhg13*invhg33*Power(W,2) + 
        4*hGam113*hGamn33*invhg12*invhg13*invhg33*Power(W,2) + 
        4*hGam213*hGamn13*invhg11*invhg22*invhg33*Power(W,2) + 
        4*hGam223*hGamn13*invhg12*invhg22*invhg33*Power(W,2) + 
        4*hGam123*hGamn23*invhg12*invhg22*invhg33*Power(W,2) + 
        4*hGam213*hGamn23*invhg12*invhg22*invhg33*Power(W,2) + 
        4*hGam233*hGamn13*invhg13*invhg22*invhg33*Power(W,2) + 
        4*hGam213*hGamn33*invhg13*invhg22*invhg33*Power(W,2) + 
        4*hGam223*hGamn23*Power(invhg22,2)*invhg33*Power(W,2) + 
        4*hGam313*hGamn13*invhg11*invhg23*invhg33*Power(W,2) + 
        4*hGam323*hGamn13*invhg12*invhg23*invhg33*Power(W,2) + 
        4*hGam133*hGamn23*invhg12*invhg23*invhg33*Power(W,2) + 
        4*hGam313*hGamn23*invhg12*invhg23*invhg33*Power(W,2) + 
        4*hGam123*hGamn33*invhg12*invhg23*invhg33*Power(W,2) + 
        4*hGam333*hGamn13*invhg13*invhg23*invhg33*Power(W,2) + 
        4*hGam313*hGamn33*invhg13*invhg23*invhg33*Power(W,2) + 
        4*hGam233*hGamn23*invhg22*invhg23*invhg33*Power(W,2) + 
        4*hGam323*hGamn23*invhg22*invhg23*invhg33*Power(W,2) + 
        4*hGam223*hGamn33*invhg22*invhg23*invhg33*Power(W,2) + 
        4*hGam333*hGamn23*Power(invhg23,2)*invhg33*Power(W,2) + 
        4*hGam323*hGamn33*Power(invhg23,2)*invhg33*Power(W,2) + 
        2*hGam133*hGamn33*invhg12*Power(invhg33,2)*Power(W,2) + 
        2*hGam233*hGamn33*invhg22*Power(invhg33,2)*Power(W,2) + 
        2*hGam333*hGamn33*invhg23*Power(invhg33,2)*Power(W,2) - 
        4*hGamn11*invhg11*invhg12*W*WPhi1 - 
        4*hGamn12*Power(invhg12,2)*W*WPhi1 - 
        4*hGamn13*invhg12*invhg13*W*WPhi1 - 
        4*hGamn12*invhg11*invhg22*W*WPhi1 - 
        4*hGamn22*invhg12*invhg22*W*WPhi1 - 
        4*hGamn23*invhg13*invhg22*W*WPhi1 - 
        4*hGamn13*invhg11*invhg23*W*WPhi1 - 
        4*hGamn23*invhg12*invhg23*W*WPhi1 - 
        4*hGamn33*invhg13*invhg23*W*WPhi1 - 
        4*hGamn11*Power(invhg12,2)*W*WPhi2 - 
        8*hGamn12*invhg12*invhg22*W*WPhi2 - 
        4*hGamn22*Power(invhg22,2)*W*WPhi2 - 
        8*hGamn13*invhg12*invhg23*W*WPhi2 - 
        8*hGamn23*invhg22*invhg23*W*WPhi2 - 
        4*hGamn33*Power(invhg23,2)*W*WPhi2 - 
        4*hGamn11*invhg12*invhg13*W*WPhi3 - 
        4*hGamn12*invhg13*invhg22*W*WPhi3 - 
        4*hGamn12*invhg12*invhg23*W*WPhi3 - 
        4*hGamn13*invhg13*invhg23*W*WPhi3 - 
        4*hGamn22*invhg22*invhg23*W*WPhi3 - 
        4*hGamn23*Power(invhg23,2)*W*WPhi3 - 
        4*hGamn13*invhg12*invhg33*W*WPhi3 - 
        4*hGamn23*invhg22*invhg33*W*WPhi3 - 
        4*hGamn33*invhg23*invhg33*W*WPhi3 - 
        2*hPhi111*invhg11*invhg12*W*WPi - 
        2*hPhi112*Power(invhg12,2)*W*WPi - 
        2*hPhi211*Power(invhg12,2)*W*WPi - 
        2*hPhi113*invhg12*invhg13*W*WPi - 2*hPhi311*invhg12*invhg13*W*WPi - 
        2*hPhi112*invhg11*invhg22*W*WPi - 2*hPhi122*invhg12*invhg22*W*WPi - 
        4*hPhi212*invhg12*invhg22*W*WPi - 2*hPhi123*invhg13*invhg22*W*WPi - 
        2*hPhi312*invhg13*invhg22*W*WPi - 
        2*hPhi222*Power(invhg22,2)*W*WPi - 
        2*hPhi113*invhg11*invhg23*W*WPi - 2*hPhi123*invhg12*invhg23*W*WPi - 
        4*hPhi213*invhg12*invhg23*W*WPi - 2*hPhi312*invhg12*invhg23*W*WPi - 
        2*hPhi133*invhg13*invhg23*W*WPi - 2*hPhi313*invhg13*invhg23*W*WPi - 
        4*hPhi223*invhg22*invhg23*W*WPi - 2*hPhi322*invhg22*invhg23*W*WPi - 
        2*hPhi233*Power(invhg23,2)*W*WPi - 
        2*hPhi323*Power(invhg23,2)*W*WPi - 
        2*hPhi313*invhg12*invhg33*W*WPi - 2*hPhi323*invhg22*invhg33*W*WPi - 
        2*hPhi333*invhg23*invhg33*W*WPi - 2*invhg12*WPhi1*WPi - 
        2*invhg22*WPhi2*WPi - 2*invhg23*WPhi3*WPi))/alpha
);

local_dthPin3.store(mask, index2, 
-0.5*(2*beta1*cgamma1*cgamma2*hPhin13 + 2*beta2*cgamma1*cgamma2*hPhin23 + 
     2*beta3*cgamma1*cgamma2*hPhin33 + 2*hPhin13*hPin1 + 2*hPhin23*hPin2 + 
     2*hPhin33*hPin3 - 2*hPin3*hPinn + 2*hH1*hPhin11*invhg13 + 
     2*hH2*hPhin12*invhg13 + 2*hH3*hPhin13*invhg13 - 2*hH1*hPinn*invhg13 + 
     2*hH1*hPhin21*invhg23 + 2*hH2*hPhin22*invhg23 + 
     2*hH3*hPhin23*invhg23 - 2*hH2*hPinn*invhg23 + 2*hH1*hPhin31*invhg33 + 
     2*hH2*hPhin32*invhg33 + 2*hH3*hPhin33*invhg33 - 2*hH3*hPinn*invhg33 + 
     5*hPhin13*hPhinn1*invhg11*Power(W,2) + 
     5*hPhin23*hPhinn1*invhg12*Power(W,2) + 
     5*hPhin13*hPhinn2*invhg12*Power(W,2) + 
     5*hPhin33*hPhinn1*invhg13*Power(W,2) + 
     5*hPhin13*hPhinn3*invhg13*Power(W,2) + 
     hPhinn1*hPinn*invhg13*Power(W,2) + 
     5*hPhin23*hPhinn2*invhg22*Power(W,2) + 
     5*hPhin33*hPhinn2*invhg23*Power(W,2) + 
     5*hPhin23*hPhinn3*invhg23*Power(W,2) + 
     hPhinn2*hPinn*invhg23*Power(W,2) + 
     5*hPhin33*hPhinn3*invhg33*Power(W,2) + 
     hPhinn3*hPinn*invhg33*Power(W,2) + 
     2*Power(alpha,3)*(dhHn1*invhg13 + dhHn2*invhg23 + dhHn3*invhg33)*
      Power(W,2) - 2*alpha*(beta2*cgamma1*cgamma2*dhgn23 + 
        beta3*cgamma1*cgamma2*dhgn33 + 
        beta1*(cgamma1*cgamma2*dhgn13 + dhPin13) + beta2*dhPin23 + 
        beta3*dhPin33 - adnhH1*invhg13 + 
        2*hGamnmix11*hH1*invhg11*invhg13 + 
        2*hGamnmix21*hH1*invhg12*invhg13 + 
        2*hGamnmix11*hH2*invhg12*invhg13 + 
        2*hGamnmix31*hH1*Power(invhg13,2) + 
        2*hGamnmix11*hH3*Power(invhg13,2) + 
        2*hGamnmix21*hH2*invhg13*invhg22 - adnhH2*invhg23 + 
        2*hGamnmix12*hH1*invhg11*invhg23 + 
        2*hGamnmix22*hH1*invhg12*invhg23 + 
        2*hGamnmix12*hH2*invhg12*invhg23 + 
        2*hGamnmix32*hH1*invhg13*invhg23 + 
        2*hGamnmix31*hH2*invhg13*invhg23 + 
        2*hGamnmix12*hH3*invhg13*invhg23 + 
        2*hGamnmix21*hH3*invhg13*invhg23 + 
        2*hGamnmix22*hH2*invhg22*invhg23 + 
        2*hGamnmix32*hH2*Power(invhg23,2) + 
        2*hGamnmix22*hH3*Power(invhg23,2) - adnhH3*invhg33 + 
        2*hGamnmix13*hH1*invhg11*invhg33 + 
        2*hGamnmix23*hH1*invhg12*invhg33 + 
        2*hGamnmix13*hH2*invhg12*invhg33 + 
        2*hGamnmix33*hH1*invhg13*invhg33 + 
        2*hGamnmix13*hH3*invhg13*invhg33 + 
        2*hGamnmix31*hH3*invhg13*invhg33 + 
        2*hGamnmix23*hH2*invhg22*invhg33 + 
        2*hGamnmix33*hH2*invhg23*invhg33 + 
        2*hGamnmix23*hH3*invhg23*invhg33 + 
        2*hGamnmix32*hH3*invhg23*invhg33 + 
        2*hGamnmix33*hH3*Power(invhg33,2) - 
        hHn*hPhinn1*invhg13*Power(W,2) + 
        2*hGamnmix11*hPhinn1*invhg11*invhg13*Power(W,2) + 
        2*hGamnmix12*hPhinn1*invhg12*invhg13*Power(W,2) + 
        2*hGamnmix11*hPhinn2*invhg12*invhg13*Power(W,2) + 
        2*hGamnmix13*hPhinn1*Power(invhg13,2)*Power(W,2) + 
        2*hGamnmix11*hPhinn3*Power(invhg13,2)*Power(W,2) + 
        2*hGamnmix12*hPhinn2*invhg13*invhg22*Power(W,2) - 
        hHn*hPhinn2*invhg23*Power(W,2) + 
        2*hGamnmix21*hPhinn1*invhg11*invhg23*Power(W,2) + 
        2*hGamnmix22*hPhinn1*invhg12*invhg23*Power(W,2) + 
        2*hGamnmix21*hPhinn2*invhg12*invhg23*Power(W,2) + 
        2*hGamnmix23*hPhinn1*invhg13*invhg23*Power(W,2) + 
        2*hGamnmix13*hPhinn2*invhg13*invhg23*Power(W,2) + 
        2*hGamnmix12*hPhinn3*invhg13*invhg23*Power(W,2) + 
        2*hGamnmix21*hPhinn3*invhg13*invhg23*Power(W,2) + 
        2*hGamnmix22*hPhinn2*invhg22*invhg23*Power(W,2) + 
        2*hGamnmix23*hPhinn2*Power(invhg23,2)*Power(W,2) + 
        2*hGamnmix22*hPhinn3*Power(invhg23,2)*Power(W,2) - 
        hHn*hPhinn3*invhg33*Power(W,2) + 
        2*hGamnmix31*hPhinn1*invhg11*invhg33*Power(W,2) + 
        2*hGamnmix32*hPhinn1*invhg12*invhg33*Power(W,2) + 
        2*hGamnmix31*hPhinn2*invhg12*invhg33*Power(W,2) + 
        2*hGamnmix33*hPhinn1*invhg13*invhg33*Power(W,2) + 
        2*hGamnmix13*hPhinn3*invhg13*invhg33*Power(W,2) + 
        2*hGamnmix31*hPhinn3*invhg13*invhg33*Power(W,2) + 
        2*hGamnmix32*hPhinn2*invhg22*invhg33*Power(W,2) + 
        2*hGamnmix33*hPhinn2*invhg23*invhg33*Power(W,2) + 
        2*hGamnmix23*hPhinn3*invhg23*invhg33*Power(W,2) + 
        2*hGamnmix32*hPhinn3*invhg23*invhg33*Power(W,2) + 
        2*hGamnmix33*hPhinn3*Power(invhg33,2)*Power(W,2) - 
        2*hPhin11*invhg13*W*WPhi1 - 2*hPhin22*invhg13*W*WPhi1 - 
        2*hPhin33*invhg13*W*WPhi1 - 2*hPhin11*invhg23*W*WPhi2 - 
        2*hPhin22*invhg23*W*WPhi2 - 2*hPhin33*invhg23*W*WPhi2 - 
        2*hPhin11*invhg33*W*WPhi3 - 2*hPhin22*invhg33*W*WPhi3 - 
        2*hPhin33*invhg33*W*WPhi3 + 2*hPhinn1*invhg13*W*WPi + 
        2*hPhinn2*invhg23*W*WPi + 2*hPhinn3*invhg33*W*WPi) + 
     2*Power(alpha,2)*(dhPhin113*invgam11 + dhPhin123*invgam12 + 
        dhPhin213*invgam12 + dhPhin133*invgam13 + dhPhin313*invgam13 + 
        dhPhin223*invgam22 + dhPhin233*invgam23 + dhPhin323*invgam23 + 
        dhPhin333*invgam33 + cgamma0*hH1*invhg13 + cgamma0*hH2*invhg23 + 
        cgamma0*hH3*invhg33 + cgamma0*invhg13*trhGam1 + 
        cgamma0*invhg23*trhGam2 + cgamma0*invhg33*trhGam3 + 
        2*hGam111*hGamn11*Power(invhg11,2)*invhg13*Power(W,2) + 
        4*hGam112*hGamn11*invhg11*invhg12*invhg13*Power(W,2) + 
        4*hGam111*hGamn12*invhg11*invhg12*invhg13*Power(W,2) + 
        2*hGam122*hGamn11*Power(invhg12,2)*invhg13*Power(W,2) + 
        4*hGam112*hGamn12*Power(invhg12,2)*invhg13*Power(W,2) + 
        2*hGam111*hGamn22*Power(invhg12,2)*invhg13*Power(W,2) + 
        4*hGam113*hGamn11*invhg11*Power(invhg13,2)*Power(W,2) + 
        4*hGam111*hGamn13*invhg11*Power(invhg13,2)*Power(W,2) + 
        4*hGam123*hGamn11*invhg12*Power(invhg13,2)*Power(W,2) + 
        4*hGam113*hGamn12*invhg12*Power(invhg13,2)*Power(W,2) + 
        4*hGam112*hGamn13*invhg12*Power(invhg13,2)*Power(W,2) + 
        4*hGam111*hGamn23*invhg12*Power(invhg13,2)*Power(W,2) + 
        2*hGam133*hGamn11*Power(invhg13,3)*Power(W,2) + 
        4*hGam113*hGamn13*Power(invhg13,3)*Power(W,2) + 
        2*hGam111*hGamn33*Power(invhg13,3)*Power(W,2) + 
        4*hGam112*hGamn12*invhg11*invhg13*invhg22*Power(W,2) + 
        4*hGam122*hGamn12*invhg12*invhg13*invhg22*Power(W,2) + 
        4*hGam112*hGamn22*invhg12*invhg13*invhg22*Power(W,2) + 
        4*hGam123*hGamn12*Power(invhg13,2)*invhg22*Power(W,2) + 
        4*hGam112*hGamn23*Power(invhg13,2)*invhg22*Power(W,2) + 
        2*hGam122*hGamn22*invhg13*Power(invhg22,2)*Power(W,2) + 
        2*hGam211*hGamn11*Power(invhg11,2)*invhg23*Power(W,2) + 
        4*hGam212*hGamn11*invhg11*invhg12*invhg23*Power(W,2) + 
        4*hGam211*hGamn12*invhg11*invhg12*invhg23*Power(W,2) + 
        2*hGam222*hGamn11*Power(invhg12,2)*invhg23*Power(W,2) + 
        4*hGam212*hGamn12*Power(invhg12,2)*invhg23*Power(W,2) + 
        2*hGam211*hGamn22*Power(invhg12,2)*invhg23*Power(W,2) + 
        4*hGam213*hGamn11*invhg11*invhg13*invhg23*Power(W,2) + 
        4*hGam113*hGamn12*invhg11*invhg13*invhg23*Power(W,2) + 
        4*hGam112*hGamn13*invhg11*invhg13*invhg23*Power(W,2) + 
        4*hGam211*hGamn13*invhg11*invhg13*invhg23*Power(W,2) + 
        4*hGam223*hGamn11*invhg12*invhg13*invhg23*Power(W,2) + 
        4*hGam123*hGamn12*invhg12*invhg13*invhg23*Power(W,2) + 
        4*hGam213*hGamn12*invhg12*invhg13*invhg23*Power(W,2) + 
        4*hGam122*hGamn13*invhg12*invhg13*invhg23*Power(W,2) + 
        4*hGam212*hGamn13*invhg12*invhg13*invhg23*Power(W,2) + 
        4*hGam113*hGamn22*invhg12*invhg13*invhg23*Power(W,2) + 
        4*hGam112*hGamn23*invhg12*invhg13*invhg23*Power(W,2) + 
        4*hGam211*hGamn23*invhg12*invhg13*invhg23*Power(W,2) + 
        2*hGam233*hGamn11*Power(invhg13,2)*invhg23*Power(W,2) + 
        4*hGam133*hGamn12*Power(invhg13,2)*invhg23*Power(W,2) + 
        4*hGam123*hGamn13*Power(invhg13,2)*invhg23*Power(W,2) + 
        4*hGam213*hGamn13*Power(invhg13,2)*invhg23*Power(W,2) + 
        4*hGam113*hGamn23*Power(invhg13,2)*invhg23*Power(W,2) + 
        4*hGam112*hGamn33*Power(invhg13,2)*invhg23*Power(W,2) + 
        2*hGam211*hGamn33*Power(invhg13,2)*invhg23*Power(W,2) + 
        4*hGam212*hGamn12*invhg11*invhg22*invhg23*Power(W,2) + 
        4*hGam222*hGamn12*invhg12*invhg22*invhg23*Power(W,2) + 
        4*hGam212*hGamn22*invhg12*invhg22*invhg23*Power(W,2) + 
        4*hGam223*hGamn12*invhg13*invhg22*invhg23*Power(W,2) + 
        4*hGam123*hGamn22*invhg13*invhg22*invhg23*Power(W,2) + 
        4*hGam122*hGamn23*invhg13*invhg22*invhg23*Power(W,2) + 
        4*hGam212*hGamn23*invhg13*invhg22*invhg23*Power(W,2) + 
        2*hGam222*hGamn22*Power(invhg22,2)*invhg23*Power(W,2) + 
        4*hGam213*hGamn12*invhg11*Power(invhg23,2)*Power(W,2) + 
        4*hGam212*hGamn13*invhg11*Power(invhg23,2)*Power(W,2) + 
        4*hGam223*hGamn12*invhg12*Power(invhg23,2)*Power(W,2) + 
        4*hGam222*hGamn13*invhg12*Power(invhg23,2)*Power(W,2) + 
        4*hGam213*hGamn22*invhg12*Power(invhg23,2)*Power(W,2) + 
        4*hGam212*hGamn23*invhg12*Power(invhg23,2)*Power(W,2) + 
        4*hGam233*hGamn12*invhg13*Power(invhg23,2)*Power(W,2) + 
        4*hGam223*hGamn13*invhg13*Power(invhg23,2)*Power(W,2) + 
        2*hGam133*hGamn22*invhg13*Power(invhg23,2)*Power(W,2) + 
        4*hGam123*hGamn23*invhg13*Power(invhg23,2)*Power(W,2) + 
        4*hGam213*hGamn23*invhg13*Power(invhg23,2)*Power(W,2) + 
        2*hGam122*hGamn33*invhg13*Power(invhg23,2)*Power(W,2) + 
        4*hGam212*hGamn33*invhg13*Power(invhg23,2)*Power(W,2) + 
        4*hGam223*hGamn22*invhg22*Power(invhg23,2)*Power(W,2) + 
        4*hGam222*hGamn23*invhg22*Power(invhg23,2)*Power(W,2) + 
        2*hGam233*hGamn22*Power(invhg23,3)*Power(W,2) + 
        4*hGam223*hGamn23*Power(invhg23,3)*Power(W,2) + 
        2*hGam222*hGamn33*Power(invhg23,3)*Power(W,2) + 
        2*hGam311*hGamn11*Power(invhg11,2)*invhg33*Power(W,2) + 
        4*hGam312*hGamn11*invhg11*invhg12*invhg33*Power(W,2) + 
        4*hGam311*hGamn12*invhg11*invhg12*invhg33*Power(W,2) + 
        2*hGam322*hGamn11*Power(invhg12,2)*invhg33*Power(W,2) + 
        4*hGam312*hGamn12*Power(invhg12,2)*invhg33*Power(W,2) + 
        2*hGam311*hGamn22*Power(invhg12,2)*invhg33*Power(W,2) + 
        4*hGam313*hGamn11*invhg11*invhg13*invhg33*Power(W,2) + 
        4*hGam113*hGamn13*invhg11*invhg13*invhg33*Power(W,2) + 
        4*hGam311*hGamn13*invhg11*invhg13*invhg33*Power(W,2) + 
        4*hGam323*hGamn11*invhg12*invhg13*invhg33*Power(W,2) + 
        4*hGam313*hGamn12*invhg12*invhg13*invhg33*Power(W,2) + 
        4*hGam123*hGamn13*invhg12*invhg13*invhg33*Power(W,2) + 
        4*hGam312*hGamn13*invhg12*invhg13*invhg33*Power(W,2) + 
        4*hGam113*hGamn23*invhg12*invhg13*invhg33*Power(W,2) + 
        4*hGam311*hGamn23*invhg12*invhg13*invhg33*Power(W,2) + 
        2*hGam333*hGamn11*Power(invhg13,2)*invhg33*Power(W,2) + 
        4*hGam133*hGamn13*Power(invhg13,2)*invhg33*Power(W,2) + 
        4*hGam313*hGamn13*Power(invhg13,2)*invhg33*Power(W,2) + 
        4*hGam113*hGamn33*Power(invhg13,2)*invhg33*Power(W,2) + 
        2*hGam311*hGamn33*Power(invhg13,2)*invhg33*Power(W,2) + 
        4*hGam312*hGamn12*invhg11*invhg22*invhg33*Power(W,2) + 
        4*hGam322*hGamn12*invhg12*invhg22*invhg33*Power(W,2) + 
        4*hGam312*hGamn22*invhg12*invhg22*invhg33*Power(W,2) + 
        4*hGam323*hGamn12*invhg13*invhg22*invhg33*Power(W,2) + 
        4*hGam123*hGamn23*invhg13*invhg22*invhg33*Power(W,2) + 
        4*hGam312*hGamn23*invhg13*invhg22*invhg33*Power(W,2) + 
        2*hGam322*hGamn22*Power(invhg22,2)*invhg33*Power(W,2) + 
        4*hGam313*hGamn12*invhg11*invhg23*invhg33*Power(W,2) + 
        4*hGam213*hGamn13*invhg11*invhg23*invhg33*Power(W,2) + 
        4*hGam312*hGamn13*invhg11*invhg23*invhg33*Power(W,2) + 
        4*hGam323*hGamn12*invhg12*invhg23*invhg33*Power(W,2) + 
        4*hGam223*hGamn13*invhg12*invhg23*invhg33*Power(W,2) + 
        4*hGam322*hGamn13*invhg12*invhg23*invhg33*Power(W,2) + 
        4*hGam313*hGamn22*invhg12*invhg23*invhg33*Power(W,2) + 
        4*hGam213*hGamn23*invhg12*invhg23*invhg33*Power(W,2) + 
        4*hGam312*hGamn23*invhg12*invhg23*invhg33*Power(W,2) + 
        4*hGam333*hGamn12*invhg13*invhg23*invhg33*Power(W,2) + 
        4*hGam233*hGamn13*invhg13*invhg23*invhg33*Power(W,2) + 
        4*hGam323*hGamn13*invhg13*invhg23*invhg33*Power(W,2) + 
        4*hGam133*hGamn23*invhg13*invhg23*invhg33*Power(W,2) + 
        4*hGam313*hGamn23*invhg13*invhg23*invhg33*Power(W,2) + 
        4*hGam123*hGamn33*invhg13*invhg23*invhg33*Power(W,2) + 
        4*hGam213*hGamn33*invhg13*invhg23*invhg33*Power(W,2) + 
        4*hGam312*hGamn33*invhg13*invhg23*invhg33*Power(W,2) + 
        4*hGam323*hGamn22*invhg22*invhg23*invhg33*Power(W,2) + 
        4*hGam223*hGamn23*invhg22*invhg23*invhg33*Power(W,2) + 
        4*hGam322*hGamn23*invhg22*invhg23*invhg33*Power(W,2) + 
        2*hGam333*hGamn22*Power(invhg23,2)*invhg33*Power(W,2) + 
        4*hGam233*hGamn23*Power(invhg23,2)*invhg33*Power(W,2) + 
        4*hGam323*hGamn23*Power(invhg23,2)*invhg33*Power(W,2) + 
        4*hGam223*hGamn33*Power(invhg23,2)*invhg33*Power(W,2) + 
        2*hGam322*hGamn33*Power(invhg23,2)*invhg33*Power(W,2) + 
        4*hGam313*hGamn13*invhg11*Power(invhg33,2)*Power(W,2) + 
        4*hGam323*hGamn13*invhg12*Power(invhg33,2)*Power(W,2) + 
        4*hGam313*hGamn23*invhg12*Power(invhg33,2)*Power(W,2) + 
        4*hGam333*hGamn13*invhg13*Power(invhg33,2)*Power(W,2) + 
        2*hGam133*hGamn33*invhg13*Power(invhg33,2)*Power(W,2) + 
        4*hGam313*hGamn33*invhg13*Power(invhg33,2)*Power(W,2) + 
        4*hGam323*hGamn23*invhg22*Power(invhg33,2)*Power(W,2) + 
        4*hGam333*hGamn23*invhg23*Power(invhg33,2)*Power(W,2) + 
        2*hGam233*hGamn33*invhg23*Power(invhg33,2)*Power(W,2) + 
        4*hGam323*hGamn33*invhg23*Power(invhg33,2)*Power(W,2) + 
        2*hGam333*hGamn33*Power(invhg33,3)*Power(W,2) - 
        4*hGamn11*invhg11*invhg13*W*WPhi1 - 
        4*hGamn12*invhg12*invhg13*W*WPhi1 - 
        4*hGamn13*Power(invhg13,2)*W*WPhi1 - 
        4*hGamn12*invhg11*invhg23*W*WPhi1 - 
        4*hGamn22*invhg12*invhg23*W*WPhi1 - 
        4*hGamn23*invhg13*invhg23*W*WPhi1 - 
        4*hGamn13*invhg11*invhg33*W*WPhi1 - 
        4*hGamn23*invhg12*invhg33*W*WPhi1 - 
        4*hGamn33*invhg13*invhg33*W*WPhi1 - 
        4*hGamn11*invhg12*invhg13*W*WPhi2 - 
        4*hGamn12*invhg13*invhg22*W*WPhi2 - 
        4*hGamn12*invhg12*invhg23*W*WPhi2 - 
        4*hGamn13*invhg13*invhg23*W*WPhi2 - 
        4*hGamn22*invhg22*invhg23*W*WPhi2 - 
        4*hGamn23*Power(invhg23,2)*W*WPhi2 - 
        4*hGamn13*invhg12*invhg33*W*WPhi2 - 
        4*hGamn23*invhg22*invhg33*W*WPhi2 - 
        4*hGamn33*invhg23*invhg33*W*WPhi2 - 
        4*hGamn11*Power(invhg13,2)*W*WPhi3 - 
        8*hGamn12*invhg13*invhg23*W*WPhi3 - 
        4*hGamn22*Power(invhg23,2)*W*WPhi3 - 
        8*hGamn13*invhg13*invhg33*W*WPhi3 - 
        8*hGamn23*invhg23*invhg33*W*WPhi3 - 
        4*hGamn33*Power(invhg33,2)*W*WPhi3 - 
        2*hPhi111*invhg11*invhg13*W*WPi - 2*hPhi112*invhg12*invhg13*W*WPi - 
        2*hPhi211*invhg12*invhg13*W*WPi - 
        2*hPhi113*Power(invhg13,2)*W*WPi - 
        2*hPhi311*Power(invhg13,2)*W*WPi - 
        2*hPhi212*invhg13*invhg22*W*WPi - 2*hPhi112*invhg11*invhg23*W*WPi - 
        2*hPhi122*invhg12*invhg23*W*WPi - 2*hPhi212*invhg12*invhg23*W*WPi - 
        2*hPhi123*invhg13*invhg23*W*WPi - 2*hPhi213*invhg13*invhg23*W*WPi - 
        4*hPhi312*invhg13*invhg23*W*WPi - 2*hPhi222*invhg22*invhg23*W*WPi - 
        2*hPhi223*Power(invhg23,2)*W*WPi - 
        2*hPhi322*Power(invhg23,2)*W*WPi - 
        2*hPhi113*invhg11*invhg33*W*WPi - 2*hPhi123*invhg12*invhg33*W*WPi - 
        2*hPhi213*invhg12*invhg33*W*WPi - 2*hPhi133*invhg13*invhg33*W*WPi - 
        4*hPhi313*invhg13*invhg33*W*WPi - 2*hPhi223*invhg22*invhg33*W*WPi - 
        2*hPhi233*invhg23*invhg33*W*WPi - 4*hPhi323*invhg23*invhg33*W*WPi - 
        2*hPhi333*Power(invhg33,2)*W*WPi - 2*invhg13*WPhi1*WPi - 
        2*invhg23*WPhi2*WPi - 2*invhg33*WPhi3*WPi))/alpha
);

local_dthPhin11.store(mask, index2, 
beta1*dhPhin111 + beta2*dhPhin211 + beta3*dhPhin311 + 
  alpha*(cgamma2*dhgn11 - dhPin11) - cgamma2*hPhin11 + 
  (Power(hPhin11,2) + hPhin12*hPhin21 + hPhin13*hPhin31 + 
     (hPhin11*hPinn)/2.)/alpha
);

local_dthPhin12.store(mask, index2, 
beta1*dhPhin112 + beta2*dhPhin212 + beta3*dhPhin312 + 
  alpha*(cgamma2*dhgn12 - dhPin12) - cgamma2*hPhin12 + 
  (hPhin11*hPhin12 + hPhin12*hPhin22 + hPhin13*hPhin32 + (hPhin12*hPinn)/2.)/
   alpha
);

local_dthPhin13.store(mask, index2, 
beta1*dhPhin113 + beta2*dhPhin213 + beta3*dhPhin313 + 
  alpha*(cgamma2*dhgn13 - dhPin13) - cgamma2*hPhin13 + 
  (hPhin11*hPhin13 + hPhin12*hPhin23 + hPhin13*hPhin33 + (hPhin13*hPinn)/2.)/
   alpha
);

local_dthPhin21.store(mask, index2, 
beta1*dhPhin121 + beta2*dhPhin221 + beta3*dhPhin321 + 
  alpha*(cgamma2*dhgn21 - dhPin21) - cgamma2*hPhin21 + 
  (hPhin11*hPhin21 + hPhin21*hPhin22 + hPhin23*hPhin31 + (hPhin21*hPinn)/2.)/
   alpha
);

local_dthPhin22.store(mask, index2, 
beta1*dhPhin122 + beta2*dhPhin222 + beta3*dhPhin322 + 
  alpha*(cgamma2*dhgn22 - dhPin22) - cgamma2*hPhin22 + 
  (hPhin12*hPhin21 + Power(hPhin22,2) + hPhin23*hPhin32 + 
     (hPhin22*hPinn)/2.)/alpha
);

local_dthPhin23.store(mask, index2, 
beta1*dhPhin123 + beta2*dhPhin223 + beta3*dhPhin323 + 
  alpha*(cgamma2*dhgn23 - dhPin23) - cgamma2*hPhin23 + 
  (hPhin13*hPhin21 + hPhin22*hPhin23 + hPhin23*hPhin33 + (hPhin23*hPinn)/2.)/
   alpha
);

local_dthPhin31.store(mask, index2, 
beta1*dhPhin131 + beta2*dhPhin231 + beta3*dhPhin331 + 
  alpha*(cgamma2*dhgn31 - dhPin31) - cgamma2*hPhin31 + 
  (hPhin11*hPhin31 + hPhin21*hPhin32 + hPhin31*hPhin33 + (hPhin31*hPinn)/2.)/
   alpha
);

local_dthPhin32.store(mask, index2, 
beta1*dhPhin132 + beta2*dhPhin232 + beta3*dhPhin332 + 
  alpha*(cgamma2*dhgn32 - dhPin32) - cgamma2*hPhin32 + 
  (hPhin12*hPhin31 + hPhin22*hPhin32 + hPhin32*hPhin33 + (hPhin32*hPinn)/2.)/
   alpha
);

local_dthPhin33.store(mask, index2, 
beta1*dhPhin133 + beta2*dhPhin233 + beta3*dhPhin333 + 
  alpha*(cgamma2*dhgn33 - dhPin33) - cgamma2*hPhin33 + 
  (hPhin13*hPhin31 + hPhin23*hPhin32 + Power(hPhin33,2) + 
     (hPhin33*hPinn)/2.)/alpha
);

local_dthgnn.store(mask, index2, 
beta1*(1 + cgamma1)*dhgnn1 + beta2*(1 + cgamma1)*dhgnn2 + beta3*dhgnn3 + 
  beta3*cgamma1*dhgnn3 - (cgamma1*
     (beta1*hPhinn1 + beta2*hPhinn2 + beta3*hPhinn3))/alpha - hPinn
);

local_dthPinn.store(mask, index2, 
-2*adnhHn*alpha - Power(alpha,2)*cgamma0*(hHn + trhGamn) - 
  (beta1*cgamma1*cgamma2*hPhinn1 + beta2*cgamma1*cgamma2*hPhinn2 + 
     beta3*cgamma1*cgamma2*hPhinn3 + hPhinn1*hPin1 + hPhinn2*hPin2 + 
     hPhinn3*hPin3 - Power(hPinn,2) + hH1*hPhinn1*invhg11 + 
     hH2*hPhinn1*invhg12 + hH1*hPhinn2*invhg12 + hH3*hPhinn1*invhg13 + 
     hH1*hPhinn3*invhg13 + hH2*hPhinn2*invhg22 + hH3*hPhinn2*invhg23 + 
     hH2*hPhinn3*invhg23 + hH3*hPhinn3*invhg33 + 
     Power(hPhinn1,2)*invhg11*Power(W,2) + 
     2*hPhinn1*hPhinn2*invhg12*Power(W,2) + 
     2*hPhinn1*hPhinn3*invhg13*Power(W,2) + 
     Power(hPhinn2,2)*invhg22*Power(W,2) + 
     2*hPhinn2*hPhinn3*invhg23*Power(W,2) + 
     Power(hPhinn3,2)*invhg33*Power(W,2))/alpha + 
  (beta3*cgamma1*cgamma2*dhgnn3*W + 
     beta1*(cgamma1*cgamma2*dhgnn1 + dhPinn1)*W + 
     beta2*(cgamma1*cgamma2*dhgnn2 + dhPinn2)*W + beta3*dhPinn3*W + 
     hHn*hPinn*W + 4*hPhin11*WPi + 4*hPhin22*WPi + 4*hPhin33*WPi)/W + 
  alpha*(-(dhPhinn11*invgam11) - dhPhinn12*invgam12 - dhPhinn21*invgam12 - 
     dhPhinn13*invgam13 - dhPhinn31*invgam13 - dhPhinn22*invgam22 - 
     dhPhinn23*invgam23 - dhPhinn32*invgam23 - dhPhinn33*invgam33 - 
     2*Power(hGamn11,2)*Power(invhg11,2) - 
     8*hGamn11*hGamn12*invhg11*invhg12 - 
     4*Power(hGamn12,2)*Power(invhg12,2) - 
     4*hGamn11*hGamn22*Power(invhg12,2) - 
     8*hGamn11*hGamn13*invhg11*invhg13 - 8*hGamn12*hGamn13*invhg12*invhg13 - 
     8*hGamn11*hGamn23*invhg12*invhg13 - 
     4*Power(hGamn13,2)*Power(invhg13,2) - 
     4*hGamn11*hGamn33*Power(invhg13,2) - 
     4*Power(hGamn12,2)*invhg11*invhg22 - 
     8*hGamn12*hGamn22*invhg12*invhg22 - 8*hGamn12*hGamn23*invhg13*invhg22 - 
     2*Power(hGamn22,2)*Power(invhg22,2) - 
     8*hGamn12*hGamn13*invhg11*invhg23 - 8*hGamn13*hGamn22*invhg12*invhg23 - 
     8*hGamn12*hGamn23*invhg12*invhg23 - 8*hGamn13*hGamn23*invhg13*invhg23 - 
     8*hGamn12*hGamn33*invhg13*invhg23 - 8*hGamn22*hGamn23*invhg22*invhg23 - 
     4*Power(hGamn23,2)*Power(invhg23,2) - 
     4*hGamn22*hGamn33*Power(invhg23,2) - 
     4*Power(hGamn13,2)*invhg11*invhg33 - 
     8*hGamn13*hGamn23*invhg12*invhg33 - 8*hGamn13*hGamn33*invhg13*invhg33 - 
     4*Power(hGamn23,2)*invhg22*invhg33 - 
     8*hGamn23*hGamn33*invhg23*invhg33 - 
     2*Power(hGamn33,2)*Power(invhg33,2) - (6*Power(WPi,2))/Power(W,2))
);

local_dthPhinn1.store(mask, index2, 
beta1*dhPhinn11 + beta2*dhPhinn21 + beta3*dhPhinn31 + 
  alpha*(cgamma2*dhgnn1 - dhPinn1) - cgamma2*hPhinn1 + 
  (hPhin11*hPhinn1 + hPhin12*hPhinn2 + hPhin13*hPhinn3 + (hPhinn1*hPinn)/2.)/
   alpha
);

local_dthPhinn2.store(mask, index2, 
beta1*dhPhinn12 + beta2*dhPhinn22 + beta3*dhPhinn32 + 
  alpha*(cgamma2*dhgnn2 - dhPinn2) - cgamma2*hPhinn2 + 
  (hPhin21*hPhinn1 + hPhin22*hPhinn2 + hPhin23*hPhinn3 + (hPhinn2*hPinn)/2.)/
   alpha
);

local_dthPhinn3.store(mask, index2, 
beta1*dhPhinn13 + beta2*dhPhinn23 + beta3*dhPhinn33 + 
  alpha*(cgamma2*dhgnn3 - dhPinn3) - cgamma2*hPhinn3 + 
  (hPhin31*hPhinn1 + hPhin32*hPhinn2 + hPhin33*hPhinn3 + (hPhinn3*hPinn)/2.)/
   alpha
);

local_dtW.store(mask, index2, 
beta1*(1 + cgamma1)*dW1 + beta2*(1 + cgamma1)*dW2 + beta3*dW3 + 
  beta3*cgamma1*dW3 - (cgamma1*(beta1*WPhi1 + beta2*WPhi2 + beta3*WPhi3))/
   alpha - WPi
);

local_dtWPi.store(mask, index2, 
(6*beta3*cgamma1*cgamma2*dW3 + 6*beta1*(cgamma1*cgamma2*dW1 + dWPi1) + 
    6*beta2*(cgamma1*cgamma2*dW2 + dWPi2) + 6*beta3*dWPi3 - 
    6*alpha*(dWPhi11*invgam11 + dWPhi12*invgam12 + dWPhi21*invgam12 + 
       dWPhi13*invgam13 + dWPhi31*invgam13 + dWPhi22*invgam22 + 
       dWPhi23*invgam23 + dWPhi32*invgam23 + dWPhi33*invgam33) + 
    2*dhH11*invhg11*W + 2*dhH12*invhg12*W + 2*dhH21*invhg12*W + 
    2*dhH13*invhg13*W + 2*dhH31*invhg13*W + 2*dhH22*invhg22*W + 
    2*dhH23*invhg23*W + 2*dhH32*invhg23*W + 2*dhH33*invhg33*W + 3*trPi*W + 
    6*invhg11*W*Power(WPhi1,2) + 12*invhg12*W*WPhi1*WPhi2 + 
    6*invhg22*W*Power(WPhi2,2) + 12*invhg13*W*WPhi1*WPhi3 + 
    12*invhg23*W*WPhi2*WPhi3 + 6*invhg33*W*Power(WPhi3,2) - 
    (3*(2*beta1*cgamma1*cgamma2*WPhi1 + 2*hPin1*WPhi1 + 
         2*hH1*invhg11*WPhi1 + 2*hH2*invhg12*WPhi1 + 
         2*hH3*invhg13*WPhi1 + hPhinn1*invhg11*Power(W,2)*WPhi1 + 
         hPhinn2*invhg12*Power(W,2)*WPhi1 + 
         hPhinn3*invhg13*Power(W,2)*WPhi1 + 
         2*beta2*cgamma1*cgamma2*WPhi2 + 2*hPin2*WPhi2 + 
         2*hH1*invhg12*WPhi2 + 2*hH2*invhg22*WPhi2 + 
         2*hH3*invhg23*WPhi2 + hPhinn1*invhg12*Power(W,2)*WPhi2 + 
         hPhinn2*invhg22*Power(W,2)*WPhi2 + 
         hPhinn3*invhg23*Power(W,2)*WPhi2 + 
         2*beta3*cgamma1*cgamma2*WPhi3 + 2*hPin3*WPhi3 + 
         2*hH1*invhg13*WPhi3 + 2*hH2*invhg23*WPhi3 + 
         2*hH3*invhg33*WPhi3 + hPhinn1*invhg13*Power(W,2)*WPhi3 + 
         hPhinn2*invhg23*Power(W,2)*WPhi3 + 
         hPhinn3*invhg33*Power(W,2)*WPhi3))/alpha - 6*hHn*WPi - 
    (6*Power(WPi,2))/W)/6.
);

local_dtWPhi1.store(mask, index2, 
beta1*dWPhi11 + beta2*dWPhi21 + beta3*dWPhi31 + 
  alpha*(cgamma2*dW1 - dWPi1) - cgamma2*WPhi1 + 
  (hPhin11*WPhi1 + (hPinn*WPhi1)/2. + hPhin12*WPhi2 + hPhin13*WPhi3)/alpha
);

local_dtWPhi2.store(mask, index2, 
beta1*dWPhi12 + beta2*dWPhi22 + beta3*dWPhi32 + 
  alpha*(cgamma2*dW2 - dWPi2) - cgamma2*WPhi2 + 
  (hPhin21*WPhi1 + hPhin22*WPhi2 + (hPinn*WPhi2)/2. + hPhin23*WPhi3)/alpha
);

local_dtWPhi3.store(mask, index2, 
beta1*dWPhi13 + beta2*dWPhi23 + beta3*dWPhi33 + 
  alpha*(cgamma2*dW3 - dWPi3) - cgamma2*WPhi3 + 
  (hPhin31*WPhi1 + hPhin32*WPhi2 + hPhin33*WPhi3 + (hPinn*WPhi3)/2.)/alpha
);

local_dthHn.store(mask, index2, 
adnhHn + beta1*dhHn1 + beta2*dhHn2 + beta3*dhHn3
);

local_dthH1.store(mask, index2, 
adnhH1 + beta1*dhH11 + beta2*dhH21 + beta3*dhH31
);

local_dthH2.store(mask, index2, 
adnhH2 + beta1*dhH12 + beta2*dhH22 + beta3*dhH32
);

local_dthH3.store(mask, index2, 
adnhH3 + beta1*dhH13 + beta2*dhH23 + beta3*dhH33
);

local_dththetan.store(mask, index2, 
-(czetaL*(beta1*dhHn1 + beta2*dhHn2 + beta3*dhHn3 + hthetan))
);

local_dththeta1.store(mask, index2, 
-(czetaS*(beta1*dhH11 + beta2*dhH21 + beta3*dhH31 + htheta1))
);

local_dththeta2.store(mask, index2, 
-(czetaS*(beta1*dhH12 + beta2*dhH22 + beta3*dhH32 + htheta2))
);

local_dththeta3.store(mask, index2, 
-(czetaS*(beta1*dhH13 + beta2*dhH23 + beta3*dhH33 + htheta3))
);


  });
});

#endif // #ifndef CGHG_SET_RHS_HXX

/* cGHG_set_rhs.hxx */
