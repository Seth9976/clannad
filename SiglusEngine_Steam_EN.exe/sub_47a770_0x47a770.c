// 函数: sub_47a770
// 地址: 0x47a770
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg3

if (arg3 s< 0 || arg3 s>= data_7031bc)
    return sub_476410(arg1, arg2, arg3, arg4)

int32_t ebx_1 = *((arg2 + (arg3 << 1)) * 0x7a0 + 0x98c180)

if (ebx_1 == 0 || arg4 s< 0 || arg4 s>= *((arg2 + (arg3 << 1)) * 0x7a0 + &data_98c178))
    return sub_476410(arg4, arg2, arg3, arg4)

void* edi_2 = arg4 * 0x7d8 + ebx_1

if (arg5 u> 7)
    return arg4

int32_t eax_3 = *(edi_2 + (arg5 << 2) + 0x380) - arg6
int32_t eax_4 = sub_466780(eax_3, arg7, edi_2 + 0x69c, arg8, arg9, 0x65, arg5.b, 0, eax_3, 0, 0)
*(edi_2 + (arg5 << 2) + 0x380) = arg6
return eax_4
