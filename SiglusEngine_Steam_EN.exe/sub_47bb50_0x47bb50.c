// 函数: sub_47bb50
// 地址: 0x47bb50
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg3

if (arg3 s< 0 || arg3 s>= data_7031bc)
    return sub_476410(arg1, arg2, arg3, arg4)

int32_t edi = *((arg2 + (arg3 << 1)) * 0x7a0 + 0x98c180)

if (edi == 0 || arg4 s< 0 || arg4 s>= *((arg2 + (arg3 << 1)) * 0x7a0 + &data_98c178))
    return sub_476410((arg2 + (arg3 << 1)) * 0x7a0 + &data_98c178, arg2, arg3, arg4)

void* ebx_1 = arg4 * 0x7d8 + edi
int32_t eax_6 = *(ebx_1 + 0x344) - arg5
int32_t result = sub_466780(eax_6, arg7, ebx_1 + 0x69c, arg8, arg9, 0x73, 0, eax_6, 
    *(ebx_1 + 0x348) - arg6, 0, 0)
*(ebx_1 + 0x344) = arg5
*(ebx_1 + 0x348) = arg6
return result
