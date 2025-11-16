// 函数: sub_430020
// 地址: 0x430020
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx = *(arg1 + 0x54)

if (ecx == 0 || ecx != *(arg2 + 0x54))
    return 

*(arg1 + 0x28) = *(arg2 + 0x28)
*(arg1 + 0x20) = *(arg2 + 0x20)
*(arg1 + 0x24) = *(arg2 + 0x24)
*(arg1 + 0x28) = *(arg2 + 0x28)
*(arg1 + 0x2c) = *(arg2 + 0x2c)
*(arg1 + 0x30) = *(arg2 + 0x30)
*(arg1 + 0x34) = *(arg2 + 0x34)
int32_t i = 0

if (ecx s<= 0)
    return 

int32_t* edx = &(*(arg1 + 0x50))[2]
int32_t* eax = *(arg2 + 0x50) + 8

do
    if (edx[0x5a] != 0 && eax[0x5a] != 0)
        *edx = *eax
        edx[1] = eax[1]
        edx[2] = eax[2]
        edx[3] = eax[3]
        edx[4] = eax[4]
        edx[5] = eax[5]
        edx[6] = eax[6]
        edx[7] = eax[7]
        edx[8] = eax[8]
        edx[9] = eax[9]
        edx[0xa] = eax[0xa]
        edx[0xb] = eax[0xb]
        edx[0xc] = eax[0xc]
        edx[0x17] = eax[0x17]
        edx[0x18] = eax[0x18]
        edx[0x1f] = eax[0x1f]
        edx[0x51] = eax[0x51]
        edx[0x58] = eax[0x58]
    
    i += 1
    edx = &edx[0x5e]
    eax = &eax[0x5e]
while (i s< *(arg1 + 0x54))
