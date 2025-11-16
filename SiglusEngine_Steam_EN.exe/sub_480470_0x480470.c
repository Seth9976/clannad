// 函数: sub_480470
// 地址: 0x480470
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg3 s< 0 || arg3 s>= data_7031bc)
    return sub_476410(arg1, arg2, arg3, arg4)

int32_t edi_1 = *((arg2 + (arg3 << 1)) * 0x7a0 + 0x98c180)

if (edi_1 == 0 || arg4 s< 0 || arg4 s>= *((arg2 + (arg3 << 1)) * 0x7a0 + &data_98c178))
    return sub_476410(arg4, arg2, arg3, arg4)

if (arg5 u> 0xff)
    return arg4

int32_t eax_2 = arg4 * 0x7d8
*(eax_2 + edi_1 + 0x7bc) = arg5
return eax_2
