// 函数: sub_738de0
// 地址: 0x738de0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* eax_2 = *(arg1 + 0x12c) + 0x80
int32_t* edx = *(arg2 + 0x54)
int32_t eax_5 = sx.d(arg3[8]) * edx[8]
int32_t edi_1 = sx.d(arg3[1]) * edx[1]
int32_t esi_2 = sx.d(*arg3) * *edx + 4
int32_t ebx = eax_5 + esi_2
int16_t* esi_3 = esi_2 - eax_5
int32_t eax_7 = sx.d(arg3[9]) * edx[9]
int32_t esi_4 = eax_7 + edi_1
void* edi_2 = edi_1 - eax_7
char* ecx_1 = *arg4
ecx_1[arg5] = *(((esi_4 + ebx) s>> 3 & 0x3ff) + eax_2)
ecx_1[arg5 + 1] = *(((ebx - esi_4) s>> 3 & 0x3ff) + eax_2)
char* ecx_3 = arg4[1] + arg5
*ecx_3 = *(((edi_2 + esi_3) s>> 3 & 0x3ff) + eax_2)
char result = *(((esi_3 - edi_2) s>> 3 & 0x3ff) + eax_2)
ecx_3[1] = result
return result
