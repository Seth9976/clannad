// 函数: sub_42e670
// 地址: 0x42e670
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* result = *(arg1 + 0x50)
int32_t i = 0
int32_t i_1 = 0

if (*(arg1 + 0x54) s> 0)
    void* edx_1 = result + 0x174
    void* var_10_1 = edx_1
    
    do
        int32_t j = 0
        int32_t j_1 = 0
        
        if (*edx_1 s> 0)
            int32_t* ecx_1 = *(edx_1 - 4) + 0x2c
            int32_t* var_8_1 = ecx_1
            
            do
                int32_t k = 0
                
                if (*ecx_1 s> 0)
                    int32_t* edi_2 = ecx_1[-1] + 4
                    
                    do
                        int32_t eax = *edi_2
                        
                        if (eax != 0xffffffff)
                            if (eax u<= 0x1ff)
                                void* esi_1 = eax * 0x74
                                *(esi_1 + &data_13747ac) -= 1
                                
                                if (*(esi_1 + &data_13747ac) s<= 0)
                                    int32_t eax_1 = sub_4d6c40(esi_1 + 0x13747b0, esi_1 + 0x13747b4)
                                    *(esi_1 + &data_1374760) = 0
                                    sub_4d1ba0(eax_1, 0x24, esi_1 + 0x1374764, 0)
                                    ecx_1 = var_8_1
                                    *(esi_1 + 0x137478c) = 0xffffffff
                                    *(esi_1 + &data_13747ac) = 0
                                    *(esi_1 + 0x13747cc) = 0
                                    *(esi_1 + 0x13747d0) = 0
                                    *(esi_1 + 0x13747b0) = 0
                                    *(esi_1 + 0x13747b4) = 0
                            
                            *edi_2 = 0xffffffff
                        
                        k += 1
                        edi_2 = &edi_2[0x2e]
                    while (k s< *ecx_1)
                    
                    j = j_1
                    edx_1 = var_10_1
                
                j += 1
                ecx_1 = &ecx_1[0xc]
                var_8_1 = ecx_1
                j_1 = j
            while (j s< *edx_1)
            
            i = i_1
        
        result = arg1
        i += 1
        edx_1 += 0x178
        i_1 = i
        var_10_1 = edx_1
    while (i s< *(result + 0x54))

return result
