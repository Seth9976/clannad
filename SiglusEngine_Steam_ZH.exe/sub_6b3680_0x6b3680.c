// 函数: sub_6b3680
// 地址: 0x6b3680
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if ((*(arg1 + 0x3c) & 1) != 0)
    j__free(**(arg1 + 0xc))

**(arg1 + 0xc) = 0
**(arg1 + 0x1c) = 0
**(arg1 + 0x2c) = 0
**(arg1 + 0x10) = 0
**(arg1 + 0x20) = 0
int32_t* result = *(arg1 + 0x30)
*result = 0
*(arg1 + 0x3c) &= 0xfffffffe
*(arg1 + 0x38) = 0
return result
