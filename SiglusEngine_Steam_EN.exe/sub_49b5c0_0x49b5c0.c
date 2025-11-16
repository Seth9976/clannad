// 函数: sub_49b5c0
// 地址: 0x49b5c0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg3

if (arg12 u<= 0x21 && (&data_976b54)[arg12 * 8] != 0)
    int32_t* edi = arg10
    int32_t ecx = *arg8
    int32_t eax_1 = *edi
    
    if (ecx s> eax_1)
        *arg8 = eax_1
        *edi = ecx
    
    int32_t ecx_1 = *arg9
    int32_t eax_3 = *arg11
    
    if (ecx_1 s> eax_3)
        *arg9 = eax_3
        *arg11 = ecx_1
    
    if (*arg8 s< (&data_976b58)[arg12 * 8] && *edi s>= 0 && *arg9 s< (&data_976b5c)[arg12 * 8]
            && *arg11 s>= 0)
        if (*arg8 s< 0)
            *arg8 = 0
        
        int32_t eax_9 = (&data_976b58)[arg12 * 8]
        
        if (*edi s>= eax_9)
            *edi = eax_9 - 1
        
        if (*arg9 s< 0)
            *arg9 = 0
        
        int32_t eax_11 = (&data_976b5c)[arg12 * 8]
        
        if (*arg11 s>= eax_11)
            *arg11 = eax_11 - 1
        
        if (*edi - *arg8 + 1 s> 0 && *arg11 - *arg9 + 1 s> 0)
            int32_t eax_19 = *arg3
            int32_t eax_23
            int32_t* esi_4
            
            if (eax_19 != 0xffffffff || *arg2 != 0xffffffff || *arg4 != 0xffffffff
                    || *arg5 != 0xffffffff)
                int32_t esi_5 = *arg4
                
                if (eax_19 s> esi_5)
                    *arg3 = esi_5
                    *arg4 = eax_19
                
                int32_t esi_6 = *arg2
                int32_t eax_24 = *arg5
                
                if (esi_6 s> eax_24)
                    *arg2 = eax_24
                    *arg5 = esi_6
                
                esi_4 = arg6
                
                if (*arg3 s< *esi_4 && *arg4 s>= 0)
                    edi = arg10
                    
                    if (*arg2 s< *arg7 && *arg5 s>= 0)
                        if (*arg3 s< 0)
                            *arg3 = 0
                        
                        int32_t eax_29 = *esi_4
                        
                        if (*arg4 s>= eax_29)
                            *arg4 = eax_29 - 1
                        
                        if (*arg2 s< 0)
                            *arg2 = 0
                        
                        eax_23 = *arg7
                        
                        if (*arg5 s< eax_23)
                            goto label_49b74d
                        
                        goto label_49b740
            else
                *arg3 = 0
                esi_4 = arg6
                *arg2 = 0
                *arg4 = *esi_4 - 1
                eax_23 = *arg7
            label_49b740:
                *arg5 = eax_23 - 1
            label_49b74d:
                *esi_4 = *arg4 - *arg3 + 1
                int32_t eax_38 = *arg5 - *arg2 + 1
                *arg7 = eax_38
                
                if (*esi_4 s> 0 && eax_38 s> 0)
                    *arg13 = *arg8
                    *arg14 = *arg9
                    *arg15 = *edi
                    *arg16 = *arg11
                    return 1

return 0
