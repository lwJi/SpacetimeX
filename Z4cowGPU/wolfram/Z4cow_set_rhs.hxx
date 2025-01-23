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
dWx/W[pI]
;

const auto
dlnWy
=
dWy/W[pI]
;

const auto
dlnWz
=
dWz/W[pI]
;

const auto
invgamtxx
=
-Power(gamtyz[pI],2) + gamtyy[pI]*gamtzz[pI]
;

const auto
invgamtxy
=
gamtxz[pI]*gamtyz[pI] - gamtxy[pI]*gamtzz[pI]
;

const auto
invgamtxz
=
-(gamtxz[pI]*gamtyy[pI]) + gamtxy[pI]*gamtyz[pI]
;

const auto
invgamtyy
=
-Power(gamtxz[pI],2) + gamtxx[pI]*gamtzz[pI]
;

const auto
invgamtyz
=
gamtxy[pI]*gamtxz[pI] - gamtxx[pI]*gamtyz[pI]
;

const auto
invgamtzz
=
-Power(gamtxy[pI],2) + gamtxx[pI]*gamtyy[pI]
;

const auto
invgamxx
=
invgamtxx*Power(W[pI],2)
;

const auto
invgamxy
=
invgamtxy*Power(W[pI],2)
;

const auto
invgamxz
=
invgamtxz*Power(W[pI],2)
;

const auto
invgamyy
=
invgamtyy*Power(W[pI],2)
;

const auto
invgamyz
=
invgamtyz*Power(W[pI],2)
;

const auto
invgamzz
=
invgamtzz*Power(W[pI],2)
;

const auto
gamxx
=
gamtxx[pI]/Power(W[pI],2)
;

const auto
gamxy
=
gamtxy[pI]/Power(W[pI],2)
;

const auto
gamxz
=
gamtxz[pI]/Power(W[pI],2)
;

const auto
gamyy
=
gamtyy[pI]/Power(W[pI],2)
;

const auto
gamyz
=
gamtyz[pI]/Power(W[pI],2)
;

const auto
gamzz
=
gamtzz[pI]/Power(W[pI],2)
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
(dgamtxxx - 2*dlnWx*gamtxx[pI])/Power(W[pI],2)
;

const auto
dgamxxy
=
(dgamtxxy - 2*dlnWx*gamtxy[pI])/Power(W[pI],2)
;

const auto
dgamxxz
=
(dgamtxxz - 2*dlnWx*gamtxz[pI])/Power(W[pI],2)
;

const auto
dgamxyy
=
(dgamtxyy - 2*dlnWx*gamtyy[pI])/Power(W[pI],2)
;

const auto
dgamxyz
=
(dgamtxyz - 2*dlnWx*gamtyz[pI])/Power(W[pI],2)
;

const auto
dgamxzz
=
(dgamtxzz - 2*dlnWx*gamtzz[pI])/Power(W[pI],2)
;

const auto
dgamyxx
=
(dgamtyxx - 2*dlnWy*gamtxx[pI])/Power(W[pI],2)
;

const auto
dgamyxy
=
(dgamtyxy - 2*dlnWy*gamtxy[pI])/Power(W[pI],2)
;

const auto
dgamyxz
=
(dgamtyxz - 2*dlnWy*gamtxz[pI])/Power(W[pI],2)
;

const auto
dgamyyy
=
(dgamtyyy - 2*dlnWy*gamtyy[pI])/Power(W[pI],2)
;

const auto
dgamyyz
=
(dgamtyyz - 2*dlnWy*gamtyz[pI])/Power(W[pI],2)
;

const auto
dgamyzz
=
(dgamtyzz - 2*dlnWy*gamtzz[pI])/Power(W[pI],2)
;

const auto
dgamzxx
=
(dgamtzxx - 2*dlnWz*gamtxx[pI])/Power(W[pI],2)
;

const auto
dgamzxy
=
(dgamtzxy - 2*dlnWz*gamtxy[pI])/Power(W[pI],2)
;

const auto
dgamzxz
=
(dgamtzxz - 2*dlnWz*gamtxz[pI])/Power(W[pI],2)
;

const auto
dgamzyy
=
(dgamtzyy - 2*dlnWz*gamtyy[pI])/Power(W[pI],2)
;

const auto
dgamzyz
=
(dgamtzyz - 2*dlnWz*gamtyz[pI])/Power(W[pI],2)
;

const auto
dgamzzz
=
(dgamtzzz - 2*dlnWz*gamtzz[pI])/Power(W[pI],2)
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
Power(invgamtxx,2)*exAtxx[pI] + 2*invgamtxx*invgamtxy*exAtxy[pI] +
  2*invgamtxx*invgamtxz*exAtxz[pI] + Power(invgamtxy,2)*exAtyy[pI] +
  2*invgamtxy*invgamtxz*exAtyz[pI] + Power(invgamtxz,2)*exAtzz[pI]
;

const auto
exAtUUxy
=
invgamtxx*invgamtxy*exAtxx[pI] +
  (Power(invgamtxy,2) + invgamtxx*invgamtyy)*exAtxy[pI] +
  invgamtxy*invgamtxz*exAtxz[pI] + invgamtxx*invgamtyz*exAtxz[pI] +
  invgamtxy*invgamtyy*exAtyy[pI] + invgamtxz*invgamtyy*exAtyz[pI] +
  invgamtxy*invgamtyz*exAtyz[pI] + invgamtxz*invgamtyz*exAtzz[pI]
;

const auto
exAtUUxz
=
invgamtxx*invgamtxz*exAtxx[pI] +
  (invgamtxy*invgamtxz + invgamtxx*invgamtyz)*exAtxy[pI] +
  Power(invgamtxz,2)*exAtxz[pI] + invgamtxx*invgamtzz*exAtxz[pI] +
  invgamtxy*invgamtyz*exAtyy[pI] + invgamtxz*invgamtyz*exAtyz[pI] +
  invgamtxy*invgamtzz*exAtyz[pI] + invgamtxz*invgamtzz*exAtzz[pI]
