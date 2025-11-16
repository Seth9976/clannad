// 函数: sub_47fd80
// 地址: 0x47fd80
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg3
*arg7 = 0
*arg6 = 0
*arg8 = 0
*arg5 = 0
*arg9 = 0

if (arg3 s< 0 || arg3 s>= data_7031bc)
    return sub_476410(arg9, arg2, arg3, arg4)

if (*((arg2 + (arg3 << 1)) * 0x7a0 + 0x98c180) == 0 || arg4 s< 0
        || arg4 s>= *((arg2 + (arg3 << 1)) * 0x7a0 + &data_98c178))
    return sub_476410(arg4, arg2, arg3, arg4)

void* ecx_1 = *((arg2 + (arg3 << 1)) * 0x7a0 + 0x98c180) + arg4 * 0x7d8
*arg5 = *(ecx_1 + 0x244)
*arg6 = *(ecx_1 + 0x248)
*arg7 = *(ecx_1 + 0x24c)
*arg8 = *(ecx_1 + 0x250)
int32_t result = *(ecx_1 + 0x254)
*arg9 = result
return result
