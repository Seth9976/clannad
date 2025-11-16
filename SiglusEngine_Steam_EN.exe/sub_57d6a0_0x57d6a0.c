// 函数: sub_57d6a0
// 地址: 0x57d6a0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg3 u> 0x3f)
    return 

if (arg2 s< 0 || arg2 s>= 0x100)
    arg2 = 0xffffffff

arg1 = arg4

if (arg1 s< 0 || arg1 s>= 0x100)
    arg1 = 0xffffffff

*(arg3 * 0x2d0 + 0x8fcb04) = arg2
*(arg3 * 0x2d0 + &data_8fcb08) = arg1
