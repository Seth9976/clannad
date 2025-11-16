// 函数: sub_576b90
// 地址: 0x576b90
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx_2 = arg5 - 1 + arg2
int32_t eax = *arg3
int32_t edi_2 = arg6 - 1 + arg4

if (eax u> 3)
    eax.b = 0
    return eax

switch (eax)
    case 0
        *arg7 = arg3[1] + arg2
        *arg8 = arg3[2] + arg4
        int32_t* eax_2
        eax_2.b = 1
        return eax_2
    case 1
        *arg7 = ecx_2 - arg3[1]
        *arg8 = arg3[2] + arg4
        int32_t* eax_4
        eax_4.b = 1
        return eax_4
    case 2
        int32_t edi_3 = edi_2 - arg3[2]
        *arg7 = arg3[1] + arg2
        *arg8 = edi_3
        int32_t* eax_6
        eax_6.b = 1
        return eax_6
    case 3
        int32_t edi_4 = edi_2 - arg3[2]
        *arg7 = ecx_2 - arg3[1]
        *arg8 = edi_4
        int32_t* eax_8
        eax_8.b = 1
        return eax_8
