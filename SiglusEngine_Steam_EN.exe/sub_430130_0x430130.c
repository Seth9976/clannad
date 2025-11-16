// 函数: sub_430130
// 地址: 0x430130
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t i = 0

if (*(arg1 + 0x54) s<= 0)
    return 

char* esi_1 = *(arg1 + 0x50) + 0x144

do
    int32_t eax
    
    if (*(arg1 + 0x34) == 0 && *(esi_1 + 8) == *(esi_1 + 0x24))
        eax.b = *esi_1
    
    if (*(arg1 + 0x34) != 0 || *(esi_1 + 8) != *(esi_1 + 0x24) || eax.b != esi_1[0x1c]
            || *(esi_1 + 4) != *(esi_1 + 0x20) || *(esi_1 - 0x10) != *(esi_1 + 0xc)
            || *(esi_1 - 0xc) != *(esi_1 + 0x10) || *(esi_1 - 8) != *(esi_1 + 0x14)
            || *(esi_1 - 4) != *(esi_1 + 0x18))
        if (*esi_1 != 0 && *(esi_1 + 4) != 0)
            int32_t var_10_1 = *(esi_1 - 4)
            int32_t var_14_1 = *(esi_1 - 8)
            sub_494c90(*(esi_1 - 0x10), *(esi_1 - 0xc))
        
        if (esi_1[0x1c] != 0 && *(esi_1 + 0x20) != 0)
            int32_t var_10_2 = *(esi_1 + 0x18)
            int32_t var_14_2 = *(esi_1 + 0x14)
            sub_494c90(*(esi_1 + 0xc), *(esi_1 + 0x10))
    
    i += 1
    esi_1 = &esi_1[0x178]
while (i s< *(arg1 + 0x54))
