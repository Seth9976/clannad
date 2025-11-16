// 函数: sub_9c9790
// 地址: 0x9c9790
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result = *(arg1 - 0x28) & 1

if (result == 0)
    return result

*(arg1 - 0x28) &= 0xfffffffe
return sub_54b010(*(arg1 + 8)) __tailcall
