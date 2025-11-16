// 函数: sub_60d640
// 地址: 0x60d640
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = *(arg1 + 0xa4)

if (eax != 0)
    j__free(eax)
    *(arg1 + 0xa4) = 0
    *(arg1 + 0xa8) = 0
    *(arg1 + 0xac) = 0

if (*(arg1 + 0x98) u>= 8)
    j__free(*(arg1 + 0x84))

*(arg1 + 0x98) = 7
*(arg1 + 0x94) = 0
*(arg1 + 0x84) = 0
return 0
