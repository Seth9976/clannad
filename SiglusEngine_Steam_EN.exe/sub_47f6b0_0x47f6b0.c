// 函数: sub_47f6b0
// 地址: 0x47f6b0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0
int32_t var_c = 0

if (arg3 s< 0 || arg3 s>= data_7031bc)
    sub_476410(arg1, arg2, arg3, arg4)
    *arg5 = 0
    *arg6 = 0
    return arg6

int32_t edi = *((arg2 + (arg3 << 1)) * 0x7a0 + 0x98c180)

if (edi == 0 || arg4 s< 0 || arg4 s>= *((arg2 + (arg3 << 1)) * 0x7a0 + &data_98c178))
    sub_476410(arg4, arg2, arg3, arg4)
    *arg5 = 0
    *arg6 = 0
    return arg6

char* eax_3 = *(arg4 * 0x7d8 + edi + 0x1c)

if (eax_3 == 0)
    *arg5 = 0
    *arg6 = 0
    return arg6

sub_4cfe90(eax_3, &var_c, &var_8, eax_3, "objmojiget")
*arg5 = var_8
int32_t eax_5 = var_c
*arg6 = eax_5
return eax_5
