// 函数: sub_49dbe2
// 地址: 0x49dbe2
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg2 == 0)
    return 0x8876086c

int32_t var_c
int32_t result = sub_46ad8d(arg2, 0x42415443, &var_c, arg1 + 0xc)

if (result s>= 0)
    if (result == 1)
        return 0x88760b59
    
    int32_t eax = sub_745f3f(*(arg1 + 0xc))
    *(arg1 + 8) = eax
    
    if (eax == 0)
        return 0x8007000e
    
    int32_t ecx_1 = *(arg1 + 0xc)
    int32_t edi
    int32_t var_1c_3 = edi
    int32_t esi_3
    int32_t edi_2
    edi_2, esi_3 = __builtin_memcpy(eax, var_c, ecx_1 u>> 2 << 2)
    __builtin_memcpy(edi_2, esi_3, ecx_1 & 3)
    int32_t* eax_2 = *(arg1 + 8)
    *(arg1 + 0x10) = eax_2
    
    if (*eax_2 u>= 0x1c)
        int32_t eax_5 = sub_745f3f(eax_2[3] << 2)
        *(arg1 + 0x14) = eax_5
        
        if (eax_5 != 0)
            int32_t ecx_7 = *(*(arg1 + 0x10) + 0xc) << 2
            __builtin_memset(__builtin_memset(eax_5, 0, ecx_7 u>> 2 << 2), 0, ecx_7 & 3)
            void* eax_7 = *(arg1 + 0x10)
            *(arg1 + 0x18) = *(eax_7 + 0xc)
            int32_t ecx_12 = *(eax_7 + 0x10)
            
            if (ecx_12 + *(eax_7 + 0xc) * 0x14 u> *(arg1 + 0xc))
            label_49dc64:
                result = 0x88760b59
            else
                arg2 = nullptr
                void* esi_5 = *(arg1 + 8) + ecx_12
                int32_t edi_5 = 0
                
                if (*(arg1 + 0x18) u> 0)
                    int32_t* ecx_13 = esi_5 + 0xc
                    int32_t* var_8_1 = ecx_13
                    
                    while (true)
                        int32_t edx_2 = *ecx_13
                        
                        if (edx_2 + 0x10 u> *(arg1 + 0xc))
                            goto label_49dc64_1
                        
                        *(*(arg1 + 0x14) + (edi_5 << 2)) =
                            sub_49d615(arg1, &ecx_13[-3], *(arg1 + 8) + edx_2, 0)
                        int32_t* eax_16 = *(arg1 + 0x14) + (edi_5 << 2)
                        
                        if (*eax_16 == 0)
                            goto label_49dc84_1
                        
                        int32_t eax_17 = *eax_16
                        int32_t ecx_15
                        ecx_15.w = *(eax_17 + 8)
                        int16_t temp2_1 = ecx_15.w
                        ecx_15.w = neg.w(ecx_15.w)
                        var_8_1 = &var_8_1[5]
                        arg2 += ((sbb.d(ecx_15, ecx_15, temp2_1 != 0) & 3) + 1)
                            * zx.d(*(*(eax_17 + 0x18) + 8)) * *(eax_17 + 0x2c)
                        edi_5 += 1
                        
                        if (edi_5 u>= *(arg1 + 0x18))
                            break
                        
                        ecx_13 = var_8_1
                
                int32_t eax_20 = sub_745f3f(arg2 << 2)
                int32_t i = 0
                *(arg1 + 0x1c) = eax_20
                
                if (eax_20 == 0)
                label_49dc84:
                    result = 0x8007000e
                else
                    arg2 = nullptr
                    
                    if (*(arg1 + 0x18) u> 0)
                        int32_t ecx_22 = *(arg1 + 0x14)
                        
                        do
                            sub_49ac58(*(ecx_22 + (i << 2)), *(arg1 + 0x1c) + (arg2 << 2))
                            ecx_22 = *(arg1 + 0x14)
                            void* eax_23 = *(ecx_22 + (i << 2))
                            int32_t edx_6
                            edx_6.w = *(eax_23 + 8)
                            int16_t temp1_1 = edx_6.w
                            edx_6.w = neg.w(edx_6.w)
                            arg2 += ((sbb.d(edx_6, edx_6, temp1_1 != 0) & 3) + 1)
                                * zx.d(*(*(eax_23 + 0x18) + 8)) * *(eax_23 + 0x2c)
                            i += 1
                        while (i u< *(arg1 + 0x18))
                    
                    uint32_t ecx_24 = 0
                    
                    if (arg3 == 0)
                        result = 0
                    else
                        if (*(arg1 + 0x18) u> 0)
                            int32_t i_2 = *(arg1 + 0x18)
                            void* eax_24 = esi_5 + 8
                            int32_t i_1
                            
                            do
                                if (*(eax_24 - 4) == 2)
                                    uint32_t edx_13 = zx.d(*(eax_24 - 2)) + zx.d(*eax_24)
                                    
                                    if (ecx_24 u< edx_13)
                                        ecx_24 = edx_13
                                
                                eax_24 += 0x14
                                i_1 = i_2
                                i_2 -= 1
                            while (i_1 != 1)
                        
                        int32_t var_20_5 = arg3
                        uint32_t var_24_2 = ecx_24 << 4
                        result = sub_458de2()
                        
                        if (result s>= 0)
                            result = 0
        else
        label_49dc84_1:
            result = 0x8007000e
    else
    label_49dc64_1:
        result = 0x88760b59

return result
