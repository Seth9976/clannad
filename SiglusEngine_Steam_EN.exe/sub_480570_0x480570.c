// 函数: sub_480570
// 地址: 0x480570
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

*arg5 = 0xffffffff

if (arg3 s< 0 || arg3 s>= data_7031bc)
    return sub_476410(arg1, 0, arg3, arg4)

int32_t edi = *(arg3 * 0xf40 + 0x98c180)

if (edi == 0 || arg4 s< 0 || arg4 s>= *(arg3 * 0xf40 + &data_98c178))
    return sub_476410(arg4, 0, arg3, arg4)

int32_t result = *(arg4 * 0x7d8 + edi + 0x7c8)
*arg5 = result
return result
