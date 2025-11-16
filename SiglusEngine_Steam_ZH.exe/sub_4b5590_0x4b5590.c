// 函数: sub_4b5590
// 地址: 0x4b5590
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t i = 0
int32_t edi
int32_t var_20 = edi

if (*(arg1 + 0x4c) u> 0)
    do
        int32_t* edx_1 = *(*(arg1 + 0x230) + (i << 2))
        
        if (edx_1 != 0)
            int32_t ecx_1 = *edx_1
            int32_t eax_3 = ecx_1 & 0xfff00000
            
            if (eax_3 != 0x72100000 && eax_3 != 0)
                int32_t ecx_2 = ecx_1 & 0xfffff
                int32_t eax_5 = neg.d(eax_3 - 0x11000000)
                int32_t eax_8 = (sbb.d(eax_5, eax_5, eax_3 != 0x11000000) & ecx_2) << 2
                
                if ((*(*(*(arg1 + 0x10)
                        + (*(*(*(arg1 + 0x14) + (*(eax_8 + edx_1[2]) << 2)) + 4) << 2)) + 5) & 2) != 0)
                    void* eax_13 = sub_49ec23(0x74)
                    int32_t* edi_1
                    
                    if (eax_13 == 0)
                        edi_1 = nullptr
                    else
                        edi_1 = sub_49e789(eax_13)
                    
                    if (edi_1 == 0)
                        return 0x8007000e
                    
                    int32_t result =
                        sub_49ec6e(edi_1, (ecx_2 & 0xfffff) | 0x10000000, ecx_2, ecx_2, 0)
                    
                    if (result s< 0)
                    label_4b5734:
                        sub_46cb59(edi_1, 1)
                        return result
                    
                    int32_t* ecx_9 = edi_1
                    result = sub_49e7bf(ecx_9, *(*(arg1 + 0x230) + (i << 2)))
                    
                    if (result s< 0)
                        goto label_4b5734
                    
                    int32_t ebx_1 = 0
                    int32_t var_14_1 = 0
                    
                    if (ecx_2 u> 0)
                        int32_t var_10_2 = eax_8
                        
                        do
                            int32_t* var_24_2 = ecx_9
                            int32_t* var_28_2 = ecx_9
                            var_28_2.q = fconvert.d(float.t(0))
                            int32_t eax_20 = sub_49f544(arg1, *(arg1 + 0x88), 0, ebx_1, var_28_2)
                            *(*(*(arg1 + 0x14) + (eax_20 << 2)) + 0x3c) = 0
                            *(edi_1[4] + (ebx_1 << 2)) = eax_20
                            *(edi_1[2] + (var_14_1 << 2)) =
                                *(var_10_2 + *(*(*(arg1 + 0x230) + (i << 2)) + 8))
                            int32_t edx_5 = var_10_2
                            ecx_9 = *(*(*(arg1 + 0x230) + (i << 2)) + 8)
                            var_10_2 += 4
                            ebx_1 = var_14_1 + 1
                            *(edx_5 + ecx_9) = eax_20
                            var_14_1 = ebx_1
                        while (ebx_1 u< ecx_2)
                    
                    int32_t ecx_20 = *(arg1 + 0x220)
                    
                    if (ecx_20 u>= 0x200)
                        sub_46cb59(edi_1, 1)
                        return 0x8007000e
                    
                    *(*(arg1 + 0x22c) + (ecx_20 << 2)) = edi_1
                    *(arg1 + 0x220) += 1
                    result = sub_49f431(arg1, edi_1)
                    
                    if (result s< 0)
                        goto label_4b5734
        
        i += 1
    while (i u< *(arg1 + 0x4c))

return 0
