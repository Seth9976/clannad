// 函数: sub_4bd3d5
// 地址: 0x4bd3d5
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_1c = edi
int32_t edi_2 = *arg1[0x40] & 0xfffff
int32_t result = sub_4d7429(arg1, 0x42)

if (result s>= 0)
    int32_t var_8
    result = (*(*arg1 + 0x6c))(*(arg1[5] + (**(arg1[0x40] + 0x10) << 2)), &var_8, 0, 0)
    
    if (result s>= 0)
        result = (*(*arg1 + 0x64))(var_8, 0xf0000, 0)
        
        if (result s>= 0)
            int32_t* ebx_1 = *(arg1[0x40] + 8) + (edi_2 << 2)
            int32_t var_c
            result = (*(*arg1 + 0x74))(*(arg1[5] + (*ebx_1 << 2)), &var_8, &var_c)
            
            if (result s>= 0)
                void var_10
                result = (*(*arg1 + 0x78))(ebx_1, edi_2, 0xf0000, &var_10)
                
                if (result s>= 0)
                    result = (*(*arg1 + 0x68))(var_8, 0xaf40000, var_c)
                    
                    if (result s>= 0)
                        result = (*(*arg1 + 0x60))()
                        
                        if (result s>= 0)
                            result = sub_4d25aa(arg1)
                            
                            if (result s>= 0)
                                return 0

return result
