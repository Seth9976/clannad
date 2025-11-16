// 函数: sub_742250
// 地址: 0x742250
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax_3 = *(arg1 + 0x12c) + 0x80
int32_t* ebx = *(arg2 + 0x54)
int32_t ecx_1 = sx.d(*arg3) * *ebx
int32_t eax_6 = sx.d(arg3[0x10]) * ebx[0x10]
int32_t ecx_3 = (ecx_1 - eax_6) << 0xd
int32_t ecx_5 = sx.d(arg3[8]) * ebx[8]
int32_t edx_2 = (eax_6 + ecx_1) << 0xd
int32_t edx_4 = sx.d(arg3[0x18]) * ebx[0x18]
int32_t esi = (edx_4 + ecx_5) * 0x1151
int32_t ecx_7 = ecx_5 * 0x187e + esi
int32_t esi_1 = esi - edx_4 * 0x3b21
int32_t eax_12 = sx.d(arg3[0x11]) * ebx[0x11]
int32_t ecx_11 = sx.d(arg3[1]) * ebx[1]
int32_t ecx_13 = (ecx_11 - eax_12) << 0xd
int32_t edx_8 = (eax_12 + ecx_11) << 0xd
int32_t ecx_15 = sx.d(arg3[9]) * ebx[9]
int32_t edx_10 = sx.d(arg3[0x19]) * ebx[0x19]
int32_t esi_2 = (edx_10 + ecx_15) * 0x1151
int32_t ecx_17 = ecx_15 * 0x187e + esi_2
int32_t esi_3 = esi_2 - edx_10 * 0x3b21
int32_t edi_1 = edx_8 + ecx_17
int32_t eax_16 = edx_8 - ecx_17
int32_t ebx_1 = ecx_13 + esi_3
int32_t eax_18 = ecx_13 - esi_3
char* edx_12 = *arg4 + arg5
*edx_12 = ((edi_1 + edx_2 + ecx_7 + 0x8000) s>> 0x10 & 0x3ff)[eax_3]
edx_12[1] = ((edx_2 + ecx_7 + 0x8000 - edi_1) s>> 0x10 & 0x3ff)[eax_3]
char* edx_13 = arg4[1]
edx_13[arg5] = ((ebx_1 + ecx_3 + esi_1 + 0x8000) s>> 0x10 & 0x3ff)[eax_3]
edx_13[arg5 + 1] = ((ecx_3 + esi_1 + 0x8000 - ebx_1) s>> 0x10 & 0x3ff)[eax_3]
char* edx_14 = arg4[2]
edx_14[arg5] = ((eax_18 + ecx_3 - esi_1 + 0x8000) s>> 0x10 & 0x3ff)[eax_3]
edx_14[arg5 + 1] = ((ecx_3 - esi_1 + 0x8000 - eax_18) s>> 0x10 & 0x3ff)[eax_3]
char* edx_16 = arg4[3]
edx_16[arg5] = ((eax_16 + edx_2 - ecx_7 + 0x8000) s>> 0x10 & 0x3ff)[eax_3]
char result = ((edx_2 - ecx_7 + 0x8000 - eax_16) s>> 0x10 & 0x3ff)[eax_3]
edx_16[arg5 + 1] = result
return result
