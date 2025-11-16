// 函数: sub_46e840
// 地址: 0x46e840
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = *(arg2 + 8)
void* edx_1 = arg5 * 0x7d8 + eax
void* esi_1 = arg4 * 0x7d8 + eax
int32_t eax_1 = *(arg3 + 0x14)

if (eax_1 != 0)
    int32_t eax_3 = *(esi_1 + 0x32c)
    int32_t ecx = *(edx_1 + 0x32c)
    
    if (eax_3 s>= ecx)
        if (eax_3 s> ecx)
            return 1
        
        int32_t eax_4 = *(esi_1 + 0x330)
        int32_t ecx_1 = *(edx_1 + 0x330)
        
        if (eax_4 s>= ecx_1)
            if (eax_4 s> ecx_1)
                return 1
            
            int32_t eax_5 = *(esi_1 + 0x334)
            int32_t ecx_2 = *(edx_1 + 0x334)
            
            if (eax_5 s>= ecx_2)
                if (eax_5 s> ecx_2)
                    return 1
                
                if (eax_1 == 1)
                    goto label_46e869
                
                int32_t eax_6 = *(esi_1 + 0x340)
                
                if (eax_6 != 0)
                label_46e92f:
                    
                    if (*(edx_1 + 0x340) != 0)
                    label_46e96b:
                        int32_t ecx_6 = *(edx_1 + 0x340)
                        
                        if (eax_6 s>= ecx_6)
                            if (eax_6 s> ecx_6)
                                return 1
                            
                            int32_t ecx_7 = *(esi_1 + 0x10)
                            int32_t esi_2 = *(esi_1 + 0x14)
                            int32_t eax_11 = *(edx_1 + 0x14)
                            int32_t edx_4 = *(edx_1 + 0x10)
                            int32_t eax_12 = sub_46e1e0(eax_11, eax_11, edx_4, data_12a2924, 
                                data_12a2928, ecx_7, esi_2)
                            
                            if (eax_12 == 1)
                                return 1
                            
                            if (sub_46e1e0(eax_12, esi_2, ecx_7, data_12a2924, data_12a2928, edx_4, 
                                    eax_11) == 0)
                                return 1
                            
                            if (esi_2 s>= eax_11)
                                if (esi_2 s> eax_11)
                                    return 1
                                
                                goto label_46e869
                    else
                    label_46e950:
                        
                        if (sub_46e1e0(eax_6, *(esi_1 + 0x14), *(esi_1 + 0x10), data_12a2924, 
                                data_12a2928, *(edx_1 + 0x10), *(edx_1 + 0x14)) == 0)
                            return 1
                else if (*(edx_1 + 0x340) != eax_6)
                    if (eax_6 != 0)
                        goto label_46e92f
                    
                    if (*(edx_1 + 0x340) == eax_6)
                        if (eax_6 == 0 || *(edx_1 + 0x340) != 0)
                            goto label_46e96b
                        
                        goto label_46e950
                    
                    int32_t ecx_4 = *(esi_1 + 0x10)
                    int32_t result = sub_46e1e0(eax_6, *(edx_1 + 0x14), ecx_4, data_12a2924, 
                        data_12a2928, ecx_4, *(esi_1 + 0x14))
                    
                    if (result == 1)
                        return result
                else
                    int32_t eax_7 = *(esi_1 + 0x14)
                    int32_t ecx_3 = *(edx_1 + 0x14)
                    
                    if (eax_7 s>= ecx_3)
                        if (eax_7 s> ecx_3)
                            return 1
                        
                        goto label_46e869
else
label_46e869:
    
    if (arg4 s> arg5)
        return 1

return 0
