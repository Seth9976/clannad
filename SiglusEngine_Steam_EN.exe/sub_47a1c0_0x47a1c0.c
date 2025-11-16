// 函数: sub_47a1c0
// 地址: 0x47a1c0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg3
*arg7 = 0
*arg6 = 0

if (arg3 s< 0 || arg3 s>= data_7031bc)
    return sub_476410(arg1, arg2, arg3, arg4)

if (*((arg2 + (arg3 << 1)) * 0x7a0 + 0x98c180) == 0 || arg4 s< 0
        || arg4 s>= *((arg2 + (arg3 << 1)) * 0x7a0 + &data_98c178))
    return sub_476410(arg4, arg2, arg3, arg4)

if (arg5 u> 7)
    return arg4

int32_t ecx_1 = *((arg2 + (arg3 << 1)) * 0x7a0 + 0x98c180) + arg4 * 0x7d8
*arg6 = *(ecx_1 + (arg5 << 2) + 0x360)
int32_t eax_5 = *(ecx_1 + (arg5 << 2) + 0x380)
*arg7 = eax_5
return eax_5
