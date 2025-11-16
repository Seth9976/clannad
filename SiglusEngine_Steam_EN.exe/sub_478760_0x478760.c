// 函数: sub_478760
// 地址: 0x478760
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (*(arg3 + 0x190) == 0)
    return 

arg1 = arg2 * 7

if (*(arg3 + (arg1 << 2) + 0x58c) u<= 0)
    return 

if (*(arg3 + (arg1 << 2) + 0x5a0) s<= 0)
    *(arg3 + (arg1 << 2) + 0x5a0) = 1

if (arg4 s> 0)
    *(arg3 + (arg1 << 2) + 0x598) = arg4.b
    return 

*(arg3 + (arg1 << 2) + 0x58c) = 0
