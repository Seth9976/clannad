// 函数: sub_4d75f7
// 地址: 0x4d75f7
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx = arg2
int32_t result = sub_4d7429(arg1, (*(*arg1 + 0x5c))(ebx))

if (result s>= 0)
    int32_t edi
    int32_t var_24_2 = edi
    int32_t var_18
    int32_t var_14
    int32_t var_8
    result = (*(*arg1 + 0x6c))(*(arg1[5] + (*arg3 << 2)), &var_8, &var_18, &var_14)
    
    if (result s>= 0)
        result = (*(*arg1 + 0x70))(arg3, arg4, &arg2, var_14)
        
        if (result s>= 0)
            int32_t ecx_5 = neg.d(arg12)
            result = (*(*arg1 + 0x64))((sbb.d(ecx_5, ecx_5, arg12 != 0) & &__dos_header) | var_8, 
                arg2, var_18)
            
            if (result s>= 0)
                if (ebx == 8)
                    arg2 = 0x70000
                else if (ebx == 9)
                    arg2 = 0xf0000
                else if (ebx == 0x5a)
                    arg2 = 0x30000
                else if (ebx == 6 || ebx == 0xe || ebx == 0xf || ebx == 7)
                    arg2 = 0x10000
                else if (ebx == 0x25)
                    arg2 = 0xf0000
                
                int32_t var_10
                int32_t var_c
                
                if (arg5 == 0)
                label_4d772c:
                    
                    if (arg6 == 0)
                    label_4d7784:
                        
                        if (arg7 == 0)
                        label_4d77d5:
                            result = (*(*arg1 + 0x60))()
                            
                            if (result s>= 0)
                                result = sub_4d25aa(arg1)
                                
                                if (result s>= 0)
                                    result = 0
                        else
                            result = (*(*arg1 + 0x74))(*(arg1[5] + (*arg7 << 2)), &var_8, &var_c)
                            
                            if (result s>= 0)
                                result = (*(*arg1 + 0x78))(arg7, arg8, arg2, &var_10)
                                
                                if (result s>= 0)
                                    result = (*(*arg1 + 0x68))(var_8 ^ arg11, var_10, var_c)
                                    
                                    if (result s>= 0)
                                        goto label_4d77d5
                    else
                        result = (*(*arg1 + 0x74))(*(arg1[5] + (*arg6 << 2)), &var_8, &var_c)
                        
                        if (result s>= 0)
                            result = (*(*arg1 + 0x78))(arg6, arg8, arg2, &var_10)
                            
                            if (result s>= 0)
                                result = (*(*arg1 + 0x68))(var_8 ^ arg10, var_10, var_c)
                                
                                if (result s>= 0)
                                    goto label_4d7784
                else
                    result = (*(*arg1 + 0x74))(*(arg1[5] + (*arg5 << 2)), &var_8, &var_c)
                    
                    if (result s>= 0)
                        result = (*(*arg1 + 0x78))(arg5, arg8, arg2, &var_10)
                        
                        if (result s>= 0)
                            result = (*(*arg1 + 0x68))(var_8 ^ arg9, var_10, var_c)
                            
                            if (result s>= 0)
                                goto label_4d772c

return result
