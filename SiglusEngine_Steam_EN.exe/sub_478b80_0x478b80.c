// 函数: sub_478b80
// 地址: 0x478b80
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg3 s< 0 || arg3 s>= data_7031bc)
    sub_476410(arg1, arg2, arg3, arg4)
else
    if (*((arg2 + (arg3 << 1)) * 0x7a0 + 0x98c180) == 0 || arg4 s< 0
            || arg4 s>= *((arg2 + (arg3 << 1)) * 0x7a0 + &data_98c178))
        sub_476410(arg4, arg2, arg3, arg4)
        return 0
    
    if (sub_4788d0(arg4, arg5, arg4 * 0x7d8 + *((arg2 + (arg3 << 1)) * 0x7a0 + 0x98c180), arg6)
            != 0)
        return 1

return 0
