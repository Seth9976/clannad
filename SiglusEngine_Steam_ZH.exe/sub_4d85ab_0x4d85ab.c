// 函数: sub_4d85ab
// 地址: 0x4d85ab
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax_1 = *arg1[0x40]
int32_t edi
int32_t var_1c = edi
int32_t eax_2 = eax_1 & 0xfff00000
int32_t ecx = 0
int32_t edi_2 = eax_1 & 0xfffff

if (eax_2 == 0x73000000)
    ecx = 2
else if (eax_2 == 0x73900000)
    ecx = 3
else if (eax_2 == 0x73a00000)
    ecx = 4
else if (eax_2 == 0x73b00000)
    ecx = 5
else if (eax_2 == 0x73c00000)
    ecx = 2

int32_t result = sub_4d7429(arg1, ecx << 0x10 | 0x29)

if (result s>= 0)
    int32_t var_10
    int32_t var_8
    result = (*(*arg1 + 0x74))(*(arg1[5] + (**(arg1[0x40] + 8) << 2)), &var_10, &var_8)
    
    if (result s>= 0)
        int32_t var_c
        result = (*(*arg1 + 0x78))(*(arg1[0x40] + 8), edi_2, 0xf0000, &var_c)
        
        if (result s>= 0)
            result = (*(*arg1 + 0x68))(var_10, var_c, var_8)
            
            if (result s>= 0)
                int32_t ebx_2 = edi_2 << 2
                result = (*(*arg1 + 0x74))(*(arg1[5] + (*(ebx_2 + *(arg1[0x40] + 8)) << 2)), 
                    &var_10, &var_8)
                
                if (result s>= 0)
                    result = (*(*arg1 + 0x78))(*(arg1[0x40] + 8) + ebx_2, edi_2, 0xf0000, &var_c)
                    
                    if (result s>= 0)
                        result = (*(*arg1 + 0x68))(var_10, var_c, var_8)
                        
                        if (result s>= 0)
                            result = (*(*arg1 + 0x60))()
                            
                            if (result s>= 0)
                                result = sub_4d25aa(arg1)
                                
                                if (result s>= 0)
                                    return 0

return result
