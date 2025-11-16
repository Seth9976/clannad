// 函数: sub_6c70c0
// 地址: 0x6c70c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t nNumerator = *(arg1 + 8)

if (nNumerator s<= *(arg1 + 0xc))
    *(arg1 + 0x1c) = 0
    return 

if (nNumerator s< *(arg1 + 0x10))
    *(arg1 + 0x1c) = MulDiv(0x186a0, nNumerator, *(arg1 + 0x18) - *(arg1 + 0x14))
    return 

*(arg1 + 0x1c) = 0x186a0
