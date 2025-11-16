// 函数: sub_4d7f60
// 地址: 0x4d7f60
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* edi

if (arg7 != 0)
    edi = &arg4[4]
    *edi = arg7
    int32_t eax
    eax.b = arg8
    *arg4 = 0
    *(arg4 + 8) = 0
    *(arg4 + 0xc) = 0
    *(arg4 + 0x10) = 0
    
    if (eax.b != 1)
        eax.b = eax.b != 2
        eax.b -= 1
        eax.b &= 2
        arg4[0x14] = eax.b
    else
        arg4[0x14] = eax.b
    
    arg4[0x15] = 0
else
    edi = &arg4[4]
    *edi = 0
    *(arg4 + 8) = 0
    *(arg4 + 0xc) = 0
    *(arg4 + 0x10) = 0
    *(arg4 + 0x14) = 0

int32_t eax_2

if (*edi != 0)
    arg3[2] = *arg3
    eax_2 = arg5
else
    eax_2 = arg5
    *arg3 = eax_2
    arg3[2] = eax_2

arg3[1] = eax_2

if (*edi != 0)
    arg2[2] = *arg2
    arg2[1] = arg6
    return arg6

*arg2 = arg6
arg2[2] = arg6
arg2[1] = arg6
return arg6
