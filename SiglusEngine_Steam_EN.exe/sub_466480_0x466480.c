// 函数: sub_466480
// 地址: 0x466480
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t result = arg2 * 9

if (*(arg3 + (result << 2) + 0x378) u> 0)
    if (*(arg3 + (result << 2) + 0x38c) s<= 0)
        *(arg3 + (result << 2) + 0x38c) = 1
    
    if (arg4 s> 0)
        *(arg3 + (result << 2) + 0x384) = arg4.b
        return result
    
    *(arg3 + (result << 2) + 0x378) = 0

return result
