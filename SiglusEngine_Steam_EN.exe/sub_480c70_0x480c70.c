// 函数: sub_480c70
// 地址: 0x480c70
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg3

if (arg3 s< 0 || arg3 s>= data_7031bc)
    return sub_476410(arg1, arg2, arg3, arg4)

int32_t ebx = *((arg2 + (arg3 << 1)) * 0x7a0 + 0x98c180)

if (ebx == 0 || arg4 s< 0 || arg4 s>= *((arg2 + (arg3 << 1)) * 0x7a0 + &data_98c178))
    return sub_476410((arg2 + (arg3 << 1)) * 0x7a0 + &data_98c178, arg2, arg3, arg4)

int32_t edx = arg6
int32_t esi = arg7
int32_t result = arg5 * 9
int32_t ecx_1 = arg4 * 0x7d8 + ebx

if (edx s<= 0)
    edx = 1

*(ecx_1 + (result << 2) + 0x510) = edx.w

if (esi s< 0)
    esi = 0

*(ecx_1 + (result << 2) + 0x514) = esi
return result