;

const auto
exAtUUyy
=
Power(invgamtxy,2)*exAtxx[pI] + 2*invgamtxy*invgamtyy*exAtxy[pI] +
  2*invgamtxy*invgamtyz*exAtxz[pI] + Power(invgamtyy,2)*exAtyy[pI] +
  2*invgamtyy*invgamtyz*exAtyz[pI] + Power(invgamtyz,2)*exAtzz[pI]
;

const auto
exAtUUyz
=
invgamtxy*invgamtxz*exAtxx[pI] +
  (invgamtxz*invgamtyy + invgamtxy*invgamtyz)*exAtxy[pI] +
  invgamtxz*invgamtyz*exAtxz[pI] + invgamtxy*invgamtzz*exAtxz[pI] +
  invgamtyy*invgamtyz*exAtyy[pI] + Power(invgamtyz,2)*exAtyz[pI] +
  invgamtyy*invgamtzz*exAtyz[pI] + invgamtyz*invgamtzz*exAtzz[pI]
;

const auto
exAtUUzz
=
Power(invgamtxz,2)*exAtxx[pI] + 2*invgamtxz*invgamtyz*exAtxy[pI] +
  2*invgamtxz*invgamtzz*exAtxz[pI] + Power(invgamtyz,2)*exAtyy[pI] +
  2*invgamtyz*invgamtzz*exAtyz[pI] + Power(invgamtzz,2)*exAtzz[pI]
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
(tDtDWxx + gamtxx[pI]*(invgamtxx*tDtDWxx + 2*invgamtxy*tDtDWxy +
       2*invgamtxz*tDtDWxz + invgamtyy*tDtDWyy + 2*invgamtyz*tDtDWyz +
       invgamtzz*tDtDWzz - 2*(Power(dlnWx,2)*invgamtxx +
          2*dlnWx*dlnWy*invgamtxy + 2*dlnWx*dlnWz*invgamtxz +
          Power(dlnWy,2)*invgamtyy + 2*dlnWy*dlnWz*invgamtyz +
          Power(dlnWz,2)*invgamtzz)*W[pI]))/W[pI]
;

const auto
RtWxy
=
(tDtDWxy + gamtxy[pI]*(invgamtxx*tDtDWxx + 2*invgamtxy*tDtDWxy +
       2*invgamtxz*tDtDWxz + invgamtyy*tDtDWyy + 2*invgamtyz*tDtDWyz +
       invgamtzz*tDtDWzz - 2*(Power(dlnWx,2)*invgamtxx +
          2*dlnWx*dlnWy*invgamtxy + 2*dlnWx*dlnWz*invgamtxz +
          Power(dlnWy,2)*invgamtyy + 2*dlnWy*dlnWz*invgamtyz +
          Power(dlnWz,2)*invgamtzz)*W[pI]))/W[pI]
;

const auto
RtWxz
=
(tDtDWxz + gamtxz[pI]*(invgamtxx*tDtDWxx + 2*invgamtxy*tDtDWxy +
       2*invgamtxz*tDtDWxz + invgamtyy*tDtDWyy + 2*invgamtyz*tDtDWyz +
       invgamtzz*tDtDWzz - 2*(Power(dlnWx,2)*invgamtxx +
          2*dlnWx*dlnWy*invgamtxy + 2*dlnWx*dlnWz*invgamtxz +
          Power(dlnWy,2)*invgamtyy + 2*dlnWy*dlnWz*invgamtyz +
          Power(dlnWz,2)*invgamtzz)*W[pI]))/W[pI]
;

const auto
RtWyy
=
(tDtDWyy + gamtyy[pI]*(invgamtxx*tDtDWxx + 2*invgamtxy*tDtDWxy +
       2*invgamtxz*tDtDWxz + invgamtyy*tDtDWyy + 2*invgamtyz*tDtDWyz +
       invgamtzz*tDtDWzz - 2*(Power(dlnWx,2)*invgamtxx +
          2*dlnWx*dlnWy*invgamtxy + 2*dlnWx*dlnWz*invgamtxz +
          Power(dlnWy,2)*invgamtyy + 2*dlnWy*dlnWz*invgamtyz +
          Power(dlnWz,2)*invgamtzz)*W[pI]))/W[pI]
;

const auto
RtWyz
=
(tDtDWyz + gamtyz[pI]*(invgamtxx*tDtDWxx + 2*invgamtxy*tDtDWxy +
       2*invgamtxz*tDtDWxz + invgamtyy*tDtDWyy + 2*invgamtyz*tDtDWyz +
       invgamtzz*tDtDWzz - 2*(Power(dlnWx,2)*invgamtxx +
          2*dlnWx*dlnWy*invgamtxy + 2*dlnWx*dlnWz*invgamtxz +
          Power(dlnWy,2)*invgamtyy + 2*dlnWy*dlnWz*invgamtyz +
          Power(dlnWz,2)*invgamtzz)*W[pI]))/W[pI]
;

