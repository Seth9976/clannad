// 函数: sub_4044c7
// 地址: 0x4044c7
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

long double x87_r7_1 = fconvert.t(*arg2) - fconvert.t(*arg3)
int32_t edi
int32_t var_28 = edi
long double x87_r5_1 = fconvert.t(arg2[2]) - fconvert.t(arg3[2])
float var_10 = fconvert.s(fconvert.t(*arg2) - fconvert.t(*arg4))
float var_c = fconvert.s(fconvert.t(arg2[1]) - fconvert.t(arg4[1]))
long double x87_r4_5 = fconvert.t(arg2[2]) - fconvert.t(arg4[2])
float var_1c = fconvert.s(x87_r4_5 * (fconvert.t(arg2[1]) - fconvert.t(arg3[1]))
    - fconvert.t(var_c) * x87_r5_1)
float var_18 = fconvert.s(x87_r5_1 * fconvert.t(var_10) - x87_r4_5 * x87_r7_1)
float var_14 = fconvert.s(fconvert.t(var_c) * x87_r7_1 - fconvert.t(var_10) * x87_r4_5)
*arg1 = var_1c
void* edi_2 = &arg1[1]
float* esi = &var_18
*edi_2 = *esi
*(edi_2 + 4) = esi[1]
j_sub_4014e9(arg1, arg1)
arg1[3] = fconvert.s(fneg(fconvert.t(arg1[1]) * fconvert.t(arg2[1])
    + fconvert.t(arg1[2]) * fconvert.t(arg2[2]) + fconvert.t(*arg1) * fconvert.t(*arg2)))
return arg1
