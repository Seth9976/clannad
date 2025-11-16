// 函数: sub_42f850
// 地址: 0x42f850
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* result = *(arg1 + 0x50)
int32_t i = 0

if (*(arg1 + 0x54) s> 0)
    result += 0x48
    
    do
        *(result - 4) = 0xffffffff
        result += 0x178
        *(result - 0x178) = 0xffffffff
        i += 1
        *(result - 0x174) = 0xffffffff
        *(result - 0x170) = 0xffffffff
        *(result - 0x184) = 0
        *(result - 0x180) = 0
        *(result - 0x7c) = 0xff
        *(result - 0x144) = 0
        *(result - 0x140) = 0
    while (i s< *(arg1 + 0x54))

return result
