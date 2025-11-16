// 函数: sub_46a590
// 地址: 0x46a590
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg3

if (arg3 s< 0 || arg3 s>= data_7031bc)
    return 

void* ecx = (arg2 + (arg3 << 1)) * 0x650
int32_t eax_6 = *(ecx + 0x72d814) - arg4
sub_466780(eax_6, arg7, ecx + 0x72dbc8, arg8, arg9, 0x69, 0, eax_6, *(ecx + 0x72d818) - arg5, 
    *(ecx + 0x72d81c) - arg6, 0)
*(ecx + 0x72d818) = arg5
*(ecx + 0x72d814) = arg4
*(ecx + 0x72d81c) = arg6