const auto
RtWzz
=
(tDtDWzz + gamtzz[pI]*(invgamtxx*tDtDWxx + 2*invgamtxy*tDtDWxy +
       2*invgamtxz*tDtDWxz + invgamtyy*tDtDWyy + 2*invgamtyz*tDtDWyz +
       invgamtzz*tDtDWzz - 2*(Power(dlnWx,2)*invgamtxx +
          2*dlnWx*dlnWy*invgamtxy + 2*dlnWx*dlnWz*invgamtxz +
          Power(dlnWy,2)*invgamtyy + 2*dlnWy*dlnWz*invgamtyz +
          Power(dlnWz,2)*invgamtzz)*W[pI]))/W[pI]
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
  GtDDDxxz*trGtdz + dtrGtxx*gamtxx[pI] + dtrGtxy*gamtxy[pI] +
  dtrGtxz*gamtxz[pI]
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
    GtDDDyxz*trGtdz + dtrGtyx*gamtxx[pI] + (dtrGtxx + dtrGtyy)*gamtxy[pI] +
    dtrGtyz*gamtxz[pI] + dtrGtxy*gamtyy[pI] + dtrGtxz*gamtyz[pI])/2.
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
    GtDDDzxz*trGtdz + dtrGtzx*gamtxx[pI] + dtrGtzy*gamtxy[pI] +
    dtrGtxx*gamtxz[pI] + dtrGtzz*gamtxz[pI] + dtrGtxy*gamtyz[pI] +
    dtrGtxz*gamtzz[pI])/2.
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
  GtDDDyyz*trGtdz + dtrGtyx*gamtxy[pI] + dtrGtyy*gamtyy[pI] +
  dtrGtyz*gamtyz[pI]
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
    GtDDDzyz*trGtdz + dtrGtzx*gamtxy[pI] + dtrGtyx*gamtxz[pI] +
    dtrGtzy*gamtyy[pI] + dtrGtyy*gamtyz[pI] + dtrGtzz*gamtyz[pI] +
    dtrGtyz*gamtzz[pI])/2.
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
  GtDDDzzz*trGtdz + dtrGtzx*gamtxz[pI] + dtrGtzy*gamtyz[pI] +
  dtrGtzz*gamtzz[pI]
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
(eTtt[pI] - 2*betay[pI]*eTty[pI] - 2*betaz[pI]*eTtz[pI] +
    Power(betax[pI],2)*eTxx[pI] +
    2*betax[pI]*(-eTtx[pI] + betay[pI]*eTxy[pI] + betaz[pI]*eTxz[pI]) +
    Power(betay[pI],2)*eTyy[pI] + 2*betay[pI]*betaz[pI]*eTyz[pI] +
    Power(betaz[pI],2)*eTzz[pI])/Power(alpha[pI],2)
;

const auto
Smx
=
(-eTtx[pI] + betax[pI]*eTxx[pI] + betay[pI]*eTxy[pI] + betaz[pI]*eTxz[pI])/
  alpha[pI]
;

const auto
Smy
=
(-eTty[pI] + betax[pI]*eTxy[pI] + betay[pI]*eTyy[pI] + betaz[pI]*eTyz[pI])/
  alpha[pI]
;

const auto
Smz
=
(-eTtz[pI] + betax[pI]*eTxz[pI] + betay[pI]*eTyz[pI] + betaz[pI]*eTzz[pI])/
  alpha[pI]
;

const auto
Ssxx
=
eTxx[pI]
;

const auto
Ssxy
=
eTxy[pI]
;

const auto
Ssxz
=
eTxz[pI]
;

const auto
Ssyy
=
eTyy[pI]
;

const auto
Ssyz
=
eTyz[pI]
;

const auto
Sszz
=
eTzz[pI]
;

const auto
trSs
=
invgamxx*Ssxx + 2*invgamxy*Ssxy + 2*invgamxz*Ssxz + invgamyy*Ssyy +
  2*invgamyz*Ssyz + invgamzz*Sszz
;


dtW[pI]
=
dWx*betax[pI] + dWy*betay[pI] + dWz*betaz[pI] -
  ((dbetaxx + dbetayy + dbetazz)*W[pI])/3. + (alpha[pI]*exKh[pI]*W[pI])/3. +
  (2*alpha[pI]*Theta[pI]*W[pI])/3.
;

dtgamtxx[pI]
=
dgamtxxx*betax[pI] + dgamtyxx*betay[pI] + dgamtzxx*betaz[pI] -
  2*alpha[pI]*exAtxx[pI] + 2*dbetaxx*gamtxx[pI] -
  (2*(dbetaxx + dbetayy + dbetazz)*gamtxx[pI])/3. + 2*dbetaxy*gamtxy[pI] +
  2*dbetaxz*gamtxz[pI]
;

dtgamtxy[pI]
=
dgamtxxy*betax[pI] + dgamtyxy*betay[pI] + dgamtzxy*betaz[pI] -
  2*alpha[pI]*exAtxy[pI] + dbetayx*gamtxx[pI] + dbetaxx*gamtxy[pI] +
  dbetayy*gamtxy[pI] - (2*(dbetaxx + dbetayy + dbetazz)*gamtxy[pI])/3. +
  dbetayz*gamtxz[pI] + dbetaxy*gamtyy[pI] + dbetaxz*gamtyz[pI]
;

dtgamtxz[pI]
=
dgamtxxz*betax[pI] + dgamtyxz*betay[pI] + dgamtzxz*betaz[pI] -
  2*alpha[pI]*exAtxz[pI] + dbetazx*gamtxx[pI] + dbetazy*gamtxy[pI] +
  dbetaxx*gamtxz[pI] + dbetazz*gamtxz[pI] -
  (2*(dbetaxx + dbetayy + dbetazz)*gamtxz[pI])/3. + dbetaxy*gamtyz[pI] +
  dbetaxz*gamtzz[pI]
;

dtgamtyy[pI]
=
dgamtxyy*betax[pI] + dgamtyyy*betay[pI] + dgamtzyy*betaz[pI] -
  2*alpha[pI]*exAtyy[pI] + 2*dbetayx*gamtxy[pI] + 2*dbetayy*gamtyy[pI] -
  (2*(dbetaxx + dbetayy + dbetazz)*gamtyy[pI])/3. + 2*dbetayz*gamtyz[pI]
;

