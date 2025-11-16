// 函数: sub_47ff20
// 地址: 0x47ff20
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0
int32_t var_c = 0

if (arg3 s< 0 || arg3 s>= data_7031bc)
    sub_476410(arg1, arg2, arg3, arg4)
    *arg6 = 0
    *arg7 = 0
    return arg7

int32_t edi = *((arg2 + (arg3 << 1)) * 0x7a0 + 0x98c180)

if (edi == 0 || arg4 s< 0 || arg4 s>= *((arg2 + (arg3 << 1)) * 0x7a0 + &data_98c178))
    sub_476410(arg4, arg2, arg3, arg4)
    *arg6 = 0
    *arg7 = 0
    return arg7

int32_t* ecx = arg4 * 0x7d8
int32_t eax_2 = *(ecx + edi + 0x190)

if (eax_2 != 1 && eax_2 != 6 && eax_2 != 9)
    *arg6 = 0
    *arg7 = 0
    return arg7

int32_t edx_2 = arg5

if (edx_2 == 0xffffffff)
    edx_2 = *(ecx + edi + 0x2d0)

sub_426760(&var_8, edx_2, *(ecx + edi), &var_8, &var_c)
*arg6 = var_8
int32_t eax_10 = var_c
*arg7 = eax_10
return eax_10
