// 函数: sub_466640
// 地址: 0x466640
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t result = arg2 * 5

if (*(arg3 + (result << 3) + 0x478) u> 0)
    if (*(arg3 + (result << 3) + 0x498) s<= 0)
        *(arg3 + (result << 3) + 0x498) = 1
    
    if (arg4 s> 0)
        *(arg3 + (result << 3) + 0x484) = arg4.b
        return result
    
    *(arg3 + (result << 3) + 0x478) = 0

return result
