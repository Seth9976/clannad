// 函数: sub_466370
// 地址: 0x466370
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t result = arg2 * 7

if (*(arg3 + (result << 2) + 0x2ec) u> 0)
    if (*(arg3 + (result << 2) + 0x2fe) s<= 0)
        *(arg3 + (result << 2) + 0x2fe) = 1
    
    if (arg4 s> 0)
        *(arg3 + (result << 2) + 0x2f8) = arg4.b
        return result
    
    *(arg3 + (result << 2) + 0x2ec) = 0

return result
