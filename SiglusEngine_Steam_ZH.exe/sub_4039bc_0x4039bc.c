// 函数: sub_4039bc
// 地址: 0x4039bc
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

long double st0
long double st1
bool c2
st1, st0, c2 = __fsincos(fconvert.t(fconvert.s(fconvert.t(arg2) * fconvert.t(0.5f))))
arg2 = fconvert.s(st0)
float var_8 = fconvert.s(st1)
long double x87_r7_5 = fconvert.t(arg2) / fconvert.t(var_8)
*arg1 = fconvert.s(x87_r7_5 / fconvert.t(arg3))
arg1[1] = fconvert.s(float.t(0))
arg1[2] = fconvert.s(float.t(0))
arg1[3] = fconvert.s(float.t(0))
arg1[4] = fconvert.s(float.t(0))
arg1[5] = fconvert.s(x87_r7_5)
arg1[6] = fconvert.s(float.t(0))
arg1[7] = fconvert.s(float.t(0))
arg1[8] = fconvert.s(float.t(0))
arg1[9] = fconvert.s(float.t(0))
long double x87_r7_12 = fconvert.t(arg5) / (fconvert.t(arg5) - fconvert.t(arg4))
arg1[0xa] = fconvert.s(x87_r7_12)
arg1[0xb] = fconvert.s(float.t(1))
arg1[0xc] = fconvert.s(float.t(0))
arg1[0xd] = fconvert.s(float.t(0))
arg1[0xe] = fconvert.s(fneg(x87_r7_12 * fconvert.t(arg4)))
arg1[0xf] = fconvert.s(float.t(0))
return arg1
