// 函数: sub_576a80
// 地址: 0x576a80
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg11 != 0 && (arg3[3] == 0 || arg3[4] == 0))
    arg1.b = 0
    return arg1

int32_t eax = *arg3
int32_t edx_2 = arg5 - 1 + arg2
int32_t edi_2 = arg6 - 1 + arg4

if (eax u> 3)
    eax.b = 0
    return eax

switch (eax)
    case 0
        int32_t ecx_2 = arg3[1] + arg2
        int32_t edx_4 = arg4 + arg3[2]
        *arg7 = ecx_2
        *arg8 = edx_4
        *arg9 = ecx_2 + arg3[3] - 1
        *arg10 = arg3[4] - 1 + edx_4
        int32_t* eax_6
        eax_6.b = 1
        return eax_6
    case 1
        int32_t edx_5 = edx_2 - arg3[1]
        int32_t ecx_7 = arg4 + arg3[2]
        *arg9 = edx_5
        int32_t edx_7 = edx_5 - arg3[3] + 1
        *arg8 = ecx_7
        *arg7 = edx_7
        *arg10 = ecx_7 + arg3[4] - 1
        int32_t* eax_12
        eax_12.b = 1
        return eax_12
    case 2
        int32_t edi_3 = edi_2 - arg3[2]
        int32_t ecx_10 = arg3[1] + arg2
        *arg7 = ecx_10
        *arg10 = edi_3
        int32_t edi_5 = edi_3 - arg3[4] + 1
        *arg9 = ecx_10 + arg3[3] - 1
        *arg8 = edi_5
        int32_t* eax_18
        eax_18.b = 1
        return eax_18
    case 3
        int32_t edx_8 = edx_2 - arg3[1]
        int32_t edi_6 = edi_2 - arg3[2]
        *arg9 = edx_8
        int32_t edx_10 = edx_8 - arg3[3] + 1
        *arg10 = edi_6
        int32_t edi_8 = edi_6 - arg3[4] + 1
        *arg7 = edx_10
        *arg8 = edi_8
        int32_t* eax_22
        eax_22.b = 1
        return eax_22
