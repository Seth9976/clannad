// 函数: sub_73f890
// 地址: 0x73f890
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax_4 = *(arg1 + 0x12c) + 0x80
int32_t* esi = *(arg2 + 0x54)
int32_t eax_7 = sx.d(arg3[8]) * esi[8]
int32_t ecx_1 = sx.d(*arg3) * *esi
int32_t eax_9 = sx.d(arg3[9]) * esi[9]
int32_t ecx_4 = sx.d(arg3[1]) * esi[1]
int32_t edi = eax_9 + ecx_4
int32_t ecx_5 = ecx_4 - eax_9
int32_t eax_11 = sx.d(arg3[0xa]) * esi[0xa]
int32_t ecx_7 = sx.d(arg3[2]) * esi[2]
int32_t ecx_8 = ecx_7 + eax_11
int32_t var_10_1 = ecx_7 - eax_11
int32_t eax_13 = sx.d(arg3[3]) * esi[3]
int32_t eax_15 = sx.d(arg3[0xb]) * esi[0xb]
int32_t edx_1 = eax_15 + eax_13
int32_t esi_2 = eax_13 - eax_15
int32_t esi_4 = (ecx_8 + eax_7 + ecx_1 + 4) << 0xd
char* eax_18 = *arg4 + arg5
int32_t edi_1 = (edx_1 + edi) * 0x1151
int32_t ebx_3 = (eax_7 + ecx_1 + 4 - ecx_8) << 0xd
int32_t ecx_10 = edi * 0x187e + edi_1
int32_t edi_2 = edi_1 - edx_1 * 0x3b21
*eax_18 = ((ecx_10 + esi_4) s>> 0x10 & 0x3ff)[eax_4]
eax_18[3] = ((esi_4 - ecx_10) s>> 0x10 & 0x3ff)[eax_4]
eax_18[1] = ((ebx_3 + edi_2) s>> 0x10 & 0x3ff)[eax_4]
eax_18[2] = ((ebx_3 - edi_2) s>> 0x10 & 0x3ff)[eax_4]
char* ebx_8 = arg4[1] + arg5
int32_t esi_8 = (esi_2 + ecx_5) * 0x1151
int32_t edx_5 = (var_10_1 + ecx_1 - eax_7 + 4) << 0xd
int32_t edi_6 = (ecx_1 - eax_7 + 4 - var_10_1) << 0xd
int32_t ecx_13 = ecx_5 * 0x187e + esi_8
int32_t esi_9 = esi_8 - esi_2 * 0x3b21
*ebx_8 = ((ecx_13 + edx_5) s>> 0x10 & 0x3ff)[eax_4]
ebx_8[3] = ((edx_5 - ecx_13) s>> 0x10 & 0x3ff)[eax_4]
ebx_8[1] = ((edi_6 + esi_9) s>> 0x10 & 0x3ff)[eax_4]
char result = ((edi_6 - esi_9) s>> 0x10 & 0x3ff)[eax_4]
ebx_8[2] = result
return result
