// 函数: sub_4ec980
// 地址: 0x4ec980
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t result = *(arg3 * 0x3920 + 0xf8d324)

if (result != 1)
    if (result == 2)
        if (arg4 != 0)
            *(arg3 * 0x3920 + 0xf8d324) = 0
        else if (arg2 != 0x8175 && arg2 != 0x8177 && arg2 != 0x8169)
            *(arg3 * 0x3920 + 0xf8d324) = 0
else if (arg4 != 0)
label_4ec9d8:
    *(arg3 * 0x2d0 + 0x8fcb0c) += *(arg3 * 0x3920 + 0xf8d2ec)
    result = *(arg3 * 0x2d0 + 0x8fcb0c)
    
    if (*(arg3 * 0x1d4 + 0x1090c04) != 0)
        *(arg3 * 0x2d0 + 0x8fcb14) = result
        *(arg3 * 0x3920 + 0xf8d324) = 0
        return result
    
    *(arg3 * 0x3920 + 0xf8d324) = 0
else if (arg2 != 0x8175 && arg2 != 0x8177 && arg2 != 0x8169)
    goto label_4ec9d8

return result
