// 函数: sub_4ce140
// 地址: 0x4ce140
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t result_1 = 0
int16_t* var_8 = nullptr
int16_t* esi = arg3
int32_t result = 0xffffffff
int32_t ebx = 0xf423f
int32_t var_c = 0

if (arg7 != 0)
    int32_t ecx_3 = arg5
    
    if (arg7 != 1)
        if (esi u>= ecx_3)
            int32_t eax_11 = arg6
            
            while (esi u< eax_11)
                int16_t* eax_15
                int32_t ecx_9
                
                if (sub_4ce0e0(eax_11, ecx_3, esi, eax_11) != arg7)
                    eax_15 = var_8
                    ecx_9 = var_c
                else
                    int32_t eax_13 = sx.d(*esi)
                    ecx_9 = var_c
                    
                    if (eax_13 s>= arg8)
                        int32_t eax_14 = eax_13 - arg8
                        
                        if (ecx_9 == 0 || eax_14 s< ebx)
                            ebx = eax_14
                            result = result_1
                            eax_15 = esi
                            ecx_9 = 1
                            var_8 = eax_15
                            var_c = 1
                        else
                            eax_15 = var_8
                    else if (ecx_9 != 0)
                        eax_15 = var_8
                    else
                        int32_t ecx_11 = arg8 - eax_13
                        
                        if (ecx_11 s>= ebx)
                            eax_15 = var_8
                            ecx_9 = var_c
                        else
                            eax_15 = esi
                            result = result_1
                            ebx = ecx_11
                            var_8 = eax_15
                            ecx_9 = var_c
                
                if (eax_15 != 0 && ebx s<= 0x64)
                    break
                
                result_1 += 1
                esi = &esi[arg9]
                
                if (result_1 s>= arg2)
                    break
                
                if (result_1 s>= arg4 && ecx_9 != 0)
                    break
                
                ecx_3 = arg5
                eax_11 = arg6
                
                if (esi u< ecx_3)
                    break
    else if (esi u>= ecx_3)
        int32_t eax_4 = arg6
        
        while (esi u< eax_4)
            int16_t* eax_7
            int32_t ecx_7
            
            if (sub_4ce0e0(eax_4, ecx_3, esi, eax_4) != 1)
                ecx_7 = var_c
                eax_7 = var_8
            else
                int32_t eax_6 = sx.d(*esi)
                
                if (eax_6 s> arg8)
                    ecx_7 = var_c
                    
                    if (ecx_7 != 0)
                        eax_7 = var_8
                    else
                        int32_t eax_8 = eax_6 - arg8
                        
                        if (eax_8 s>= ebx)
                            eax_7 = var_8
                        else
                            ebx = eax_8
                            result = result_1
                            eax_7 = esi
                            var_8 = eax_7
                else
                    int32_t ecx_6 = arg8 - eax_6
                    
                    if (var_c == 0 || ecx_6 s< ebx)
                        ebx = ecx_6
                        result = result_1
                        eax_7 = esi
                        ecx_7 = 1
                        var_8 = eax_7
                        var_c = 1
                    else
                        ecx_7 = var_c
                        eax_7 = var_8
            
            if (eax_7 != 0 && ebx s<= 0x64)
                break
            
            result_1 += 1
            esi = &esi[arg9]
            
            if (result_1 s>= arg2)
                break
            
            if (result_1 s>= arg4 && ecx_7 != 0)
                break
            
            ecx_3 = arg5
            eax_4 = arg6
            
            if (esi u< ecx_3)
                return result
else if (esi u>= arg5)
    while (esi u< arg6)
        int32_t eax_1 = sx.d(*esi)
        int32_t ecx_1 = arg8 - eax_1
        
        if (arg8 - eax_1 s< 0)
            ecx_1 = neg.d(ecx_1)
        
        int16_t* eax_2
        
        if (ecx_1 s>= ebx)
            eax_2 = var_8
        else
            eax_2 = esi
            result = result_1
            ebx = ecx_1
            var_8 = eax_2
        
        if (eax_2 != 0 && ebx s<= 0x64)
            break
        
        result_1 += 1
        esi = &esi[arg9]
        
        if (result_1 s>= arg2)
            break
        
        if (result_1 s>= arg4 && eax_2 != 0)
            break
        
        if (esi u< arg5)
            return result

return result
