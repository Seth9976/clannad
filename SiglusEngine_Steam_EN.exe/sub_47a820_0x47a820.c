// 函数: sub_47a820
// 地址: 0x47a820
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg3 s< 0 || arg3 s>= data_7031bc)
    return sub_476410(arg1, arg2, arg3, arg4)

int32_t edi = *((arg2 + (arg3 << 1)) * 0x7a0 + 0x98c180)

if (edi == 0 || arg4 s< 0 || arg4 s>= *((arg2 + (arg3 << 1)) * 0x7a0 + &data_98c178))
    return sub_476410(arg4, arg2, arg3, arg4)

void* ecx_2 = arg4 * 0x7d8 + 0x2d0 + edi
*(ecx_2 + 0xb0) = arg5
*(ecx_2 + 0xb4) = arg5
*(ecx_2 + 0xb8) = arg5
*(ecx_2 + 0xbc) = arg5
*(ecx_2 + 0xc0) = arg5
*(ecx_2 + 0xc4) = arg5
*(ecx_2 + 0xc8) = arg5
*(ecx_2 + 0xcc) = arg5
return arg5
