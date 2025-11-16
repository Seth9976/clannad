// 函数: sub_6ad030
// 地址: 0x6ad030
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int16_t* edi = nullptr
int32_t result = 0xffffffff
int32_t result_1 = 0
int16_t* var_8 = nullptr
int32_t var_c = 0
int32_t ebx = 0xf423f

if (arg6 != 0)
    int16_t* edi_1 = arg1
    
    if (arg6 != 1)
        int32_t eax_11 = arg4
        
        if (edi_1 u>= eax_11)
            int32_t ecx_7 = arg5
            
            while (edi_1 u< ecx_7)
                int16_t* eax_15
                int32_t ecx_8
                
                if (sub_6ad230(edi_1, eax_11, ecx_7) != arg6)
                    eax_15 = var_8
                    ecx_8 = var_c
                else
                    int32_t eax_13 = sx.d(*edi_1)
                    ecx_8 = var_c
                    
                    if (eax_13 s>= arg7)
                        int32_t eax_14 = eax_13 - arg7
                        
                        if (ecx_8 == 0 || eax_14 s< ebx)
                            ebx = eax_14
                            result = result_1
                            eax_15 = edi_1
                            ecx_8 = 1
                            var_8 = eax_15
                            var_c = 1
                        else
                            eax_15 = var_8
                    else if (ecx_8 != 0)
                        eax_15 = var_8
                    else
                        int32_t ecx_10 = arg7 - eax_13
                        
                        if (ecx_10 s>= ebx)
                            eax_15 = var_8
                            ecx_8 = var_c
                        else
                            eax_15 = edi_1
                            result = result_1
                            ebx = ecx_10
                            var_8 = eax_15
                            ecx_8 = var_c
                
                if (eax_15 != 0 && ebx s<= 0x64)
                    break
                
                result_1 += 1
                edi_1 = &edi_1[arg8]
                
                if (result_1 s>= arg2)
                    break
                
                if (result_1 s>= arg3 && ecx_8 != 0)
                    break
                
                eax_11 = arg4
                ecx_7 = arg5
                
                if (edi_1 u< eax_11)
                    break
    else
        int32_t ecx_3 = arg4
        
        if (edi_1 u>= ecx_3)
            int32_t eax_4 = arg5
            
            while (edi_1 u< eax_4)
                int16_t* eax_7
                int32_t ecx_6
                
                if (sub_6ad230(edi_1, ecx_3, eax_4) != 1)
                    ecx_6 = var_c
                    eax_7 = var_8
                else
                    int32_t eax_6 = sx.d(*edi_1)
                    
                    if (eax_6 s> arg7)
                        ecx_6 = var_c
                        
                        if (ecx_6 != 0)
                            eax_7 = var_8
                        else
                            int32_t eax_8 = eax_6 - arg7
                            
                            if (eax_8 s>= ebx)
                                eax_7 = var_8
                            else
                                ebx = eax_8
                                result = result_1
                                eax_7 = edi_1
                                var_8 = eax_7
                    else
                        int32_t ecx_5 = arg7 - eax_6
                        
                        if (var_c == 0 || ecx_5 s< ebx)
                            ebx = ecx_5
                            result = result_1
                            eax_7 = edi_1
                            ecx_6 = 1
                            var_8 = eax_7
                            var_c = 1
                        else
                            ecx_6 = var_c
                            eax_7 = var_8
                
                if (eax_7 != 0 && ebx s<= 0x64)
                    break
                
                result_1 += 1
                edi_1 = &edi_1[arg8]
                
                if (result_1 s>= arg2)
                    break
                
                if (result_1 s>= arg3 && ecx_6 != 0)
                    break
                
                ecx_3 = arg4
                eax_4 = arg5
                
                if (edi_1 u< ecx_3)
                    return result
else
    int16_t* edx_1 = arg1
    
    if (edx_1 u>= arg4)
        while (edx_1 u< arg5)
            int32_t eax_1 = sx.d(*edx_1)
            int32_t ecx_2 = arg7 - eax_1
            
            if (arg7 - eax_1 s< 0)
                ecx_2 = neg.d(ecx_2)
            
            if (ecx_2 s< ebx)
                ebx = ecx_2
                result = result_1
                edi = edx_1
            
            if (edi != 0 && ebx s<= 0x64)
                break
            
            result_1 += 1
            edx_1 = &edx_1[arg8]
            
            if (result_1 s>= arg2)
                break
            
            if (result_1 s>= arg3 && edi != 0)
                break
            
            if (edx_1 u< arg4)
                return result

return result
