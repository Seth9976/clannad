// 函数: sub_4b62e0
// 地址: 0x4b62e0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* result = arg2 + (arg1 << 3)

if (*(result * 0x374 + 0x1b1bd94) == 0)
    return result

sub_4d6c40(result * 0x374 + 0x1b1bd98, result * 0x374 + 0x1b1bd9c)
sub_4d6c40(result * 0x374 + 0x1b1bdb0, result * 0x374 + 0x1b1bdb4)
int32_t esi_1 = *(result * 0x374 + 0x1b1bdc8)

if (esi_1 u<= 0x1ff)
    *(esi_1 * 0x74 + &data_13747ac) -= 1
    
    if (*(esi_1 * 0x74 + &data_13747ac) s<= 0)
        sub_4d6c40(esi_1 * 0x74 + 0x13747b0, esi_1 * 0x74 + 0x13747b4)
        sub_425320(esi_1)

void* edi_1 = result * 0x374 + 0x1b1bdcc
int32_t i_3 = 0xa
int32_t i

do
    int32_t esi_2 = *edi_1
    
    if (esi_2 u<= 0x1ff)
        *(esi_2 * 0x74 + &data_13747ac) -= 1
        
        if (*(esi_2 * 0x74 + &data_13747ac) s<= 0)
            sub_4d6c40(esi_2 * 0x74 + 0x13747b0, esi_2 * 0x74 + 0x13747b4)
            sub_425320(esi_2)
    
    edi_1 += 4
    i = i_3
    i_3 -= 1
while (i != 1)
void* edi_3 = result * 0x374 + 0x1b1bdf4
int32_t i_2 = 8
int32_t i_1

do
    int32_t j_1 = 8
    int32_t j
    
    do
        int32_t eax_1 = *edi_3
        
        if (eax_1 u<= 0x1ff)
            void* esi_3 = eax_1 * 0x74
            *(esi_3 + &data_13747ac) -= 1
            
            if (*(esi_3 + &data_13747ac) s<= 0)
                int32_t eax_2 = sub_4d6c40(esi_3 + 0x13747b0, esi_3 + 0x13747b4)
                *(esi_3 + &data_1374760) = 0
                sub_4d1ba0(eax_2, 0x24, esi_3 + 0x1374764, 0)
                *(esi_3 + 0x137478c) = 0xffffffff
                *(esi_3 + &data_13747ac) = 0
                *(esi_3 + 0x13747cc) = 0
                *(esi_3 + 0x13747d0) = 0
                *(esi_3 + 0x13747b0) = 0
                *(esi_3 + 0x13747b4) = 0
        
        edi_3 += 4
        j = j_1
        j_1 -= 1
    while (j != 1)
    i_1 = i_2
    i_2 -= 1
while (i_1 != 1)
return sub_4b60d0(arg1, arg2)
