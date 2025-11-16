// 函数: sub_698470
// 地址: 0x698470
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* edx = data_bac45c
int32_t ecx = *(edx + 0x18)
int32_t edx_1 = *(edx + 0x1c)
int32_t var_18 = arg2
int32_t var_c = 0
int32_t esi = *(ecx + (arg2 << 3))
int32_t edi = edx_1 + ((*(ecx + (arg2 << 3) + 4) + esi) << 1)
*(arg1 + 0x14) = 7
*(arg1 + 0x10) = 0
*arg1 = 0
sub_5b2590(arg1, edx_1 + (esi << 1), edi)
return arg1
