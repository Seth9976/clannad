// 函数: sub_47e4f0
// 地址: 0x47e4f0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg3

if (arg3 s< 0 || arg3 s>= data_7031bc)
    return sub_476410(arg1, arg2, arg3, arg4)

if (*((arg2 + (arg3 << 1)) * 0x7a0 + 0x98c180) == 0 || arg4 s< 0
        || arg4 s>= *((arg2 + (arg3 << 1)) * 0x7a0 + &data_98c178))
    return sub_476410(arg4, arg2, arg3, arg4)

int32_t result = arg5

if (result s< 0 || result s> 2)
    result = 0

*(arg4 * 0x7d8 + *((arg2 + (arg3 << 1)) * 0x7a0 + 0x98c180) + 0x2dc) = result
return result
