// 函数: sub_9cb5a0
// 地址: 0x9cb5a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result = *(arg1 - 0x60) & 1

if (result == 0)
    return result

*(arg1 - 0x60) &= 0xfffffffe
return sub_52e8a0(*(arg1 - 0x64)) __tailcall
