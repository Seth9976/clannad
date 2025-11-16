// 函数: sub_47c930
// 地址: 0x47c930
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg3 s< 0 || arg3 s>= data_7031bc)
    return sub_476410(arg1, arg2, arg3, arg4)

int32_t edi = *((arg2 + (arg3 << 1)) * 0x7a0 + 0x98c180)

if (edi == 0 || arg4 s< 0 || arg4 s>= *((arg2 + (arg3 << 1)) * 0x7a0 + &data_98c178))
    return sub_476410((arg2 + (arg3 << 1)) * 0x7a0 + &data_98c178, arg2, arg3, arg4)

void* result = arg4 * 0x7d8 + edi
int32_t eax_8 = *(result + 0x2e8) - arg5
sub_466780(eax_8, arg8, result + 0x69c, arg9, arg10, 0x69, 0, eax_8, *(result + 0x2ec) - arg6, 
    *(result + 0x2f0) - arg7, 0)
*(result + 0x2e8) = arg5
*(result + 0x2ec) = arg6
*(result + 0x2f0) = arg7
return result
