// 函数: sub_402db8
// 地址: 0x402db8
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

float var_8
int32_t* var_10 = &var_8
int32_t edi
int32_t var_28 = edi
float var_c
int32_t* var_14 = &var_c
long double st0
long double st1
bool c2
st1, st0, c2 = __fsincos(fconvert.t(arg3))
*var_10 = fconvert.s(st0)
*var_14 = fconvert.s(st1)
long double x87_r7_3 = float.t(1) - fconvert.t(var_8)
float var_20 = *arg2
float var_1c
int32_t* edi_1 = &var_1c
int32_t* esi_1 = arg2 i+ 4
*edi_1 = *esi_1
edi_1[1] = esi_1[1]
j_sub_4014e9(&var_20, &var_20)
long double x87_r7_4 = fconvert.t(fconvert.s(x87_r7_3))
arg3 = fconvert.s(fconvert.t(var_1c) * fconvert.t(var_20) * x87_r7_4)
float var_18
long double x87_r6_4 = fconvert.t(var_18)
long double x87_r5_2 = fconvert.t(var_1c) * x87_r6_4 * x87_r7_4
long double x87_r4_2 = x87_r6_4 * fconvert.t(var_20) * x87_r7_4
*arg1 = fconvert.s(fconvert.t(var_20) * fconvert.t(var_20) * x87_r7_4 + fconvert.t(var_8))
arg1[1] = fconvert.s(fconvert.t(arg3) + x87_r6_4 * fconvert.t(var_c))
long double x87_r2_3 = fconvert.t(var_1c) * fconvert.t(var_c)
arg1[2] = fconvert.s(x87_r4_2 - x87_r2_3)
arg1[3] = fconvert.s(float.t(0))
arg1[4] = fconvert.s(fconvert.t(arg3) - x87_r2_3)
arg1[5] = fconvert.s(fconvert.t(var_1c) * fconvert.t(var_1c) * x87_r7_4 + fconvert.t(var_8))
long double x87_r3_12 = fconvert.t(var_20) * fconvert.t(var_c)
arg1[6] = fconvert.s(x87_r3_12 + x87_r5_2)
arg1[7] = fconvert.s(float.t(0))
arg1[8] = fconvert.s(fconvert.t(fconvert.s(x87_r2_3)) + x87_r2_3)
arg1[9] = fconvert.s(x87_r5_2 - x87_r3_12)
arg1[0xa] = fconvert.s(x87_r3_12 * x87_r3_12 * x87_r7_4 + fconvert.t(var_8))
arg1[0xb] = fconvert.s(float.t(0))
arg1[0xc] = fconvert.s(float.t(0))
arg1[0xd] = fconvert.s(float.t(0))
arg1[0xe] = fconvert.s(float.t(0))
arg1[0xf] = fconvert.s(float.t(1))
return arg1
