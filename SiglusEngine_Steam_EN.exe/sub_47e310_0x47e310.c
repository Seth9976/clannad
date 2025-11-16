// 函数: sub_47e310
// 地址: 0x47e310
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg3

if (arg3 s< 0 || arg3 s>= data_7031bc)
    return sub_476410(arg1, arg2, arg3, arg4)

if (*((arg2 + (arg3 << 1)) * 0x7a0 + 0x98c180) == 0 || arg4 s< 0
        || arg4 s>= *((arg2 + (arg3 << 1)) * 0x7a0 + &data_98c178))
    return sub_476410((arg2 + (arg3 << 1)) * 0x7a0 + &data_98c178, arg2, arg3, arg4)

int32_t result = sub_47e2b0((arg2 + (arg3 << 1)) * 0x7a0 + &data_98c178, arg5, 
    arg4 * 0x7d8 + *((arg2 + (arg3 << 1)) * 0x7a0 + 0x98c180), arg6, arg7, arg8, arg9, arg10, 
    arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21)
return result
