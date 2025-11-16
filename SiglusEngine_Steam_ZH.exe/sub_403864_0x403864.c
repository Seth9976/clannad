// 函数: sub_403864
// 地址: 0x403864
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_40 = edi
float var_10 = fconvert.s(fconvert.t(*arg3) - fconvert.t(*arg2))
float var_c = fconvert.s(fconvert.t(arg3[1]) - fconvert.t(arg2[1]))
float var_8 = fconvert.s(fconvert.t(arg3[2]) - fconvert.t(arg2[2]))
j_sub_4014e9(&var_10, &var_10)
float var_28 =
    fconvert.s(fconvert.t(var_8) * fconvert.t(arg4[1]) - fconvert.t(var_c) * fconvert.t(arg4[2]))
float var_24 =
    fconvert.s(fconvert.t(var_10) * fconvert.t(arg4[2]) - fconvert.t(var_8) * fconvert.t(*arg4))
float var_20 =
    fconvert.s(fconvert.t(var_c) * fconvert.t(*arg4) - fconvert.t(var_10) * fconvert.t(arg4[1]))
float var_1c = var_28
float var_18
int32_t* edi_1 = &var_18
float* esi = &var_24
*edi_1 = *esi
edi_1[1] = esi[1]
j_sub_4014e9(&var_1c, &var_1c)
arg1[4] = var_18
long double x87_r6_7 = fconvert.t(var_8) * fconvert.t(var_18)
float var_14
arg1[8] = var_14
float var_34 = fconvert.s(fconvert.t(var_c) * fconvert.t(var_14) - x87_r6_7)
float var_30 =
    fconvert.s(fconvert.t(var_8) * fconvert.t(var_1c) - fconvert.t(var_10) * fconvert.t(var_14))
float var_2c =
    fconvert.s(fconvert.t(var_10) * fconvert.t(var_18) - fconvert.t(var_c) * fconvert.t(var_1c))
float* edi_4 = &var_24
float* esi_3 = &var_30
*arg1 = fconvert.s(fconvert.t(var_1c))
*edi_4 = *esi_3
long double x87_r7_26 = fconvert.t(var_18) * fconvert.t(arg2[1])
long double x87_r6_13 = fconvert.t(var_1c) * fconvert.t(*arg2)
edi_4[1] = esi_3[1]
long double x87_r6_15 = fconvert.t(var_14) * fconvert.t(arg2[2])
arg1[1] = var_34
arg1[5] = var_24
arg1[9] = var_20
float ecx_5 = var_10
arg1[0xc] = fconvert.s(fneg(x87_r7_26 + x87_r6_13 + x87_r6_15))
long double x87_r7_32 =
    fconvert.t(var_24) * fconvert.t(arg2[1]) + fconvert.t(var_34) * fconvert.t(*arg2)
long double x87_r6_19 = fconvert.t(var_20) * fconvert.t(arg2[2])
arg1[2] = ecx_5
arg1[6] = var_c
arg1[0xa] = var_8
arg1[0xd] = fconvert.s(fneg(x87_r7_32 + x87_r6_19))
arg1[0xe] = fconvert.s(fneg(fconvert.t(var_c) * fconvert.t(arg2[1])
    + fconvert.t(var_10) * fconvert.t(*arg2) + fconvert.t(var_8) * fconvert.t(arg2[2])))
arg1[3] = fconvert.s(float.t(0))
arg1[7] = fconvert.s(float.t(0))
arg1[0xb] = fconvert.s(float.t(0))
arg1[0xf] = fconvert.s(float.t(1))
return arg1
