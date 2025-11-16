// 函数: sub_4aa500
// 地址: 0x4aa500
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t edx
int32_t edx_3

switch (arg3)
    case 1
        edx = data_7030ac
    label_4aa51c:
        ecx = data_7030b0
        goto label_4aa526
    case 2
        edx = data_7030ac - 1 + arg2
        goto label_4aa51c
    case 3
        edx_3 = data_7030ac
    label_4aa551:
        *arg5 = edx_3
        int32_t ecx_2 = arg4 + data_7030b0 - 1
        *arg6 = ecx_2
        *arg7 = edx_3
        *arg8 = ecx_2
        return arg8
    case 4
        edx_3 = data_7030ac - 1 + arg2
        goto label_4aa551
    case 5
        *arg5 = data_7030ac
        *arg6 = data_7030b0 - 1 + arg4
        *arg7 = data_7030b4
        *arg8 = data_7030b8 - arg4 + 1
        return arg8
    case 6
        *arg5 = data_7030ac - 1 + arg2
        *arg6 = data_7030b0
        *arg7 = data_7030b4 - arg2 + 1
        int32_t eax_17 = data_7030b8
        *arg8 = eax_17
        return eax_17
    case 7
        int32_t edx_6 = data_7030b0
        *arg5 = data_7030ac
        *arg6 = edx_6
        *arg7 = data_7030b4
        *arg8 = edx_6
        return arg8
    case 8
        int32_t edx_7 = data_7030b8
        *arg5 = data_7030ac
        *arg6 = edx_7
        *arg7 = data_7030b4
        *arg8 = edx_7
        return arg8
    case 9
        int32_t edx_8 = data_7030ac
        *arg5 = edx_8
        *arg6 = data_7030b0
        *arg7 = edx_8
        int32_t eax_29 = data_7030b8
        *arg8 = eax_29
        return eax_29
    case 0xa
        int32_t edx_9 = data_7030b4
        *arg5 = edx_9
        *arg6 = data_7030b0
        *arg7 = edx_9
        int32_t eax_33 = data_7030b8
        *arg8 = eax_33
        return eax_33
    case 0xb
        edx = data_70305c
        ecx = data_703060
    label_4aa526:
        *arg5 = edx
        *arg6 = ecx
        *arg7 = edx
        *arg8 = ecx
        return arg8

*arg5 = data_7030ac - 1 + arg2
*arg6 = data_7030b0 - 1 + arg4
*arg7 = data_7030b4 - arg2 + 1
*arg8 = data_7030b8 - arg4 + 1
return arg8
