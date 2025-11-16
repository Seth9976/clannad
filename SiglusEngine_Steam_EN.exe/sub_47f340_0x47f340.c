// 函数: sub_47f340
// 地址: 0x47f340
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

*arg7 = 0xffffffff
*arg6 = 0xffffffff
*arg8 = 0xffffffff
*arg5 = 0xffffffff

if (arg3 s< 0 || arg3 s>= data_7031bc)
    return sub_476410(arg8, arg2, arg3, arg4)

if (*((arg2 + (arg3 << 1)) * 0x7a0 + 0x98c180) == 0 || arg4 s< 0
        || arg4 s>= *((arg2 + (arg3 << 1)) * 0x7a0 + &data_98c178))
    return sub_476410(arg4, arg2, arg3, arg4)

void* ecx_1 = *((arg2 + (arg3 << 1)) * 0x7a0 + 0x98c180) + arg4 * 0x7d8
*arg5 = *(ecx_1 + 0x20c)
*arg6 = *(ecx_1 + 0x210)
*arg7 = *(ecx_1 + 0x214)
int32_t result = *(ecx_1 + 0x218)
*arg8 = result
return result
