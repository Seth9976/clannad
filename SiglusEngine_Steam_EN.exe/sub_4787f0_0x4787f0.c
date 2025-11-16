// 函数: sub_4787f0
// 地址: 0x4787f0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (*(arg3 + 0x190) == 0)
    return 

arg1 = arg2 * 5

if (*(arg3 + (arg1 << 3) + 0x5fc) u<= 0)
    return 

if (*(arg3 + (arg1 << 3) + 0x61c) s<= 0)
    *(arg3 + (arg1 << 3) + 0x61c) = 1

if (arg4 s> 0)
    *(arg3 + (arg1 << 3) + 0x608) = arg4.b
    return 

*(arg3 + (arg1 << 3) + 0x5fc) = 0
