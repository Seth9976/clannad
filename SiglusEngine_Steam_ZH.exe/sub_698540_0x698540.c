// 函数: sub_698540
// 地址: 0x698540
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_18 = arg2
void* edx_1 = arg2 * 0x54 + *(data_bac45c + 0x54)
int32_t var_c = 0
int32_t ecx = *(edx_1 + 0x28)
int32_t edx_2 = *(edx_1 + 0x2c)
int32_t esi = *(ecx + (arg3 << 3))
int32_t edi = edx_2 + ((*(ecx + (arg3 << 3) + 4) + esi) << 1)
*(arg1 + 0x14) = 7
*(arg1 + 0x10) = 0
*arg1 = 0
sub_5b2590(arg1, edx_2 + (esi << 1), edi)
return arg1
