// 函数: sub_73fa40
// 地址: 0x73fa40
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx = *(arg1 + 0x12c)
int32_t* edx = *(arg2 + 0x54)
char* edi_1 = *arg4 + arg5
int32_t ecx_1 = sx.d(arg3[1]) * edx[1]
int32_t esi_2 = sx.d(*arg3) * *edx + 4
*edi_1 = *(((ecx_1 + esi_2) s>> 3 & 0x3ff) + ebx + 0x80)
char result = *(((esi_2 - ecx_1) s>> 3 & 0x3ff) + ebx + 0x80)
edi_1[1] = result
return result
