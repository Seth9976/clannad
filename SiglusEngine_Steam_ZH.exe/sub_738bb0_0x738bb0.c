// 函数: sub_738bb0
// 地址: 0x738bb0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax_4 = *(arg1 + 0x12c) + 0x80
int32_t* edi = *(arg2 + 0x54)
int32_t eax_8 = sx.d(arg3[0x10]) * edi[0x10] * 0x16a1
int32_t edx_3 = ((sx.d(*arg3) * *edi) << 0xd) + 0x400
int32_t ebx = eax_8 + edx_3
int32_t eax_12 = sx.d(arg3[8]) * edi[8] * 0x2731
int32_t edx_9 = ((sx.d(arg3[1]) * edi[1]) << 0xd) + 0x400
int32_t eax_15 = sx.d(arg3[0x11]) * edi[0x11] * 0x16a1
int32_t ebx_3 = eax_15 + edx_9
int32_t eax_19 = sx.d(arg3[9]) * edi[9] * 0x2731
int32_t edx_15 = ((sx.d(arg3[2]) * edi[2]) << 0xd) + 0x400
int32_t eax_22 = sx.d(arg3[0x12]) * edi[0x12] * 0x16a1
int32_t ecx_1 = eax_22 + edx_15
int32_t eax_26 = sx.d(arg3[0xa]) * edi[0xa] * 0x2731
char* edi_6 = *arg4 + arg5
int32_t esi_3 = (((ebx + eax_12) s>> 0xb) + 0x10) << 0xd
int32_t eax_27 = ((ecx_1 + eax_26) s>> 0xb) * 0x16a1
int32_t ecx_5 = ((ebx_3 + eax_19) s>> 0xb) * 0x2731
int32_t edx_18 = eax_27 + esi_3
int32_t ecx_6 = ((edx_9 - eax_15 * 2) s>> 0xb) * 0x2731
*edi_6 = ((edx_18 + ecx_5) s>> 0x12 & 0x3ff)[eax_4]
edi_6[2] = ((edx_18 - ecx_5) s>> 0x12 & 0x3ff)[eax_4]
edi_6[1] = ((esi_3 - eax_27 * 2) s>> 0x12 & 0x3ff)[eax_4]
int32_t eax_35 = ((edx_15 - eax_22 * 2) s>> 0xb) * 0x16a1
int32_t esi_9 = (((edx_3 - eax_8 * 2) s>> 0xb) + 0x10) << 0xd
char* edi_8 = arg4[1] + arg5
int32_t edx_22 = eax_35 + esi_9
*edi_8 = ((edx_22 + ecx_6) s>> 0x12 & 0x3ff)[eax_4]
edi_8[2] = ((edx_22 - ecx_6) s>> 0x12 & 0x3ff)[eax_4]
int32_t ecx_8 = ((ebx_3 - eax_19) s>> 0xb) * 0x2731
edi_8[1] = ((esi_9 - eax_35 * 2) s>> 0x12 & 0x3ff)[eax_4]
int32_t eax_43 = ((ecx_1 - eax_26) s>> 0xb) * 0x16a1
char* edi_10 = arg4[2] + arg5
int32_t esi_15 = (((ebx - eax_12) s>> 0xb) + 0x10) << 0xd
int32_t edx_26 = eax_43 + esi_15
*edi_10 = ((edx_26 + ecx_8) s>> 0x12 & 0x3ff)[eax_4]
edi_10[2] = ((edx_26 - ecx_8) s>> 0x12 & 0x3ff)[eax_4]
char result = ((esi_15 - eax_43 * 2) s>> 0x12 & 0x3ff)[eax_4]
edi_10[1] = result
return result
