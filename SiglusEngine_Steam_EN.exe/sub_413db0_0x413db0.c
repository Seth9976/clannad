// 函数: sub_413db0
// 地址: 0x413db0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg3 u> 0x20)
    return 

if ((&data_976b50)[arg3 * 8] == 0)
    sub_411500(arg1, data_70300c, arg3, data_7030dc)

if (arg2 s< 0)
    return 

int32_t ecx = (&data_976b58)[arg3 * 8]

if (arg2 s>= ecx || arg4 s< 0 || arg4 s>= (&data_976b5c)[arg3 * 8])
    return 

char* ecx_3 = (&data_976b54)[arg3 * 8] + ((ecx * arg4 + arg2) << 2)
int32_t eax
eax.b = arg8
ecx_3[3] = eax.b
eax.b = arg5
ecx_3[2] = eax.b
eax.b = arg6
ecx_3[1] = eax.b
eax.b = arg7
*ecx_3 = eax.b

if (arg3 == 0)
    int32_t var_14_2 = arg4
    int32_t var_18_1 = arg2
    sub_494c90(arg2, arg4)
    data_703004 = 1

return sub_564200(arg3) __tailcall
