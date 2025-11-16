// 函数: sub_446b30
// 地址: 0x446b30
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

char* result = data_1af455c
*arg2 = 0
int32_t* edx = arg6
*arg3 = 1
*edx = 0
*arg4 = 0
*arg5 = 0
char* result_1
int32_t* result_2 = result_1
*arg8 = 0
int32_t* arg_10
int32_t* edi = arg_10
*result_2 = 0
*edi = 0
*arg9 = 0

if (result != 0 && *result != 0)
    do
        int32_t* ecx_4
        ecx_4.b = *result
        
        if (ecx_4.b u< 0x80)
        label_446bbe:
            
            if (ecx_4.b != 0x2f)
                result = &result[1]
            else
                ecx_4.b = result[1]
                
                if (ecx_4.b == 0x53 && result[2] == 0x45 && result[3] == 0x45 && result[4] == 0x4e)
                    result_1 = &result[5]
                    int32_t eax_1
                    eax_1, ecx_4 = sub_4d11d0(&result[5], &result_1, &result[5], &arg_10)
                    
                    if (eax_1 != 0)
                        result = result_1
                        edx = arg6
                    else
                        ecx_4 = arg_10
                        
                        if (ecx_4 - 1 u> 0x270e)
                            result = result_1
                            edx = arg6
                        else
                            *arg3 = ecx_4
                            *arg2 = 1
                            result = result_1
                            
                            if (*result != 0x2b)
                                edx = arg6
                            else
                                result_1 = &result[1]
                                int32_t eax_6
                                eax_6, ecx_4 =
                                    sub_4d11d0(&result[1], &result_1, &result[1], &arg_10)
                                
                                if (eax_6 == 0)
                                    int32_t* eax_7 = arg_10
                                    
                                    if (eax_7 u<= 0x63)
                                        *arg4 = eax_7
                                
                                result = result_1
                                edx = arg6
                else if (ecx_4.b != 0x44)
                label_446cd5:
                    
                    if (ecx_4.b == 0x52 && result[2] == 0x45 && result[3] == 0x53
                            && result[4] == 0x54 && result[5] == 0x41 && result[6] == ecx_4.b
                            && result[7] == 0x54)
                        *arg5 = 1
                        result = &result[8]
                    else if (ecx_4.b == 0x45 && result[2] == 0x4e && result[3] == 0x44)
                        *edx = 1
                        result = &result[4]
                    else if (ecx_4.b == 0x57 && result[2] == 0x49 && result[3] == 0x4e
                            && result[4] == 0x44 && result[5] == 0x4f && result[6] == ecx_4.b
                            && result[7] == 0x53 && result[8] == 0x54 && result[9] == 0x41
                            && result[0xa] == 0x52 && result[0xb] == 0x54)
                        result = &result[0xc]
                        *arg7 = 1
                    else if (ecx_4.b == 0x44 && result[2] == 0x49 && result[3] == 0x53
                            && result[4] == 0x43 && result[5] == 0x43 && result[6] == 0x48
                            && result[7] == 0x45 && result[8] == 0x43 && result[9] == 0x4b)
                        result = &result[0xa]
                        *arg8 = 1
                    else if (ecx_4.b != 0x57 || result[2] != 0x4f || result[3] != 0x52
                            || result[4] != 0x4b || result[5] != 0x50 || result[6] != 0x41
                            || result[7] != 0x54 || result[8] != 0x48)
                        result = &result[1]
                    else
                        result_1 = &result[9]
                        sub_446a90((&result[9]).b, &result_1, &result[9], arg9)
                        result = result_1
                        edx = arg6
                else if (result[2] != 0x45 || result[3] != 0x42 || result[4] != 0x55
                        || result[5] != 0x47 || result[6] != 0x4f || result[7] != 0x46
                        || result[8] != 0x46)
                    if (ecx_4.b != 0x44 || result[2] != 0x45 || result[3] != 0x42
                            || result[4] != 0x55 || result[5] != 0x47 || result[6] != 0x4f
                            || result[7] != 0x4e)
                        goto label_446cd5
                    
                    *edi = 1
                    result = &result[8]
                else
                    *result_2 = 1
                    result = &result[9]
        else if (ecx_4.b u< 0xa0)
            if (ecx_4.b u>= 0xfe)
                goto label_446bbe
            
            result = &result[2]
        else
            if (ecx_4.b u<= 0xdf || ecx_4.b u>= 0xfe)
                goto label_446bbe
            
            result = &result[2]
    while (*result != 0)

return result
