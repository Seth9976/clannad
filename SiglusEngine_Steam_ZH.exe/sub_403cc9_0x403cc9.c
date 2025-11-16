// 函数: sub_403cc9
// 地址: 0x403cc9
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

long double st0
long double st1
bool c2
st1, st0, c2 = __fsincos(fconvert.t(fconvert.s(fconvert.t(arg4) * fconvert.t(0.5f))))
float var_8 = fconvert.s(st0)
arg4 = fconvert.s(st1)
long double st0_1
long double st1_1
bool c2_1
st1_1, st0_1, c2_1 = __fsincos(fconvert.t(fconvert.s(fconvert.t(arg3) * fconvert.t(0.5f))))
float var_10 = fconvert.s(st0_1)
float var_18 = fconvert.s(st1_1)
long double st0_2
long double st1_2
bool c2_2
st1_2, st0_2, c2_2 = __fsincos(fconvert.t(fconvert.s(fconvert.t(arg2) * fconvert.t(0.5f))))
float var_c = fconvert.s(st0_2)
float var_14 = fconvert.s(st1_2)
long double x87_r7_13 = fconvert.t(var_14) * fconvert.t(var_10)
long double x87_r6_4 = fconvert.t(var_c) * fconvert.t(var_18)
*arg1 = fconvert.s(fconvert.t(var_8) * x87_r6_4 + x87_r7_13 * fconvert.t(arg4))
arg1[1] = fconvert.s(x87_r7_13 * fconvert.t(var_8) - x87_r6_4 * fconvert.t(arg4))
long double x87_r7_16 = fconvert.t(var_c) * fconvert.t(var_10)
long double x87_r6_6 = fconvert.t(var_14) * fconvert.t(var_18)
arg1[2] = fconvert.s(x87_r7_16 * fconvert.t(arg4) - x87_r6_6 * fconvert.t(var_8))
arg1[3] = fconvert.s(x87_r6_6 * fconvert.t(arg4) + x87_r7_16 * fconvert.t(var_8))
return arg1
