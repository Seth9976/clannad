// 函数: sub_480a20
// 地址: 0x480a20
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg3 s< 0 || arg3 s>= data_7031bc)
    return sub_476410(arg1, arg2, arg3, arg4)

int32_t edi = *((arg2 + (arg3 << 1)) * 0x7a0 + 0x98c180)

if (edi != 0 && arg4 s>= 0 && arg4 s< *((arg2 + (arg3 << 1)) * 0x7a0 + &data_98c178))
    return sub_4663c0(arg5, arg6, arg4 * 0x7d8 + edi + ((arg5 * 7 + 0x11b) << 2), arg7)

return sub_476410(arg4, arg2, arg3, arg4)
