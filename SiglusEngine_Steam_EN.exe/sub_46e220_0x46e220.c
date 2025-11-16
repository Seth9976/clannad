// 函数: sub_46e220
// 地址: 0x46e220
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx = arg4
int32_t eax = arg2 * 9
int32_t esi = *((eax << 2) + &data_12b926c)
int32_t edx = ecx * 9
int32_t temp0 = *((edx << 2) + &data_12b926c)

if (esi s>= temp0)
    if (esi s> temp0)
        return 1
    
    bool cond:4_1
    
    if (*((eax << 2) + &data_12b927c) != 0)
        int32_t edx_1 = *((edx << 2) + &data_12b927c)
        
        if (edx_1 != 0)
            int32_t esi_1 = arg3 + (arg2 << 1)
            int32_t eax_3 = arg3 + (ecx << 1)
            int32_t ecx_1 = *(eax_3 * 0x650 + 0x72d858)
            int32_t temp1_1 = *(esi_1 * 0x650 + 0x72d858)
            
            if (temp1_1 s>= ecx_1)
                if (temp1_1 s> ecx_1)
                    return 1
                
                int32_t ecx_2 = *(eax_3 * 0x650 + 0x72d85c)
                int32_t temp2_1 = *(esi_1 * 0x650 + 0x72d85c)
                
                if (temp2_1 s>= ecx_2)
                    ecx = arg4
                    
                    if (temp2_1 s> ecx_2)
                        return 1
                    
                    int32_t esi_4 = *(esi_1 * 0x650 + 0x72d860)
                    int32_t temp3_1 = *(eax_3 * 0x650 + 0x72d860)
                    
                    if (esi_4 s>= temp3_1)
                        if (esi_4 s> temp3_1)
                            return 1
                        
                        if (*(arg2 * 0x24 + &data_12b927c) == 1)
                            cond:4_1 = edx_1 != 1
                            goto label_46e25e
                        
                        if (edx_1 != 1)
                            int32_t edx_3 = *(esi_1 * 0x650 + 0x72d86c)
                            
                            if (edx_3 != 0)
                            label_46e381:
                                
                                if (*(eax_3 * 0x650 + 0x72d86c) != 0)
                                label_46e3b8:
                                    int32_t eax_10 = *(eax_3 * 0x650 + 0x72d86c)
                                    
                                    if (edx_3 s>= eax_10)
                                        if (edx_3 s> eax_10)
                                            return 1
                                        
                                        int32_t eax_11 = *(eax_3 * 0x7a0 + 0x98bf28)
                                        int32_t esi_8 = *(eax_3 * 0x7a0 + 0x98bf24)
                                        int32_t edx_6 = *(esi_1 * 0x7a0 + 0x98bf24)
                                        int32_t esi_9 = *(esi_1 * 0x7a0 + 0x98bf28)
                                        int32_t eax_12 = sub_46e1e0(eax_11, eax_11, esi_8, 
                                            data_12a2924, data_12a2928, edx_6, esi_9)
                                        
                                        if (eax_12 == 1)
                                            return 1
                                        
                                        if (sub_46e1e0(eax_12, esi_9, edx_6, data_12a2924, 
                                                data_12a2928, esi_8, eax_11) == 0)
                                            return 1
                                        
                                        if (esi_9 s>= eax_11)
                                            if (esi_9 s> eax_11)
                                                return 1
                                            
                                            goto label_46e333
                                else
                                label_46e39d:
                                    int32_t eax_8 = sub_46e1e0(eax_3 * 0x650 + &data_72d7fc, 
                                        *(esi_1 * 0x7a0 + 0x98bf28), *(esi_1 * 0x7a0 + 0x98bf24), 
                                        data_12a2924, data_12a2928, *(eax_3 * 0x7a0 + 0x98bf24), 
                                        *(eax_3 * 0x7a0 + 0x98bf28))
                                    
                                    if (eax_8 == 0)
                                        return 1
                            else if (*(eax_3 * 0x650 + 0x72d86c) != edx_3)
                                if (edx_3 != 0)
                                    goto label_46e381
                                
                                if (*(eax_3 * 0x650 + 0x72d86c) == edx_3)
                                    if (edx_3 == 0 || *(eax_3 * 0x650 + 0x72d86c) != 0)
                                        goto label_46e3b8
                                    
                                    goto label_46e39d
                                
                                int32_t result = sub_46e1e0(eax_3 * 0x650 + &data_72d7fc, 
                                    *(eax_3 * 0x7a0 + 0x98bf28), *(eax_3 * 0x7a0 + 0x98bf24), 
                                    data_12a2924, data_12a2928, *(esi_1 * 0x7a0 + 0x98bf24), 
                                    *(esi_1 * 0x7a0 + 0x98bf28))
                                
                                if (result == 1)
                                    return result
                            else
                                int32_t eax_6 = *(esi_1 * 0x7a0 + 0x98bf28)
                                int32_t ecx_5 = *(eax_3 * 0x7a0 + 0x98bf28)
                                
                                if (eax_6 s>= ecx_5)
                                    if (eax_6 s> ecx_5)
                                        return 1
                                    
                                label_46e333:
                                    
                                    if (arg2 s> arg4)
                                        return 1
    else
        cond:4_1 = *((edx << 2) + &data_12b927c) != 0
    label_46e25e:
        
        if (cond:4_1 || arg2 s> ecx)
            return 1

return 0
