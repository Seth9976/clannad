// 函数: sub_47bed0
// 地址: 0x47bed0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg3

if (arg3 s< 0 || arg3 s>= data_7031bc)
    return sub_476410(arg1, arg2, arg3, arg4)

if (*((arg2 + (arg3 << 1)) * 0x7a0 + 0x98c180) == 0 || arg4 s< 0
        || arg4 s>= *((arg2 + (arg3 << 1)) * 0x7a0 + &data_98c178))
    return sub_476410((arg2 + (arg3 << 1)) * 0x7a0 + &data_98c178, arg2, arg3, arg4)

void* edi_1 = arg4 * 0x7d8 + *((arg2 + (arg3 << 1)) * 0x7a0 + 0x98c180)
int32_t eax_4 = *(edi_1 + 0x348) - arg5
int32_t result = sub_466780(eax_4, arg6, edi_1 + 0x69c, arg7, arg8, 0x73, 0, 0, eax_4, 0, 0)
*(edi_1 + 0x348) = arg5
return result
