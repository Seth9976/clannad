// 函数: sub_47e090
// 地址: 0x47e090
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg3 s< 0 || arg3 s>= data_7031bc)
    return sub_476410(arg1, arg2, arg3, arg4)

int32_t edi = *((arg2 + (arg3 << 1)) * 0x7a0 + 0x98c180)

if (edi == 0 || arg4 s< 0 || arg4 s>= *((arg2 + (arg3 << 1)) * 0x7a0 + &data_98c178))
    return sub_476410(arg4, arg2, arg3, arg4)

int32_t edx_2 = arg4 * 0x7d8
int32_t ecx_1 = zx.d(arg5) * 0x1010101
*(edx_2 + edi + 0x3a0) = ecx_1
*(edx_2 + edi + 0x3a4) = ecx_1
return arg4
