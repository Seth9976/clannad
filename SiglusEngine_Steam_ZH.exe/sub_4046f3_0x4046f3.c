// 函数: sub_4046f3
// 地址: 0x4046f3
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_2c = edi
float* edi_1 = arg1
long double x87_r7_1 = fconvert.t(*edi_1) + fconvert.t(10000f)
int32_t eax
int16_t x87control
int16_t x87control_1
eax, x87control_1 = __ftol(x87control, x87_r7_1)
long double x87_r7_2 = x87_r7_1 - float.t(eax)
int32_t eax_1 = eax & 0xff
long double x87_r6_2 = x87_r7_2 - fconvert.t(1f)
long double x87_r5_1 = fconvert.t(edi_1[1]) + fconvert.t(10000f)
int32_t eax_2
int16_t x87control_2
eax_2, x87control_2 = __ftol(x87control_1, x87_r5_1)
int32_t eax_3 = eax_2 & 0xff
uint32_t edi_3 = zx.d(eax_3.b + 1)
float var_c = fconvert.s(x87_r5_1 - float.t(eax_2) - fconvert.t(1f))
long double x87_r4_4 = fconvert.t(*(arg1 i+ 8)) + fconvert.t(10000f)
int32_t eax_5 = __ftol(x87control_2, x87_r4_4)
int32_t edx_1 = *((eax_1 << 2) + &data_ab2c08)
int32_t eax_6 = eax_5 & 0xff
long double x87_r3_2 = x87_r4_4 - float.t(eax_5)
uint32_t eax_8 = zx.d(eax_6.b + 1)
int32_t edx_5 = *((zx.d(eax_1.b + 1) << 2) + &data_ab2c08)
int32_t esi_2 = *(((edx_1 + eax_3) << 2) + &data_ab2c08)
arg1 = fconvert.s(x87_r4_4 - fconvert.t(1f))
int32_t ebx_2 = *(((eax_3 + edx_5) << 2) + &data_ab2c08)
int32_t ebx_5 = *(((edx_1 + edi_3) << 2) + &data_ab2c08)
int32_t edi_4 = *(((edx_5 + edi_3) << 2) + &data_ab2c08)
int32_t edx_7 = esi_2 + eax_6
float var_8_4 = fconvert.s((fconvert.t(3f) - (x87_r7_2 + x87_r7_2)) * x87_r7_2 * x87_r7_2)
int32_t edx_11 = ebx_2 + eax_6
long double x87_r3_18 = x87_r4_4 * fconvert.t(*(edx_7 * 0xc + 0xab3418))
    + x87_r3_2 * fconvert.t(*(edx_7 * 0xc + 0xab3414))
    + x87_r7_2 * fconvert.t(*(edx_7 * 0xc + &data_ab3410))
int32_t edx_14 = ebx_5 + eax_6
int32_t ecx_1 = eax_6 + edi_4
int32_t esi_3 = esi_2 + eax_8
long double x87_r2_10 = (x87_r4_4 * fconvert.t(*(edx_11 * 0xc + 0xab3418))
    + x87_r3_2 * fconvert.t(*(edx_11 * 0xc + 0xab3414))
    + x87_r6_2 * fconvert.t(*(edx_11 * 0xc + &data_ab3410)) - x87_r3_18) * fconvert.t(var_8_4)
    + x87_r3_18
long double x87_r2_14 = x87_r2_10 * fconvert.t(*(edx_14 * 0xc + 0xab3418))
    + fconvert.t(var_c) * fconvert.t(*(edx_14 * 0xc + 0xab3414))
    + x87_r7_2 * fconvert.t(*(edx_14 * 0xc + &data_ab3410))
float var_1c = fconvert.s(((x87_r2_10 * fconvert.t(*(ecx_1 * 0xc + 0xab3418))
    + fconvert.t(var_c) * fconvert.t(*(ecx_1 * 0xc + 0xab3414))
    + x87_r6_2 * fconvert.t(*(ecx_1 * 0xc + &data_ab3410)) - x87_r2_14) * fconvert.t(var_8_4)
    + x87_r2_14 - x87_r3_18)
    * fconvert.t(fconvert.s((fconvert.t(3f) - (x87_r3_2 + x87_r3_2)) * x87_r3_2 * x87_r3_2))
    + x87_r3_18)
long double result = fconvert.t(arg1) * fconvert.t(*(esi_3 * 0xc + 0xab3418))
    + x87_r2_14 * fconvert.t(*(esi_3 * 0xc + 0xab3414))
    + x87_r7_2 * fconvert.t(*(esi_3 * 0xc + &data_ab3410))
int32_t ecx_7 = ebx_2 + eax_8
int32_t ecx_10 = ebx_5 + eax_8
int32_t eax_9 = eax_8 + edi_4
float var_14_2 = fconvert.s((fconvert.t(arg1) * fconvert.t(*(ecx_7 * 0xc + 0xab3418))
    + x87_r2_14 * fconvert.t(*(ecx_7 * 0xc + 0xab3414))
    + x87_r6_2 * fconvert.t(*(ecx_7 * 0xc + &data_ab3410)) - result) * fconvert.t(var_8_4) + result)
fconvert.t(arg1) * fconvert.t(*(ecx_10 * 0xc + 0xab3418))
    + fconvert.t(var_c) * fconvert.t(*(ecx_10 * 0xc + 0xab3414))
*(ecx_10 * 0xc + &data_ab3410)
fconvert.t(arg1) * fconvert.t(*(eax_9 * 0xc + 0xab3418))
    + fconvert.t(var_c) * fconvert.t(*(eax_9 * 0xc + 0xab3414))
    + fconvert.t(fconvert.s(x87_r6_2)) * fconvert.t(*(eax_9 * 0xc + &data_ab3410))
return result
