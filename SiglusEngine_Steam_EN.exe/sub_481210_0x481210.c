// 函数: sub_481210
// 地址: 0x481210
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg3 s< 0 || arg3 s>= data_7031bc)
    return sub_476410(arg1, arg2, arg3, arg4)

int32_t edi = *((arg2 + (arg3 << 1)) * 0x7a0 + 0x98c180)

if (edi != 0 && arg4 s>= 0 && arg4 s< *((arg2 + (arg3 << 1)) * 0x7a0 + &data_98c178))
    return sub_466690((arg2 + (arg3 << 1)) * 0x7a0 + &data_98c178, arg5, 
        arg4 * 0x7d8 + 0x670 + edi, arg6, arg7, arg8, arg9, arg10, arg11, arg12)

return sub_476410((arg2 + (arg3 << 1)) * 0x7a0 + &data_98c178, arg2, arg3, arg4)
