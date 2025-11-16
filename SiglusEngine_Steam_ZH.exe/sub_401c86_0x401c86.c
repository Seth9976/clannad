// 函数: sub_401c86
// 地址: 0x401c86
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

long double x87_r7_1 = fconvert.t(arg6) * fconvert.t(arg6)
long double x87_r6_1 = fconvert.t(arg6) * x87_r7_1
int32_t edi
int32_t var_18 = edi
float var_8 = fconvert.s(x87_r6_1)
float var_10 = fconvert.s(x87_r6_1 + x87_r6_1)
float var_c = fconvert.s(fconvert.t(3f) * x87_r7_1)
long double x87_r6_7 = fconvert.t(var_10) - fconvert.t(var_c) + fconvert.t(1f)
long double x87_r5_3 = fconvert.t(var_8) - (x87_r7_1 + x87_r7_1) + fconvert.t(arg6)
long double x87_r4_1 = fconvert.t(var_c) - fconvert.t(var_10)
long double x87_r3_1 = fconvert.t(var_8) - x87_r7_1
*arg1 = fconvert.s(x87_r6_7 * fconvert.t(*arg2) + x87_r5_3 * fconvert.t(*arg3)
    + x87_r4_1 * fconvert.t(*arg4) + x87_r3_1 * fconvert.t(*arg5))
arg1[1] = fconvert.s(x87_r3_1 * fconvert.t(arg5[1]) + x87_r4_1 * fconvert.t(arg4[1])
    + x87_r5_3 * fconvert.t(arg3[1]) + x87_r6_7 * fconvert.t(arg2[1]))
arg1[2] = fconvert.s(x87_r3_1 * fconvert.t(arg5[2]) + x87_r4_1 * fconvert.t(arg4[2])
    + x87_r5_3 * fconvert.t(arg3[2]) + x87_r6_7 * fconvert.t(arg2[2]))
arg1[3] = fconvert.s(x87_r3_1 * fconvert.t(arg5[3]) + x87_r4_1 * fconvert.t(arg4[3])
    + x87_r5_3 * fconvert.t(arg3[3]) + x87_r6_7 * fconvert.t(arg2[3]))
return arg1
