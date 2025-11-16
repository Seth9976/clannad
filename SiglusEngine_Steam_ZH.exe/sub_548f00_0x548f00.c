// 函数: sub_548f00
// 地址: 0x548f00
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result = arg2

if (result s< 0)
    *(arg1 + 0x2b4) = 0
    return result

if (result s> 0xff)
    result = 0xff

*(arg1 + 0x2b4) = result
return result
