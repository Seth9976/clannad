// 函数: sub_4613e7
// 地址: 0x4613e7
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0
int32_t edi
int32_t var_1c = edi

if (*(arg1 + 0xc) u<= 0)
label_46142d:
    int32_t var_8_2 = 0
    int32_t* ebx_2 = *(arg1 + 8) + 8
    
    if (*ebx_2 u<= 0)
        return 0x88760386
    
    void* eax_6
    
    while (true)
        eax_6 = *(ebx_2[3] + (var_8_2 << 2))
        int32_t* esi_2 = arg2
        int32_t i = 4
        void* edi_2 = eax_6 + 8
        bool cond:2_1 = false
        
        while (i != 0)
            int32_t temp1_1 = *esi_2
            int32_t temp2_1 = *edi_2
            cond:2_1 = temp1_1 != temp2_1
            esi_2 = &esi_2[1]
            edi_2 += 4
            i -= 1
            
            if (temp1_1 != temp2_1)
                break
        
        if (not(cond:2_1) && sub_461db2(arg1, eax_6) s>= 0)
            break
        
        var_8_2 += 1
        
        if (var_8_2 u>= *ebx_2)
            return 0x88760386
    
    *arg3 = eax_6
else
    int32_t* var_8_1 = *(arg1 + 0x18)
    
    while (true)
        void* eax_3 = *var_8_1
        int32_t* esi_1 = arg2
        int32_t i_1 = 4
        void* edi_1 = eax_3 + 8
        bool cond:4_1 = true
        
        while (i_1 != 0)
            int32_t temp3_1 = *esi_1
            int32_t temp4_1 = *edi_1
            cond:4_1 = temp3_1 == temp4_1
            esi_1 = &esi_1[1]
            edi_1 += 4
            i_1 -= 1
            
            if (temp3_1 != temp4_1)
                break
        
        if (cond:4_1)
            *arg3 = eax_3
            break
        
        var_c += 1
        var_8_1 = &var_8_1[1]
        
        if (var_c u>= *(arg1 + 0xc))
            goto label_46142d

return 0
