// 函数: sub_4786d0
// 地址: 0x4786d0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (*(arg3 + 0x190) == 0)
    return 

arg1 = arg2 * 9

if (*(arg3 + (arg1 << 2) + 0x4fc) u<= 0)
    return 

if (*(arg3 + (arg1 << 2) + 0x510) s<= 0)
    *(arg3 + (arg1 << 2) + 0x510) = 1

if (arg4 s> 0)
    *(arg3 + (arg1 << 2) + 0x508) = arg4.b
    return 

*(arg3 + (arg1 << 2) + 0x4fc) = 0
