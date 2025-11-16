// 函数: sub_47f190
// 地址: 0x47f190
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg3
*arg5 = 0

if (arg3 s< 0 || arg3 s>= data_7031bc)
    return sub_476410(arg1, arg2, arg3, arg4)

int32_t ebx = *((arg2 + (arg3 << 1)) * 0x7a0 + 0x98c180)

if (ebx == 0 || arg4 s< 0 || arg4 s>= *((arg2 + (arg3 << 1)) * 0x7a0 + &data_98c178))
    return sub_476410(arg4, arg2, arg3, arg4)

int32_t result = *(arg4 * 0x7d8 + ebx + 0x334)
*arg5 = result
return result
