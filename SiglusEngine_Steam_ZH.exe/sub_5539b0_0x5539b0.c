// 函数: sub_5539b0
// 地址: 0x5539b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result = arg2

if (result s< 0)
    *(arg1 + 0x980) = 0
    return result

if (result s> 0xff)
    result = 0xff

*(arg1 + 0x980) = result
return result
