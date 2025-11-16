// 函数: sub_4b5028
// 地址: 0x4b5028
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if ((**(arg1 + 0x100) & 0xfff00000) == 0x10000000 && zx.d((*(arg1 + 0xc8)).w) u< 0x104)
    int32_t* eax_5 = *(arg1 + 0x100)
    int32_t edx_1 = *(arg1 + 0x14)
    int32_t edi
    int32_t var_24_1 = edi
    void* edi_3 = *(edx_1 + (*eax_5[2] << 2))
    void* edx_2 = *(edx_1 + (*eax_5[4] << 2))
    int32_t esi_2 = *eax_5 & 0xfffff
    int32_t var_18_1 = esi_2
    
    if (*(edi_3 + 0x3c) == 0 && (*(edx_2 + 0x3d) & 2) != 0 && *(edi_3 + 0x6c) == 3
            && *(edx_2 + 4) == *(arg1 + 0x88))
        int32_t var_c_1 = 0
        
        if (esi_2 u> 0)
            do
                int32_t eax_10 = var_c_1 << 2
                void* eax_12 = *(*(arg1 + 0x14) + (*(eax_10 + *(*(arg1 + 0x100) + 8)) << 2))
                *(eax_12 + 0x3d) |= 2
                
                for (int32_t i = *(arg1 + 0xfc); i u< *(arg1 + 0xc); i += 1)
                    void* eax_14 = *(*(arg1 + 0x18) + (i << 2))
                    int32_t j = 0
                    
                    if (*(eax_14 + 4) u> 0)
                        do
                            int32_t* edi_5 = *(eax_14 + 8) + (j << 2)
                            
                            if (*edi_5 == *(eax_10 + *(*(arg1 + 0x100) + 0x10)))
                                *edi_5 = *(eax_10 + *(*(arg1 + 0x100) + 8))
                            
                            j += 1
                        while (j u< *(eax_14 + 4))
                        
                        esi_2 = var_18_1
                
                var_c_1 += 1
            while (var_c_1 u< esi_2)
        
        **(arg1 + 0x100) = 0

return 0
