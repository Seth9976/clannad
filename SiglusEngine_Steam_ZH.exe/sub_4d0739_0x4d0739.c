// 函数: sub_4d0739
// 地址: 0x4d0739
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_28 = edi
int32_t i

do
    int32_t j = 0
    i = 0
    int32_t j_1 = 0
    
    if (*(arg1 + 0xc) u<= 0)
        break
    
    do
        if (sub_49e9bf(*(*(arg1 + 0x18) + (j << 2))) != 0)
            int32_t k_1 = j + 1
            int32_t var_c_1 = 1
            int32_t k_2 = k_1
            
            if (k_1 u>= *(arg1 + 0xc))
            label_4d0828:
                i = 1
                int32_t k = j
                
                if (j u< *(arg1 + 0xc))
                    do
                        if (sub_49e9f7(*(*(arg1 + 0x18) + (k << 2))) != 0)
                            break
                        
                        **(*(arg1 + 0x18) + (k << 2)) = 0
                        k += 1
                    while (k u< *(arg1 + 0xc))
            else
                do
                    int32_t* edi_1 = *(*(arg1 + 0x18) + (k_1 << 2))
                    
                    if (sub_49e9f7(edi_1) != 0)
                        break
                    
                    if ((*edi_1 & 0xfff00000) != 0x10000000)
                        var_c_1 = 0
                        break
                    
                    int32_t ecx_2 = edi_1[3]
                    
                    if (ecx_2 u> 0)
                        int32_t* eax_7 = edi_1[2]
                        int32_t edx_1 = *(arg1 + 0x14)
                        int32_t* var_8_1 = eax_7
                        int32_t var_14_1 = ecx_2
                        int32_t temp0_1
                        
                        do
                            void* eax_9 = *(edx_1 + (*(edi_1[4] - eax_7 + var_8_1) << 2))
                            void* ecx_5 = *(edx_1 + (*var_8_1 << 2))
                            
                            if (*(eax_9 + 0x38) != *(ecx_5 + 0x38)
                                    || *(eax_9 + 0x3c) != *(ecx_5 + 0x3c)
                                    || *(eax_9 + 4) != *(ecx_5 + 4)
                                    || *(eax_9 + 0xc) != *(ecx_5 + 0xc)
                                    || *(eax_9 + 8) != *(ecx_5 + 8)
                                    || *(eax_9 + 0x10) != *(ecx_5 + 0x10))
                                var_c_1 = 0
                            
                            var_8_1 = &var_8_1[1]
                            temp0_1 = var_14_1
                            var_14_1 -= 1
                        while (temp0_1 != 1)
                        k_1 = k_2
                    
                    k_1 += 1
                    k_2 = k_1
                while (k_1 u< *(arg1 + 0xc))
                
                j = j_1
                
                if (var_c_1 != 0)
                    goto label_4d0828
        
        j += 1
        j_1 = j
    while (j u< *(arg1 + 0xc))
while (i != 0)
return 0
