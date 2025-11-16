// 函数: sub_553980
// 地址: 0x553980
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result = arg2

if (result s< 0)
    *(arg1 + 0x954) = 0
    return result

if (result s> 0xff)
    result = 0xff

*(arg1 + 0x954) = result
return result
