// 函数: sub_57b0b0
// 地址: 0x57b0b0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void var_3c
int32_t* eax_1 = sub_579b30(arg2, arg2, arg3, arg4, arg5, &var_3c)

if (arg3 s>= 0)
    sub_57ae80(eax_1, arg2, arg3, arg4, 1)

char var_20

if (var_20 != 0)
    void* var_50_1 = &var_3c
    sub_57a850(&var_3c, arg4, arg3, arg5)

int32_t* result
int32_t ecx_3
result, ecx_3 = sub_57a1f0(arg4, arg5, &var_3c)

if (arg3 s>= 0)
    result, ecx_3 = sub_57ae80(result, arg2, arg3, arg4, 0)

if (var_20 != 0)
    void* var_50_3 = &var_3c
    result, ecx_3 = sub_57aa20(&var_3c, arg4, arg3, arg5)

if (*(arg4 + 0x44) != 0)
    void* var_50_4 = &var_3c
    result, ecx_3 = sub_57a350(&var_3c, arg4, arg3, arg5)

if (arg3 s>= 0)
    result, ecx_3 = sub_57ae80(result, arg2, arg3, arg4, 0xffffffff)

if (arg5[0x22] != 0xffffffff && (*(arg4 + 0x2c68) == 0 || data_12a2988 s>= 1))
    int32_t var_50_5 = ecx_3
    result = sub_57abb0(arg3)

if (data_702fc0 != 0 && data_1313250 != 0)
    return sub_57ae10(&var_3c, arg4, arg3, arg5, &var_3c)

return result
