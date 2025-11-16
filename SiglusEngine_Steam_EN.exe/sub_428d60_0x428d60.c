// 函数: sub_428d60
// 地址: 0x428d60
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg3
int32_t result = arg6[0x11]

if (arg4 u> 0x1ff)
    *arg6 = 3
else
    int32_t ecx = *(arg4 * 0x6c + 0x1382fc4)
    
    if (ecx == 0 || result s< 0 || result s>= *(arg4 * 0x6c + 0x1382fc8))
        *arg6 = 3
    else
        result *= 2
        int32_t ebx_1 = *(ecx + (result << 3) + 0xc)
        
        if (ebx_1 s<= 0)
            *arg6 = 3
        else
            result = *arg6 - 4
            int32_t eax_9
            bool cond:1_1
            
            switch (result)
                case 0
                    int32_t eax_1 = arg6[0x12]
                    int32_t ecx_1 = arg5
                    
                    if (eax_1 s>= ebx_1 - 1)
                        if (arg6[0x18] != 0 && arg6[0x19] != 0xffffffff)
                            sub_465fd0(arg4, ecx_1, arg6, arg7)
                            return sub_428c70(arg4, arg5, arg6, arg7)
                        
                        int32_t eax_5 = arg6[0x14]
                        
                        if (eax_5 == 0xffffffff)
                            arg6[0x12] = ebx_1 - 1
                            *arg6 = 3
                            return sub_428c70(arg4, ecx_1, arg6, arg7)
                        
                        int32_t var_18_5 = 0
                        sub_428ac0(eax_5, ebx_1 - 1, arg3, arg4, ecx_1, arg6, arg7, eax_5, 
                            arg6[0x15], arg6[0x16], ecx_1, 0, arg6[0x17])
                        ecx_1 = arg5
                    else
                        arg6[0x12] = eax_1 + 1
                        
                        if (eax_1 + 1 s< 0)
                            arg6[0x12] = 0
                    
                    return sub_428c70(arg4, ecx_1, arg6, arg7)
                case 1, 2, 3
                label_428e84:
                    int32_t ecx_5 = arg6[0x12]
                    
                    if (ecx_5 s>= ebx_1 - 1)
                        arg6[0x12] = 0
                        return sub_428c70(arg4, arg5, arg6, arg7)
                    
                    eax_9 = ecx_5 + 1
                    cond:1_1 = eax_9 s>= 0
                label_428e93:
                    arg6[0x12] = eax_9
                    
                    if (cond:1_1)
                        return sub_428c70(arg4, arg5, arg6, arg7)
                    
                    arg6[0x12] = 0
                    return sub_428c70(arg4, arg5, arg6, arg7)
                case 4
                    int32_t eax_11 = arg6[0x12]
                    
                    if (eax_11 s>= ebx_1 - 1)
                        arg6[0x12] = ebx_1 - 1
                        arg6[4] = 1
                        return sub_428c70(arg4, arg5, arg6, arg7)
                    
                    eax_9 = eax_11 + 1
                    cond:1_1 = eax_11 + 1 s>= 0
                    goto label_428e93
                case 5
                    int32_t ecx_6 = arg6[0x12]
                    
                    if (ecx_6 s>= ebx_1 - 1)
                        return sub_428c30(arg4, arg5, arg6, arg7)
                    
                    arg6[0x12] = ecx_6 + 1
                    
                    if (ecx_6 + 1 s< 0)
                        return sub_428c30(arg4, arg5, arg6, arg7)
                    
                    return sub_428c70(arg4, arg5, arg6, arg7)
                case 6
                    result = sub_445700()
                    
                    if (result == 0)
                    label_428f0f:
                        return sub_428c30(arg4, arg5, arg6, arg7)
                    
                    if (result == 1)
                        goto label_428e84
                    
                    if (result == 2)
                        goto label_428f0f

return result
