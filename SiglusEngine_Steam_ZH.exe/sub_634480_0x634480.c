// 函数: sub_634480
// 地址: 0x634480
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = *(arg1 + 0x98)

if (eax != 0)
    j__free(eax)
    *(arg1 + 0x98) = 0
    *(arg1 + 0x9c) = 0
    *(arg1 + 0xa0) = 0

int32_t eax_1 = *(arg1 + 0x88)

if (eax_1 != 0)
    j__free(eax_1)
    *(arg1 + 0x88) = 0
    *(arg1 + 0x8c) = 0
    *(arg1 + 0x90) = 0

if (*(arg1 + 0x84) u>= 8)
    j__free(*(arg1 + 0x70))

*(arg1 + 0x84) = 7
*(arg1 + 0x80) = 0
*(arg1 + 0x70) = 0

if (*(arg1 + 0x6c) u>= 8)
    j__free(*(arg1 + 0x58))

*(arg1 + 0x6c) = 7
*(arg1 + 0x68) = 0
*(arg1 + 0x58) = 0

if (*(arg1 + 0x54) u>= 8)
    j__free(*(arg1 + 0x40))

*(arg1 + 0x54) = 7
*(arg1 + 0x50) = 0
*(arg1 + 0x40) = 0

if (*(arg1 + 0x3c) u>= 8)
    j__free(*(arg1 + 0x28))

*(arg1 + 0x3c) = 7
*(arg1 + 0x38) = 0
*(arg1 + 0x28) = 0

if (*(arg1 + 0x24) u>= 8)
    j__free(*(arg1 + 0x10))

*(arg1 + 0x24) = 7
*(arg1 + 0x20) = 0
*(arg1 + 0x10) = 0
return 0
