// 函数: sub_6ed8d0
// 地址: 0x6ed8d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int16_t eax_2 = ((sx.d(*arg2) * 0xb505) s>> 0x10).w
int32_t eax_3 = sx.d(arg2[2])
int32_t eax_4 = sx.d(arg2[1])
int16_t esi_1 = ((eax_3 * 0x61f8) s>> 0x10).w
int16_t ecx_1 = ((eax_3 * 0xec83) s>> 0x10).w
int32_t edx_1 = (eax_4 * 0x31f1) s>> 0x10
int32_t ebx_1 = (eax_4 * 0xfb15) s>> 0x10
int16_t var_10 = edx_1.w
int16_t var_18 = ebx_1.w
int16_t edi_1 = ((ebx_1 * 0xb505) s>> 0x10).w
int16_t eax_6 = ((edx_1 * 0xb505) s>> 0x10).w
int16_t ebx_2 = esi_1 + eax_2
int16_t edx_3 = eax_2 - esi_1
int16_t var_8_1 = eax_2 - ecx_1
int16_t esi_3 = eax_2 + ecx_1
int16_t ecx_2 = edi_1 + eax_6
int16_t edi_2 = edi_1 - eax_6
*arg1 = var_18 + esi_3
arg1[8] = ebx_2 + ecx_2
arg1[0x10] = edi_2 + edx_3
arg1[0x18] = var_10 + var_8_1
arg1[0x20] = var_8_1 - var_10
arg1[0x38] = esi_3 - var_18
arg1[0x30] = ebx_2 - ecx_2
arg1[0x28] = edx_3 - edi_2
return arg1
