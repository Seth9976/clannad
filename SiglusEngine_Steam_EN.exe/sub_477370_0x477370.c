// 函数: sub_477370
// 地址: 0x477370
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg3 s< 0 || arg3 s>= data_7031bc)
    return sub_476410(arg1, arg2, arg3, arg4)

int32_t ecx = *((arg2 + (arg3 << 1)) * 0x7a0 + 0x98c180)

if (ecx == 0 || arg4 s< 0 || arg4 s>= *((arg2 + (arg3 << 1)) * 0x7a0 + &data_98c178))
    return sub_476410((arg2 + (arg3 << 1)) * 0x7a0 + &data_98c178, arg2, arg3, arg4)

int32_t var_24 = ecx
int32_t* esi_2 = arg4 * 0x7d8 + ecx
int32_t var_10
int32_t var_c
int32_t eax_5 = sub_476c40(sub_4646f0(&var_10, arg6, arg5, &var_10, &var_c), arg2, arg3, arg4, 0)
int32_t ecx_3 = var_c

if (ecx_3 == 0xffffffff)
    return eax_5

esi_2[0x63] = arg5
esi_2[0x64] = var_10
esi_2[0x81] = arg6
int32_t eax_10 = esi_2[0x5b] + 1
*esi_2 = ecx_3
esi_2[0x38] = eax_10
return eax_10
