// 函数: sub_42d128
// 地址: 0x42d128
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
int32_t edi
int32_t var_14 = edi
sub_42b68f(*(arg1 + 0x26c), *(arg1 + 0x298), arg1 + 0x278)
int32_t esi_1 = *(arg1 + 0x278)

if (esi_1 == 9)
    char* eax_1 = *(arg1 + 0x280)
    char const* const edi_1 = "pack_matrix"
    char* esi_2 = eax_1
    int32_t i = 0xc
    bool cond:2_1 = false
    
    while (i != 0)
        char temp0_1 = *esi_2
        char const temp1_1 = *edi_1
        cond:2_1 = temp0_1 != temp1_1
        esi_2 = &esi_2[1]
        edi_1 = &edi_1[1]
        i -= 1
        
        if (temp0_1 != temp1_1)
            break
    
    if (not(cond:2_1))
        return sub_42c39e(arg1)
    
    char const* const edi_2 = "warning"
    char* esi_3 = eax_1
    int32_t i_1 = 8
    bool cond:4_1 = false
    
    while (i_1 != 0)
        char temp2_1 = *esi_3
        char const temp3_1 = *edi_2
        cond:4_1 = temp2_1 != temp3_1
        esi_3 = &esi_3[1]
        edi_2 = &edi_2[1]
        i_1 -= 1
        
        if (temp2_1 != temp3_1)
            break
    
    if (not(cond:4_1))
        return sub_42c4dd(arg1)
    
    char* esi_4 = eax_1
    void* const edi_3 = &data_ab7d08
    int32_t i_2 = 4
    bool cond:6_1 = false
    
    while (i_2 != 0)
        char temp4_1 = *esi_4
        char temp5_1 = *edi_3
        cond:6_1 = temp4_1 != temp5_1
        esi_4 = &esi_4[1]
        edi_3 += 1
        i_2 -= 1
        
        if (temp4_1 != temp5_1)
            break
    
    if (not(cond:6_1))
        return sub_42c8c5(arg1)

if (esi_1 != 0xc && esi_1 != 0xd)
    sub_42a6ee(*(arg1 + 0x26c))

*(arg1 + 0x40) = 1
return 0
