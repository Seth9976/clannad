// 函数: sub_4012aa
// 地址: 0x4012aa
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t var_c = ecx
long double x87_r7_1 = fconvert.t(arg6) * fconvert.t(arg6)
long double x87_r6_1 = fconvert.t(arg6) * x87_r7_1
long double x87_r5 = fconvert.t(2f)
int32_t edi
int32_t var_14 = edi
float var_c_1 = fconvert.s(x87_r7_1 * x87_r5 - x87_r6_1 - fconvert.t(arg6))
long double x87_r4_5 = x87_r6_1 * fconvert.t(3f)
float var_8_1 = fconvert.s(x87_r4_5 - x87_r7_1 * fconvert.t(5f) + x87_r5)
arg6 = fconvert.s(x87_r7_1 * fconvert.t(4f) - x87_r4_5 + fconvert.t(arg6))
long double x87_r7_2 = x87_r4_5 - x87_r7_1
long double x87_r6_3 = fconvert.t(0.5f)
*arg1 = fconvert.s((fconvert.t(var_c_1) * fconvert.t(*arg2)
    + fconvert.t(var_8_1) * fconvert.t(*arg3) + fconvert.t(arg6) * fconvert.t(*arg4)
    + x87_r7_2 * fconvert.t(*arg5)) * x87_r6_3)
arg1[1] = fconvert.s((x87_r7_2 * fconvert.t(arg5[1]) + fconvert.t(arg6) * fconvert.t(arg4[1])
    + fconvert.t(var_8_1) * fconvert.t(arg3[1]) + fconvert.t(var_c_1) * fconvert.t(arg2[1]))
    * x87_r6_3)
return arg1
