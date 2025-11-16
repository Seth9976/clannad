// 函数: sub_466560
// 地址: 0x466560
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t result = arg2 * 7

if (*(arg3 + (result << 2) + 0x408) u> 0)
    if (*(arg3 + (result << 2) + 0x41c) s<= 0)
        *(arg3 + (result << 2) + 0x41c) = 1
    
    if (arg4 s> 0)
        *(arg3 + (result << 2) + 0x414) = arg4.b
        return result
    
    *(arg3 + (result << 2) + 0x408) = 0

return result