dtgamtyz[pI]
=
dgamtxyz*betax[pI] + dgamtyyz*betay[pI] + dgamtzyz*betaz[pI] -
  2*alpha[pI]*exAtyz[pI] + dbetazx*gamtxy[pI] + dbetayx*gamtxz[pI] +
  dbetazy*gamtyy[pI] + dbetayy*gamtyz[pI] + dbetazz*gamtyz[pI] -
  (2*(dbetaxx + dbetayy + dbetazz)*gamtyz[pI])/3. + dbetayz*gamtzz[pI]
;

dtgamtzz[pI]
=
dgamtxzz*betax[pI] + dgamtyzz*betay[pI] + dgamtzzz*betaz[pI] -
  2*alpha[pI]*exAtzz[pI] + 2*dbetazx*gamtxz[pI] + 2*dbetazy*gamtyz[pI] +
  2*dbetazz*gamtzz[pI] - (2*(dbetaxx + dbetayy + dbetazz)*gamtzz[pI])/3.
;

dtexKh[pI]
=
-(DDalphaxx*invgamxx) - 2*DDalphaxy*invgamxy - 2*DDalphaxz*invgamxz -
  DDalphayy*invgamyy - 2*DDalphayz*invgamyz - DDalphazz*invgamzz +
  dexKhx*betax[pI] + dexKhy*betay[pI] + dexKhz*betaz[pI] +
  alpha[pI]*(4*cpi*rho + 4*cpi*trSs + exAtUUxx*exAtxx[pI] +
     2*exAtUUxy*exAtxy[pI] + 2*exAtUUxz*exAtxz[pI] + exAtUUyy*exAtyy[pI] +
     2*exAtUUyz*exAtyz[pI] + exAtUUzz*exAtzz[pI] + Power(exKh[pI],2)/3. +
     ckappa1*Theta[pI] - ckappa1*ckappa2*Theta[pI] +
     (4*exKh[pI]*Theta[pI])/3. + (4*Power(Theta[pI],2))/3.)
;

dtexAtxx[pI]
=
(3*dexAtxxx*betax[pI] + 3*dexAtyxx*betay[pI] + 3*dexAtzxx*betaz[pI] +
    4*dbetaxx*exAtxx[pI] - 2*dbetayy*exAtxx[pI] - 2*dbetazz*exAtxx[pI] -
    6*invgamtxx*alpha[pI]*Power(exAtxx[pI],2) + 6*dbetaxy*exAtxy[pI] -
    12*invgamtxy*alpha[pI]*exAtxx[pI]*exAtxy[pI] -
    6*invgamtyy*alpha[pI]*Power(exAtxy[pI],2) + 6*dbetaxz*exAtxz[pI] -
    12*invgamtxz*alpha[pI]*exAtxx[pI]*exAtxz[pI] -
    12*invgamtyz*alpha[pI]*exAtxy[pI]*exAtxz[pI] -
    6*invgamtzz*alpha[pI]*Power(exAtxz[pI],2) +
    3*alpha[pI]*exAtxx[pI]*exKh[pI] + 6*alpha[pI]*exAtxx[pI]*Theta[pI] -
    3*DDalphaxx*Power(W[pI],2) + DDalphaxx*gamxx*invgamxx*Power(W[pI],2) +
    2*DDalphaxy*gamxx*invgamxy*Power(W[pI],2) +
    2*DDalphaxz*gamxx*invgamxz*Power(W[pI],2) +
    DDalphayy*gamxx*invgamyy*Power(W[pI],2) +
    2*DDalphayz*gamxx*invgamyz*Power(W[pI],2) +
    DDalphazz*gamxx*invgamzz*Power(W[pI],2) +
    3*Rxx*alpha[pI]*Power(W[pI],2) -
    gamxx*invgamxx*Rxx*alpha[pI]*Power(W[pI],2) -
    2*gamxx*invgamxy*Rxy*alpha[pI]*Power(W[pI],2) -
    2*gamxx*invgamxz*Rxz*alpha[pI]*Power(W[pI],2) -
    gamxx*invgamyy*Ryy*alpha[pI]*Power(W[pI],2) -
    2*gamxx*invgamyz*Ryz*alpha[pI]*Power(W[pI],2) -
    gamxx*invgamzz*Rzz*alpha[pI]*Power(W[pI],2) -
    24*cpi*Ssxx*alpha[pI]*Power(W[pI],2) +
    8*cpi*gamxx*invgamxx*Ssxx*alpha[pI]*Power(W[pI],2) +
    16*cpi*gamxx*invgamxy*Ssxy*alpha[pI]*Power(W[pI],2) +
    16*cpi*gamxx*invgamxz*Ssxz*alpha[pI]*Power(W[pI],2) +
    8*cpi*gamxx*invgamyy*Ssyy*alpha[pI]*Power(W[pI],2) +
    16*cpi*gamxx*invgamyz*Ssyz*alpha[pI]*Power(W[pI],2) +
    8*cpi*gamxx*invgamzz*Sszz*alpha[pI]*Power(W[pI],2))/3.
;

