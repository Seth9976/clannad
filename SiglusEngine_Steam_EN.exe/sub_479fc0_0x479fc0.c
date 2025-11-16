// 函数: sub_479fc0
// 地址: 0x479fc0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg3

if (arg3 s< 0 || arg3 s>= data_7031bc)
    return sub_476410(arg1, arg2, arg3, arg4)

int32_t edi = *((arg2 + (arg3 << 1)) * 0x7a0 + 0x98c180)

if (edi == 0 || arg4 s< 0 || arg4 s>= *((arg2 + (arg3 << 1)) * 0x7a0 + &data_98c178))
    return sub_476410(arg4, arg2, arg3, arg4)

void* edx_2 = arg4 * 0x7d8 + 0x2d0 + edi
*(edx_2 + 0x90) = arg5
*(edx_2 + 0xb0) = arg6
*(edx_2 + 0x94) = arg5
*(edx_2 + 0xb4) = arg6
*(edx_2 + 0x98) = arg5
*(edx_2 + 0xb8) = arg6
*(edx_2 + 0x9c) = arg5
*(edx_2 + 0xbc) = arg6
*(edx_2 + 0xa0) = arg5
*(edx_2 + 0xc0) = arg6
*(edx_2 + 0xa4) = arg5
*(edx_2 + 0xc4) = arg6
*(edx_2 + 0xa8) = arg5
*(edx_2 + 0xc8) = arg6
*(edx_2 + 0xac) = arg5
*(edx_2 + 0xcc) = arg6
return arg6
