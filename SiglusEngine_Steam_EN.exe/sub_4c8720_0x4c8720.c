// 函数: sub_4c8720
// 地址: 0x4c8720
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

char* edx = arg1
int32_t result = 0

for (uint32_t i = zx.d(*edx); i != 0; i = zx.d(*edx))
    edx = &edx[1]
    
    if (i s< 0x80)
        result += 1
    else if (i - 0xa0 u> 0x3f)
        result += 2
        edx = &edx[1]
    else
        result += 1

return result
