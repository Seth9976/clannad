// 函数: sub_6ed650
// 地址: 0x6ed650
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int16_t esi = arg2[4]
int16_t edi = *arg2
int32_t edx = sx.d(arg2[6])
int32_t ecx = sx.d(arg2[2])
int16_t eax_3 = ((sx.d(edi + esi) * 0xb505) s>> 0x10).w
int32_t edi_2 = sx.d(arg2[7])
int32_t ebx_1 = sx.d(arg2[1])
int16_t eax_6 = ((sx.d(edi - esi) * 0xb505) s>> 0x10).w
int16_t esi_3 = ((ecx * 0x61f8) s>> 0x10).w - ((edx * 0xec83) s>> 0x10).w
int16_t ecx_3 = ((ecx * 0xec83) s>> 0x10).w + ((edx * 0x61f8) s>> 0x10).w
int16_t ecx_6 = ((ebx_1 * 0x31f1) s>> 0x10).w - ((edi_2 * 0xfb15) s>> 0x10).w
int32_t ecx_7 = sx.d(arg2[5])
int32_t edx_1 = sx.d(arg2[3])
int16_t esi_6 = ((ecx_7 * 0xd4db) s>> 0x10).w - ((edx_1 * 0x8e3a) s>> 0x10).w
int16_t ecx_10 = ((ecx_7 * 0x8e3a) s>> 0x10).w + ((edx_1 * 0xd4db) s>> 0x10).w
int16_t ecx_13 = ((edi_2 * 0x31f1) s>> 0x10).w + ((ebx_1 * 0xfb15) s>> 0x10).w
int16_t edx_2 = esi_6 + ecx_6
int16_t edx_3 = ecx_13 + ecx_10
int16_t esi_8 = ((sx.d(ecx_6 - esi_6) * 0xb505) s>> 0x10).w
int16_t ebx_2 = ecx_3 + eax_3
int16_t edi_4 = ((sx.d(ecx_13 - ecx_10) * 0xb505) s>> 0x10).w
int16_t ecx_16 = eax_3 - ecx_3
int16_t edx_4 = esi_3 + eax_6
int16_t ecx_18 = eax_6 - esi_3
int16_t ecx_19 = edi_4 + esi_8
int16_t edi_5 = edi_4 - esi_8
*arg1 = edx_3 + ebx_2
arg1[8] = ecx_19 + edx_4
arg1[0x30] = edx_4 - ecx_19
arg1[0x10] = ecx_18 + edi_5
arg1[0x18] = ecx_16 + edx_2
arg1[0x20] = ecx_16 - edx_2
int16_t result = ecx_18 - edi_5
arg1[0x38] = ebx_2 - edx_3
arg1[0x28] = result
return result
