// 函数: sub_4b2953
// 地址: 0x4b2953
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t i_3 = 0xffffffff
int32_t i_2 = 0xffffffff
int32_t edi
int32_t var_1c = edi
int32_t i = 0
int32_t i_1 = 0

if (*(arg1 + 8) u> 0)
    do
        int32_t eax_2 = i << 2
        void* edx_2 = *(eax_2 + *(arg1 + 0x14))
        
        if ((*(*(*(arg1 + 0x10) + (*(edx_2 + 4) << 2)) + 4) & 0x10) != 0)
            int32_t edx_3 = *(edx_2 + 0x6c)
            
            if (edx_3 == 0x11 || edx_3 == 0x12)
                int32_t* edx_5 = *(eax_2 + *(arg1 + 0x14))
                *edx_5 &= 0x40000000
                
                if (**(eax_2 + *(arg1 + 0x14)) == 0)
                    void* edx_9 = *(eax_2 + *(arg1 + 0x14))
                    int32_t esi_3 = *(edx_9 + 0x6c)
                    
                    if (esi_3 != 0x11)
                        goto label_4b29d5
                    
                    if (i_3 == 0xffffffff)
                        i_3 = i
                    label_4b29d5:
                        
                        if (esi_3 != 0x12)
                            goto label_4b29f3
                        
                        if (i_2 == 0xffffffff)
                            i_2 = i
                        label_4b29f3:
                            int32_t edx_12 = *(edx_9 + 0xc)
                            int32_t var_8_1 = 0xffffffff
                            int32_t j = 0
                            
                            if (*(arg1 + 8) u> 0)
                                do
                                    void* esi_6 = *(*(arg1 + 0x14) + (j << 2))
                                    
                                    if ((*(*(*(arg1 + 0x10) + (*(esi_6 + 4) << 2)) + 4) & 0x10)
                                            != 0)
                                        int32_t esi_7 = *(esi_6 + 0xc)
                                        
                                        if (esi_7 u> edx_12)
                                            if (var_8_1 s<= esi_7)
                                                var_8_1 = esi_7
                                            
                                            void* esi_8 = *(*(arg1 + 0x14) + (j << 2))
                                            *(esi_8 + 0xc) -= 1
                                    
                                    j += 1
                                while (j u< *(arg1 + 8))
                                
                                if (var_8_1 != 0xffffffff)
                                    *(*(eax_2 + *(arg1 + 0x14)) + 0xc) = var_8_1
                        else
                            int32_t* edx_10 = *(arg1 + 0x14)
                            *(edx_10[i] + 0xc) = *(edx_10[i_2] + 0xc)
        
        i = i_1 + 1
        i_1 = i
    while (i u< *(arg1 + 8))

return 0
