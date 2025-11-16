// 函数: sub_4bd5f8
// 地址: 0x4bd5f8
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* eax = arg1[0x40]
int32_t edi
int32_t var_24 = edi
int32_t edi_1 = *(arg1[5] + (*eax[4] << 2))
int32_t ebx_1 = *eax & 0xfffff
int32_t result
int32_t var_10
int32_t var_c
int32_t var_8

if (zx.d((arg1[0x32]).w) != 0x104)
    result = sub_4d7429(arg1, 0x40)
    
    if (result s>= 0)
        result = (*(*arg1 + 0x6c))(edi_1, &var_8, 0, &var_c)
        
        if (result s>= 0)
            result = (*(*arg1 + 0x70))(*(arg1[0x40] + 0x10), ebx_1, &var_10, var_c)
            
            if (result s>= 0)
                result = (*(*arg1 + 0x64))(var_8, 0xf0000, 0)
            label_4bd6da:
                
                if (result s>= 0)
                    result = (*(*arg1 + 0x60))()
                    
                    if (result s>= 0)
                        result = sub_4d25aa(arg1)
                        
                        if (result s>= 0)
                            return 0
else
    result = sub_4d7429(arg1, 0x40)
    
    if (result s>= 0)
        result = (*(*arg1 + 0x6c))(edi_1, &var_8, 0, &var_c)
        
        if (result s>= 0)
            result = (*(*arg1 + 0x70))(*(arg1[0x40] + 0x10), ebx_1, &var_10, var_c)
            
            if (result s>= 0)
                result = (*(*arg1 + 0x64))(var_8, 0x70000, 0)
                
                if (result s>= 0)
                    int32_t* edi_2 = *(arg1[0x40] + 8)
                    int32_t var_14
                    result = (*(*arg1 + 0x74))(*(arg1[5] + (*edi_2 << 2)), &var_8, &var_14)
                    
                    if (result s>= 0)
                        void var_18
                        result = (*(*arg1 + 0x78))(edi_2, ebx_1, var_10, &var_18)
                        
                        if (result s>= 0)
                            result = (*(*arg1 + 0x68))(var_8, 0xe40000, var_14)
                            goto label_4bd6da
return result
