// 函数: sub_47d1b0
// 地址: 0x47d1b0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

*arg7 = 0
*arg6 = 0
*arg8 = 0
*arg5 = 0

if (arg3 s< 0 || arg3 s>= data_7031bc)
    return sub_476410(arg8, arg2, arg3, arg4)

if (*((arg2 + (arg3 << 1)) * 0x7a0 + 0x98c180) == 0 || arg4 s< 0
        || arg4 s>= *((arg2 + (arg3 << 1)) * 0x7a0 + &data_98c178))
    return sub_476410(arg4, arg2, arg3, arg4)

void* ecx_1 = *((arg2 + (arg3 << 1)) * 0x7a0 + 0x98c180) + arg4 * 0x7d8
*arg5 = zx.d(*(ecx_1 + 0x2e2))
*arg6 = zx.d(*(ecx_1 + 0x2e3))
*arg7 = zx.d(*(ecx_1 + 0x2e4))
uint32_t result = zx.d(*(ecx_1 + 0x2e5))
*arg8 = result
return result
