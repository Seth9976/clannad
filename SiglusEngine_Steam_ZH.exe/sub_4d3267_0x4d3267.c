// 函数: sub_4d3267
// 地址: 0x4d3267
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result = sub_4c8264(arg1)

if (result s>= 0)
    int32_t var_c_1 = 0
    int32_t edi
    int32_t var_70_1 = edi
    int32_t i_2 = arg1[3]
    int32_t i_3 = i_2
    
    if (i_2 u> 0)
        while (true)
            int32_t* esi_1 = *(arg1[6] + (var_c_1 << 2))
            int32_t eax_1 = *esi_1
            int32_t* var_8_1 = esi_1
            
            if ((eax_1 & 0xfff00000) != 0)
                int32_t var_10_1 = 0
                int32_t eax_2 = eax_1 & 0xfffff
                int32_t var_28
                int32_t eax_4 = (*(*arg1 + 0x20))(esi_1, &var_28)
                
                while (true)
                    if (eax_4 != 0 && (*esi_1 & 0xfff00000) != 0x74100000)
                        int32_t var_44
                        
                        if (var_c_1 u>= arg1[0x53])
                            var_44 = 0xffffffff
                            void var_40
                            void* edi_1 = &var_40
                            *edi_1 = 0xffffffff
                            void* edi_2 = edi_1 + 4
                            *edi_2 = 0xffffffff
                            *(edi_2 + 4) = 0xffffffff
                            int32_t var_54_1 = 0xffffffff
                            void var_50
                            void* edi_5 = &var_50
                            *edi_5 = 0xffffffff
                            void* edi_6 = edi_5 + 4
                            *edi_6 = 0xffffffff
                            *(edi_6 + 4) = 0xffffffff
                        
                        int32_t eax_10 = neg.d(eax_2 - 1)
                        char* esi_3 = esi_1[2] + ((var_28 * eax_2) << 2)
                        int32_t i = eax_2 << 2
                        int32_t __saved_ebp
                        void* edi_9 =
                            &(&__saved_ebp)[(sbb.d(eax_10, eax_10, eax_2 != 1) & 0xfffffffd) - 0x11]
                        bool cond:4_1 = false
                        char* var_1c_1 = esi_3
                        
                        while (i != 0)
                            char temp1_1 = *esi_3
                            char temp2_1 = *edi_9
                            cond:4_1 = temp1_1 != temp2_1
                            esi_3 = &esi_3[1]
                            edi_9 += 1
                            i -= 1
                            
                            if (temp1_1 != temp2_1)
                                break
                        
                        int32_t* edx_3
                        
                        if (not(cond:4_1))
                            edx_3 = var_8_1
                        
                        if (not(cond:4_1) && (edx_3[3] == 0
                            || *(*(arg1[5] + (*edx_3[4] << 2)) + 0x14) == 0xffffffff))
                        label_4d347a:
                            int32_t ecx_28 = eax_2 << 2
                            int32_t esi_13
                            int32_t edi_20
                            edi_20, esi_13 = __builtin_memcpy(var_1c_1, 
                                &(&__saved_ebp)[(sbb.d(eax_10, eax_10, eax_2 != 1) & 0xfffffffd)
                                    - 0xd], 
                                ecx_28 u>> 2 << 2)
                            __builtin_memcpy(edi_20, esi_13, ecx_28 & 3)
                            eax_4 = (*(*arg1 + 0x20))(edx_3, &var_28)
                            esi_1 = var_8_1
                            i_2 = i_3
                            continue
                        else
                            int32_t eax_18 = sub_49f5a4(arg1, (eax_2 & 0xfffff) | 0x10000000, 
                                0xffffffff, 0xffffffff)
                            
                            if (eax_18 != 0xffffffff)
                                void* eax_19 = *(arg1[6] + (eax_18 << 2))
                                result = sub_49e7bf(eax_19, var_8_1)
                                
                                if (result s< 0)
                                    return result
                                
                                int32_t var_64[0x3]
                                result = (*(*arg1 + 0x80))(var_c_1, 
                                    &(&__saved_ebp)[(sbb.d(eax_10, eax_10, eax_2 != 1) & 0xfffffffd)
                                        - 0xd], 
                                    eax_2, &var_64, var_10_1)
                                
                                if (result s< 0)
                                    return result
                                
                                void* eax_22 = *(arg1[5] + ((&__saved_ebp)[(
                                    sbb.d(eax_10, eax_10, eax_2 != 1) & 0xfffffffd) - 0xd] << 2))
                                int32_t ecx_11 =
                                    (sbb.d(eax_10, eax_10, eax_2 != 1) & 0xfffffffd) + 3 + eax_2
                                int32_t edx_4 = (sbb.d(eax_10, eax_10, eax_2 != 1) & 0xfffffffd) + 3
                                
                                for (bool cond:5_1 =
                                        (sbb.d(eax_10, eax_10, eax_2 != 1) & 0xfffffffd) + 3
                                        u< ecx_11; cond:5_1; cond:5_1 = edx_4 u< ecx_11)
                                    int32_t eax_24 = arg1[5]
                                    void* ecx_13 = *(eax_24 + ((&var_44)[edx_4] << 2))
                                    
                                    if (var_8_1[3] != 0)
                                        *(ecx_13 + 0x14) = *(*(eax_24 + (*var_8_1[4] << 2)) + 0x14)
                                        *(ecx_13 + 0x18) = *(*(arg1[5] + (*var_8_1[4] << 2)) + 0x18)
                                    
                                    edx_4 += 1
                                
                                var_64[var_10_1] = *(eax_22 + 0xc)
                                int32_t eax_35 = eax_2 << 2
                                int32_t esi_7
                                int32_t edi_13
                                edi_13, esi_7 = __builtin_memcpy(*(eax_19 + 0x10), 
                                    &(&__saved_ebp)[(sbb.d(eax_10, eax_10, eax_2 != 1) & 0xfffffffd)
                                        - 0xd], 
                                    eax_35 u>> 2 << 2)
                                __builtin_memcpy(edi_13, esi_7, eax_35 & 3)
                                int32_t esi_9
                                int32_t edi_15
                                edi_15, esi_9 =
                                    __builtin_memcpy(*(eax_19 + 8), var_1c_1, eax_35 u>> 2 << 2)
                                var_10_1 += 1
                                edx_3 = var_8_1
                                __builtin_memcpy(edi_15, esi_9, eax_35 & 3)
                                int32_t esi_11
                                int32_t edi_18
                                edi_18, esi_11 = __builtin_memcpy(
                                    &(&__saved_ebp)[(sbb.d(eax_10, eax_10, eax_2 != 1) & 0xfffffffd)
                                        - 0x11], 
                                    var_1c_1, eax_35 u>> 2 << 2)
                                __builtin_memcpy(edi_18, esi_11, eax_35 & 3)
                                goto label_4d347a
                    else if (sub_49f69d(arg1, esi_1) != 0xffffffff)
                        sub_46cb59(esi_1, 1)
                        *(arg1[6] + (var_c_1 << 2)) = 0
                        break
                    
                    return 0x8007000e
            
            var_c_1 += 1
            
            if (var_c_1 u>= i_2)
                break
    
    int32_t i_1 = i_2
    
    if (i_2 u< arg1[3])
        int32_t* edx_14 = nullptr
        
        do
            int32_t eax_40 = arg1[6]
            *(edx_14 + eax_40) = *(eax_40 + (i_1 << 2))
            i_1 += 1
            edx_14 = &edx_14[1]
        while (i_1 u< arg1[3])
    
    arg1[3] -= i_2
    result = 0

return result
