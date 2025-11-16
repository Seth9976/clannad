// 函数: sub_55dae0
// 地址: 0x55dae0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t result = arg1
int32_t result_1 = result

if (data_1af0a84 != 0 && data_1321ebc != 0)
    int32_t ecx = data_1321eb8
    
    if (ecx s> 0)
        int32_t i = 0
        char* esi_1 = data_20c54bc
        
        if (ecx s> 0)
            int32_t* ecx_1 = data_1321ec0 + 0x20
            int32_t* var_c_1 = ecx_1
            
            do
                int32_t edx_2 = *ecx_1
                int32_t eax_2
                
                if (edx_2 != 0xffffffff)
                    int32_t ecx_2 = 0
                    
                    if (data_12dc4bc != 0)
                        ecx_2 = 0x1a
                    
                    result = result_1
                    int32_t var_10
                    
                    if (sub_4e76e0(&var_10, edx_2, ecx_2 + 0x19, &var_10, &data_704898) == 0)
                        if (result != 0 || *esi_1 != 2)
                            eax_2 = data_1af0a84
                            
                            if (eax_2 != 0)
                                goto label_55dbd1
                            
                        label_55dbec:
                            ecx_1 = var_c_1
                            *esi_1 = 2
                            result = result_1
                        else
                            ecx_1 = var_c_1
                    else if (var_10 == 0)
                        if (result != 0 || *esi_1 != result.b)
                            sub_55dab0(i, &data_6201e8)
                            ecx_1 = var_c_1
                            *esi_1 = 0
                            result = result_1
                        else
                            ecx_1 = var_c_1
                    else if (result != 0 || *esi_1 != 1)
                        sub_55dab0(i, &data_61fd0c)
                        ecx_1 = var_c_1
                        *esi_1 = 1
                        result = result_1
                    else
                        ecx_1 = var_c_1
                else if (result != 0 || *esi_1 != 2)
                    eax_2 = data_1af0a84
                    
                    if (eax_2 != 0)
                    label_55dbd1:
                        int32_t ecx_6 = data_1333e3c
                        
                        if (ecx_6 != 0)
                            ecx_6(2, &data_61c90c, i, i, eax_2, 0x4f32)
                        
                        goto label_55dbec
                    
                    *esi_1 = 2
                    result = result_1
                ecx_1 = &ecx_1[0xf]
                i += 1
                esi_1 = &esi_1[1]
                var_c_1 = ecx_1
            while (i s< data_1321eb8)

return result