dtexAtxy[pI]
=
(3*dexAtxxy*betax[pI] + 3*dexAtyxy*betay[pI] + 3*dexAtzxy*betaz[pI] +
    3*dbetayx*exAtxx[pI] + dbetaxx*exAtxy[pI] + dbetayy*exAtxy[pI] -
    2*dbetazz*exAtxy[pI] - 6*invgamtxx*alpha[pI]*exAtxx[pI]*exAtxy[pI] -
    6*invgamtxy*alpha[pI]*Power(exAtxy[pI],2) + 3*dbetayz*exAtxz[pI] -
    6*invgamtxz*alpha[pI]*exAtxy[pI]*exAtxz[pI] + 3*dbetaxy*exAtyy[pI] -
    6*invgamtxy*alpha[pI]*exAtxx[pI]*exAtyy[pI] -
    6*invgamtyy*alpha[pI]*exAtxy[pI]*exAtyy[pI] -
    6*invgamtyz*alpha[pI]*exAtxz[pI]*exAtyy[pI] + 3*dbetaxz*exAtyz[pI] -
    6*invgamtxz*alpha[pI]*exAtxx[pI]*exAtyz[pI] -
    6*invgamtyz*alpha[pI]*exAtxy[pI]*exAtyz[pI] -
    6*invgamtzz*alpha[pI]*exAtxz[pI]*exAtyz[pI] +
    3*alpha[pI]*exAtxy[pI]*exKh[pI] + 6*alpha[pI]*exAtxy[pI]*Theta[pI] -
    3*DDalphaxy*Power(W[pI],2) + DDalphaxx*gamxy*invgamxx*Power(W[pI],2) +
    2*DDalphaxy*gamxy*invgamxy*Power(W[pI],2) +
    2*DDalphaxz*gamxy*invgamxz*Power(W[pI],2) +
    DDalphayy*gamxy*invgamyy*Power(W[pI],2) +
    2*DDalphayz*gamxy*invgamyz*Power(W[pI],2) +
    DDalphazz*gamxy*invgamzz*Power(W[pI],2) -
    gamxy*invgamxx*Rxx*alpha[pI]*Power(W[pI],2) +
    3*Rxy*alpha[pI]*Power(W[pI],2) -
    2*gamxy*invgamxy*Rxy*alpha[pI]*Power(W[pI],2) -
    2*gamxy*invgamxz*Rxz*alpha[pI]*Power(W[pI],2) -
    gamxy*invgamyy*Ryy*alpha[pI]*Power(W[pI],2) -
    2*gamxy*invgamyz*Ryz*alpha[pI]*Power(W[pI],2) -
    gamxy*invgamzz*Rzz*alpha[pI]*Power(W[pI],2) +
    8*cpi*gamxy*invgamxx*Ssxx*alpha[pI]*Power(W[pI],2) -
    24*cpi*Ssxy*alpha[pI]*Power(W[pI],2) +
    16*cpi*gamxy*invgamxy*Ssxy*alpha[pI]*Power(W[pI],2) +
    16*cpi*gamxy*invgamxz*Ssxz*alpha[pI]*Power(W[pI],2) +
    8*cpi*gamxy*invgamyy*Ssyy*alpha[pI]*Power(W[pI],2) +
    16*cpi*gamxy*invgamyz*Ssyz*alpha[pI]*Power(W[pI],2) +
    8*cpi*gamxy*invgamzz*Sszz*alpha[pI]*Power(W[pI],2))/3.
;

dtexAtxz[pI]
=
(3*dexAtxxz*betax[pI] + 3*dexAtyxz*betay[pI] + 3*dexAtzxz*betaz[pI] +
    3*dbetazx*exAtxx[pI] + 3*dbetazy*exAtxy[pI] + dbetaxx*exAtxz[pI] -
    2*dbetayy*exAtxz[pI] + dbetazz*exAtxz[pI] -
    6*invgamtxx*alpha[pI]*exAtxx[pI]*exAtxz[pI] -
    6*invgamtxy*alpha[pI]*exAtxy[pI]*exAtxz[pI] -
    6*invgamtxz*alpha[pI]*Power(exAtxz[pI],2) + 3*dbetaxy*exAtyz[pI] -
    6*invgamtxy*alpha[pI]*exAtxx[pI]*exAtyz[pI] -
    6*invgamtyy*alpha[pI]*exAtxy[pI]*exAtyz[pI] -
    6*invgamtyz*alpha[pI]*exAtxz[pI]*exAtyz[pI] + 3*dbetaxz*exAtzz[pI] -
    6*invgamtxz*alpha[pI]*exAtxx[pI]*exAtzz[pI] -
    6*invgamtyz*alpha[pI]*exAtxy[pI]*exAtzz[pI] -
    6*invgamtzz*alpha[pI]*exAtxz[pI]*exAtzz[pI] +
    3*alpha[pI]*exAtxz[pI]*exKh[pI] + 6*alpha[pI]*exAtxz[pI]*Theta[pI] -
    3*DDalphaxz*Power(W[pI],2) + DDalphaxx*gamxz*invgamxx*Power(W[pI],2) +
    2*DDalphaxy*gamxz*invgamxy*Power(W[pI],2) +
    2*DDalphaxz*gamxz*invgamxz*Power(W[pI],2) +
    DDalphayy*gamxz*invgamyy*Power(W[pI],2) +
    2*DDalphayz*gamxz*invgamyz*Power(W[pI],2) +
    DDalphazz*gamxz*invgamzz*Power(W[pI],2) -
    gamxz*invgamxx*Rxx*alpha[pI]*Power(W[pI],2) -
    2*gamxz*invgamxy*Rxy*alpha[pI]*Power(W[pI],2) +
    3*Rxz*alpha[pI]*Power(W[pI],2) -
    2*gamxz*invgamxz*Rxz*alpha[pI]*Power(W[pI],2) -
    gamxz*invgamyy*Ryy*alpha[pI]*Power(W[pI],2) -
    2*gamxz*invgamyz*Ryz*alpha[pI]*Power(W[pI],2) -
    gamxz*invgamzz*Rzz*alpha[pI]*Power(W[pI],2) +
    8*cpi*gamxz*invgamxx*Ssxx*alpha[pI]*Power(W[pI],2) +
    16*cpi*gamxz*invgamxy*Ssxy*alpha[pI]*Power(W[pI],2) -
    24*cpi*Ssxz*alpha[pI]*Power(W[pI],2) +
    16*cpi*gamxz*invgamxz*Ssxz*alpha[pI]*Power(W[pI],2) +
    8*cpi*gamxz*invgamyy*Ssyy*alpha[pI]*Power(W[pI],2) +
    16*cpi*gamxz*invgamyz*Ssyz*alpha[pI]*Power(W[pI],2) +
    8*cpi*gamxz*invgamzz*Sszz*alpha[pI]*Power(W[pI],2))/3.
