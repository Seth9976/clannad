// 函数: sub_479f00
// 地址: 0x479f00
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg3 s< 0 || arg3 s>= data_7031bc)
    return sub_476410(arg1, arg2, arg3, arg4)

int32_t edi_1 = *((arg2 + (arg3 << 1)) * 0x7a0 + 0x98c180)

if (edi_1 == 0 || arg4 s< 0 || arg4 s>= *((arg2 + (arg3 << 1)) * 0x7a0 + &data_98c178))
    return sub_476410(arg4, arg2, arg3, arg4)

void* ebx_2 = arg4 * 0x7d8 + edi_1

if (arg5 u> 7)
    return arg4

int32_t eax_5 = *(ebx_2 + (arg5 << 2) + 0x360) - arg6
sub_466780(eax_5, arg8, ebx_2 + 0x69c, arg9, arg10, 0x65, arg5.b, eax_5, 
    *(ebx_2 + (arg5 << 2) + 0x380) - arg7, 0, 0)
*(ebx_2 + (arg5 << 2) + 0x360) = arg6
*(ebx_2 + (arg5 << 2) + 0x380) = arg7
return arg5
