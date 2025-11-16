// 函数: sub_42e7a0
// 地址: 0x42e7a0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t i_1 = 0

if (*(arg1 + 0x54) s> 0)
    int32_t* ecx_1 = *(arg1 + 0x50) + 0xc
    void* eax = arg1
    int32_t ebx
    int32_t var_24_1 = ebx
    int32_t* var_8_1 = ecx_1
    int32_t i
    
    do
        void* esi_1 = ecx_1[0x59]
        
        if (esi_1 != 0)
            int32_t eax_1 = *ecx_1
            
            if (eax_1 s>= 0)
                int32_t edx_1 = ecx_1[0x5a]
                
                if (eax_1 s< edx_1)
                    void* ebx_4 = eax_1 * 0x30 + esi_1
                    int32_t j_1 = 0
                    void* var_14_1 = ebx_4
                    
                    if (edx_1 s> 0)
                        int32_t j = 0
                        
                        do
                            int32_t eax_2 = *(esi_1 + 8)
                            int32_t edx_2 = ecx_1[-1]
                            
                            if (eax_2 s<= edx_2)
                                if (eax_2 == edx_2 || eax_2 == ecx_1[3])
                                    int32_t eax_3 = *ecx_1
                                    
                                    if (j s< eax_3)
                                        int32_t eax_4 = *(esi_1 + 0x18)
                                        
                                        if (eax_4 == 0)
                                            sub_42e600(esi_1)
                                            ecx_1 = var_8_1
                                        else if (eax_4 == 1)
                                            if (*(esi_1 + 0x1c) != 1)
                                                sub_42e600(esi_1)
                                                ecx_1 = var_8_1
                                            else if (j s< *(ebx_4 + 0xc))
                                                sub_42e600(esi_1)
                                                ecx_1 = var_8_1
                                        else if (eax_4 == 2)
                                            sub_42e600(esi_1)
                                            ecx_1 = var_8_1
                                    else if (j == eax_3 && *(esi_1 + 0x18) == 1
                                            && *(esi_1 + 0x1c) - 2 u<= 1)
                                        int32_t k = 0
                                        int32_t k_1 = 0
                                        
                                        if (*(esi_1 + 0x2c) s> 0)
                                            int32_t* ebx_6 = *(esi_1 + 0x28) + 4
                                            
                                            do
                                                int32_t edi_1 = *ebx_6
                                                
                                                if (edi_1 != 0xffffffff && k s< ecx_1[2])
                                                    if (edi_1 u<= 0x1ff)
                                                        *(edi_1 * 0x74 + &data_13747ac) -= 1
                                                        
                                                        if (*(edi_1 * 0x74 + &data_13747ac) s<= 0)
                                                            sub_4d6c40(edi_1 * 0x74 + 0x13747b0, 
                                                                edi_1 * 0x74 + 0x13747b4)
                                                            sub_425320(edi_1)
                                                            k = k_1
                                                        
                                                        ecx_1 = var_8_1
                                                    
                                                    *ebx_6 = 0xffffffff
                                                
                                                k += 1
                                                ebx_6 = &ebx_6[0x2e]
                                                k_1 = k
                                            while (k s< *(esi_1 + 0x2c))
                                            
                                            j = j_1
                                        
                                        ebx_4 = var_14_1
                                else
                                    sub_42e600(esi_1)
                                    ecx_1 = var_8_1
                            
                            j += 1
                            esi_1 += 0x30
                            j_1 = j
                        while (j s< ecx_1[0x5a])
            
            eax = arg1
        
        ecx_1 = &ecx_1[0x5e]
        i = i_1 + 1
        var_8_1 = ecx_1
        i_1 = i
    while (i s< *(eax + 0x54))

if (data_702fc0 != 0)
    *(arg1 + 0xc) = sub_42e950(arg1)