;

dtexAtyy[pI]
=
(3*dexAtxyy*betax[pI] + 3*dexAtyyy*betay[pI] + 3*dexAtzyy*betaz[pI] +
    6*dbetayx*exAtxy[pI] - 6*invgamtxx*alpha[pI]*Power(exAtxy[pI],2) -
    2*dbetaxx*exAtyy[pI] + 4*dbetayy*exAtyy[pI] - 2*dbetazz*exAtyy[pI] -
    12*invgamtxy*alpha[pI]*exAtxy[pI]*exAtyy[pI] -
    6*invgamtyy*alpha[pI]*Power(exAtyy[pI],2) + 6*dbetayz*exAtyz[pI] -
    12*invgamtxz*alpha[pI]*exAtxy[pI]*exAtyz[pI] -
    12*invgamtyz*alpha[pI]*exAtyy[pI]*exAtyz[pI] -
    6*invgamtzz*alpha[pI]*Power(exAtyz[pI],2) +
    3*alpha[pI]*exAtyy[pI]*exKh[pI] + 6*alpha[pI]*exAtyy[pI]*Theta[pI] -
    3*DDalphayy*Power(W[pI],2) + DDalphaxx*gamyy*invgamxx*Power(W[pI],2) +
    2*DDalphaxy*gamyy*invgamxy*Power(W[pI],2) +
    2*DDalphaxz*gamyy*invgamxz*Power(W[pI],2) +
    DDalphayy*gamyy*invgamyy*Power(W[pI],2) +
    2*DDalphayz*gamyy*invgamyz*Power(W[pI],2) +
    DDalphazz*gamyy*invgamzz*Power(W[pI],2) -
    gamyy*invgamxx*Rxx*alpha[pI]*Power(W[pI],2) -
    2*gamyy*invgamxy*Rxy*alpha[pI]*Power(W[pI],2) -
    2*gamyy*invgamxz*Rxz*alpha[pI]*Power(W[pI],2) +
    3*Ryy*alpha[pI]*Power(W[pI],2) -
    gamyy*invgamyy*Ryy*alpha[pI]*Power(W[pI],2) -
    2*gamyy*invgamyz*Ryz*alpha[pI]*Power(W[pI],2) -
    gamyy*invgamzz*Rzz*alpha[pI]*Power(W[pI],2) +
    8*cpi*gamyy*invgamxx*Ssxx*alpha[pI]*Power(W[pI],2) +
    16*cpi*gamyy*invgamxy*Ssxy*alpha[pI]*Power(W[pI],2) +
    16*cpi*gamyy*invgamxz*Ssxz*alpha[pI]*Power(W[pI],2) -
    24*cpi*Ssyy*alpha[pI]*Power(W[pI],2) +
    8*cpi*gamyy*invgamyy*Ssyy*alpha[pI]*Power(W[pI],2) +
    16*cpi*gamyy*invgamyz*Ssyz*alpha[pI]*Power(W[pI],2) +
    8*cpi*gamyy*invgamzz*Sszz*alpha[pI]*Power(W[pI],2))/3.
;

dtexAtyz[pI]
=
(3*dexAtxyz*betax[pI] + 3*dexAtyyz*betay[pI] + 3*dexAtzyz*betaz[pI] +
    3*dbetazx*exAtxy[pI] + 3*dbetayx*exAtxz[pI] -
    6*invgamtxx*alpha[pI]*exAtxy[pI]*exAtxz[pI] + 3*dbetazy*exAtyy[pI] -
    6*invgamtxy*alpha[pI]*exAtxz[pI]*exAtyy[pI] - 2*dbetaxx*exAtyz[pI] +
    dbetayy*exAtyz[pI] + dbetazz*exAtyz[pI] -
    6*invgamtxy*alpha[pI]*exAtxy[pI]*exAtyz[pI] -
    6*invgamtxz*alpha[pI]*exAtxz[pI]*exAtyz[pI] -
    6*invgamtyy*alpha[pI]*exAtyy[pI]*exAtyz[pI] -
    6*invgamtyz*alpha[pI]*Power(exAtyz[pI],2) + 3*dbetayz*exAtzz[pI] -
    6*invgamtxz*alpha[pI]*exAtxy[pI]*exAtzz[pI] -
    6*invgamtyz*alpha[pI]*exAtyy[pI]*exAtzz[pI] -
    6*invgamtzz*alpha[pI]*exAtyz[pI]*exAtzz[pI] +
    3*alpha[pI]*exAtyz[pI]*exKh[pI] + 6*alpha[pI]*exAtyz[pI]*Theta[pI] -
    3*DDalphayz*Power(W[pI],2) + DDalphaxx*gamyz*invgamxx*Power(W[pI],2) +
    2*DDalphaxy*gamyz*invgamxy*Power(W[pI],2) +
    2*DDalphaxz*gamyz*invgamxz*Power(W[pI],2) +
    DDalphayy*gamyz*invgamyy*Power(W[pI],2) +
    2*DDalphayz*gamyz*invgamyz*Power(W[pI],2) +
    DDalphazz*gamyz*invgamzz*Power(W[pI],2) -
    gamyz*invgamxx*Rxx*alpha[pI]*Power(W[pI],2) -
    2*gamyz*invgamxy*Rxy*alpha[pI]*Power(W[pI],2) -
    2*gamyz*invgamxz*Rxz*alpha[pI]*Power(W[pI],2) -
    gamyz*invgamyy*Ryy*alpha[pI]*Power(W[pI],2) +
    3*Ryz*alpha[pI]*Power(W[pI],2) -
    2*gamyz*invgamyz*Ryz*alpha[pI]*Power(W[pI],2) -
    gamyz*invgamzz*Rzz*alpha[pI]*Power(W[pI],2) +
    8*cpi*gamyz*invgamxx*Ssxx*alpha[pI]*Power(W[pI],2) +
    16*cpi*gamyz*invgamxy*Ssxy*alpha[pI]*Power(W[pI],2) +
    16*cpi*gamyz*invgamxz*Ssxz*alpha[pI]*Power(W[pI],2) +
    8*cpi*gamyz*invgamyy*Ssyy*alpha[pI]*Power(W[pI],2) -
    24*cpi*Ssyz*alpha[pI]*Power(W[pI],2) +
    16*cpi*gamyz*invgamyz*Ssyz*alpha[pI]*Power(W[pI],2) +
    8*cpi*gamyz*invgamzz*Sszz*alpha[pI]*Power(W[pI],2))/3.
