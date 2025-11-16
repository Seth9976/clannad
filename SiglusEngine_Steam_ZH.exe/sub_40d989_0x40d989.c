// 函数: sub_40d989
// 地址: 0x40d989
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg7 == 0)
    return fconvert.t(0f)

int32_t edi
int32_t var_4c_1 = edi
float* eax_3 = arg1 * arg8 + arg7
float* ecx_3 = arg2 * arg8 + arg7
void* edx_3 = arg3 * arg8 + arg7
float* ebx_3 = arg4 * arg8 + arg7
float var_34 = fconvert.s(fconvert.t(*eax_3) - fconvert.t(*ecx_3))
float var_30 = fconvert.s(fconvert.t(eax_3[1]) - fconvert.t(ecx_3[1]))
void* esi_3 = arg5 * arg8 + arg7
float var_2c = fconvert.s(fconvert.t(eax_3[2]) - fconvert.t(ecx_3[2]))
long double x87_r7_7 = fconvert.t(*eax_3) - fconvert.t(*edx_3)
arg7 += arg6 * arg8
float var_10_1 = var_34
float var_c
int32_t* edi_2 = &var_c
float* esi_7 = &var_30
*edi_2 = *esi_7
edi_2[1] = esi_7[1]
var_34 = fconvert.s(x87_r7_7)
var_30 = fconvert.s(fconvert.t(eax_3[1]) - fconvert.t(*(edx_3 + 4)))
var_2c = fconvert.s(fconvert.t(eax_3[2]) - fconvert.t(*(edx_3 + 8)))
float var_1c_1 = var_34
float var_18
int32_t* edi_5 = &var_18
float* esi_10 = &var_30
*edi_5 = *esi_10
edi_5[1] = esi_10[1]
float var_14
float var_8
float var_28 =
    fconvert.s(fconvert.t(var_14) * fconvert.t(var_c) - fconvert.t(var_18) * fconvert.t(var_8))
float var_24 =
    fconvert.s(fconvert.t(var_8) * fconvert.t(var_1c_1) - fconvert.t(var_14) * fconvert.t(var_10_1))
float var_20 =
    fconvert.s(fconvert.t(var_18) * fconvert.t(var_10_1) - fconvert.t(var_c) * fconvert.t(var_1c_1))
var_34 = var_28
float* edi_8 = &var_30
float* esi_13 = &var_24
*edi_8 = *esi_13
edi_8[1] = esi_13[1]
j_sub_4014e9(&var_34, &var_34)
float* eax_4 = esi_3
float var_40_1 = fconvert.s(fconvert.t(*ebx_3) - fconvert.t(*eax_4))
float var_3c = fconvert.s(fconvert.t(ebx_3[1]) - fconvert.t(eax_4[1]))
float var_38 = fconvert.s(fconvert.t(ebx_3[2]) - fconvert.t(eax_4[2]))
float* edi_11 = &var_c
float* esi_16 = &var_3c
long double x87_r7_28 = fconvert.t(*ebx_3) - fconvert.t(*arg7)
*edi_11 = *esi_16
edi_11[1] = esi_16[1]
float var_40_2 = fconvert.s(x87_r7_28)
var_3c = fconvert.s(fconvert.t(ebx_3[1]) - fconvert.t(arg7[1]))
var_38 = fconvert.s(fconvert.t(ebx_3[2]) - fconvert.t(arg7[2]))
float* edi_14 = &var_18
float* esi_19 = &var_3c
*edi_14 = *esi_19
edi_14[1] = esi_19[1]
float var_40_3 =
    fconvert.s(fconvert.t(var_14) * fconvert.t(var_c) - fconvert.t(var_18) * fconvert.t(var_8))
var_3c =
    fconvert.s(fconvert.t(var_8) * fconvert.t(var_40_2) - fconvert.t(var_14) * fconvert.t(var_40_1))
var_38 =
    fconvert.s(fconvert.t(var_18) * fconvert.t(var_40_1) - fconvert.t(var_c) * fconvert.t(var_40_2))
var_28 = var_40_3
float* edi_17 = &var_24
float* esi_22 = &var_3c
*edi_17 = *esi_22
edi_17[1] = esi_22[1]
j_sub_4014e9(&var_28, &var_28)
return fconvert.t(var_20) * fconvert.t(var_2c) + fconvert.t(var_24) * fconvert.t(var_30)
    + fconvert.t(var_28) * fconvert.t(var_34)
