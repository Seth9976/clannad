// 函数: sub_455bb7
// 地址: 0x455bb7
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_20 = edi
int32_t result = 0

if (arg3 == 0)
    return 0x8876086c

int32_t eax_1 = sub_4538a9(arg1, arg2, 1, 0)

if (eax_1 != 0)
    int32_t* edx_1 = *(eax_1 + 4)
    
    if (edx_1[4] == 0 || *(eax_1 + 8) != 0xffffffff)
        int32_t ecx_2 = edx_1[1]
        
        if (ecx_2 s>= 0 && ecx_2 s<= 3)
            int32_t ecx_3 = edx_1[5]
            int32_t esi_1 = edx_1[6]
            int32_t edx_2 = *edx_1
            int16_t x87control
            
            if (edx_2 == 3 && esi_1 == 1 && (ecx_3 == edx_2 || ecx_3 == 4))
                float var_18 = fconvert.s(float.t(0))
                float var_14_1 = fconvert.s(float.t(0))
                float var_10_1 = fconvert.s(float.t(0))
                float var_c_1 = fconvert.s(float.t(0))
                long double x87_r7_5 = fconvert.t(1f)
                long double x87_r6_1 = fconvert.t(0f)
                
                if (ecx_3 u<= 0)
                    arg2 = 0
                else
                    __builtin_memcpy(&var_18, *eax_1, ecx_3 << 2)
                    long double x87_r5_1 = fconvert.t(var_18)
                    x87_r5_1 - x87_r7_5
                    eax_1.w = (x87_r5_1 < x87_r7_5 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r5_1, x87_r7_5) ? 1 : 0) << 0xa
                        | (x87_r5_1 == x87_r7_5 ? 1 : 0) << 0xe | 0x3000
                    
                    if ((eax_1:1.b & 1) != 0)
                        long double x87_r5_2 = fconvert.t(var_18)
                        x87_r5_2 - x87_r6_1
                        eax_1.w = (x87_r5_2 < x87_r6_1 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r5_2, x87_r6_1) ? 1 : 0) << 0xa
                            | (x87_r5_2 == x87_r6_1 ? 1 : 0) << 0xe | 0x3000
                        bool p_1 = unimplemented  {test ah, 0x41}
                        
                        if (p_1)
                            eax_1, x87control = __ftol(x87control, 
                                fconvert.t(var_18) * fconvert.t(255f) + fconvert.t(0.5f))
                            arg2 = eax_1
                        else
                            arg2 = 0
                    else
                        arg2 = 0xff
                
                long double x87_r5_6 = fconvert.t(var_14_1)
                x87_r5_6 - x87_r7_5
                eax_1.w = (x87_r5_6 < x87_r7_5 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r5_6, x87_r7_5) ? 1 : 0) << 0xa
                    | (x87_r5_6 == x87_r7_5 ? 1 : 0) << 0xe | 0x3000
                int32_t edi_2
                
                if ((eax_1:1.b & 1) != 0)
                    long double x87_r5_7 = fconvert.t(var_14_1)
                    x87_r5_7 - x87_r6_1
                    eax_1.w = (x87_r5_7 < x87_r6_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r5_7, x87_r6_1) ? 1 : 0) << 0xa
                        | (x87_r5_7 == x87_r6_1 ? 1 : 0) << 0xe | 0x3000
                    bool p_2 = unimplemented  {test ah, 0x41}
                    
                    if (p_2)
                        eax_1, x87control = __ftol(x87control, 
                            fconvert.t(var_14_1) * fconvert.t(255f) + fconvert.t(0.5f))
                        edi_2 = eax_1
                    else
                        edi_2 = 0
                else
                    edi_2 = 0xff
                
                long double x87_r5_11 = fconvert.t(var_10_1)
                x87_r5_11 - x87_r7_5
                eax_1.w = (x87_r5_11 < x87_r7_5 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r5_11, x87_r7_5) ? 1 : 0) << 0xa
                    | (x87_r5_11 == x87_r7_5 ? 1 : 0) << 0xe | 0x3000
                int32_t esi_3
                
                if ((eax_1:1.b & 1) != 0)
                    long double x87_r5_12 = fconvert.t(var_10_1)
                    x87_r5_12 - x87_r6_1
                    eax_1.w = (x87_r5_12 < x87_r6_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r5_12, x87_r6_1) ? 1 : 0) << 0xa
                        | (x87_r5_12 == x87_r6_1 ? 1 : 0) << 0xe | 0x3800
                    bool p_3 = unimplemented  {test ah, 0x41}
                    
                    if (p_3)
                        eax_1, x87control = __ftol(x87control, 
                            fconvert.t(var_10_1) * fconvert.t(255f) + fconvert.t(0.5f))
                        esi_3 = eax_1
                    else
                        esi_3 = 0
                else
                    x87_r7_5 = x87_r6_1
                    esi_3 = 0xff
                
                long double x87_r6_5 = fconvert.t(var_c_1)
                x87_r6_5 - x87_r7_5
                eax_1.w = (x87_r6_5 < x87_r7_5 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_5, x87_r7_5) ? 1 : 0) << 0xa
                    | (x87_r6_5 == x87_r7_5 ? 1 : 0) << 0xe
                int32_t eax_2
                
                if ((eax_1:1.b & 1) != 0)
                    long double x87_r7_6 = fconvert.t(var_c_1)
                    long double temp4_1 = fconvert.t(0f)
                    x87_r7_6 - temp4_1
                    eax_1.w = (x87_r7_6 < temp4_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r7_6, temp4_1) ? 1 : 0) << 0xa
                        | (x87_r7_6 == temp4_1 ? 1 : 0) << 0xe
                    bool p_4 = unimplemented  {test ah, 0x41}
                    
                    if (p_4)
                        eax_2 = __ftol(x87control, 
                            fconvert.t(var_c_1) * fconvert.t(255f) + fconvert.t(0.5f))
                    else
                        eax_2 = 0
                else
                    eax_2 = 0xff
                
                *arg3 = ((eax_2 << 8 | arg2) << 8 | edi_2) << 8 | esi_3
                return result
            
            if (ecx_3 == 1 && esi_1 == 1)
                if (edx_2 == 1)
                    int32_t ecx_5
                    ecx_5.b = **eax_1 != 0
                    *arg3 = ecx_5
                    return result
                
                if (edx_2 == 2)
                    *arg3 = **eax_1
                    return result
                
                if (edx_2 == 3)
                    *arg3 = __ftol(x87control, fconvert.t(**eax_1))
                    return result

return 0x8876086c
