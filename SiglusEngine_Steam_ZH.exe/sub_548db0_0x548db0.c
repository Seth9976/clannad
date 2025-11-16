// 函数: sub_548db0
// 地址: 0x548db0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result = arg2

if (result s< 0)
    *(arg1 + 0x180) = 0
    return result

if (result s> 0xff)
    result = 0xff

*(arg1 + 0x180) = result
return result
