// 函数: sub_476c40
// 地址: 0x476c40
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg3 s< 0 || arg3 s>= data_7031bc)
    return sub_476410(arg1, arg2, arg3, arg4)

int32_t edi = *((arg2 + (arg3 << 1)) * 0x7a0 + 0x98c180)

if (edi == 0 || arg4 s< 0 || arg4 s>= *((arg2 + (arg3 << 1)) * 0x7a0 + &data_98c178))
    return sub_476410(arg4, arg2, arg3, arg4)

int32_t* esi_3 = arg4 * 0x7d8 + edi

if (*(arg3 * 0x24 + &data_12b9280) == 0 && arg5 == 0)
    return sub_476c20(esi_3, 0) __tailcall

return sub_476c20(esi_3, 1) __tailcall
