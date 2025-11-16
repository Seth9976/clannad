// 函数: sub_57f980
// 地址: 0x57f980
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg1

if (arg1 u> 0x3f)
    return 0

if (*(arg1 * 0x3920 + 0xf8d310) == 0)
    if (*(arg1 * 0x3920 + 0xf89b0c) s< 0 || *(arg1 * 0x3920 + &data_f89b10) s< 0)
        return 0
    
    int32_t edx = 0
    
    if (*(arg1 * 0x1d4 + 0x1090b1c) == 2)
        edx = arg2
    
    if (sub_57fa10(arg1, edx) != 0 || *(arg1 * 0x3920 + 0xf8d2f0) + *(arg1 * 0x2d0 + 0x8fcb10)
            + *(arg1 * 0x2d0 + &data_8fcadc) s<= *(arg1 * 0x3920 + &data_f89b10))
        return 2

return 1
