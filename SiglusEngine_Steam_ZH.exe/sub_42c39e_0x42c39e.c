// 函数: sub_42c39e
// 地址: 0x42c39e
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
sub_42b68f(*(arg1 + 0x26c), *(arg1 + 0x298), arg1 + 0x278)
int32_t eax_1 = *(arg1 + 0x278)
int32_t edi
int32_t var_14_1 = edi

if (eax_1 != 1)
label_42c4ba:
    
    if (eax_1 != 0xc && eax_1 != 0xd)
        sub_42a6ee(*(arg1 + 0x26c))
else
    void* esi_1 = arg1 + 0x280
    wchar32 const* const edi_1 = &(*U")(;:")[1]
    int32_t i = 2
    bool cond:2_1 = false
    
    while (i != 0)
        char temp0_1 = *esi_1
        char temp1_1 = *edi_1
        cond:2_1 = temp0_1 != temp1_1
        esi_1 += 1
        edi_1 += 1
        i -= 1
        
        if (temp0_1 != temp1_1)
            break
    
    if (cond:2_1)
        goto label_42c4ba
    
    sub_42b68f(*(arg1 + 0x26c), *(arg1 + 0x298), arg1 + 0x278)
    char* var_8_1
    
    if (*(arg1 + 0x278) != 9)
        var_8_1 = nullptr
    else
        var_8_1 = *(arg1 + 0x280)
        sub_42b68f(*(arg1 + 0x26c), *(arg1 + 0x298), arg1 + 0x278)
    
    eax_1 = *(arg1 + 0x278)
    
    if (eax_1 != 1)
        goto label_42c4ba
    
    wchar32 const* const edi_2 = U")(;:"
    void* esi_3 = arg1 + 0x280
    int32_t i_1 = 2
    bool cond:4_1 = false
    
    while (i_1 != 0)
        char temp2_1 = *esi_3
        char temp3_1 = *edi_2
        cond:4_1 = temp2_1 != temp3_1
        esi_3 += 1
        edi_2 += 1
        i_1 -= 1
        
        if (temp2_1 != temp3_1)
            break
    
    if (cond:4_1)
        goto label_42c4ba
    
    sub_42b68f(*(arg1 + 0x26c), *(arg1 + 0x298), arg1 + 0x278)
    eax_1 = *(arg1 + 0x278)
    
    if (eax_1 != 0xc && eax_1 != 0xd)
        goto label_42c4ba
    
    char* esi_5 = var_8_1
    
    if (esi_5 != 0)
        char const* const edi_3 = "row_major"
        int32_t i_2 = 0xa
        bool cond:6_1 = false
        
        while (i_2 != 0)
            char temp4_1 = *esi_5
            char const temp5_1 = *edi_3
            cond:6_1 = temp4_1 != temp5_1
            esi_5 = &esi_5[1]
            edi_3 = &edi_3[1]
            i_2 -= 1
            
            if (temp4_1 != temp5_1)
                break
        
        if (cond:6_1)
            char* esi_6 = var_8_1
            char const* const edi_4 = "column_major"
            int32_t i_3 = 0xd
            bool cond:8_1 = false
            
            while (i_3 != 0)
                char temp6_1 = *esi_6
                char const temp7_1 = *edi_4
                cond:8_1 = temp6_1 != temp7_1
                esi_6 = &esi_6[1]
                edi_4 = &edi_4[1]
                i_3 -= 1
                
                if (temp6_1 != temp7_1)
                    break
            
            if (cond:8_1)
                goto label_42c4ba
            
            *(arg1 + 0x38) = 0x800
        else
            *(arg1 + 0x38) = 0x400
    else
        *(arg1 + 0x38) &= esi_5

*(arg1 + 0x40) = 1
return 0
