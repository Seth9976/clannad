// 函数: sub_47a9e0
// 地址: 0x47a9e0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

*arg6 = 0

if (arg3 s< 0 || arg3 s>= data_7031bc)
    return sub_476410(arg1, arg2, arg3, arg4)

int32_t ebx_1 = *((arg2 + (arg3 << 1)) * 0x7a0 + 0x98c180)

if (ebx_1 == 0 || arg4 s< 0 || arg4 s>= *((arg2 + (arg3 << 1)) * 0x7a0 + &data_98c178))
    return sub_476410(arg4, arg2, arg3, arg4)

if (arg5 u> 7)
    return arg4

int32_t eax_4 = *(ebx_1 + ((arg4 * 0x1f6 + arg5) << 2) + 0x380)
*arg6 = eax_4
return eax_4
