// 函数: sub_63dc90
// 地址: 0x63dc90
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = *(arg1 + 0x60)

if (eax != 0)
    j__free(eax)
    *(arg1 + 0x60) = 0
    *(arg1 + 0x64) = 0
    *(arg1 + 0x68) = 0

int32_t eax_1 = *(arg1 + 0x54)

if (eax_1 != 0)
    j__free(eax_1)
    *(arg1 + 0x54) = 0
    *(arg1 + 0x58) = 0
    *(arg1 + 0x5c) = 0

if (*(arg1 + 0x4c) u>= 8)
    j__free(*(arg1 + 0x38))

*(arg1 + 0x4c) = 7
*(arg1 + 0x48) = 0
*(arg1 + 0x38) = 0

if (*(arg1 + 0x34) u>= 8)
    j__free(*(arg1 + 0x20))

*(arg1 + 0x34) = 7
*(arg1 + 0x30) = 0
*(arg1 + 0x20) = 0
return 0
