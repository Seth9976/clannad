// 函数: sub_548e10
// 地址: 0x548e10
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result = arg2

if (result s< 0)
    *(arg1 + 0x1d8) = 0
    return result

if (result s> 0xff)
    result = 0xff

*(arg1 + 0x1d8) = result
return result
