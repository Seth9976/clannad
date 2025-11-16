// 函数: sub_478640
// 地址: 0x478640
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (*(arg3 + 0x190) == 0)
    return 

arg1 = arg2 * 7

if (*(arg3 + (arg1 << 2) + 0x470) u<= 0)
    return 

if (*(arg3 + (arg1 << 2) + 0x482) s<= 0)
    *(arg3 + (arg1 << 2) + 0x482) = 1

if (arg4 s> 0)
    *(arg3 + (arg1 << 2) + 0x47c) = arg4.b
    return 

*(arg3 + (arg1 << 2) + 0x470) = 0
