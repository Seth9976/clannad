// 函数: sub_6ed7d0
// 地址: 0x6ed7d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx = sx.d(arg2[1])
int16_t eax_2 = ((sx.d(*arg2) * 0xb505) s>> 0x10).w
int32_t eax_3 = sx.d(arg2[2])
int16_t ebx_1 = ((eax_3 * 0x61f8) s>> 0x10).w
int16_t eax_5 = ((eax_3 * 0xec83) s>> 0x10).w
int32_t eax_6 = sx.d(arg2[3])
int16_t esi_1 = ((ecx * 0x31f1) s>> 0x10).w
int16_t ecx_2 = ((ecx * 0xfb15) s>> 0x10).w
int16_t edx_2 = (neg.d((eax_6 * 0x8e3a) s>> 0x10)).w
int16_t edi_1 = ((eax_6 * 0xd4db) s>> 0x10).w
int16_t eax_7 = edx_2 + esi_1
int16_t eax_9 = ecx_2 + edi_1
int16_t ebx_2 = ebx_1 + eax_2
int16_t edi_3 = eax_2 + eax_5
int16_t var_8_1 = eax_2 - eax_5
int16_t esi_4 = eax_2 - ebx_1
int32_t edx_4 = (sx.d(esi_1 - edx_2) * 0xb505) s>> 0x10
int32_t var_20 = edx_4
int16_t eax_12 = ((sx.d(ecx_2 - edi_1) * 0xb505) s>> 0x10).w
int16_t ecx_5 = eax_12 + edx_4.w
int16_t eax_13 = eax_12 - edx_4.w
*arg1 = eax_9 + edi_3
arg1[8] = ecx_5 + ebx_2
arg1[0x10] = eax_13 + esi_4
arg1[0x18] = eax_7 + var_8_1
arg1[0x20] = var_8_1 - eax_7
arg1[0x38] = edi_3 - eax_9
arg1[0x28] = esi_4 - eax_13
arg1[0x30] = ebx_2 - ecx_5
return arg1
