// 函数: sub_498460
// 地址: 0x498460
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result = *(arg1 + 4)

if (result != 0)
    (*(result + 0x24))(arg1, 1)
    result = *(arg1 + 0x10)
    
    if (result != 0)
        *(arg1 + 0x14) = 0xc8
        *(arg1 + 0x134) = 0
        return result
    
    *(arg1 + 0x14) = 0x64

return result
