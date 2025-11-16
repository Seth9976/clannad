// 函数: sub_461247
// 地址: 0x461247
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
int32_t eax = *(arg1 + 0x40)
int32_t edi
int32_t var_14 = edi
int32_t edi_1 = 0

if (eax == 0)
    int32_t var_18_5 = 0xe
    sub_460651(arg1)
    int32_t* esi_4 = arg2
    int32_t var_8_2 = 0
    
    if (*esi_4 u> 0)
        while (true)
            if (edi_1 != 0)
                int32_t var_18_6 = 0x13
                sub_460651(arg1)
            
            char*** edi_4 = var_8_2 << 2
            sub_460fd3(arg1, **(edi_4 + esi_4[3]))
            int32_t* eax_17 = *(esi_4[3] + edi_4) + 4
            int32_t i = 4
            int128_t* const edi_5 = &data_aac190
            int32_t* esi_5 = eax_17
            bool cond:3_1 = true
            
            while (i != 0)
                int32_t temp3_1 = *esi_5
                int32_t temp4_1 = *edi_5
                cond:3_1 = temp3_1 == temp4_1
                esi_5 = &esi_5[1]
                edi_5 += 4
                i -= 1
                
                if (temp3_1 != temp4_1)
                    break
            
            if (not(cond:3_1))
                sub_461015(arg1, eax_17)
            
            edi_1 = 1
            var_8_2 += 1
            
            if (var_8_2 u>= *arg2)
                break
            
            esi_4 = arg2
    
    int32_t var_18_9 = 0xf
    sub_460651(arg1)
    int32_t var_18_10 = 0xb
    sub_460651(arg1)
else if (eax == 1)
    int32_t eax_3 = *(arg1 + 0x58)
    
    if (eax_3 == 0)
        return 0x8876038f
    
    sub_460f5b(arg1, eax_3)
    sub_460594(arg1, U"[")
    int32_t* esi_1 = arg2
    int32_t var_8_1 = 0
    
    if (*esi_1 u> 0)
        while (true)
            if (edi_1 != 0)
                sub_460594(arg1, ", ")
            
            sub_460594(arg1, **(esi_1[3] + (var_8_1 << 2)))
            int32_t i_1 = 4
            int32_t* esi_3 = *(esi_1[3] + (var_8_1 << 2)) + 4
            int128_t* const edi_2 = &data_aac190
            bool cond:5_1 = true
            
            while (i_1 != 0)
                int32_t temp5_1 = *esi_3
                int32_t temp6_1 = *edi_2
                cond:5_1 = temp5_1 == temp6_1
                esi_3 = &esi_3[1]
                edi_2 += 4
                i_1 -= 1
                
                if (temp5_1 != temp6_1)
                    break
            
            if (not(cond:5_1))
                sub_460594(arg1, U" ")
                sub_46105c(arg1, *(arg2[3] + (var_8_1 << 2)) + 4)
            
            edi_1 = 1
            var_8_1 += 1
            
            if (var_8_1 u>= *arg2)
                break
            
            esi_1 = arg2
    
    sub_460594(arg1, U"][")
    *(arg1 + 0x58) -= 1
    sub_460f5b(arg1, *(arg1 + 0x58))
    sub_460594(arg1, U"}")

return 0
