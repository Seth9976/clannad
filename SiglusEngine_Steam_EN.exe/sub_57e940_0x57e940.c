// 函数: sub_57e940
// 地址: 0x57e940
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg1 u> 0x3f)
    return 

if (*(arg1 * 0x1d4 + 0x1090c00) == 0 || *(arg1 * 0x2d0 + &data_8fcb20) != 1
        || (*(arg1 * 0x2d0 + 0x8fcb28) == 0 && *(arg1 * 0x2d0 + 0x8fcb2c) == 0))
    *(arg1 * 0x2d0 + &data_8fcb20) = 0
    return 

bool cond:0_1 = *(arg1 * 0x2d0 + 0x8fcb2c) != 0
*(arg1 * 0x2d0 + &data_8fcb20) = 2

if (not(cond:0_1))
    *(arg1 * 0x2d0 + 0x8fcb24) = 0
