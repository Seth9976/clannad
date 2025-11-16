// 函数: sub_4d7ef0
// 地址: 0x4d7ef0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

*(arg2 + 8) = 0
*(arg2 + 0xc) = 0
*(arg2 + 0x10) = 0

if (arg5 != 0)
    *(arg2 + 4) = arg5
    int32_t eax
    eax.b = arg6
    *arg2 = 0
    
    if (eax.b != 1)
        eax.b = eax.b != 2
        eax.b -= 1
        eax.b &= 2
        arg2[0x14] = eax.b
    else
        arg2[0x14] = eax.b
    
    arg2[0x15] = 0
else
    *(arg2 + 4) = arg5
    *(arg2 + 0x14) = arg5.w

if (*(arg2 + 4) != 0)
    arg3[2] = *arg3
    arg3[1] = arg4
    return arg4

*arg3 = arg4
arg3[2] = arg4
arg3[1] = arg4
return arg4
