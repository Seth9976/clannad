// 函数: sub_548d50
// 地址: 0x548d50
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result = arg2

if (result s< 0)
    *(arg1 + 0x128) = 0
    return result

if (result s> 0xff)
    result = 0xff

*(arg1 + 0x128) = result
return result
