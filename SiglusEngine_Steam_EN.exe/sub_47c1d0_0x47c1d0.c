// 函数: sub_47c1d0
// 地址: 0x47c1d0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

*arg6 = 0xffffffff

if (arg3 s< 0 || arg3 s>= data_7031bc)
    return sub_476410(arg1, arg2, arg3, arg4)

int32_t ebx = *((arg2 + (arg3 << 1)) * 0x7a0 + 0x98c180)

if (ebx == 0 || arg4 s< 0 || arg4 s>= *((arg2 + (arg3 << 1)) * 0x7a0 + &data_98c178))
    return sub_476410(arg4, arg2, arg3, arg4)

int32_t edx = arg4 * 0x7d8
*arg5 = *(edx + ebx + 0x410)
int32_t result = *(edx + ebx + 0x414)
*arg6 = result
return result
