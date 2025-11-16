// 函数: sub_727da0
// 地址: 0x727da0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t eax = *(arg1 + 0x16bc)

if (eax s> 8)
    (*(arg1 + 8))[*(arg1 + 0x14)] = *(arg1 + 0x16b8)
    *(arg1 + 0x14) += 1
    (*(arg1 + 0x14))[*(arg1 + 8)] = *(arg1 + 0x16b9)
    *(arg1 + 0x14) += 1
else if (eax s> 0)
    eax.b = *(arg1 + 0x16b8)
    (*(arg1 + 8))[*(arg1 + 0x14)] = eax.b
    *(arg1 + 0x14) += 1

*(arg1 + 0x16b8) = 0
*(arg1 + 0x16bc) = 0
return 0
