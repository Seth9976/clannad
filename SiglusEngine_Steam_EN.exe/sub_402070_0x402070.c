// 函数: sub_402070
// 地址: 0x402070
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax
int32_t edx
eax, edx = sub_401ce0(arg1, 0xffffffff)
int32_t var_6c = eax
int32_t var_68 = edx

if (arg1[0x16] s>= 2)
    if (arg1[1] == 0)
        return 0xffffff76
    
    if (arg3 s>= 0 && (arg3 s> 0 || arg2 u>= 0) && arg3 s<= edx && (arg3 s< edx || arg2 u<= eax))
        int32_t ecx_3 = arg1[0xd]
        int32_t i = ecx_3 - 1
        int32_t i_1 = i
        
        if (ecx_3 - 1 s>= 0)
            int32_t* esi_3 = arg1[0x11] + (i << 4) + 8
            
            do
                int32_t ebx_2 = *esi_3
                int32_t temp6_1 = eax
                eax -= ebx_2
                edx = sbb.d(edx, esi_3[1], temp6_1 u< ebx_2)
                
                if (arg3 s> edx)
                    break
                
                if (arg3 s>= edx && arg2 u>= eax)
                    break
                
                i -= 1
                esi_3 -= 0x10
            while (i s>= 0)
            
            i_1 = i
            var_68 = edx
            var_6c = eax
        
        int32_t esi_4 = arg1[0xe]
        int32_t ebx_4 = *(esi_4 + (i << 3) + 4)
        int32_t var_80 = *(esi_4 + (i << 3) + 0xc)
        int32_t result_5 = *(esi_4 + (i << 3))
        int32_t result_1 = *(esi_4 + (i << 3) + 8)
        int32_t result_6 = result_5
        int32_t* ecx_5 = (i << 4) + arg1[0x11]
        int32_t result_2 = result_5
        int32_t var_4c = ebx_4
        int32_t edi_2 = *ecx_5
        int32_t esi_5 = ecx_5[2]
        int32_t eax_4 = ecx_5[1]
        int32_t var_58 = edi_2
        int32_t var_48 = esi_5 + edi_2
        int32_t var_44 = adc.d(ecx_5[3], eax_4, esi_5 + edi_2 u< esi_5)
        int32_t ecx_9 = edi_2 - var_6c
        int32_t var_54 = eax_4
        int32_t ecx_10 = ecx_9 + arg2
        int32_t eax_6 = adc.d(sbb.d(eax_4, var_68, edi_2 u< var_6c), arg3, ecx_9 + arg2 u< ecx_9)
        int32_t result
        int32_t result_8
        
        if (ebx_4 s<= var_80 && (ebx_4 s< var_80 || result_5 u< result_1))
            while (true)
                int32_t ecx_13 = result_1 - result_6
                int32_t eax_9 = sbb.d(var_80, ebx_4, result_1 u< result_6)
                int32_t esi_9
                int32_t result_7
                
                if (eax_9 s> 0 || (eax_9 s>= 0 && ecx_13 u>= 0x2134))
                    int32_t eax_10
                    uint32_t edx_4
                    eax_10, edx_4 = __allmul(ecx_10 - var_58, 
                        sbb.d(eax_6, var_54, ecx_10 u< var_58), ecx_13, eax_9)
                    uint32_t eax_11
                    int32_t edx_5
                    eax_11, edx_5 = __alldiv(eax_10, edx_4, var_48 - var_58, 
                        sbb.d(var_44, var_54, var_48 u< var_58))
                    int32_t edi_9 = eax_11 + result_6
                    result_7 = edi_9 - 0x2134
                    esi_9 =
                        sbb.d(adc.d(edx_5, ebx_4, eax_11 + result_6 u< eax_11), 0, edi_9 u< 0x2134)
                    
                    if (esi_9 s<= ebx_4 && (esi_9 s< ebx_4 || result_7 u<= result_6))
                        result_7 = result_6 + 1
                        esi_9 = adc.d(ebx_4, 0, result_6 u>= 0xffffffff)
                else
                    result_7 = result_6
                    esi_9 = ebx_4
                
                sub_401760(arg1, result_7, esi_9)
                
                while (true)
                    int32_t eax_13 = arg1[2]
                    void var_30
                    int32_t result_3
                    int32_t edx_8
                    result_3, edx_8 = sub_4013c0(arg1, &var_30, result_1 - eax_13, 
                        sbb.d(var_80, arg1[3], result_1 u< eax_13))
                    result = result_3
                    
                    if (result_3 == 0xffffff80 && edx_8 == 0xffffffff)
                        goto label_40262f
                    
                    if (edx_8 s> 0 || (edx_8 s>= 0 && result u>= 0))
                        int32_t eax_21
                        int32_t edx_11
                        eax_21, edx_11 = sub_40fef0(&var_30)
                        
                        if ((eax_21 & edx_11) != 0xffffffff)
                            if (edx_11 s> eax_6 || (edx_11 s>= eax_6 && eax_21 u>= ecx_10))
                                result_8 = result_6 + 1
                                int32_t ecx_29 = adc.d(ebx_4, 0, result_6 u>= 0xffffffff)
                                
                                if (esi_9 s< ecx_29)
                                    goto label_402422
                                
                                if (esi_9 s<= ecx_29 && result_7 u<= result_8)
                                    goto label_402422
                                
                                if (result_1 != arg1[2] || var_80 != arg1[3])
                                    var_48 = eax_21
                                    result_1 = result
                                    var_80 = edx_8
                                    var_44 = edx_11
                                label_4023fb:
                                    
                                    if (ebx_4 s< var_80)
                                        break
                                    
                                    if (ebx_4 s> var_80)
                                        goto label_402422
                                    
                                    if (result_6 u< result_1)
                                        break
                                    
                                    goto label_402422
                                
                                int32_t result_10 = result_7
                                result_7 -= 0x2134
                                result_1 = result
                                esi_9 = adc.d(esi_9, 0xffffffff, result_10 u>= 0x2134)
                                var_80 = edx_8
                                
                                if (esi_9 s<= ebx_4 && (esi_9 s< ebx_4 || result_7 u<= result_6))
                                    result_7 = result_8
                                    esi_9 = ecx_29
                                
                                sub_401760(arg1, result_7, esi_9)
                            else
                                result_7 = arg1[2]
                                result_2 = result
                                var_4c = edx_8
                                ebx_4 = arg1[3]
                                var_58 = eax_21
                                int32_t eax_23 = sbb.d(eax_6, edx_11, ecx_10 u< eax_21)
                                result_6 = result_7
                                var_54 = edx_11
                                
                                if (eax_23 s> 0 || (eax_23 s>= 0 && ecx_10 - eax_21 u> 0xac44))
                                    goto label_4023fb
                                
                                esi_9 = ebx_4
                    else
                        int32_t eax_20 = adc.d(ebx_4, 0, result_6 u>= 0xffffffff)
                        
                        if (esi_9 s< eax_20)
                            goto label_402422
                        
                        if (esi_9 s<= eax_20 && result_7 u<= result_6 + 1)
                            goto label_402422
                        
                        if ((result_7 | esi_9) == 0)
                            goto label_40262f
                        
                        int32_t result_9 = result_7
                        result_7 -= 0x2134
                        esi_9 = adc.d(esi_9, 0xffffffff, result_9 u>= 0x2134)
                        
                        if (esi_9 s<= ebx_4 && (esi_9 s< ebx_4 || result_7 u<= result_6))
                            result_7 = result_6 + 1
                            esi_9 = eax_20
                        
                        sub_401760(arg1, result_7, esi_9)
                    
                    if (ebx_4 s> var_80)
                        goto label_402422
                    
                    if (ebx_4 s>= var_80)
                        if (result_6 u>= result_1)
                            goto label_402422
        
    label_402422:
        sub_401760(arg1, result_2, var_4c)
        arg1[0x14] = 0xffffffff
        arg1[0x15] = 0xffffffff
        int32_t eax_27
        int32_t edx_14
        eax_27, edx_14 = sub_4013c0(arg1, &result_8, 0xffffffff, 0xffffffff)
        
        if (edx_14 s<= 0 && (edx_14 s< 0 || eax_27 u< 0))
            return 0xfffffffe
        
        if (i_1 == arg1[0x18])
            sub_403fc0(&arg1[0x78])
        else
            sub_401ca0(arg1)
            arg1[0x18] = i_1
            arg1[0x17] = sub_40ffd0(&result_8)
            arg1[0x16] = 3
        
        sub_4107c0(&arg1[0x1e], arg1[0x17])
        sub_410460(&arg1[0x1e], &result_8)
        
        while (true)
            void var_20
            int32_t eax_33
            int32_t edx_16
            edx_16:eax_33 = sx.q(sub_410930(&arg1[0x1e], &var_20))
            
            if ((eax_33 | edx_16) == 0)
                sub_401760(arg1, result_2, var_4c)
                
                while (true)
                    int32_t result_4
                    int32_t edx_19
                    result_4, edx_19 = sub_401640(arg1, &result_8)
                    result = result_4
                    
                    if (edx_19 s< 0)
                        break
                    
                    if (edx_19 s<= 0 && result_4 u< 0)
                        break
                    
                    int32_t eax_35
                    int32_t edx_20
                    eax_35, edx_20 = sub_40fef0(&result_8)
                    void* eax_36
                    
                    if (edx_20 s<= 0xffffffff && (edx_20 s< 0xffffffff || eax_35 u<= 0xffffffff))
                        eax_36 = sub_40fec0(&result_8)
                    
                    if (edx_20 s> 0xffffffff || (edx_20 s>= 0xffffffff && eax_35 u> 0xffffffff)
                            || eax_36 == 0)
                        return sub_401d50(arg1, result_4, edx_19)
                    
                    arg1[2] = result_4
                    arg1[3] = edx_19
                
                break
            
            int32_t var_10
            int32_t var_c
            
            if (edx_16 s< 0 || (edx_16 s<= 0 && eax_33 u< 0))
                result = 0xffffff78
            else if ((var_10 & var_c) != 0xffffffff)
                int32_t* edx_23 = (arg1[0x18] << 4) + arg1[0x11]
                bool c_17 = var_10 u< *edx_23
                int32_t esi_19 = edx_23[1]
                arg1[0x14] = var_10 - *edx_23
                int32_t ecx_38 = sbb.d(var_c, esi_19, c_17)
                arg1[0x15] = ecx_38
                
                if (ecx_38 s<= 0 && (ecx_38 s< 0 || arg1[0x14] u< 0))
                    arg1[0x14] = 0
                    arg1[0x15] = 0
                
                int32_t esi_20 = arg1[0x14]
                arg1[0x14] = esi_20 + var_6c
                int32_t edx_25 = adc.d(arg1[0x15], var_68, esi_20 + var_6c u< esi_20)
                arg1[0x15] = edx_25
                
                if (edx_25 s<= arg3 && (edx_25 s< arg3 || arg1[0x14] u<= arg2))
                    int32_t eax_42
                    int32_t edx_26
                    eax_42, edx_26 = sub_401ce0(arg1, 0xffffffff)
                    
                    if (arg3 s<= edx_26 && (arg3 s< edx_26 || arg2 u<= eax_42))
                        arg1[0x1a] = 0
                        arg1[0x1c] = 0
                        arg1[0x1b] = 0
                        arg1[0x1d] = 0
                        return 0
                
                result = 0xffffff7f
            else
                sub_4107e0(&arg1[0x1e], nullptr)
                continue
            int32_t var_78_2 = 0xffffffff
            break
        
    label_40262f:
        arg1[0x14] = 0xffffffff
        arg1[0x15] = 0xffffffff
        sub_401ca0(arg1)
        return result

return 0xffffff7d
