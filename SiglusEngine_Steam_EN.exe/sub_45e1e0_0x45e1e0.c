// 函数: sub_45e1e0
// 地址: 0x45e1e0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t i = *(arg1 + 0x10)

if (i s> 0)
    void* ebx_1 = *(arg1 + 0xc)
    
    if (ebx_1 != 0)
        int32_t i_1 = 0
        
        if (i s> 0)
            do
                if (sub_4d1be0(i, ebx_1 + 0x44, ebx_1 + 0x24, 0x20) != 0)
                    int32_t ecx_1 = *(ebx_1 + 0x54)
                    
                    if (ecx_1 != *(ebx_1 + 0x34))
                    label_45e276:
                        
                        if (ecx_1 != 0xffffffff || *(ebx_1 + 0x58) != ecx_1
                                || *(ebx_1 + 0x5c) != ecx_1 || *(ebx_1 + 0x60) != ecx_1)
                            int32_t var_20_2 = *(ebx_1 + 0x60)
                            int32_t var_24_2 = *(ebx_1 + 0x5c)
                            sub_494c90(ecx_1, *(ebx_1 + 0x58))
                        
                        ecx_1 = *(ebx_1 + 0x34)
                        
                        if (ecx_1 != 0xffffffff || *(ebx_1 + 0x38) != ecx_1
                                || *(ebx_1 + 0x3c) != ecx_1 || *(ebx_1 + 0x40) != ecx_1)
                            int32_t var_20_3 = *(ebx_1 + 0x40)
                            int32_t var_24_3 = *(ebx_1 + 0x3c)
                            sub_494c90(ecx_1, *(ebx_1 + 0x38))
                    else
                        int32_t edx_2 = *(ebx_1 + 0x58)
                        
                        if (edx_2 != *(ebx_1 + 0x38))
                            goto label_45e276
                        
                        int32_t eax_1 = *(ebx_1 + 0x5c)
                        
                        if (eax_1 != *(ebx_1 + 0x3c))
                            goto label_45e276
                        
                        ecx_1 = *(ebx_1 + 0x54)
                        
                        if (*(ebx_1 + 0x60) != *(ebx_1 + 0x40))
                            goto label_45e276
                        
                        int32_t esi_1 = *(ebx_1 + 0x60)
                        
                        if (ecx_1 != 0xffffffff || edx_2 != ecx_1 || eax_1 != ecx_1
                                || esi_1 != ecx_1)
                            int32_t var_20_1 = esi_1
                            int32_t var_24_1 = eax_1
                            sub_494c90(ecx_1, edx_2)
                
                i = i_1 + 1
                ebx_1 += *ebx_1
                i_1 = i
            while (i s< *(arg1 + 0x10))

return i
