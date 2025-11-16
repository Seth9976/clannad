// 函数: sub_4d8b14
// 地址: 0x4d8b14
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_30 = edi
int32_t edi_2 = *arg1[0x40] & 0xfffff
int32_t result = sub_4d7429(arg1, (*(*arg1 + 0x5c))(4))

if (result s>= 0)
    int32_t var_1c
    int32_t var_18
    int32_t var_c
    result = (*(*arg1 + 0x6c))(*(arg1[5] + (**(arg1[0x40] + 0x10) << 2)), &var_c, &var_1c, &var_18)
    
    if (result s>= 0)
        int32_t var_10
        result = (*(*arg1 + 0x70))(*(arg1[0x40] + 0x10), edi_2, &var_10, var_18)
        
        if (result s>= 0)
            result = (*(*arg1 + 0x64))(var_c, var_10, var_1c)
            
            if (result s>= 0)
                int32_t var_8_1 = 0
                
                while (true)
                    int32_t* eax_6 = arg1[0x40]
                    int32_t* ebx_1 = eax_6[2] + ((var_8_1 * edi_2) << 2)
                    void* var_14_1
                    
                    if (var_8_1 != 1 || (*eax_6 & 0xfff00000) != 0x70400000)
                        var_14_1 = nullptr
                    else
                        var_14_1 = &data_1000000
                    
                    int32_t var_20
                    result = (*(*arg1 + 0x74))(*(arg1[5] + (*ebx_1 << 2)), &var_c, &var_20)
                    
                    if (result s< 0)
                        break
                    
                    int32_t var_24
                    result = (*(*arg1 + 0x78))(ebx_1, edi_2, var_10, &var_24)
                    
                    if (result s< 0)
                        break
                    
                    result = (*(*arg1 + 0x68))(var_14_1 ^ var_c, var_24, var_20)
                    
                    if (result s< 0)
                        break
                    
                    var_8_1 += 1
                    
                    if (var_8_1 u>= 3)
                        result = (*(*arg1 + 0x60))()
                        
                        if (result s>= 0)
                            result = sub_4d25aa(arg1)
                            
                            if (result s>= 0)
                                return 0
                        
                        break

return result
