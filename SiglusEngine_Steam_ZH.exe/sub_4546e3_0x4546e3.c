// 函数: sub_4546e3
// 地址: 0x4546e3
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t i_5 = arg4
int32_t edi
int32_t var_1c = edi
int32_t var_8
int32_t edx

if (arg2 s>= 0)
    *(*(arg1 + 0xc4) + 4) = 1
    **(arg1 + 0xc4) = 3
    *(*(arg1 + 0xc4) + 0x10) = i_5
    *(*(arg1 + 0xc4) + 0x14) = 4
    *(*(arg1 + 0xc4) + 0x18) = 1
    int32_t eax_3 = sub_4538a9(arg1, arg2, 1, 1)
    var_8 = eax_3
    
    if (eax_3 != 0)
        edx = eax_3
        goto label_454744
else
    edx = not.d(arg2)
    var_8 = edx
label_454744:
    int32_t* eax_4 = *(edx + 4)
    int32_t ecx_3 = eax_4[4]
    
    if (ecx_3 != 0 && *(edx + 8) == 0xffffffff && i_5 u<= ecx_3)
        if (*(arg1 + 0x3c) == 3)
            return sub_44e0f6(arg1, not.d(edx), arg3, i_5)
        
        if (eax_4[1] == 1)
            int32_t ecx_7 = *eax_4
            char* eax_6 = eax_4[5]
            float* ebx_1 = *edx
            arg2 = 4
            
            if (eax_6 u<= 4)
                arg2 = eax_6
            
            if (ecx_7 == 1)
                if (i_5 != 0)
                    int32_t i_4 = i_5
                    int32_t i
                    
                    do
                        char* j_5 = arg2
                        
                        if (j_5 u> 0)
                            float* ecx_18 = ebx_1
                            char* j
                            
                            do
                                long double x87_r7_3 = fconvert.t(*(ecx_18 + arg3 - ebx_1))
                                long double x87_r6_1 = fconvert.t(0f)
                                x87_r6_1 - x87_r7_3
                                float eax_12
                                eax_12.w = (x87_r6_1 < x87_r7_3 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r6_1, x87_r7_3) ? 1 : 0) << 0xa
                                    | (x87_r6_1 == x87_r7_3 ? 1 : 0) << 0xe
                                bool p_1 = unimplemented  {test ah, 0x44}
                                
                                eax_12 = not(p_1) ? 0f : 1.40129846e-45f
                                
                                *ecx_18 = eax_12
                                ecx_18 = &ecx_18[1]
                                j = j_5
                                j_5 -= 1
                            while (j != 1)
                        
                        ebx_1 = &ebx_1[eax_6]
                        arg3 += 0x10
                        i = i_4
                        i_4 -= 1
                    while (i != 1)
                
                return sub_448129(arg1, var_8)
            
            if (ecx_7 == 2)
                if (i_5 != 0)
                    int32_t i_3 = i_5
                    int32_t i_1
                    
                    do
                        if (arg2 u> 0)
                            float* esi_2 = ebx_1
                            char* j_3 = arg2
                            char* j_1
                            
                            do
                                float eax_11
                                int16_t x87control
                                eax_11, x87control =
                                    __ftol(x87control, fconvert.t(*(esi_2 + arg3 - ebx_1)))
                                *esi_2 = eax_11
                                esi_2 = &esi_2[1]
                                j_1 = j_3
                                j_3 -= 1
                            while (j_1 != 1)
                        
                        ebx_1 = &ebx_1[eax_6]
                        arg3 += 0x10
                        i_1 = i_3
                        i_3 -= 1
                    while (i_1 != 1)
                
                return sub_448129(arg1, var_8)
            
            if (ecx_7 == 3)
                if (eax_6 == 4)
                    int32_t ecx_12 = i_5 << 4
                    int32_t esi_1
                    int32_t edi_2
                    edi_2, esi_1 = __builtin_memcpy(ebx_1, arg3, ecx_12 u>> 2 << 2)
                    __builtin_memcpy(edi_2, esi_1, ecx_12 & 3)
                else if (i_5 != 0)
                    int32_t i_2
                    
                    do
                        char* j_4 = arg2
                        
                        if (j_4 u> 0)
                            float* eax_8 = ebx_1
                            char* j_2
                            
                            do
                                *eax_8 = fconvert.s(fconvert.t(*(arg3 - ebx_1 + eax_8)))
                                eax_8 = &eax_8[1]
                                j_2 = j_4
                                j_4 -= 1
                            while (j_2 != 1)
                        
                        arg3 += 0x10
                        ebx_1 = &ebx_1[eax_6]
                        i_2 = i_5
                        i_5 -= 1
                    while (i_2 != 1)
                
                return sub_448129(arg1, var_8)
return 0x8876086c
