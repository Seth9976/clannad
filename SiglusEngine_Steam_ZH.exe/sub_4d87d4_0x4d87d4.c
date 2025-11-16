// 函数: sub_4d87d4
// 地址: 0x4d87d4
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result = sub_4d7429(arg1, 1)

if (result s>= 0)
    int32_t var_1c
    int32_t var_18
    int32_t var_8
    result = (*(*arg1 + 0x6c))(*(arg1[5] + (**(arg1[0x40] + 0x10) << 2)), &var_8, &var_1c, &var_18)
    
    if (result s>= 0)
        void* eax_1 = arg1[0x40]
        int32_t var_c
        result = (*(*arg1 + 0x70))(*(eax_1 + 0x10), *(eax_1 + 0xc), &var_c, var_18)
        
        if (result s>= 0)
            result = (*(*arg1 + 0x64))(var_8, var_c, var_1c)
            
            if (result s>= 0)
                int32_t var_10
                result = (*(*arg1 + 0x74))(*(arg1[5] + (**(arg1[0x40] + 8) << 2)), &var_8, &var_10)
                
                if (result s>= 0)
                    void* eax_4 = arg1[0x40]
                    int32_t var_14
                    result = (*(*arg1 + 0x78))(*(eax_4 + 8), *(eax_4 + 0xc), var_c, &var_14)
                    
                    if (result s>= 0)
                        int32_t eax_5 = var_8
                        int32_t ecx_11 = var_14
                        int32_t ecx_12
                        
                        if ((eax_5 & 0xb000000) == 0)
                            ecx_12 = ecx_11 | &data_1000000
                        else
                            ecx_12 = ecx_11 | 0xc000000
                            eax_5 &= 0xf4ffffff
                        
                        result = (*(*arg1 + 0x68))(eax_5, ecx_12, var_10)
                        
                        if (result s>= 0)
                            result = (*(*arg1 + 0x60))()
                            
                            if (result s>= 0)
                                result = sub_4d25aa(arg1)
                                
                                if (result s>= 0)
                                    return 0

return result
