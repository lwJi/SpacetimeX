/* Z4cow_set_rhs.hxx */
/* Produced with Generato */

#ifndef Z4COW_SET_RHS_HXX
#define Z4COW_SET_RHS_HXX

noinline([&]() __attribute__((__flatten__, __hot__)) {
  grid.loop_int_device<0, 0, 0>(
    grid.nghostzones, [=] ARITH_DEVICE(const PointDesc &p) ARITH_INLINE {

const auto dWx = fd_1st<1>(W, p);
const auto dWy = fd_1st<2>(W, p);
const auto dWz = fd_1st<3>(W, p);
const auto dgamtxxx = fd_1st<1>(gamtxx, p);
const auto dgamtxxy = fd_1st<1>(gamtxy, p);
const auto dgamtxxz = fd_1st<1>(gamtxz, p);
const auto dgamtxyy = fd_1st<1>(gamtyy, p);
const auto dgamtxyz = fd_1st<1>(gamtyz, p);
const auto dgamtxzz = fd_1st<1>(gamtzz, p);
const auto dgamtyxx = fd_1st<2>(gamtxx, p);
const auto dgamtyxy = fd_1st<2>(gamtxy, p);
const auto dgamtyxz = fd_1st<2>(gamtxz, p);
const auto dgamtyyy = fd_1st<2>(gamtyy, p);
const auto dgamtyyz = fd_1st<2>(gamtyz, p);
const auto dgamtyzz = fd_1st<2>(gamtzz, p);
const auto dgamtzxx = fd_1st<3>(gamtxx, p);
const auto dgamtzxy = fd_1st<3>(gamtxy, p);
const auto dgamtzxz = fd_1st<3>(gamtxz, p);
const auto dgamtzyy = fd_1st<3>(gamtyy, p);
const auto dgamtzyz = fd_1st<3>(gamtyz, p);
const auto dgamtzzz = fd_1st<3>(gamtzz, p);
const auto dexKhx = fd_1st<1>(exKh, p);
const auto dexKhy = fd_1st<2>(exKh, p);
const auto dexKhz = fd_1st<3>(exKh, p);
const auto dexAtxxx = fd_1st<1>(exAtxx, p);
const auto dexAtxxy = fd_1st<1>(exAtxy, p);
const auto dexAtxxz = fd_1st<1>(exAtxz, p);
const auto dexAtxyy = fd_1st<1>(exAtyy, p);
const auto dexAtxyz = fd_1st<1>(exAtyz, p);
const auto dexAtxzz = fd_1st<1>(exAtzz, p);
const auto dexAtyxx = fd_1st<2>(exAtxx, p);
const auto dexAtyxy = fd_1st<2>(exAtxy, p);
const auto dexAtyxz = fd_1st<2>(exAtxz, p);
const auto dexAtyyy = fd_1st<2>(exAtyy, p);
const auto dexAtyyz = fd_1st<2>(exAtyz, p);
const auto dexAtyzz = fd_1st<2>(exAtzz, p);
const auto dexAtzxx = fd_1st<3>(exAtxx, p);
const auto dexAtzxy = fd_1st<3>(exAtxy, p);
const auto dexAtzxz = fd_1st<3>(exAtxz, p);
const auto dexAtzyy = fd_1st<3>(exAtyy, p);
const auto dexAtzyz = fd_1st<3>(exAtyz, p);
const auto dexAtzzz = fd_1st<3>(exAtzz, p);
const auto dtrGtxx = fd_1st<1>(trGtx, p);
const auto dtrGtxy = fd_1st<1>(trGty, p);
const auto dtrGtxz = fd_1st<1>(trGtz, p);
const auto dtrGtyx = fd_1st<2>(trGtx, p);
const auto dtrGtyy = fd_1st<2>(trGty, p);
const auto dtrGtyz = fd_1st<2>(trGtz, p);
const auto dtrGtzx = fd_1st<3>(trGtx, p);
const auto dtrGtzy = fd_1st<3>(trGty, p);
const auto dtrGtzz = fd_1st<3>(trGtz, p);
const auto dThetax = fd_1st<1>(Theta, p);
const auto dThetay = fd_1st<2>(Theta, p);
const auto dThetaz = fd_1st<3>(Theta, p);
const auto dalphax = fd_1st<1>(alpha, p);
const auto dalphay = fd_1st<2>(alpha, p);
const auto dalphaz = fd_1st<3>(alpha, p);
const auto dbetaxx = fd_1st<1>(betax, p);
const auto dbetaxy = fd_1st<1>(betay, p);
const auto dbetaxz = fd_1st<1>(betaz, p);
const auto dbetayx = fd_1st<2>(betax, p);
const auto dbetayy = fd_1st<2>(betay, p);
const auto dbetayz = fd_1st<2>(betaz, p);
const auto dbetazx = fd_1st<3>(betax, p);
const auto dbetazy = fd_1st<3>(betay, p);
const auto dbetazz = fd_1st<3>(betaz, p);
const auto ddWxx = fd_2nd<1><1>(W, p);
const auto ddWxy = fd_2nd<1><2>(W, p);
const auto ddWxz = fd_2nd<1><3>(W, p);
const auto ddWyy = fd_2nd<2><2>(W, p);
const auto ddWyz = fd_2nd<2><3>(W, p);
const auto ddWzz = fd_2nd<3><3>(W, p);
const auto ddgamtxxxx = fd_2nd<1><1>(gamtxx, p);
const auto ddgamtxxxy = fd_2nd<1><1>(gamtxy, p);
const auto ddgamtxxxz = fd_2nd<1><1>(gamtxz, p);
const auto ddgamtxxyy = fd_2nd<1><1>(gamtyy, p);
const auto ddgamtxxyz = fd_2nd<1><1>(gamtyz, p);
const auto ddgamtxxzz = fd_2nd<1><1>(gamtzz, p);
const auto ddgamtxyxx = fd_2nd<1><2>(gamtxx, p);
const auto ddgamtxyxy = fd_2nd<1><2>(gamtxy, p);
const auto ddgamtxyxz = fd_2nd<1><2>(gamtxz, p);
const auto ddgamtxyyy = fd_2nd<1><2>(gamtyy, p);
const auto ddgamtxyyz = fd_2nd<1><2>(gamtyz, p);
const auto ddgamtxyzz = fd_2nd<1><2>(gamtzz, p);
const auto ddgamtxzxx = fd_2nd<1><3>(gamtxx, p);
const auto ddgamtxzxy = fd_2nd<1><3>(gamtxy, p);
const auto ddgamtxzxz = fd_2nd<1><3>(gamtxz, p);
const auto ddgamtxzyy = fd_2nd<1><3>(gamtyy, p);
const auto ddgamtxzyz = fd_2nd<1><3>(gamtyz, p);
const auto ddgamtxzzz = fd_2nd<1><3>(gamtzz, p);
const auto ddgamtyyxx = fd_2nd<2><2>(gamtxx, p);
const auto ddgamtyyxy = fd_2nd<2><2>(gamtxy, p);
const auto ddgamtyyxz = fd_2nd<2><2>(gamtxz, p);
const auto ddgamtyyyy = fd_2nd<2><2>(gamtyy, p);
const auto ddgamtyyyz = fd_2nd<2><2>(gamtyz, p);
const auto ddgamtyyzz = fd_2nd<2><2>(gamtzz, p);
const auto ddgamtyzxx = fd_2nd<2><3>(gamtxx, p);
const auto ddgamtyzxy = fd_2nd<2><3>(gamtxy, p);
const auto ddgamtyzxz = fd_2nd<2><3>(gamtxz, p);
const auto ddgamtyzyy = fd_2nd<2><3>(gamtyy, p);
const auto ddgamtyzyz = fd_2nd<2><3>(gamtyz, p);
const auto ddgamtyzzz = fd_2nd<2><3>(gamtzz, p);
const auto ddgamtzzxx = fd_2nd<3><3>(gamtxx, p);
const auto ddgamtzzxy = fd_2nd<3><3>(gamtxy, p);
const auto ddgamtzzxz = fd_2nd<3><3>(gamtxz, p);
const auto ddgamtzzyy = fd_2nd<3><3>(gamtyy, p);
const auto ddgamtzzyz = fd_2nd<3><3>(gamtyz, p);
const auto ddgamtzzzz = fd_2nd<3><3>(gamtzz, p);
const auto ddalphaxx = fd_2nd<1><1>(alpha, p);
const auto ddalphaxy = fd_2nd<1><2>(alpha, p);
const auto ddalphaxz = fd_2nd<1><3>(alpha, p);
const auto ddalphayy = fd_2nd<2><2>(alpha, p);
const auto ddalphayz = fd_2nd<2><3>(alpha, p);
const auto ddalphazz = fd_2nd<3><3>(alpha, p);
const auto ddbetaxxx = fd_2nd<1><1>(betax, p);
const auto ddbetaxxy = fd_2nd<1><1>(betay, p);
const auto ddbetaxxz = fd_2nd<1><1>(betaz, p);
const auto ddbetaxyx = fd_2nd<1><2>(betax, p);
const auto ddbetaxyy = fd_2nd<1><2>(betay, p);
const auto ddbetaxyz = fd_2nd<1><2>(betaz, p);
const auto ddbetaxzx = fd_2nd<1><3>(betax, p);
const auto ddbetaxzy = fd_2nd<1><3>(betay, p);
const auto ddbetaxzz = fd_2nd<1><3>(betaz, p);
const auto ddbetayyx = fd_2nd<2><2>(betax, p);
const auto ddbetayyy = fd_2nd<2><2>(betay, p);
const auto ddbetayyz = fd_2nd<2><2>(betaz, p);
const auto ddbetayzx = fd_2nd<2><3>(betax, p);
const auto ddbetayzy = fd_2nd<2><3>(betay, p);
const auto ddbetayzz = fd_2nd<2><3>(betaz, p);
const auto ddbetazzx = fd_2nd<3><3>(betax, p);
const auto ddbetazzy = fd_2nd<3><3>(betay, p);
const auto ddbetazzz = fd_2nd<3><3>(betaz, p);

const auto
dlnWx
=
dWx/W(p.I)
;

const auto
dlnWy
=
dWy/W(p.I)
;

const auto
dlnWz
=
dWz/W(p.I)
;

const auto
invgamtxx
=
-Power(gamtyz(p.I),2) + gamtyy(p.I)*gamtzz(p.I)
;

const auto
invgamtxy
=
gamtxz(p.I)*gamtyz(p.I) - gamtxy(p.I)*gamtzz(p.I)
;

const auto
invgamtxz
=
-(gamtxz(p.I)*gamtyy(p.I)) + gamtxy(p.I)*gamtyz(p.I)
;

const auto
invgamtyy
=
-Power(gamtxz(p.I),2) + gamtxx(p.I)*gamtzz(p.I)
;

const auto
invgamtyz
=
gamtxy(p.I)*gamtxz(p.I) - gamtxx(p.I)*gamtyz(p.I)
;

const auto
invgamtzz
=
-Power(gamtxy(p.I),2) + gamtxx(p.I)*gamtyy(p.I)
;

const auto
invgamxx
=
invgamtxx*Power(W(p.I),2)
;

const auto
invgamxy
=
invgamtxy*Power(W(p.I),2)
;

const auto
invgamxz
=
invgamtxz*Power(W(p.I),2)
;

const auto
invgamyy
=
invgamtyy*Power(W(p.I),2)
;

const auto
invgamyz
=
invgamtyz*Power(W(p.I),2)
;

const auto
invgamzz
=
invgamtzz*Power(W(p.I),2)
;

const auto
gamxx
=
gamtxx(p.I)/Power(W(p.I),2)
;

const auto
gamxy
=
gamtxy(p.I)/Power(W(p.I),2)
;

const auto
gamxz
=
gamtxz(p.I)/Power(W(p.I),2)
;

const auto
gamyy
=
gamtyy(p.I)/Power(W(p.I),2)
;

const auto
gamyz
=
gamtyz(p.I)/Power(W(p.I),2)
;

const auto
gamzz
=
gamtzz(p.I)/Power(W(p.I),2)
;

const auto
GtDDDxxx
=
dgamtxxx/2.
;

const auto
GtDDDxxy
=
dgamtyxx/2.
;

const auto
GtDDDxxz
=
dgamtzxx/2.
;

const auto
GtDDDxyy
=
-0.5*dgamtxyy + dgamtyxy
;

const auto
GtDDDxyz
=
(-dgamtxyz + dgamtyxz + dgamtzxy)/2.
;

const auto
GtDDDxzz
=
-0.5*dgamtxzz + dgamtzxz
;

const auto
GtDDDyxx
=
dgamtxxy - dgamtyxx/2.
;

const auto
GtDDDyxy
=
dgamtxyy/2.
;

const auto
GtDDDyxz
=
(dgamtxyz - dgamtyxz + dgamtzxy)/2.
;

const auto
GtDDDyyy
=
dgamtyyy/2.
;

const auto
GtDDDyyz
=
dgamtzyy/2.
;

const auto
GtDDDyzz
=
-0.5*dgamtyzz + dgamtzyz
;

const auto
GtDDDzxx
=
dgamtxxz - dgamtzxx/2.
;

const auto
GtDDDzxy
=
(dgamtxyz + dgamtyxz - dgamtzxy)/2.
;

const auto
GtDDDzxz
=
dgamtxzz/2.
;

const auto
GtDDDzyy
=
dgamtyyz - dgamtzyy/2.
;

const auto
GtDDDzyz
=
dgamtyzz/2.
;

const auto
GtDDDzzz
=
dgamtzzz/2.
;

const auto
GtDDUxxx
=
GtDDDxxx*invgamtxx + GtDDDxxy*invgamtxy + GtDDDxxz*invgamtxz
;

const auto
GtDDUxxy
=
GtDDDxxx*invgamtxy + GtDDDxxy*invgamtyy + GtDDDxxz*invgamtyz
;

const auto
GtDDUxxz
=
GtDDDxxx*invgamtxz + GtDDDxxy*invgamtyz + GtDDDxxz*invgamtzz
;

const auto
GtDDUxyx
=
GtDDDxxy*invgamtxx + GtDDDxyy*invgamtxy + GtDDDxyz*invgamtxz
;

const auto
GtDDUxyy
=
GtDDDxxy*invgamtxy + GtDDDxyy*invgamtyy + GtDDDxyz*invgamtyz
;

const auto
GtDDUxyz
=
GtDDDxxy*invgamtxz + GtDDDxyy*invgamtyz + GtDDDxyz*invgamtzz
;

const auto
GtDDUxzx
=
GtDDDxxz*invgamtxx + GtDDDxyz*invgamtxy + GtDDDxzz*invgamtxz
;

const auto
GtDDUxzy
=
GtDDDxxz*invgamtxy + GtDDDxyz*invgamtyy + GtDDDxzz*invgamtyz
;

const auto
GtDDUxzz
=
GtDDDxxz*invgamtxz + GtDDDxyz*invgamtyz + GtDDDxzz*invgamtzz
;

const auto
GtDDUyxx
=
GtDDDyxx*invgamtxx + GtDDDyxy*invgamtxy + GtDDDyxz*invgamtxz
;

const auto
GtDDUyxy
=
GtDDDyxx*invgamtxy + GtDDDyxy*invgamtyy + GtDDDyxz*invgamtyz
;

const auto
GtDDUyxz
=
GtDDDyxx*invgamtxz + GtDDDyxy*invgamtyz + GtDDDyxz*invgamtzz
;

const auto
GtDDUyyx
=
GtDDDyxy*invgamtxx + GtDDDyyy*invgamtxy + GtDDDyyz*invgamtxz
;

const auto
GtDDUyyy
=
GtDDDyxy*invgamtxy + GtDDDyyy*invgamtyy + GtDDDyyz*invgamtyz
;

const auto
GtDDUyyz
=
GtDDDyxy*invgamtxz + GtDDDyyy*invgamtyz + GtDDDyyz*invgamtzz
;

const auto
GtDDUyzx
=
GtDDDyxz*invgamtxx + GtDDDyyz*invgamtxy + GtDDDyzz*invgamtxz
;

const auto
GtDDUyzy
=
GtDDDyxz*invgamtxy + GtDDDyyz*invgamtyy + GtDDDyzz*invgamtyz
;

const auto
GtDDUyzz
=
GtDDDyxz*invgamtxz + GtDDDyyz*invgamtyz + GtDDDyzz*invgamtzz
;

const auto
GtDDUzxx
=
GtDDDzxx*invgamtxx + GtDDDzxy*invgamtxy + GtDDDzxz*invgamtxz
;

const auto
GtDDUzxy
=
GtDDDzxx*invgamtxy + GtDDDzxy*invgamtyy + GtDDDzxz*invgamtyz
;

const auto
GtDDUzxz
=
GtDDDzxx*invgamtxz + GtDDDzxy*invgamtyz + GtDDDzxz*invgamtzz
;

const auto
GtDDUzyx
=
GtDDDzxy*invgamtxx + GtDDDzyy*invgamtxy + GtDDDzyz*invgamtxz
;

const auto
GtDDUzyy
=
GtDDDzxy*invgamtxy + GtDDDzyy*invgamtyy + GtDDDzyz*invgamtyz
;

const auto
GtDDUzyz
=
GtDDDzxy*invgamtxz + GtDDDzyy*invgamtyz + GtDDDzyz*invgamtzz
;

const auto
GtDDUzzx
=
GtDDDzxz*invgamtxx + GtDDDzyz*invgamtxy + GtDDDzzz*invgamtxz
;

const auto
GtDDUzzy
=
GtDDDzxz*invgamtxy + GtDDDzyz*invgamtyy + GtDDDzzz*invgamtyz
;

const auto
GtDDUzzz
=
GtDDDzxz*invgamtxz + GtDDDzyz*invgamtyz + GtDDDzzz*invgamtzz
;

const auto
Gtxxx
=
GtDDDxxx*invgamtxx + GtDDDyxx*invgamtxy + GtDDDzxx*invgamtxz
;

const auto
Gtxxy
=
GtDDDxxy*invgamtxx + GtDDDyxy*invgamtxy + GtDDDzxy*invgamtxz
;

const auto
Gtxxz
=
GtDDDxxz*invgamtxx + GtDDDyxz*invgamtxy + GtDDDzxz*invgamtxz
;

const auto
Gtxyy
=
GtDDDxyy*invgamtxx + GtDDDyyy*invgamtxy + GtDDDzyy*invgamtxz
;

const auto
Gtxyz
=
GtDDDxyz*invgamtxx + GtDDDyyz*invgamtxy + GtDDDzyz*invgamtxz
;

const auto
Gtxzz
=
GtDDDxzz*invgamtxx + GtDDDyzz*invgamtxy + GtDDDzzz*invgamtxz
;

const auto
Gtyxx
=
GtDDDxxx*invgamtxy + GtDDDyxx*invgamtyy + GtDDDzxx*invgamtyz
;

const auto
Gtyxy
=
GtDDDxxy*invgamtxy + GtDDDyxy*invgamtyy + GtDDDzxy*invgamtyz
;

const auto
Gtyxz
=
GtDDDxxz*invgamtxy + GtDDDyxz*invgamtyy + GtDDDzxz*invgamtyz
;

const auto
Gtyyy
=
GtDDDxyy*invgamtxy + GtDDDyyy*invgamtyy + GtDDDzyy*invgamtyz
;

const auto
Gtyyz
=
GtDDDxyz*invgamtxy + GtDDDyyz*invgamtyy + GtDDDzyz*invgamtyz
;

const auto
Gtyzz
=
GtDDDxzz*invgamtxy + GtDDDyzz*invgamtyy + GtDDDzzz*invgamtyz
;

const auto
Gtzxx
=
GtDDDxxx*invgamtxz + GtDDDyxx*invgamtyz + GtDDDzxx*invgamtzz
;

const auto
Gtzxy
=
GtDDDxxy*invgamtxz + GtDDDyxy*invgamtyz + GtDDDzxy*invgamtzz
;

const auto
Gtzxz
=
GtDDDxxz*invgamtxz + GtDDDyxz*invgamtyz + GtDDDzxz*invgamtzz
;

const auto
Gtzyy
=
GtDDDxyy*invgamtxz + GtDDDyyy*invgamtyz + GtDDDzyy*invgamtzz
;

const auto
Gtzyz
=
GtDDDxyz*invgamtxz + GtDDDyyz*invgamtyz + GtDDDzyz*invgamtzz
;

const auto
Gtzzz
=
GtDDDxzz*invgamtxz + GtDDDyzz*invgamtyz + GtDDDzzz*invgamtzz
;

const auto
trGtdx
=
Gtxxx*invgamtxx + 2*Gtxxy*invgamtxy + 2*Gtxxz*invgamtxz + Gtxyy*invgamtyy +
  2*Gtxyz*invgamtyz + Gtxzz*invgamtzz
;

const auto
trGtdy
=
Gtyxx*invgamtxx + 2*Gtyxy*invgamtxy + 2*Gtyxz*invgamtxz + Gtyyy*invgamtyy +
  2*Gtyyz*invgamtyz + Gtyzz*invgamtzz
;

const auto
trGtdz
=
Gtzxx*invgamtxx + 2*Gtzxy*invgamtxy + 2*Gtzxz*invgamtxz + Gtzyy*invgamtyy +
  2*Gtzyz*invgamtyz + Gtzzz*invgamtzz
;

const auto
dgamxxx
=
(dgamtxxx - 2*dlnWx*gamtxx(p.I))/Power(W(p.I),2)
;

const auto
dgamxxy
=
(dgamtxxy - 2*dlnWx*gamtxy(p.I))/Power(W(p.I),2)
;

const auto
dgamxxz
=
(dgamtxxz - 2*dlnWx*gamtxz(p.I))/Power(W(p.I),2)
;

const auto
dgamxyy
=
(dgamtxyy - 2*dlnWx*gamtyy(p.I))/Power(W(p.I),2)
;

const auto
dgamxyz
=
(dgamtxyz - 2*dlnWx*gamtyz(p.I))/Power(W(p.I),2)
;

const auto
dgamxzz
=
(dgamtxzz - 2*dlnWx*gamtzz(p.I))/Power(W(p.I),2)
;

const auto
dgamyxx
=
(dgamtyxx - 2*dlnWy*gamtxx(p.I))/Power(W(p.I),2)
;

const auto
dgamyxy
=
(dgamtyxy - 2*dlnWy*gamtxy(p.I))/Power(W(p.I),2)
;

const auto
dgamyxz
=
(dgamtyxz - 2*dlnWy*gamtxz(p.I))/Power(W(p.I),2)
;

const auto
dgamyyy
=
(dgamtyyy - 2*dlnWy*gamtyy(p.I))/Power(W(p.I),2)
;

const auto
dgamyyz
=
(dgamtyyz - 2*dlnWy*gamtyz(p.I))/Power(W(p.I),2)
;

const auto
dgamyzz
=
(dgamtyzz - 2*dlnWy*gamtzz(p.I))/Power(W(p.I),2)
;

const auto
dgamzxx
=
(dgamtzxx - 2*dlnWz*gamtxx(p.I))/Power(W(p.I),2)
;

const auto
dgamzxy
=
(dgamtzxy - 2*dlnWz*gamtxy(p.I))/Power(W(p.I),2)
;

const auto
dgamzxz
=
(dgamtzxz - 2*dlnWz*gamtxz(p.I))/Power(W(p.I),2)
;

const auto
dgamzyy
=
(dgamtzyy - 2*dlnWz*gamtyy(p.I))/Power(W(p.I),2)
;

const auto
dgamzyz
=
(dgamtzyz - 2*dlnWz*gamtyz(p.I))/Power(W(p.I),2)
;

const auto
dgamzzz
=
(dgamtzzz - 2*dlnWz*gamtzz(p.I))/Power(W(p.I),2)
;

const auto
GamDDDxxx
=
dgamxxx/2.
;

const auto
GamDDDxxy
=
dgamyxx/2.
;

const auto
GamDDDxxz
=
dgamzxx/2.
;

const auto
GamDDDxyy
=
-0.5*dgamxyy + dgamyxy
;

const auto
GamDDDxyz
=
(-dgamxyz + dgamyxz + dgamzxy)/2.
;

const auto
GamDDDxzz
=
-0.5*dgamxzz + dgamzxz
;

const auto
GamDDDyxx
=
dgamxxy - dgamyxx/2.
;

const auto
GamDDDyxy
=
dgamxyy/2.
;

const auto
GamDDDyxz
=
(dgamxyz - dgamyxz + dgamzxy)/2.
;

const auto
GamDDDyyy
=
dgamyyy/2.
;

const auto
GamDDDyyz
=
dgamzyy/2.
;

const auto
GamDDDyzz
=
-0.5*dgamyzz + dgamzyz
;

const auto
GamDDDzxx
=
dgamxxz - dgamzxx/2.
;

const auto
GamDDDzxy
=
(dgamxyz + dgamyxz - dgamzxy)/2.
;

const auto
GamDDDzxz
=
dgamxzz/2.
;

const auto
GamDDDzyy
=
dgamyyz - dgamzyy/2.
;

const auto
GamDDDzyz
=
dgamyzz/2.
;

const auto
GamDDDzzz
=
dgamzzz/2.
;

const auto
Gamxxx
=
GamDDDxxx*invgamxx + GamDDDyxx*invgamxy + GamDDDzxx*invgamxz
;

const auto
Gamxxy
=
GamDDDxxy*invgamxx + GamDDDyxy*invgamxy + GamDDDzxy*invgamxz
;

const auto
Gamxxz
=
GamDDDxxz*invgamxx + GamDDDyxz*invgamxy + GamDDDzxz*invgamxz
;

const auto
Gamxyy
=
GamDDDxyy*invgamxx + GamDDDyyy*invgamxy + GamDDDzyy*invgamxz
;

const auto
Gamxyz
=
GamDDDxyz*invgamxx + GamDDDyyz*invgamxy + GamDDDzyz*invgamxz
;

const auto
Gamxzz
=
GamDDDxzz*invgamxx + GamDDDyzz*invgamxy + GamDDDzzz*invgamxz
;

const auto
Gamyxx
=
GamDDDxxx*invgamxy + GamDDDyxx*invgamyy + GamDDDzxx*invgamyz
;

const auto
Gamyxy
=
GamDDDxxy*invgamxy + GamDDDyxy*invgamyy + GamDDDzxy*invgamyz
;

const auto
Gamyxz
=
GamDDDxxz*invgamxy + GamDDDyxz*invgamyy + GamDDDzxz*invgamyz
;

const auto
Gamyyy
=
GamDDDxyy*invgamxy + GamDDDyyy*invgamyy + GamDDDzyy*invgamyz
;

const auto
Gamyyz
=
GamDDDxyz*invgamxy + GamDDDyyz*invgamyy + GamDDDzyz*invgamyz
;

const auto
Gamyzz
=
GamDDDxzz*invgamxy + GamDDDyzz*invgamyy + GamDDDzzz*invgamyz
;

const auto
Gamzxx
=
GamDDDxxx*invgamxz + GamDDDyxx*invgamyz + GamDDDzxx*invgamzz
;

const auto
Gamzxy
=
GamDDDxxy*invgamxz + GamDDDyxy*invgamyz + GamDDDzxy*invgamzz
;

const auto
Gamzxz
=
GamDDDxxz*invgamxz + GamDDDyxz*invgamyz + GamDDDzxz*invgamzz
;

const auto
Gamzyy
=
GamDDDxyy*invgamxz + GamDDDyyy*invgamyz + GamDDDzyy*invgamzz
;

const auto
Gamzyz
=
GamDDDxyz*invgamxz + GamDDDyyz*invgamyz + GamDDDzyz*invgamzz
;

const auto
Gamzzz
=
GamDDDxzz*invgamxz + GamDDDyzz*invgamyz + GamDDDzzz*invgamzz
;

const auto
exAtUUxx
=
Power(invgamtxx,2)*exAtxx(p.I) + 2*invgamtxx*invgamtxy*exAtxy(p.I) +
  2*invgamtxx*invgamtxz*exAtxz(p.I) + Power(invgamtxy,2)*exAtyy(p.I) +
  2*invgamtxy*invgamtxz*exAtyz(p.I) + Power(invgamtxz,2)*exAtzz(p.I)
;

const auto
exAtUUxy
=
invgamtxx*invgamtxy*exAtxx(p.I) +
  (Power(invgamtxy,2) + invgamtxx*invgamtyy)*exAtxy(p.I) +
  invgamtxy*invgamtxz*exAtxz(p.I) + invgamtxx*invgamtyz*exAtxz(p.I) +
  invgamtxy*invgamtyy*exAtyy(p.I) + invgamtxz*invgamtyy*exAtyz(p.I) +
  invgamtxy*invgamtyz*exAtyz(p.I) + invgamtxz*invgamtyz*exAtzz(p.I)
;

const auto
exAtUUxz
=
invgamtxx*invgamtxz*exAtxx(p.I) +
  (invgamtxy*invgamtxz + invgamtxx*invgamtyz)*exAtxy(p.I) +
  Power(invgamtxz,2)*exAtxz(p.I) + invgamtxx*invgamtzz*exAtxz(p.I) +
  invgamtxy*invgamtyz*exAtyy(p.I) + invgamtxz*invgamtyz*exAtyz(p.I) +
  invgamtxy*invgamtzz*exAtyz(p.I) + invgamtxz*invgamtzz*exAtzz(p.I)
;

const auto
exAtUUyy
=
Power(invgamtxy,2)*exAtxx(p.I) + 2*invgamtxy*invgamtyy*exAtxy(p.I) +
  2*invgamtxy*invgamtyz*exAtxz(p.I) + Power(invgamtyy,2)*exAtyy(p.I) +
  2*invgamtyy*invgamtyz*exAtyz(p.I) + Power(invgamtyz,2)*exAtzz(p.I)
;

const auto
exAtUUyz
=
invgamtxy*invgamtxz*exAtxx(p.I) +
  (invgamtxz*invgamtyy + invgamtxy*invgamtyz)*exAtxy(p.I) +
  invgamtxz*invgamtyz*exAtxz(p.I) + invgamtxy*invgamtzz*exAtxz(p.I) +
  invgamtyy*invgamtyz*exAtyy(p.I) + Power(invgamtyz,2)*exAtyz(p.I) +
  invgamtyy*invgamtzz*exAtyz(p.I) + invgamtyz*invgamtzz*exAtzz(p.I)
;

const auto
exAtUUzz
=
Power(invgamtxz,2)*exAtxx(p.I) + 2*invgamtxz*invgamtyz*exAtxy(p.I) +
  2*invgamtxz*invgamtzz*exAtxz(p.I) + Power(invgamtyz,2)*exAtyy(p.I) +
  2*invgamtyz*invgamtzz*exAtyz(p.I) + Power(invgamtzz,2)*exAtzz(p.I)
;

const auto
tDtDWxx
=
ddWxx - dWx*Gtxxx - dWy*Gtyxx - dWz*Gtzxx
;

const auto
tDtDWxy
=
ddWxy - dWx*Gtxxy - dWy*Gtyxy - dWz*Gtzxy
;

const auto
tDtDWxz
=
ddWxz - dWx*Gtxxz - dWy*Gtyxz - dWz*Gtzxz
;

const auto
tDtDWyy
=
ddWyy - dWx*Gtxyy - dWy*Gtyyy - dWz*Gtzyy
;

const auto
tDtDWyz
=
ddWyz - dWx*Gtxyz - dWy*Gtyyz - dWz*Gtzyz
;

const auto
tDtDWzz
=
ddWzz - dWx*Gtxzz - dWy*Gtyzz - dWz*Gtzzz
;

const auto
DDalphaxx
=
ddalphaxx - dalphax*Gamxxx - dalphay*Gamyxx - dalphaz*Gamzxx
;

const auto
DDalphaxy
=
ddalphaxy - dalphax*Gamxxy - dalphay*Gamyxy - dalphaz*Gamzxy
;

const auto
DDalphaxz
=
ddalphaxz - dalphax*Gamxxz - dalphay*Gamyxz - dalphaz*Gamzxz
;

const auto
DDalphayy
=
ddalphayy - dalphax*Gamxyy - dalphay*Gamyyy - dalphaz*Gamzyy
;

const auto
DDalphayz
=
ddalphayz - dalphax*Gamxyz - dalphay*Gamyyz - dalphaz*Gamzyz
;

const auto
DDalphazz
=
ddalphazz - dalphax*Gamxzz - dalphay*Gamyzz - dalphaz*Gamzzz
;

const auto
RtWxx
=
(tDtDWxx + gamtxx(p.I)*(invgamtxx*tDtDWxx + 2*invgamtxy*tDtDWxy +
       2*invgamtxz*tDtDWxz + invgamtyy*tDtDWyy + 2*invgamtyz*tDtDWyz +
       invgamtzz*tDtDWzz - 2*(Power(dlnWx,2)*invgamtxx +
          2*dlnWx*dlnWy*invgamtxy + 2*dlnWx*dlnWz*invgamtxz +
          Power(dlnWy,2)*invgamtyy + 2*dlnWy*dlnWz*invgamtyz +
          Power(dlnWz,2)*invgamtzz)*W(p.I)))/W(p.I)
;

const auto
RtWxy
=
(tDtDWxy + gamtxy(p.I)*(invgamtxx*tDtDWxx + 2*invgamtxy*tDtDWxy +
       2*invgamtxz*tDtDWxz + invgamtyy*tDtDWyy + 2*invgamtyz*tDtDWyz +
       invgamtzz*tDtDWzz - 2*(Power(dlnWx,2)*invgamtxx +
          2*dlnWx*dlnWy*invgamtxy + 2*dlnWx*dlnWz*invgamtxz +
          Power(dlnWy,2)*invgamtyy + 2*dlnWy*dlnWz*invgamtyz +
          Power(dlnWz,2)*invgamtzz)*W(p.I)))/W(p.I)
;

const auto
RtWxz
=
(tDtDWxz + gamtxz(p.I)*(invgamtxx*tDtDWxx + 2*invgamtxy*tDtDWxy +
       2*invgamtxz*tDtDWxz + invgamtyy*tDtDWyy + 2*invgamtyz*tDtDWyz +
       invgamtzz*tDtDWzz - 2*(Power(dlnWx,2)*invgamtxx +
          2*dlnWx*dlnWy*invgamtxy + 2*dlnWx*dlnWz*invgamtxz +
          Power(dlnWy,2)*invgamtyy + 2*dlnWy*dlnWz*invgamtyz +
          Power(dlnWz,2)*invgamtzz)*W(p.I)))/W(p.I)
;

const auto
RtWyy
=
(tDtDWyy + gamtyy(p.I)*(invgamtxx*tDtDWxx + 2*invgamtxy*tDtDWxy +
       2*invgamtxz*tDtDWxz + invgamtyy*tDtDWyy + 2*invgamtyz*tDtDWyz +
       invgamtzz*tDtDWzz - 2*(Power(dlnWx,2)*invgamtxx +
          2*dlnWx*dlnWy*invgamtxy + 2*dlnWx*dlnWz*invgamtxz +
          Power(dlnWy,2)*invgamtyy + 2*dlnWy*dlnWz*invgamtyz +
          Power(dlnWz,2)*invgamtzz)*W(p.I)))/W(p.I)
;

const auto
RtWyz
=
(tDtDWyz + gamtyz(p.I)*(invgamtxx*tDtDWxx + 2*invgamtxy*tDtDWxy +
       2*invgamtxz*tDtDWxz + invgamtyy*tDtDWyy + 2*invgamtyz*tDtDWyz +
       invgamtzz*tDtDWzz - 2*(Power(dlnWx,2)*invgamtxx +
          2*dlnWx*dlnWy*invgamtxy + 2*dlnWx*dlnWz*invgamtxz +
          Power(dlnWy,2)*invgamtyy + 2*dlnWy*dlnWz*invgamtyz +
          Power(dlnWz,2)*invgamtzz)*W(p.I)))/W(p.I)
;

const auto
RtWzz
=
(tDtDWzz + gamtzz(p.I)*(invgamtxx*tDtDWxx + 2*invgamtxy*tDtDWxy +
       2*invgamtxz*tDtDWxz + invgamtyy*tDtDWyy + 2*invgamtyz*tDtDWyz +
       invgamtzz*tDtDWzz - 2*(Power(dlnWx,2)*invgamtxx +
          2*dlnWx*dlnWy*invgamtxy + 2*dlnWx*dlnWz*invgamtxz +
          Power(dlnWy,2)*invgamtyy + 2*dlnWy*dlnWz*invgamtyz +
          Power(dlnWz,2)*invgamtzz)*W(p.I)))/W(p.I)
;

const auto
Rtxx
=
3*GtDDUxxx*Gtxxx + 3*GtDDUxxy*Gtxxy + 3*GtDDUxxz*Gtxxz + 2*GtDDUxyx*Gtyxx +
  GtDDUyxx*Gtyxx + 2*GtDDUxyy*Gtyxy + GtDDUyxy*Gtyxy + 2*GtDDUxyz*Gtyxz +
  GtDDUyxz*Gtyxz + 2*GtDDUxzx*Gtzxx + GtDDUzxx*Gtzxx + 2*GtDDUxzy*Gtzxy +
  GtDDUzxy*Gtzxy + 2*GtDDUxzz*Gtzxz + GtDDUzxz*Gtzxz -
  (ddgamtxxxx*invgamtxx)/2. - ddgamtxyxx*invgamtxy - ddgamtxzxx*invgamtxz -
  (ddgamtyyxx*invgamtyy)/2. - ddgamtyzxx*invgamtyz -
  (ddgamtzzxx*invgamtzz)/2. + GtDDDxxx*trGtdx + GtDDDxxy*trGtdy +
  GtDDDxxz*trGtdz + dtrGtxx*gamtxx(p.I) + dtrGtxy*gamtxy(p.I) +
  dtrGtxz*gamtxz(p.I)
;

const auto
Rtxy
=
(2*GtDDUxyx*Gtxxx + 2*GtDDUyxx*Gtxxx + 2*GtDDUxxx*Gtxxy +
    2*GtDDUxyy*Gtxxy + 2*GtDDUyxy*Gtxxy + 2*GtDDUxyz*Gtxxz +
    2*GtDDUyxz*Gtxxz + 2*GtDDUxxy*Gtxyy + 2*GtDDUxxz*Gtxyz +
    4*GtDDUyyx*Gtyxx + 2*GtDDUxyx*Gtyxy + 4*GtDDUyyy*Gtyxy +
    4*GtDDUyyz*Gtyxz + 2*GtDDUxyy*Gtyyy + 2*GtDDUxyz*Gtyyz +
    2*GtDDUyzx*Gtzxx + 2*GtDDUzyx*Gtzxx + 2*GtDDUxzx*Gtzxy +
    2*GtDDUyzy*Gtzxy + 2*GtDDUzyy*Gtzxy + 2*GtDDUyzz*Gtzxz +
    2*GtDDUzyz*Gtzxz + 2*GtDDUxzy*Gtzyy + 2*GtDDUxzz*Gtzyz -
    ddgamtxxxy*invgamtxx - 2*ddgamtxyxy*invgamtxy -
    2*ddgamtxzxy*invgamtxz - ddgamtyyxy*invgamtyy -
    2*ddgamtyzxy*invgamtyz - ddgamtzzxy*invgamtzz + GtDDDxxy*trGtdx +
    GtDDDyxx*trGtdx + GtDDDxyy*trGtdy + GtDDDyxy*trGtdy + GtDDDxyz*trGtdz +
    GtDDDyxz*trGtdz + dtrGtyx*gamtxx(p.I) + (dtrGtxx + dtrGtyy)*gamtxy(p.I) +
    dtrGtyz*gamtxz(p.I) + dtrGtxy*gamtyy(p.I) + dtrGtxz*gamtyz(p.I))/2.
;

const auto
Rtxz
=
(2*GtDDUxzx*Gtxxx + 2*GtDDUzxx*Gtxxx + 2*GtDDUxzy*Gtxxy +
    2*GtDDUzxy*Gtxxy + 2*GtDDUxxx*Gtxxz + 2*GtDDUxzz*Gtxxz +
    2*GtDDUzxz*Gtxxz + 2*GtDDUxxy*Gtxyz + 2*GtDDUxxz*Gtxzz +
    2*GtDDUyzx*Gtyxx + 2*GtDDUzyx*Gtyxx + 2*GtDDUyzy*Gtyxy +
    2*GtDDUzyy*Gtyxy + 2*GtDDUxyx*Gtyxz + 2*GtDDUyzz*Gtyxz +
    2*GtDDUzyz*Gtyxz + 2*GtDDUxyy*Gtyyz + 2*GtDDUxyz*Gtyzz +
    4*GtDDUzzx*Gtzxx + 4*GtDDUzzy*Gtzxy + 2*GtDDUxzx*Gtzxz +
    4*GtDDUzzz*Gtzxz + 2*GtDDUxzy*Gtzyz + 2*GtDDUxzz*Gtzzz -
    ddgamtxxxz*invgamtxx - 2*ddgamtxyxz*invgamtxy -
    2*ddgamtxzxz*invgamtxz - ddgamtyyxz*invgamtyy -
    2*ddgamtyzxz*invgamtyz - ddgamtzzxz*invgamtzz + GtDDDxxz*trGtdx +
    GtDDDzxx*trGtdx + GtDDDxyz*trGtdy + GtDDDzxy*trGtdy + GtDDDxzz*trGtdz +
    GtDDDzxz*trGtdz + dtrGtzx*gamtxx(p.I) + dtrGtzy*gamtxy(p.I) +
    dtrGtxx*gamtxz(p.I) + dtrGtzz*gamtxz(p.I) + dtrGtxy*gamtyz(p.I) +
    dtrGtxz*gamtzz(p.I))/2.
;

const auto
Rtyy
=
GtDDUxyx*Gtxxy + 2*GtDDUyxx*Gtxxy + GtDDUxyy*Gtxyy + 2*GtDDUyxy*Gtxyy +
  GtDDUxyz*Gtxyz + 2*GtDDUyxz*Gtxyz + 3*GtDDUyyx*Gtyxy + 3*GtDDUyyy*Gtyyy +
  3*GtDDUyyz*Gtyyz + 2*GtDDUyzx*Gtzxy + GtDDUzyx*Gtzxy + 2*GtDDUyzy*Gtzyy +
  GtDDUzyy*Gtzyy + 2*GtDDUyzz*Gtzyz + GtDDUzyz*Gtzyz -
  (ddgamtxxyy*invgamtxx)/2. - ddgamtxyyy*invgamtxy - ddgamtxzyy*invgamtxz -
  (ddgamtyyyy*invgamtyy)/2. - ddgamtyzyy*invgamtyz -
  (ddgamtzzyy*invgamtzz)/2. + GtDDDyxy*trGtdx + GtDDDyyy*trGtdy +
  GtDDDyyz*trGtdz + dtrGtyx*gamtxy(p.I) + dtrGtyy*gamtyy(p.I) +
  dtrGtyz*gamtyz(p.I)
;

const auto
Rtyz
=
(2*GtDDUxzx*Gtxxy + 2*GtDDUzxx*Gtxxy + 2*GtDDUyxx*Gtxxz +
    2*GtDDUxzy*Gtxyy + 2*GtDDUzxy*Gtxyy + 2*GtDDUxzz*Gtxyz +
    2*GtDDUyxy*Gtxyz + 2*GtDDUzxz*Gtxyz + 2*GtDDUyxz*Gtxzz +
    2*GtDDUyzx*Gtyxy + 2*GtDDUzyx*Gtyxy + 2*GtDDUyyx*Gtyxz +
    2*GtDDUyzy*Gtyyy + 2*GtDDUzyy*Gtyyy + 2*GtDDUyyy*Gtyyz +
    2*GtDDUyzz*Gtyyz + 2*GtDDUzyz*Gtyyz + 2*GtDDUyyz*Gtyzz +
    4*GtDDUzzx*Gtzxy + 2*GtDDUyzx*Gtzxz + 4*GtDDUzzy*Gtzyy +
    2*GtDDUyzy*Gtzyz + 4*GtDDUzzz*Gtzyz + 2*GtDDUyzz*Gtzzz -
    ddgamtxxyz*invgamtxx - 2*ddgamtxyyz*invgamtxy -
    2*ddgamtxzyz*invgamtxz - ddgamtyyyz*invgamtyy -
    2*ddgamtyzyz*invgamtyz - ddgamtzzyz*invgamtzz + GtDDDyxz*trGtdx +
    GtDDDzxy*trGtdx + GtDDDyyz*trGtdy + GtDDDzyy*trGtdy + GtDDDyzz*trGtdz +
    GtDDDzyz*trGtdz + dtrGtzx*gamtxy(p.I) + dtrGtyx*gamtxz(p.I) +
    dtrGtzy*gamtyy(p.I) + dtrGtyy*gamtyz(p.I) + dtrGtzz*gamtyz(p.I) +
    dtrGtyz*gamtzz(p.I))/2.
;

const auto
Rtzz
=
GtDDUxzx*Gtxxz + 2*GtDDUzxx*Gtxxz + GtDDUxzy*Gtxyz + 2*GtDDUzxy*Gtxyz +
  GtDDUxzz*Gtxzz + 2*GtDDUzxz*Gtxzz + GtDDUyzx*Gtyxz + 2*GtDDUzyx*Gtyxz +
  GtDDUyzy*Gtyyz + 2*GtDDUzyy*Gtyyz + GtDDUyzz*Gtyzz + 2*GtDDUzyz*Gtyzz +
  3*GtDDUzzx*Gtzxz + 3*GtDDUzzy*Gtzyz + 3*GtDDUzzz*Gtzzz -
  (ddgamtxxzz*invgamtxx)/2. - ddgamtxyzz*invgamtxy - ddgamtxzzz*invgamtxz -
  (ddgamtyyzz*invgamtyy)/2. - ddgamtyzzz*invgamtyz -
  (ddgamtzzzz*invgamtzz)/2. + GtDDDzxz*trGtdx + GtDDDzyz*trGtdy +
  GtDDDzzz*trGtdz + dtrGtzx*gamtxz(p.I) + dtrGtzy*gamtyz(p.I) +
  dtrGtzz*gamtzz(p.I)
;

const auto
Rxx
=
RtWxx + Rtxx
;

const auto
Rxy
=
RtWxy + Rtxy
;

const auto
Rxz
=
RtWxz + Rtxz
;

const auto
Ryy
=
RtWyy + Rtyy
;

const auto
Ryz
=
RtWyz + Rtyz
;

const auto
Rzz
=
RtWzz + Rtzz
;

const auto
trR
=
invgamxx*Rxx + 2*invgamxy*Rxy + 2*invgamxz*Rxz + invgamyy*Ryy +
  2*invgamyz*Ryz + invgamzz*Rzz
;

const auto
rho
=
(eTtt(p.I) - 2*betay(p.I)*eTty(p.I) - 2*betaz(p.I)*eTtz(p.I) +
    Power(betax(p.I),2)*eTxx(p.I) +
    2*betax(p.I)*(-eTtx(p.I) + betay(p.I)*eTxy(p.I) + betaz(p.I)*eTxz(p.I)) +
    Power(betay(p.I),2)*eTyy(p.I) + 2*betay(p.I)*betaz(p.I)*eTyz(p.I) +
    Power(betaz(p.I),2)*eTzz(p.I))/Power(alpha(p.I),2)
;

const auto
Smx
=
(-eTtx(p.I) + betax(p.I)*eTxx(p.I) + betay(p.I)*eTxy(p.I) + betaz(p.I)*eTxz(p.I))/
  alpha(p.I)
;

const auto
Smy
=
(-eTty(p.I) + betax(p.I)*eTxy(p.I) + betay(p.I)*eTyy(p.I) + betaz(p.I)*eTyz(p.I))/
  alpha(p.I)
;

const auto
Smz
=
(-eTtz(p.I) + betax(p.I)*eTxz(p.I) + betay(p.I)*eTyz(p.I) + betaz(p.I)*eTzz(p.I))/
  alpha(p.I)
;

const auto
Ssxx
=
eTxx(p.I)
;

const auto
Ssxy
=
eTxy(p.I)
;

const auto
Ssxz
=
eTxz(p.I)
;

const auto
Ssyy
=
eTyy(p.I)
;

const auto
Ssyz
=
eTyz(p.I)
;

const auto
Sszz
=
eTzz(p.I)
;

const auto
trSs
=
invgamxx*Ssxx + 2*invgamxy*Ssxy + 2*invgamxz*Ssxz + invgamyy*Ssyy +
  2*invgamyz*Ssyz + invgamzz*Sszz
;


dtW(p.I)
=
dWx*betax(p.I) + dWy*betay(p.I) + dWz*betaz(p.I) -
  ((dbetaxx + dbetayy + dbetazz)*W(p.I))/3. + (alpha(p.I)*exKh(p.I)*W(p.I))/3. +
  (2*alpha(p.I)*Theta(p.I)*W(p.I))/3.
;

dtgamtxx(p.I)
=
dgamtxxx*betax(p.I) + dgamtyxx*betay(p.I) + dgamtzxx*betaz(p.I) -
  2*alpha(p.I)*exAtxx(p.I) + 2*dbetaxx*gamtxx(p.I) -
  (2*(dbetaxx + dbetayy + dbetazz)*gamtxx(p.I))/3. + 2*dbetaxy*gamtxy(p.I) +
  2*dbetaxz*gamtxz(p.I)
;

dtgamtxy(p.I)
=
dgamtxxy*betax(p.I) + dgamtyxy*betay(p.I) + dgamtzxy*betaz(p.I) -
  2*alpha(p.I)*exAtxy(p.I) + dbetayx*gamtxx(p.I) + dbetaxx*gamtxy(p.I) +
  dbetayy*gamtxy(p.I) - (2*(dbetaxx + dbetayy + dbetazz)*gamtxy(p.I))/3. +
  dbetayz*gamtxz(p.I) + dbetaxy*gamtyy(p.I) + dbetaxz*gamtyz(p.I)
;

dtgamtxz(p.I)
=
dgamtxxz*betax(p.I) + dgamtyxz*betay(p.I) + dgamtzxz*betaz(p.I) -
  2*alpha(p.I)*exAtxz(p.I) + dbetazx*gamtxx(p.I) + dbetazy*gamtxy(p.I) +
  dbetaxx*gamtxz(p.I) + dbetazz*gamtxz(p.I) -
  (2*(dbetaxx + dbetayy + dbetazz)*gamtxz(p.I))/3. + dbetaxy*gamtyz(p.I) +
  dbetaxz*gamtzz(p.I)
;

dtgamtyy(p.I)
=
dgamtxyy*betax(p.I) + dgamtyyy*betay(p.I) + dgamtzyy*betaz(p.I) -
  2*alpha(p.I)*exAtyy(p.I) + 2*dbetayx*gamtxy(p.I) + 2*dbetayy*gamtyy(p.I) -
  (2*(dbetaxx + dbetayy + dbetazz)*gamtyy(p.I))/3. + 2*dbetayz*gamtyz(p.I)
;

dtgamtyz(p.I)
=
dgamtxyz*betax(p.I) + dgamtyyz*betay(p.I) + dgamtzyz*betaz(p.I) -
  2*alpha(p.I)*exAtyz(p.I) + dbetazx*gamtxy(p.I) + dbetayx*gamtxz(p.I) +
  dbetazy*gamtyy(p.I) + dbetayy*gamtyz(p.I) + dbetazz*gamtyz(p.I) -
  (2*(dbetaxx + dbetayy + dbetazz)*gamtyz(p.I))/3. + dbetayz*gamtzz(p.I)
;

dtgamtzz(p.I)
=
dgamtxzz*betax(p.I) + dgamtyzz*betay(p.I) + dgamtzzz*betaz(p.I) -
  2*alpha(p.I)*exAtzz(p.I) + 2*dbetazx*gamtxz(p.I) + 2*dbetazy*gamtyz(p.I) +
  2*dbetazz*gamtzz(p.I) - (2*(dbetaxx + dbetayy + dbetazz)*gamtzz(p.I))/3.
;

dtexKh(p.I)
=
-(DDalphaxx*invgamxx) - 2*DDalphaxy*invgamxy - 2*DDalphaxz*invgamxz -
  DDalphayy*invgamyy - 2*DDalphayz*invgamyz - DDalphazz*invgamzz +
  dexKhx*betax(p.I) + dexKhy*betay(p.I) + dexKhz*betaz(p.I) +
  alpha(p.I)*(4*cpi*rho + 4*cpi*trSs + exAtUUxx*exAtxx(p.I) +
     2*exAtUUxy*exAtxy(p.I) + 2*exAtUUxz*exAtxz(p.I) + exAtUUyy*exAtyy(p.I) +
     2*exAtUUyz*exAtyz(p.I) + exAtUUzz*exAtzz(p.I) + Power(exKh(p.I),2)/3. +
     ckappa1*Theta(p.I) - ckappa1*ckappa2*Theta(p.I) +
     (4*exKh(p.I)*Theta(p.I))/3. + (4*Power(Theta(p.I),2))/3.)
;

dtexAtxx(p.I)
=
(3*dexAtxxx*betax(p.I) + 3*dexAtyxx*betay(p.I) + 3*dexAtzxx*betaz(p.I) +
    4*dbetaxx*exAtxx(p.I) - 2*dbetayy*exAtxx(p.I) - 2*dbetazz*exAtxx(p.I) -
    6*invgamtxx*alpha(p.I)*Power(exAtxx(p.I),2) + 6*dbetaxy*exAtxy(p.I) -
    12*invgamtxy*alpha(p.I)*exAtxx(p.I)*exAtxy(p.I) -
    6*invgamtyy*alpha(p.I)*Power(exAtxy(p.I),2) + 6*dbetaxz*exAtxz(p.I) -
    12*invgamtxz*alpha(p.I)*exAtxx(p.I)*exAtxz(p.I) -
    12*invgamtyz*alpha(p.I)*exAtxy(p.I)*exAtxz(p.I) -
    6*invgamtzz*alpha(p.I)*Power(exAtxz(p.I),2) +
    3*alpha(p.I)*exAtxx(p.I)*exKh(p.I) + 6*alpha(p.I)*exAtxx(p.I)*Theta(p.I) -
    3*DDalphaxx*Power(W(p.I),2) + DDalphaxx*gamxx*invgamxx*Power(W(p.I),2) +
    2*DDalphaxy*gamxx*invgamxy*Power(W(p.I),2) +
    2*DDalphaxz*gamxx*invgamxz*Power(W(p.I),2) +
    DDalphayy*gamxx*invgamyy*Power(W(p.I),2) +
    2*DDalphayz*gamxx*invgamyz*Power(W(p.I),2) +
    DDalphazz*gamxx*invgamzz*Power(W(p.I),2) +
    3*Rxx*alpha(p.I)*Power(W(p.I),2) -
    gamxx*invgamxx*Rxx*alpha(p.I)*Power(W(p.I),2) -
    2*gamxx*invgamxy*Rxy*alpha(p.I)*Power(W(p.I),2) -
    2*gamxx*invgamxz*Rxz*alpha(p.I)*Power(W(p.I),2) -
    gamxx*invgamyy*Ryy*alpha(p.I)*Power(W(p.I),2) -
    2*gamxx*invgamyz*Ryz*alpha(p.I)*Power(W(p.I),2) -
    gamxx*invgamzz*Rzz*alpha(p.I)*Power(W(p.I),2) -
    24*cpi*Ssxx*alpha(p.I)*Power(W(p.I),2) +
    8*cpi*gamxx*invgamxx*Ssxx*alpha(p.I)*Power(W(p.I),2) +
    16*cpi*gamxx*invgamxy*Ssxy*alpha(p.I)*Power(W(p.I),2) +
    16*cpi*gamxx*invgamxz*Ssxz*alpha(p.I)*Power(W(p.I),2) +
    8*cpi*gamxx*invgamyy*Ssyy*alpha(p.I)*Power(W(p.I),2) +
    16*cpi*gamxx*invgamyz*Ssyz*alpha(p.I)*Power(W(p.I),2) +
    8*cpi*gamxx*invgamzz*Sszz*alpha(p.I)*Power(W(p.I),2))/3.
;

dtexAtxy(p.I)
=
(3*dexAtxxy*betax(p.I) + 3*dexAtyxy*betay(p.I) + 3*dexAtzxy*betaz(p.I) +
    3*dbetayx*exAtxx(p.I) + dbetaxx*exAtxy(p.I) + dbetayy*exAtxy(p.I) -
    2*dbetazz*exAtxy(p.I) - 6*invgamtxx*alpha(p.I)*exAtxx(p.I)*exAtxy(p.I) -
    6*invgamtxy*alpha(p.I)*Power(exAtxy(p.I),2) + 3*dbetayz*exAtxz(p.I) -
    6*invgamtxz*alpha(p.I)*exAtxy(p.I)*exAtxz(p.I) + 3*dbetaxy*exAtyy(p.I) -
    6*invgamtxy*alpha(p.I)*exAtxx(p.I)*exAtyy(p.I) -
    6*invgamtyy*alpha(p.I)*exAtxy(p.I)*exAtyy(p.I) -
    6*invgamtyz*alpha(p.I)*exAtxz(p.I)*exAtyy(p.I) + 3*dbetaxz*exAtyz(p.I) -
    6*invgamtxz*alpha(p.I)*exAtxx(p.I)*exAtyz(p.I) -
    6*invgamtyz*alpha(p.I)*exAtxy(p.I)*exAtyz(p.I) -
    6*invgamtzz*alpha(p.I)*exAtxz(p.I)*exAtyz(p.I) +
    3*alpha(p.I)*exAtxy(p.I)*exKh(p.I) + 6*alpha(p.I)*exAtxy(p.I)*Theta(p.I) -
    3*DDalphaxy*Power(W(p.I),2) + DDalphaxx*gamxy*invgamxx*Power(W(p.I),2) +
    2*DDalphaxy*gamxy*invgamxy*Power(W(p.I),2) +
    2*DDalphaxz*gamxy*invgamxz*Power(W(p.I),2) +
    DDalphayy*gamxy*invgamyy*Power(W(p.I),2) +
    2*DDalphayz*gamxy*invgamyz*Power(W(p.I),2) +
    DDalphazz*gamxy*invgamzz*Power(W(p.I),2) -
    gamxy*invgamxx*Rxx*alpha(p.I)*Power(W(p.I),2) +
    3*Rxy*alpha(p.I)*Power(W(p.I),2) -
    2*gamxy*invgamxy*Rxy*alpha(p.I)*Power(W(p.I),2) -
    2*gamxy*invgamxz*Rxz*alpha(p.I)*Power(W(p.I),2) -
    gamxy*invgamyy*Ryy*alpha(p.I)*Power(W(p.I),2) -
    2*gamxy*invgamyz*Ryz*alpha(p.I)*Power(W(p.I),2) -
    gamxy*invgamzz*Rzz*alpha(p.I)*Power(W(p.I),2) +
    8*cpi*gamxy*invgamxx*Ssxx*alpha(p.I)*Power(W(p.I),2) -
    24*cpi*Ssxy*alpha(p.I)*Power(W(p.I),2) +
    16*cpi*gamxy*invgamxy*Ssxy*alpha(p.I)*Power(W(p.I),2) +
    16*cpi*gamxy*invgamxz*Ssxz*alpha(p.I)*Power(W(p.I),2) +
    8*cpi*gamxy*invgamyy*Ssyy*alpha(p.I)*Power(W(p.I),2) +
    16*cpi*gamxy*invgamyz*Ssyz*alpha(p.I)*Power(W(p.I),2) +
    8*cpi*gamxy*invgamzz*Sszz*alpha(p.I)*Power(W(p.I),2))/3.
;

dtexAtxz(p.I)
=
(3*dexAtxxz*betax(p.I) + 3*dexAtyxz*betay(p.I) + 3*dexAtzxz*betaz(p.I) +
    3*dbetazx*exAtxx(p.I) + 3*dbetazy*exAtxy(p.I) + dbetaxx*exAtxz(p.I) -
    2*dbetayy*exAtxz(p.I) + dbetazz*exAtxz(p.I) -
    6*invgamtxx*alpha(p.I)*exAtxx(p.I)*exAtxz(p.I) -
    6*invgamtxy*alpha(p.I)*exAtxy(p.I)*exAtxz(p.I) -
    6*invgamtxz*alpha(p.I)*Power(exAtxz(p.I),2) + 3*dbetaxy*exAtyz(p.I) -
    6*invgamtxy*alpha(p.I)*exAtxx(p.I)*exAtyz(p.I) -
    6*invgamtyy*alpha(p.I)*exAtxy(p.I)*exAtyz(p.I) -
    6*invgamtyz*alpha(p.I)*exAtxz(p.I)*exAtyz(p.I) + 3*dbetaxz*exAtzz(p.I) -
    6*invgamtxz*alpha(p.I)*exAtxx(p.I)*exAtzz(p.I) -
    6*invgamtyz*alpha(p.I)*exAtxy(p.I)*exAtzz(p.I) -
    6*invgamtzz*alpha(p.I)*exAtxz(p.I)*exAtzz(p.I) +
    3*alpha(p.I)*exAtxz(p.I)*exKh(p.I) + 6*alpha(p.I)*exAtxz(p.I)*Theta(p.I) -
    3*DDalphaxz*Power(W(p.I),2) + DDalphaxx*gamxz*invgamxx*Power(W(p.I),2) +
    2*DDalphaxy*gamxz*invgamxy*Power(W(p.I),2) +
    2*DDalphaxz*gamxz*invgamxz*Power(W(p.I),2) +
    DDalphayy*gamxz*invgamyy*Power(W(p.I),2) +
    2*DDalphayz*gamxz*invgamyz*Power(W(p.I),2) +
    DDalphazz*gamxz*invgamzz*Power(W(p.I),2) -
    gamxz*invgamxx*Rxx*alpha(p.I)*Power(W(p.I),2) -
    2*gamxz*invgamxy*Rxy*alpha(p.I)*Power(W(p.I),2) +
    3*Rxz*alpha(p.I)*Power(W(p.I),2) -
    2*gamxz*invgamxz*Rxz*alpha(p.I)*Power(W(p.I),2) -
    gamxz*invgamyy*Ryy*alpha(p.I)*Power(W(p.I),2) -
    2*gamxz*invgamyz*Ryz*alpha(p.I)*Power(W(p.I),2) -
    gamxz*invgamzz*Rzz*alpha(p.I)*Power(W(p.I),2) +
    8*cpi*gamxz*invgamxx*Ssxx*alpha(p.I)*Power(W(p.I),2) +
    16*cpi*gamxz*invgamxy*Ssxy*alpha(p.I)*Power(W(p.I),2) -
    24*cpi*Ssxz*alpha(p.I)*Power(W(p.I),2) +
    16*cpi*gamxz*invgamxz*Ssxz*alpha(p.I)*Power(W(p.I),2) +
    8*cpi*gamxz*invgamyy*Ssyy*alpha(p.I)*Power(W(p.I),2) +
    16*cpi*gamxz*invgamyz*Ssyz*alpha(p.I)*Power(W(p.I),2) +
    8*cpi*gamxz*invgamzz*Sszz*alpha(p.I)*Power(W(p.I),2))/3.
;

dtexAtyy(p.I)
=
(3*dexAtxyy*betax(p.I) + 3*dexAtyyy*betay(p.I) + 3*dexAtzyy*betaz(p.I) +
    6*dbetayx*exAtxy(p.I) - 6*invgamtxx*alpha(p.I)*Power(exAtxy(p.I),2) -
    2*dbetaxx*exAtyy(p.I) + 4*dbetayy*exAtyy(p.I) - 2*dbetazz*exAtyy(p.I) -
    12*invgamtxy*alpha(p.I)*exAtxy(p.I)*exAtyy(p.I) -
    6*invgamtyy*alpha(p.I)*Power(exAtyy(p.I),2) + 6*dbetayz*exAtyz(p.I) -
    12*invgamtxz*alpha(p.I)*exAtxy(p.I)*exAtyz(p.I) -
    12*invgamtyz*alpha(p.I)*exAtyy(p.I)*exAtyz(p.I) -
    6*invgamtzz*alpha(p.I)*Power(exAtyz(p.I),2) +
    3*alpha(p.I)*exAtyy(p.I)*exKh(p.I) + 6*alpha(p.I)*exAtyy(p.I)*Theta(p.I) -
    3*DDalphayy*Power(W(p.I),2) + DDalphaxx*gamyy*invgamxx*Power(W(p.I),2) +
    2*DDalphaxy*gamyy*invgamxy*Power(W(p.I),2) +
    2*DDalphaxz*gamyy*invgamxz*Power(W(p.I),2) +
    DDalphayy*gamyy*invgamyy*Power(W(p.I),2) +
    2*DDalphayz*gamyy*invgamyz*Power(W(p.I),2) +
    DDalphazz*gamyy*invgamzz*Power(W(p.I),2) -
    gamyy*invgamxx*Rxx*alpha(p.I)*Power(W(p.I),2) -
    2*gamyy*invgamxy*Rxy*alpha(p.I)*Power(W(p.I),2) -
    2*gamyy*invgamxz*Rxz*alpha(p.I)*Power(W(p.I),2) +
    3*Ryy*alpha(p.I)*Power(W(p.I),2) -
    gamyy*invgamyy*Ryy*alpha(p.I)*Power(W(p.I),2) -
    2*gamyy*invgamyz*Ryz*alpha(p.I)*Power(W(p.I),2) -
    gamyy*invgamzz*Rzz*alpha(p.I)*Power(W(p.I),2) +
    8*cpi*gamyy*invgamxx*Ssxx*alpha(p.I)*Power(W(p.I),2) +
    16*cpi*gamyy*invgamxy*Ssxy*alpha(p.I)*Power(W(p.I),2) +
    16*cpi*gamyy*invgamxz*Ssxz*alpha(p.I)*Power(W(p.I),2) -
    24*cpi*Ssyy*alpha(p.I)*Power(W(p.I),2) +
    8*cpi*gamyy*invgamyy*Ssyy*alpha(p.I)*Power(W(p.I),2) +
    16*cpi*gamyy*invgamyz*Ssyz*alpha(p.I)*Power(W(p.I),2) +
    8*cpi*gamyy*invgamzz*Sszz*alpha(p.I)*Power(W(p.I),2))/3.
;

dtexAtyz(p.I)
=
(3*dexAtxyz*betax(p.I) + 3*dexAtyyz*betay(p.I) + 3*dexAtzyz*betaz(p.I) +
    3*dbetazx*exAtxy(p.I) + 3*dbetayx*exAtxz(p.I) -
    6*invgamtxx*alpha(p.I)*exAtxy(p.I)*exAtxz(p.I) + 3*dbetazy*exAtyy(p.I) -
    6*invgamtxy*alpha(p.I)*exAtxz(p.I)*exAtyy(p.I) - 2*dbetaxx*exAtyz(p.I) +
    dbetayy*exAtyz(p.I) + dbetazz*exAtyz(p.I) -
    6*invgamtxy*alpha(p.I)*exAtxy(p.I)*exAtyz(p.I) -
    6*invgamtxz*alpha(p.I)*exAtxz(p.I)*exAtyz(p.I) -
    6*invgamtyy*alpha(p.I)*exAtyy(p.I)*exAtyz(p.I) -
    6*invgamtyz*alpha(p.I)*Power(exAtyz(p.I),2) + 3*dbetayz*exAtzz(p.I) -
    6*invgamtxz*alpha(p.I)*exAtxy(p.I)*exAtzz(p.I) -
    6*invgamtyz*alpha(p.I)*exAtyy(p.I)*exAtzz(p.I) -
    6*invgamtzz*alpha(p.I)*exAtyz(p.I)*exAtzz(p.I) +
    3*alpha(p.I)*exAtyz(p.I)*exKh(p.I) + 6*alpha(p.I)*exAtyz(p.I)*Theta(p.I) -
    3*DDalphayz*Power(W(p.I),2) + DDalphaxx*gamyz*invgamxx*Power(W(p.I),2) +
    2*DDalphaxy*gamyz*invgamxy*Power(W(p.I),2) +
    2*DDalphaxz*gamyz*invgamxz*Power(W(p.I),2) +
    DDalphayy*gamyz*invgamyy*Power(W(p.I),2) +
    2*DDalphayz*gamyz*invgamyz*Power(W(p.I),2) +
    DDalphazz*gamyz*invgamzz*Power(W(p.I),2) -
    gamyz*invgamxx*Rxx*alpha(p.I)*Power(W(p.I),2) -
    2*gamyz*invgamxy*Rxy*alpha(p.I)*Power(W(p.I),2) -
    2*gamyz*invgamxz*Rxz*alpha(p.I)*Power(W(p.I),2) -
    gamyz*invgamyy*Ryy*alpha(p.I)*Power(W(p.I),2) +
    3*Ryz*alpha(p.I)*Power(W(p.I),2) -
    2*gamyz*invgamyz*Ryz*alpha(p.I)*Power(W(p.I),2) -
    gamyz*invgamzz*Rzz*alpha(p.I)*Power(W(p.I),2) +
    8*cpi*gamyz*invgamxx*Ssxx*alpha(p.I)*Power(W(p.I),2) +
    16*cpi*gamyz*invgamxy*Ssxy*alpha(p.I)*Power(W(p.I),2) +
    16*cpi*gamyz*invgamxz*Ssxz*alpha(p.I)*Power(W(p.I),2) +
    8*cpi*gamyz*invgamyy*Ssyy*alpha(p.I)*Power(W(p.I),2) -
    24*cpi*Ssyz*alpha(p.I)*Power(W(p.I),2) +
    16*cpi*gamyz*invgamyz*Ssyz*alpha(p.I)*Power(W(p.I),2) +
    8*cpi*gamyz*invgamzz*Sszz*alpha(p.I)*Power(W(p.I),2))/3.
;

dtexAtzz(p.I)
=
(3*dexAtxzz*betax(p.I) + 3*dexAtyzz*betay(p.I) + 3*dexAtzzz*betaz(p.I) +
    6*dbetazx*exAtxz(p.I) - 6*invgamtxx*alpha(p.I)*Power(exAtxz(p.I),2) +
    6*dbetazy*exAtyz(p.I) - 12*invgamtxy*alpha(p.I)*exAtxz(p.I)*exAtyz(p.I) -
    6*invgamtyy*alpha(p.I)*Power(exAtyz(p.I),2) - 2*dbetaxx*exAtzz(p.I) -
    2*dbetayy*exAtzz(p.I) + 4*dbetazz*exAtzz(p.I) -
    12*invgamtxz*alpha(p.I)*exAtxz(p.I)*exAtzz(p.I) -
    12*invgamtyz*alpha(p.I)*exAtyz(p.I)*exAtzz(p.I) -
    6*invgamtzz*alpha(p.I)*Power(exAtzz(p.I),2) +
    3*alpha(p.I)*exAtzz(p.I)*exKh(p.I) + 6*alpha(p.I)*exAtzz(p.I)*Theta(p.I) -
    3*DDalphazz*Power(W(p.I),2) + DDalphaxx*gamzz*invgamxx*Power(W(p.I),2) +
    2*DDalphaxy*gamzz*invgamxy*Power(W(p.I),2) +
    2*DDalphaxz*gamzz*invgamxz*Power(W(p.I),2) +
    DDalphayy*gamzz*invgamyy*Power(W(p.I),2) +
    2*DDalphayz*gamzz*invgamyz*Power(W(p.I),2) +
    DDalphazz*gamzz*invgamzz*Power(W(p.I),2) -
    gamzz*invgamxx*Rxx*alpha(p.I)*Power(W(p.I),2) -
    2*gamzz*invgamxy*Rxy*alpha(p.I)*Power(W(p.I),2) -
    2*gamzz*invgamxz*Rxz*alpha(p.I)*Power(W(p.I),2) -
    gamzz*invgamyy*Ryy*alpha(p.I)*Power(W(p.I),2) -
    2*gamzz*invgamyz*Ryz*alpha(p.I)*Power(W(p.I),2) +
    3*Rzz*alpha(p.I)*Power(W(p.I),2) -
    gamzz*invgamzz*Rzz*alpha(p.I)*Power(W(p.I),2) +
    8*cpi*gamzz*invgamxx*Ssxx*alpha(p.I)*Power(W(p.I),2) +
    16*cpi*gamzz*invgamxy*Ssxy*alpha(p.I)*Power(W(p.I),2) +
    16*cpi*gamzz*invgamxz*Ssxz*alpha(p.I)*Power(W(p.I),2) +
    8*cpi*gamzz*invgamyy*Ssyy*alpha(p.I)*Power(W(p.I),2) +
    16*cpi*gamzz*invgamyz*Ssyz*alpha(p.I)*Power(W(p.I),2) -
    24*cpi*Sszz*alpha(p.I)*Power(W(p.I),2) +
    8*cpi*gamzz*invgamzz*Sszz*alpha(p.I)*Power(W(p.I),2))/3.
;

dttrGtx(p.I)
=
(-6*dalphax*exAtUUxx - 6*dalphay*exAtUUxy - 6*dalphaz*exAtUUxz +
    4*ddbetaxxx*invgamtxx + ddbetaxyy*invgamtxx + ddbetaxzz*invgamtxx +
    7*ddbetaxyx*invgamtxy + ddbetayyy*invgamtxy + ddbetayzz*invgamtxy +
    7*ddbetaxzx*invgamtxz + ddbetayzy*invgamtxz + ddbetazzz*invgamtxz +
    3*ddbetayyx*invgamtyy + 6*ddbetayzx*invgamtyz + 3*ddbetazzx*invgamtzz -
    dbetaxx*trGtdx + 2*dbetayy*trGtdx + 2*dbetazz*trGtdx -
    3*dbetayx*trGtdy - 3*dbetazx*trGtdz + 3*dtrGtxx*betax(p.I) +
    3*dtrGtyx*betay(p.I) + 3*dtrGtzx*betaz(p.I) -
    2*alpha(p.I)*(9*dlnWx*exAtUUxx + 9*dlnWy*exAtUUxy + 9*dlnWz*exAtUUxz -
       3*exAtUUxx*Gtxxx - 6*exAtUUxy*Gtxxy - 6*exAtUUxz*Gtxxz -
       3*exAtUUyy*Gtxyy - 6*exAtUUyz*Gtxyz - 3*exAtUUzz*Gtxzz +
       2*dexKhx*invgamtxx + dThetax*invgamtxx + 2*dexKhy*invgamtxy +
       dThetay*invgamtxy + 2*dexKhz*invgamtxz + dThetaz*invgamtxz +
       24*cpi*invgamtxx*Smx + 24*cpi*invgamtxy*Smy + 24*cpi*invgamtxz*Smz -
       3*ckappa1*trGtdx + 3*ckappa1*trGtx(p.I)))/3.
;

dttrGty(p.I)
=
(-6*dalphax*exAtUUxy - 6*dalphay*exAtUUyy - 6*dalphaz*exAtUUyz +
    3*ddbetaxxy*invgamtxx + ddbetaxxx*invgamtxy + 7*ddbetaxyy*invgamtxy +
    ddbetaxzz*invgamtxy + 6*ddbetaxzy*invgamtxz + ddbetaxyx*invgamtyy +
    4*ddbetayyy*invgamtyy + ddbetayzz*invgamtyy + ddbetaxzx*invgamtyz +
    7*ddbetayzy*invgamtyz + ddbetazzz*invgamtyz + 3*ddbetazzy*invgamtzz -
    3*dbetaxy*trGtdx + 2*dbetaxx*trGtdy - dbetayy*trGtdy +
    2*dbetazz*trGtdy - 3*dbetazy*trGtdz + 3*dtrGtxy*betax(p.I) +
    3*dtrGtyy*betay(p.I) + 3*dtrGtzy*betaz(p.I) -
    2*alpha(p.I)*(9*dlnWx*exAtUUxy + 9*dlnWy*exAtUUyy + 9*dlnWz*exAtUUyz -
       3*exAtUUxx*Gtyxx - 6*exAtUUxy*Gtyxy - 6*exAtUUxz*Gtyxz -
       3*exAtUUyy*Gtyyy - 6*exAtUUyz*Gtyyz - 3*exAtUUzz*Gtyzz +
       2*dexKhx*invgamtxy + dThetax*invgamtxy + 2*dexKhy*invgamtyy +
       dThetay*invgamtyy + 2*dexKhz*invgamtyz + dThetaz*invgamtyz +
       24*cpi*invgamtxy*Smx + 24*cpi*invgamtyy*Smy + 24*cpi*invgamtyz*Smz -
       3*ckappa1*trGtdy + 3*ckappa1*trGty(p.I)))/3.
;

dttrGtz(p.I)
=
(-6*dalphax*exAtUUxz - 6*dalphay*exAtUUyz - 6*dalphaz*exAtUUzz +
    3*ddbetaxxz*invgamtxx + 6*ddbetaxyz*invgamtxy + ddbetaxxx*invgamtxz +
    ddbetaxyy*invgamtxz + 7*ddbetaxzz*invgamtxz + 3*ddbetayyz*invgamtyy +
    ddbetaxyx*invgamtyz + ddbetayyy*invgamtyz + 7*ddbetayzz*invgamtyz +
    ddbetaxzx*invgamtzz + ddbetayzy*invgamtzz + 4*ddbetazzz*invgamtzz -
    3*dbetaxz*trGtdx - 3*dbetayz*trGtdy + 2*dbetaxx*trGtdz +
    2*dbetayy*trGtdz - dbetazz*trGtdz + 3*dtrGtxz*betax(p.I) +
    3*dtrGtyz*betay(p.I) + 3*dtrGtzz*betaz(p.I) -
    2*alpha(p.I)*(9*dlnWx*exAtUUxz + 9*dlnWy*exAtUUyz + 9*dlnWz*exAtUUzz -
       3*exAtUUxx*Gtzxx - 6*exAtUUxy*Gtzxy - 6*exAtUUxz*Gtzxz -
       3*exAtUUyy*Gtzyy - 6*exAtUUyz*Gtzyz - 3*exAtUUzz*Gtzzz +
       2*dexKhx*invgamtxz + dThetax*invgamtxz + 2*dexKhy*invgamtyz +
       dThetay*invgamtyz + 2*dexKhz*invgamtzz + dThetaz*invgamtzz +
       24*cpi*invgamtxz*Smx + 24*cpi*invgamtyz*Smy + 24*cpi*invgamtzz*Smz -
       3*ckappa1*trGtdz + 3*ckappa1*trGtz(p.I)))/3.
;

dtTheta(p.I)
=
dThetax*betax(p.I) + dThetay*betay(p.I) + dThetaz*betaz(p.I) -
  (alpha(p.I)*(48*cpi*rho - 3*trR + 3*exAtUUxx*exAtxx(p.I) +
       6*exAtUUxy*exAtxy(p.I) + 6*exAtUUxz*exAtxz(p.I) +
       3*exAtUUyy*exAtyy(p.I) + 6*exAtUUyz*exAtyz(p.I) +
       3*exAtUUzz*exAtzz(p.I) - 2*Power(exKh(p.I),2) + 12*ckappa1*Theta(p.I) +
       6*ckappa1*ckappa2*Theta(p.I) - 8*exKh(p.I)*Theta(p.I) -
       8*Power(Theta(p.I),2)))/6.
;

dtalpha(p.I)
=
dalphax*betax(p.I) + dalphay*betay(p.I) + dalphaz*betaz(p.I) -
  cmuL*alpha(p.I)*exKh(p.I)
;

dtbetax(p.I)
=
(-ceta + dbetaxx)*betax(p.I) + dbetayx*betay(p.I) + dbetazx*betaz(p.I) +
  cmuS*trGtx(p.I)
;

dtbetay(p.I)
=
dbetaxy*betax(p.I) + (-ceta + dbetayy)*betay(p.I) + dbetazy*betaz(p.I) +
  cmuS*trGty(p.I)
;

dtbetaz(p.I)
=
dbetaxz*betax(p.I) + dbetayz*betay(p.I) - ceta*betaz(p.I) + dbetazz*betaz(p.I) +
  cmuS*trGtz(p.I)
;


  });
});

#endif // #ifndef Z4COW_SET_RHS_HXX

/* Z4cow_set_rhs.hxx */