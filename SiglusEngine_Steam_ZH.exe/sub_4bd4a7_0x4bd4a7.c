// 函数: sub_4bd4a7
// 地址: 0x4bd4a7
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_20 = edi
int32_t edi_2 = *arg1[0x40] & 0xfffff
int32_t result
int32_t var_8

if (zx.d((arg1[0x32]).w) != 0x104)
    result = sub_4d7429(arg1, 0x42)
    
    if (result s>= 0)
        result = (*(*arg1 + 0x6c))(*(arg1[5] + (**(arg1[0x40] + 0x10) << 2)), &var_8, 0, 0)
        
        if (result s>= 0)
            result = (*(*arg1 + 0x64))(var_8, 0xf0000, 0)
            
            if (result s>= 0)
                result = (*(*arg1 + 0x60))()
                
                if (result s>= 0)
                    result = sub_4d25aa(arg1)
                    
                    if (result s>= 0)
                        return 0
else
    result = sub_4d7429(arg1, 0x42)
    
    if (result s>= 0)
        result = (*(*arg1 + 0x6c))(*(arg1[5] + (**(arg1[0x40] + 0x10) << 2)), &var_8, 0, 0)
        
        if (result s>= 0)
            result = (*(*arg1 + 0x64))(var_8, 0xf0000, 0)
            
            if (result s>= 0)
                int32_t* edi_3 = *(arg1[0x40] + 8) + (edi_2 << 2)
                int32_t var_10
                result = (*(*arg1 + 0x74))(*(arg1[5] + (*edi_3 << 2)), &var_8, &var_10)
                
                if (result s>= 0)
                    int32_t var_14
                    result = (*(*arg1 + 0x78))(edi_3, edi_2, 0xf0000, &var_14)
                    
                    if (result s>= 0)
                        result = (*(*arg1 + 0x68))(var_8, var_14, var_10)
                        
                        if (result s>= 0)
                            result = (*(*arg1 + 0x60))()
                            
                            if (result s>= 0)
                                result = sub_4d25aa(arg1)
                                
                                if (result s>= 0)
                                    return 0
return result