;

dtexAtzz[pI]
=
(3*dexAtxzz*betax[pI] + 3*dexAtyzz*betay[pI] + 3*dexAtzzz*betaz[pI] +
    6*dbetazx*exAtxz[pI] - 6*invgamtxx*alpha[pI]*Power(exAtxz[pI],2) +
    6*dbetazy*exAtyz[pI] - 12*invgamtxy*alpha[pI]*exAtxz[pI]*exAtyz[pI] -
    6*invgamtyy*alpha[pI]*Power(exAtyz[pI],2) - 2*dbetaxx*exAtzz[pI] -
    2*dbetayy*exAtzz[pI] + 4*dbetazz*exAtzz[pI] -
    12*invgamtxz*alpha[pI]*exAtxz[pI]*exAtzz[pI] -
    12*invgamtyz*alpha[pI]*exAtyz[pI]*exAtzz[pI] -
    6*invgamtzz*alpha[pI]*Power(exAtzz[pI],2) +
    3*alpha[pI]*exAtzz[pI]*exKh[pI] + 6*alpha[pI]*exAtzz[pI]*Theta[pI] -
    3*DDalphazz*Power(W[pI],2) + DDalphaxx*gamzz*invgamxx*Power(W[pI],2) +
    2*DDalphaxy*gamzz*invgamxy*Power(W[pI],2) +
    2*DDalphaxz*gamzz*invgamxz*Power(W[pI],2) +
    DDalphayy*gamzz*invgamyy*Power(W[pI],2) +
    2*DDalphayz*gamzz*invgamyz*Power(W[pI],2) +
    DDalphazz*gamzz*invgamzz*Power(W[pI],2) -
    gamzz*invgamxx*Rxx*alpha[pI]*Power(W[pI],2) -
    2*gamzz*invgamxy*Rxy*alpha[pI]*Power(W[pI],2) -
    2*gamzz*invgamxz*Rxz*alpha[pI]*Power(W[pI],2) -
    gamzz*invgamyy*Ryy*alpha[pI]*Power(W[pI],2) -
    2*gamzz*invgamyz*Ryz*alpha[pI]*Power(W[pI],2) +
    3*Rzz*alpha[pI]*Power(W[pI],2) -
    gamzz*invgamzz*Rzz*alpha[pI]*Power(W[pI],2) +
    8*cpi*gamzz*invgamxx*Ssxx*alpha[pI]*Power(W[pI],2) +
    16*cpi*gamzz*invgamxy*Ssxy*alpha[pI]*Power(W[pI],2) +
    16*cpi*gamzz*invgamxz*Ssxz*alpha[pI]*Power(W[pI],2) +
    8*cpi*gamzz*invgamyy*Ssyy*alpha[pI]*Power(W[pI],2) +
    16*cpi*gamzz*invgamyz*Ssyz*alpha[pI]*Power(W[pI],2) -
    24*cpi*Sszz*alpha[pI]*Power(W[pI],2) +
    8*cpi*gamzz*invgamzz*Sszz*alpha[pI]*Power(W[pI],2))/3.
;

dttrGtx[pI]
=
(-6*dalphax*exAtUUxx - 6*dalphay*exAtUUxy - 6*dalphaz*exAtUUxz +
    4*ddbetaxxx*invgamtxx + ddbetaxyy*invgamtxx + ddbetaxzz*invgamtxx +
    7*ddbetaxyx*invgamtxy + ddbetayyy*invgamtxy + ddbetayzz*invgamtxy +
    7*ddbetaxzx*invgamtxz + ddbetayzy*invgamtxz + ddbetazzz*invgamtxz +
    3*ddbetayyx*invgamtyy + 6*ddbetayzx*invgamtyz + 3*ddbetazzx*invgamtzz -
    dbetaxx*trGtdx + 2*dbetayy*trGtdx + 2*dbetazz*trGtdx -
    3*dbetayx*trGtdy - 3*dbetazx*trGtdz + 3*dtrGtxx*betax[pI] +
    3*dtrGtyx*betay[pI] + 3*dtrGtzx*betaz[pI] -
    2*alpha[pI]*(9*dlnWx*exAtUUxx + 9*dlnWy*exAtUUxy + 9*dlnWz*exAtUUxz -
       3*exAtUUxx*Gtxxx - 6*exAtUUxy*Gtxxy - 6*exAtUUxz*Gtxxz -
       3*exAtUUyy*Gtxyy - 6*exAtUUyz*Gtxyz - 3*exAtUUzz*Gtxzz +
       2*dexKhx*invgamtxx + dThetax*invgamtxx + 2*dexKhy*invgamtxy +
       dThetay*invgamtxy + 2*dexKhz*invgamtxz + dThetaz*invgamtxz +
       24*cpi*invgamtxx*Smx + 24*cpi*invgamtxy*Smy + 24*cpi*invgamtxz*Smz -
       3*ckappa1*trGtdx + 3*ckappa1*trGtx[pI]))/3.
