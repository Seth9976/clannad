// 函数: sub_47a420
// 地址: 0x47a420
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg3 s< 0 || arg3 s>= data_7031bc)
    return sub_476410(arg1, arg2, arg3, arg4)

int32_t edi = *((arg2 + (arg3 << 1)) * 0x7a0 + 0x98c180)

if (edi == 0 || arg4 s< 0 || arg4 s>= *((arg2 + (arg3 << 1)) * 0x7a0 + &data_98c178))
    return sub_476410(arg4, arg2, arg3, arg4)

void* ecx_2 = arg4 * 0x7d8 + 0x2d0 + edi
*(ecx_2 + 0x90) = arg5
*(ecx_2 + 0x94) = arg5
*(ecx_2 + 0x98) = arg5
*(ecx_2 + 0x9c) = arg5
*(ecx_2 + 0xa0) = arg5
*(ecx_2 + 0xa4) = arg5
*(ecx_2 + 0xa8) = arg5
*(ecx_2 + 0xac) = arg5
return arg5
