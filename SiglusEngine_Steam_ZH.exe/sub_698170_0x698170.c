// 函数: sub_698170
// 地址: 0x698170
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
int32_t edx = *(arg1 + 0x2c)
int32_t ecx = *(arg1 + 0x30)
int32_t var_10 = arg3
int32_t esi = *(edx + (arg3 << 3))
int32_t var_8_1 = 0
int32_t edx_1 = ecx + ((*(edx + (arg3 << 3) + 4) + esi) << 1)
*(arg2 + 0x14) = 7
*(arg2 + 0x10) = 0
*arg2 = 0
sub_5b2590(arg2, ecx + (esi << 1), edx_1)
return arg2
