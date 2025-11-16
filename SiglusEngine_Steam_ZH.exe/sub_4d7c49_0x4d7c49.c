// 函数: sub_4d7c49
// 地址: 0x4d7c49
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* ecx = arg1[0x40]
int32_t eax = ecx[3]
int32_t edi
int32_t var_3c = edi
int32_t edi_2 = *ecx & 0xfffff
int32_t* var_1c
sub_49e7de(ecx, 0, &var_1c)
int32_t* var_18
sub_49e7de(arg1[0x40], 1, &var_18)
int32_t* var_20
sub_49e7de(arg1[0x40], 2, &var_20)
int32_t* var_24
sub_49e7de(arg1[0x40], 3, &var_24)
int32_t* ebx = *(arg1[0x40] + 0x10)
int32_t result = sub_4d7429(arg1, (*(*arg1 + 0x5c))(0x5d))

if (result s>= 0)
    int32_t var_30
    int32_t var_28
    int32_t var_8
    result = (*(*arg1 + 0x6c))(*(arg1[5] + (*ebx << 2)), &var_8, &var_30, &var_28)
    
    if (result s>= 0)
        int32_t var_14
        result = (*(*arg1 + 0x70))(ebx, eax, &var_14, var_28)
        
        if (result s>= 0)
            result = (*(*arg1 + 0x64))(var_8, var_14, var_30)
            
            if (result s>= 0)
                int32_t var_c
                result = (*(*arg1 + 0x74))(*(arg1[5] + (*var_18 << 2)), &var_8, &var_c)
                
                if (result s>= 0)
                    int32_t var_10
                    result = (*(*arg1 + 0x78))(var_18, edi_2, var_14, &var_10)
                    
                    if (result s>= 0)
                        result = (*(*arg1 + 0x68))(var_8, var_10, var_c)
                        
                        if (result s>= 0)
                            result = (*(*arg1 + 0x74))(*(arg1[5] + (*var_1c << 2)), &var_8, &var_c)
                            
                            if (result s>= 0)
                                result = (*(*arg1 + 0x78))(var_1c, edi_2, var_14, &var_10)
                                
                                if (result s>= 0)
                                    result = (*(*arg1 + 0x68))(var_8, var_10, var_c)
                                    
                                    if (result s>= 0)
                                        result = (*(*arg1 + 0x74))(*(arg1[5] + (*var_20 << 2)), 
                                            &var_8, &var_c)
                                        
                                        if (result s>= 0)
                                            result =
                                                (*(*arg1 + 0x78))(var_20, edi_2, var_14, &var_10)
                                            
                                            if (result s>= 0)
                                                result = (*(*arg1 + 0x68))(var_8, var_10, var_c)
                                                
                                                if (result s>= 0)
                                                    result = (*(*arg1 + 0x74))(
                                                        *(arg1[5] + (*var_24 << 2)), &var_8, &var_c)
                                                    
                                                    if (result s>= 0)
                                                        result = (*(*arg1 + 0x78))(var_24, edi_2, 
                                                            var_14, &var_10)
                                                        
                                                        if (result s>= 0)
                                                            result =
                                                                (*(*arg1 + 0x68))(var_8, var_10, var_c)
                                                            
                                                            if (result s>= 0)
                                                                result = (*(*arg1 + 0x60))()
                                                                
                                                                if (result s>= 0)
                                                                    result = sub_4d25aa(arg1)
                                                                    
                                                                    if (result s>= 0)
                                                                        return 0

return result
