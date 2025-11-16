// 函数: sub_6cbcf0
// 地址: 0x6cbcf0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx = *arg2

if (ecx s>= 0 && ecx s<= 0x186a0 && arg2[1] s>= 0)
    int32_t ecx_1 = arg2[1]
    
    if (ecx_1 s<= 0x186a0 - ecx)
        int32_t edx = arg2[2]
        
        if (edx s>= 0 && edx s<= 0x186a0 && arg2[3] s>= 0 && arg2[3] s<= 0x186a0 - edx)
            int32_t eax_3 = arg2[4]
            
            if (eax_3 s>= 0 && eax_3 s<= 0x186a0)
                int32_t eax_4 = arg2[5]
                
                if (eax_4 s>= 0 && arg2[5] s<= 0x186a0 - arg2[4])
                    int32_t eax_6 = arg2[6]
                    
                    if (eax_6 s>= 0 && eax_6 s<= 0x186a0 && arg2[7] s>= 5)
                        int32_t eax_7 = 0x186a0 - arg2[6]
                        
                        if (arg2[7] s<= eax_7)
                            int32_t var_8
                            
                            if (sub_6cd450(eax_7, edx - arg2[4], &var_8, ecx_1 - eax_4, 7) == 0)
                                return 2
                            
                            int32_t eax_11 = *arg2 - arg2[4]
                            int32_t var_c
                            
                            if (sub_6cd450(eax_11, arg2[3] - arg2[5], &var_c, eax_11, 7) == 0)
                                return 2
                            
                            int32_t eax_14 = var_8 - var_c
                            int32_t eax_16 = arg2[7] - arg2[5]
                            
                            if (sub_6cd450(eax_16, arg2[2] - arg2[4], &var_8, eax_16, 7) == 0)
                                return 2
                            
                            int32_t eax_19 = arg2[6] - arg2[4]
                            
                            if (sub_6cd450(eax_19, arg2[3] - arg2[5], &var_c, eax_19, 7) == 0)
                                return 2
                            
                            int32_t eax_22 = var_8 - var_c
                            int32_t var_10
                            
                            if (sub_6cd450(eax_22, arg2[7], &var_10, eax_14, eax_22) != 0
                                    && var_10 s> arg2[7])
                                int32_t eax_26 = arg2[6] - arg2[4]
                                
                                if (sub_6cd450(eax_26, arg2[1] - arg2[5], &var_8, eax_26, 7) == 0)
                                    return 2
                                
                                int32_t eax_29 = arg2[7] - arg2[5]
                                
                                if (sub_6cd450(eax_29, *arg2 - arg2[4], &var_c, eax_29, 7) == 0)
                                    return 2
                                
                                int32_t eax_32 = var_8 - var_c
                                
                                if (sub_6cd450(eax_32, arg2[7], &var_c, eax_14, eax_32) != 0)
                                    int32_t ecx_11 = arg2[7]
                                    
                                    if (var_c s> ecx_11)
                                        int32_t eax_34 = sub_6cd500(ecx_11)
                                        int32_t ecx_12 = var_10
                                        var_8 = eax_34
                                        int32_t eax_35 = sub_6cd500(ecx_12)
                                        int32_t ecx_13 = var_c
                                        var_8 -= eax_35
                                        int32_t eax_36 = sub_6cd500(ecx_13)
                                        int32_t ecx_15 = var_8 - eax_36
                                        var_8 = ecx_15
                                        
                                        if (ecx_15 s> 0)
                                            int32_t eax_37 =
                                                sub_6cd450(eax_36, *arg2, arg1, 0x186a0, var_10)
                                            
                                            if (eax_37 != 0)
                                                int32_t eax_38 = sub_6cd450(eax_37, arg2[1], 
                                                    &arg1[1], 0x186a0, var_10)
                                                
                                                if (eax_38 != 0)
                                                    int32_t eax_39 = sub_6cd450(eax_38, 
                                                        0x186a0 - *arg2 - arg2[1], &arg1[2], 
                                                        0x186a0, var_10)
                                                    
                                                    if (eax_39 != 0)
                                                        int32_t eax_40 = sub_6cd450(eax_39, 
                                                            arg2[2], &arg1[3], 0x186a0, var_c)
                                                        
                                                        if (eax_40 != 0)
                                                            int32_t eax_41 = sub_6cd450(eax_40, 
                                                                arg2[3], &arg1[4], 0x186a0, var_c)
                                                            
                                                            if (eax_41 != 0)
                                                                int32_t eax_42 = sub_6cd450(eax_41, 
                                                                    0x186a0 - arg2[3] - arg2[2], &arg1[5], 
                                                                    0x186a0, var_c)
                                                                
                                                                if (eax_42 != 0)
                                                                    int32_t eax_43 = sub_6cd450(eax_42, 
                                                                        arg2[4], &arg1[6], var_8, 0x186a0)
                                                                    
                                                                    if (eax_43 != 0)
                                                                        int32_t eax_44 = sub_6cd450(eax_43, 
                                                                            arg2[5], &arg1[7], var_8, 0x186a0)
                                                                        
                                                                        if (eax_44 != 0)
                                                                            int32_t eax_45 = sub_6cd450(eax_44, 
                                                                                0x186a0 - arg2[5] - arg2[4], &arg1[8], 
                                                                                var_8, 0x186a0)
                                                                            int32_t eax_46 = neg.d(eax_45)
                                                                            return sbb.d(eax_46, eax_46, 
                                                                                eax_45 != 0) + 1

return 1
