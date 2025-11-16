// 函数: sub_4d8953
// 地址: 0x4d8953
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_30 = edi
int32_t ebx_1 = *arg1[0x40] & 0xfffff
int32_t result = sub_4d7429(arg1, (*(*arg1 + 0x5c))(0x12))

if (result s>= 0)
    int32_t var_1c
    int32_t var_18
    int32_t var_8
    result = (*(*arg1 + 0x6c))(*(arg1[5] + (**(arg1[0x40] + 0x10) << 2)), &var_8, &var_1c, &var_18)
    
    if (result s>= 0)
        int32_t var_14
        result = (*(*arg1 + 0x70))(*(arg1[0x40] + 0x10), ebx_1, &var_14, var_18)
        
        if (result s>= 0)
            result = (*(*arg1 + 0x64))(var_8, var_14, var_1c)
            
            if (result s>= 0)
                int32_t var_10_1 = 0
                int32_t var_c_1 = 0
                
                while (true)
                    int32_t* edi_2 = *(arg1[0x40] + 8) + var_c_1
                    int32_t var_20
                    result = (*(*arg1 + 0x74))(*(arg1[5] + (*edi_2 << 2)), &var_8, &var_20)
                    
                    if (result s< 0)
                        break
                    
                    int32_t var_24
                    result = (*(*arg1 + 0x78))(edi_2, ebx_1, var_14, &var_24)
                    
                    if (result s< 0)
                        break
                    
                    result = (*(*arg1 + 0x68))(var_8, var_24, var_20)
                    
                    if (result s< 0)
                        break
                    
                    var_10_1 += 1
                    var_c_1 += ebx_1 << 2
                    
                    if (var_10_1 u>= 3)
                        result = (*(*arg1 + 0x60))()
                        
                        if (result s>= 0)
                            result = sub_4d25aa(arg1)
                            
                            if (result s>= 0)
                                return 0
                        
                        break

return result
