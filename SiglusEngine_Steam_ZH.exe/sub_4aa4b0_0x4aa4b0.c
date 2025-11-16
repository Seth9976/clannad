// 函数: sub_4aa4b0
// 地址: 0x4aa4b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_38 = edi
sub_4a39e3(arg1)
int32_t i = 0

if (*(arg1 + 0xc) u> 0)
    do
        int32_t* esi_1 = *(*(arg1 + 0x18) + (i << 2))
        int32_t ecx_1 = *esi_1
        int32_t temp3_1 = ecx_1 & 0xfff00000
        
        if (temp3_1 != 0)
            int32_t j_2 = ecx_1 & 0xfffff
            uint32_t temp0_1 = divu.dp.d(0:(esi_1[1]), j_2)
            void var_34
            
            if (temp3_1 != 0x50000000)
                int32_t ecx_4 = ecx_1 & 0xf0000000
                
                if (ecx_4 u>= 0x10000000 && ecx_4 u<= 0x40000000)
                    sub_4a3777(arg1, esi_1[4], &var_34, j_2, 1)
                    int32_t var_8_3 = 0
                    
                    if (temp0_1 u> 0)
                        do
                            sub_4a3777(arg1, esi_1[2] + ((esi_1[3] * var_8_3) << 2), &var_34, j_2, 
                                0)
                            var_8_3 += 1
                        while (var_8_3 u< temp0_1)
            else
                sub_4a3777(arg1, esi_1[2] + (j_2 << 2), &var_34, j_2, 1)
                sub_4a3777(arg1, esi_1[2], &var_34, j_2, 0)
            
            if ((*esi_1 & 0xf0000000) == 0x20000000 && sub_49e878(esi_1) != 0)
                int32_t* eax_13 = esi_1[2]
                int32_t ecx_9 = *(arg1 + 0x14)
                void* edx_4 = *(ecx_9 + (*eax_13 << 2))
                void* eax_15 = *(ecx_9 + (eax_13[j_2] << 2))
                int32_t var_18_1 = 0xffffffff
                int32_t var_8_4 = 0xffffffff
                
                if (j_2 u<= 0)
                label_4aa628:
                    *(edx_4 + 4)
                    int32_t* eax_29 = *(arg1 + 0x10)
                    *(eax_15 + 4)
                    
                    if (*(eax_29[*(edx_4 + 4)] + 4) u>= *(eax_29[*(eax_15 + 4)] + 4))
                        int32_t* eax_31 = *(arg1 + 0x10)
                        
                        if (*(eax_31[*(edx_4 + 4)] + 4) != *(eax_31[*(eax_15 + 4)] + 4))
                        label_4aa675:
                            int32_t var_8_5 = 0
                            
                            if (j_2 u> 0)
                                int32_t var_24_2 = j_2 << 2
                                
                                do
                                    int32_t eax_38 = esi_1[2]
                                    int32_t ecx_15 = var_8_5
                                    var_8_5 += 1
                                    int32_t* ecx_16 = eax_38 + (ecx_15 << 2)
                                    int32_t edx_14 = *ecx_16
                                    *ecx_16 = *(var_24_2 + eax_38)
                                    *(var_24_2 + esi_1[2]) = edx_14
                                    var_24_2 += 4
                                while (var_8_5 u< j_2)
                        else
                            int32_t eax_34 = *(eax_15 + 4)
                            int32_t ecx_13 = *(edx_4 + 4)
                            
                            if (ecx_13 u>= eax_34
                                    && (ecx_13 != eax_34 || *(edx_4 + 0xc) u>= *(eax_15 + 0xc)))
                                goto label_4aa675
                else
                    int32_t* eax_16 = esi_1[2]
                    int32_t* var_10_1 = eax_16
                    int32_t* var_14_1 = &eax_16[j_2]
                    int32_t j_1 = j_2
                    int32_t j
                    
                    do
                        int32_t eax_21 = *(*(ecx_9 + (*var_10_1 << 2)) + 0x48)
                        
                        if (eax_21 u< var_18_1)
                            var_18_1 = eax_21
                        
                        int32_t eax_25 = *(*(ecx_9 + (*var_14_1 << 2)) + 0x48)
                        
                        if (eax_25 u< var_8_4)
                            var_8_4 = eax_25
                        
                        var_10_1 = &var_10_1[1]
                        var_14_1 = &var_14_1[1]
                        j = j_1
                        j_1 -= 1
                    while (j != 1)
                    
                    if (var_18_1 u>= var_8_4)
                        if (var_18_1 != var_8_4)
                            goto label_4aa675
                        
                        goto label_4aa628
        
        i += 1
    while (i u< *(arg1 + 0xc))

return 0
