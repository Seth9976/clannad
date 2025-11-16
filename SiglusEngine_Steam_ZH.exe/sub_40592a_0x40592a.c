// 函数: sub_40592a
// 地址: 0x40592a
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_2c = edi
float var_14
j_sub_4042e1(&var_14, arg3)
float var_10
float var_c
float var_8
long double x87_r7_4 = fconvert.t(var_10) * fconvert.t(arg2[1])
    + fconvert.t(var_14) * fconvert.t(*arg2) + fconvert.t(var_8) * fconvert.t(arg2[3])
    + fconvert.t(var_c) * fconvert.t(arg2[2])
float var_24 = fconvert.s(fneg(fconvert.t(var_14)))
float var_20 = fconvert.s(fneg(fconvert.t(var_10)))
float var_1c = fconvert.s(fneg(fconvert.t(var_c)))
float var_18 = fconvert.s(fneg(fconvert.t(var_8)))
var_14 = var_24
float* edi_1 = &var_10
float* esi = &var_20
*edi_1 = *esi
void* edi_2 = &edi_1[1]
void* esi_1 = &esi[1]
*edi_2 = *esi_1
*(edi_2 + 4) = *(esi_1 + 4)
*arg1 = fconvert.s(fconvert.t(var_14) * fconvert.t(*arg2) + x87_r7_4)
arg1[4] = fconvert.s(fconvert.t(var_10) * fconvert.t(*arg2))
arg1[8] = fconvert.s(fconvert.t(var_c) * fconvert.t(*arg2))
arg1[0xc] = fconvert.s(fconvert.t(var_8) * fconvert.t(*arg2))
arg1[1] = fconvert.s(fconvert.t(var_14) * fconvert.t(arg2[1]))
arg1[5] = fconvert.s(fconvert.t(var_10) * fconvert.t(arg2[1]) + x87_r7_4)
arg1[9] = fconvert.s(fconvert.t(var_c) * fconvert.t(arg2[1]))
arg1[0xd] = fconvert.s(fconvert.t(var_8) * fconvert.t(arg2[1]))
arg1[2] = fconvert.s(fconvert.t(var_14) * fconvert.t(arg2[2]))
arg1[6] = fconvert.s(fconvert.t(var_10) * fconvert.t(arg2[2]))
arg1[0xa] = fconvert.s(fconvert.t(var_c) * fconvert.t(arg2[2]) + x87_r7_4)
arg1[0xe] = fconvert.s(fconvert.t(var_8) * fconvert.t(arg2[2]))
arg1[3] = fconvert.s(fconvert.t(var_14) * fconvert.t(arg2[3]))
arg1[7] = fconvert.s(fconvert.t(var_10) * fconvert.t(arg2[3]))
arg1[0xb] = fconvert.s(fconvert.t(var_c) * fconvert.t(arg2[3]))
arg1[0xf] = fconvert.s(fconvert.t(var_8) * fconvert.t(arg2[3]) + x87_r7_4)
return arg1
