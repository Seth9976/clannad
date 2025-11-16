// 函数: sub_47f9b0
// 地址: 0x47f9b0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg3
*arg7 = 0
*arg6 = 0
*arg8 = 0
*arg5 = 0
*arg9 = 0
*arg10 = 0
*arg11 = 0

if (arg3 s< 0 || arg3 s>= data_7031bc)
    return sub_476410(arg11, arg2, arg3, arg4)

if (*((arg2 + (arg3 << 1)) * 0x7a0 + 0x98c180) == 0 || arg4 s< 0
        || arg4 s>= *((arg2 + (arg3 << 1)) * 0x7a0 + &data_98c178))
    return sub_476410(arg4, arg2, arg3, arg4)

void* ecx_1 = *((arg2 + (arg3 << 1)) * 0x7a0 + 0x98c180) + arg4 * 0x7d8 + 0x220
*arg5 = *(ecx_1 + 4)
*arg6 = *(ecx_1 + 8)
*arg7 = *(ecx_1 + 0xc)
*arg8 = *(ecx_1 + 0x10)
*arg9 = *(ecx_1 + 0x14)
*arg10 = *(ecx_1 + 0x18)
int32_t result = *(ecx_1 + 0x1c)
*arg11 = result
return result
