// 函数: sub_9ca980
// 地址: 0x9ca980
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result = *(arg1 - 0x18) & 1

if (result == 0)
    return result

*(arg1 - 0x18) &= 0xfffffffe
return sub_52e8a0(*(arg1 - 0x10)) __tailcall
