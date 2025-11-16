// 函数: sub_47fc20
// 地址: 0x47fc20
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg3

if (arg3 s< 0 || arg3 s>= data_7031bc)
    return sub_476410(arg1, arg2, arg3, arg4)

int32_t edi_1 = *((arg2 + (arg3 << 1)) * 0x7a0 + 0x98c180)

if (edi_1 == 0 || arg4 s< 0 || arg4 s>= *((arg2 + (arg3 << 1)) * 0x7a0 + &data_98c178))
    return sub_476410((arg2 + (arg3 << 1)) * 0x7a0 + &data_98c178, arg2, arg3, arg4)

void* result = arg4 * 0x7d8 + edi_1

if (*(result + 0x244) == arg5 && *(result + 0x248) == arg6 && *(result + 0x24c) == arg7
        && *(result + 0x250) == arg8 && *(result + 0x254) == arg9)
    return result

*(result + 0x244) = arg5
*(result + 0x248) = arg6
*(result + 0x24c) = arg7
*(result + 0x250) = arg8
*(result + 0x254) = arg9
*(result + 0xe0) += 1
return result
