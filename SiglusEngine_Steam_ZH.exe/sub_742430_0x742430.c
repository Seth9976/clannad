// 函数: sub_742430
// 地址: 0x742430
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* edx_1 = *(arg1 + 0x12c) + 0x80
int32_t* ecx = *(arg2 + 0x54)
int32_t edi_1 = sx.d(arg3[8]) * ecx[8]
int32_t ebx_2 = sx.d(*arg3) * *ecx + 4
arg5[*arg4] = *(((edi_1 + ebx_2) s>> 3 & 0x3ff) + edx_1)
char result = *(((ebx_2 - edi_1) s>> 3 & 0x3ff) + edx_1)
arg5[arg4[1]] = result
return result
