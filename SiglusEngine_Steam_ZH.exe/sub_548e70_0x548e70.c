// 函数: sub_548e70
// 地址: 0x548e70
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result = arg2

if (result s< 0)
    *(arg1 + 0x230) = 0
    return result

if (result s> 0xff)
    result = 0xff

*(arg1 + 0x230) = result
return result