;

dttrGty[pI]
=
(-6*dalphax*exAtUUxy - 6*dalphay*exAtUUyy - 6*dalphaz*exAtUUyz +
    3*ddbetaxxy*invgamtxx + ddbetaxxx*invgamtxy + 7*ddbetaxyy*invgamtxy +
    ddbetaxzz*invgamtxy + 6*ddbetaxzy*invgamtxz + ddbetaxyx*invgamtyy +
    4*ddbetayyy*invgamtyy + ddbetayzz*invgamtyy + ddbetaxzx*invgamtyz +
    7*ddbetayzy*invgamtyz + ddbetazzz*invgamtyz + 3*ddbetazzy*invgamtzz -
    3*dbetaxy*trGtdx + 2*dbetaxx*trGtdy - dbetayy*trGtdy +
    2*dbetazz*trGtdy - 3*dbetazy*trGtdz + 3*dtrGtxy*betax[pI] +
    3*dtrGtyy*betay[pI] + 3*dtrGtzy*betaz[pI] -
    2*alpha[pI]*(9*dlnWx*exAtUUxy + 9*dlnWy*exAtUUyy + 9*dlnWz*exAtUUyz -
       3*exAtUUxx*Gtyxx - 6*exAtUUxy*Gtyxy - 6*exAtUUxz*Gtyxz -
       3*exAtUUyy*Gtyyy - 6*exAtUUyz*Gtyyz - 3*exAtUUzz*Gtyzz +
       2*dexKhx*invgamtxy + dThetax*invgamtxy + 2*dexKhy*invgamtyy +
       dThetay*invgamtyy + 2*dexKhz*invgamtyz + dThetaz*invgamtyz +
       24*cpi*invgamtxy*Smx + 24*cpi*invgamtyy*Smy + 24*cpi*invgamtyz*Smz -
       3*ckappa1*trGtdy + 3*ckappa1*trGty[pI]))/3.
;

dttrGtz[pI]
=
(-6*dalphax*exAtUUxz - 6*dalphay*exAtUUyz - 6*dalphaz*exAtUUzz +
    3*ddbetaxxz*invgamtxx + 6*ddbetaxyz*invgamtxy + ddbetaxxx*invgamtxz +
    ddbetaxyy*invgamtxz + 7*ddbetaxzz*invgamtxz + 3*ddbetayyz*invgamtyy +
    ddbetaxyx*invgamtyz + ddbetayyy*invgamtyz + 7*ddbetayzz*invgamtyz +
    ddbetaxzx*invgamtzz + ddbetayzy*invgamtzz + 4*ddbetazzz*invgamtzz -
    3*dbetaxz*trGtdx - 3*dbetayz*trGtdy + 2*dbetaxx*trGtdz +
    2*dbetayy*trGtdz - dbetazz*trGtdz + 3*dtrGtxz*betax[pI] +
    3*dtrGtyz*betay[pI] + 3*dtrGtzz*betaz[pI] -
    2*alpha[pI]*(9*dlnWx*exAtUUxz + 9*dlnWy*exAtUUyz + 9*dlnWz*exAtUUzz -
       3*exAtUUxx*Gtzxx - 6*exAtUUxy*Gtzxy - 6*exAtUUxz*Gtzxz -
       3*exAtUUyy*Gtzyy - 6*exAtUUyz*Gtzyz - 3*exAtUUzz*Gtzzz +
       2*dexKhx*invgamtxz + dThetax*invgamtxz + 2*dexKhy*invgamtyz +
       dThetay*invgamtyz + 2*dexKhz*invgamtzz + dThetaz*invgamtzz +
       24*cpi*invgamtxz*Smx + 24*cpi*invgamtyz*Smy + 24*cpi*invgamtzz*Smz -
       3*ckappa1*trGtdz + 3*ckappa1*trGtz[pI]))/3.
;

dtTheta[pI]
=
dThetax*betax[pI] + dThetay*betay[pI] + dThetaz*betaz[pI] -
  (alpha[pI]*(48*cpi*rho - 3*trR + 3*exAtUUxx*exAtxx[pI] +
       6*exAtUUxy*exAtxy[pI] + 6*exAtUUxz*exAtxz[pI] +
       3*exAtUUyy*exAtyy[pI] + 6*exAtUUyz*exAtyz[pI] +
       3*exAtUUzz*exAtzz[pI] - 2*Power(exKh[pI],2) + 12*ckappa1*Theta[pI] +
       6*ckappa1*ckappa2*Theta[pI] - 8*exKh[pI]*Theta[pI] -
       8*Power(Theta[pI],2)))/6.
;

dtalpha[pI]
=
dalphax*betax[pI] + dalphay*betay[pI] + dalphaz*betaz[pI] -
  cmuL*alpha[pI]*exKh[pI]
;

dtbetax[pI]
=
(-ceta + dbetaxx)*betax[pI] + dbetayx*betay[pI] + dbetazx*betaz[pI] +
  cmuS*trGtx[pI]
;

dtbetay[pI]
=
dbetaxy*betax[pI] + (-ceta + dbetayy)*betay[pI] + dbetazy*betaz[pI] +
  cmuS*trGty[pI]
;

dtbetaz[pI]
=
dbetaxz*betax[pI] + dbetayz*betay[pI] - ceta*betaz[pI] + dbetazz*betaz[pI] +
  cmuS*trGtz[pI]
;


  });
});

#endif // #ifndef Z4COW_SET_RHS_HXX

/* Z4cow_set_rhs.hxx */
