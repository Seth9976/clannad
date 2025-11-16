// 函数: sub_477f30
// 地址: 0x477f30
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg3 s< 0 || arg3 s>= data_7031bc)
    return sub_476410(arg1, arg2, arg3, arg4) __tailcall

if (*((arg2 + (arg3 << 1)) * 0x7a0 + 0x98c180) != 0 && arg4 s>= 0
        && arg4 s< *((arg2 + (arg3 << 1)) * 0x7a0 + &data_98c178))
    return sub_477f00(arg4 * 0x7d8 + *((arg2 + (arg3 << 1)) * 0x7a0 + 0x98c180)) __tailcall

return sub_476410(arg4, arg2, arg3, arg4) __tailcall
