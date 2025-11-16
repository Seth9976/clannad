// 函数: sub_401d50
// 地址: 0x401d50
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg1[0x16] s>= 2)
    if (arg1[1] == 0)
        return 0xffffff76
    
    if (arg3 s>= 0 && (arg3 s> 0 || arg2 u>= 0))
        int32_t temp1_1 = arg1[5]
        
        if (arg3 s<= temp1_1 && (arg3 s< temp1_1 || arg2 u<= arg1[4]))
            arg1[0x14] = 0xffffffff
            arg1[0x15] = 0xffffffff
            sub_4107c0(&arg1[0x1e], arg1[0x17])
            sub_403fc0(&arg1[0x78])
            sub_401760(arg1, arg2, arg3)
            int32_t edi_2 = 0
            int32_t var_1a4 = 0
            int32_t var_1a0 = 0
            void var_168
            sub_410030(&var_168, arg1[0x17])
            sub_410770(&var_168)
            
            while (true)
                void* var_19c
                void var_188
                
                if (arg1[0x16] s>= 3 && sub_4107e0(&var_168, &var_188) s> 0)
                    int32_t edx_1 = arg1[0x12]
                    int32_t ecx_2 = arg1[0x18] << 5
                    
                    if (*(ecx_2 + edx_1 + 0x1c) == 0)
                        sub_4107e0(&arg1[0x1e], nullptr)
                    else
                        int32_t ebx_2 = sub_404970(ecx_2 + edx_1, &var_188)
                        
                        if (ebx_2 s< 0)
                            sub_4107e0(&arg1[0x1e], nullptr)
                            ebx_2 = 0
                        else if (var_19c != 0)
                            sub_4107e0(&arg1[0x1e], nullptr)
                        else if (edi_2 != 0)
                            var_1a0 += (ebx_2 + edi_2) s>> 2
                        
                        int32_t var_178
                        int32_t var_174
                        
                        if ((var_178 & var_174) == 0xffffffff)
                            var_1a4 = ebx_2
                            edi_2 = ebx_2
                            continue
                        
                        int32_t i_2 = arg1[0x18]
                        void* eax_16 = arg1[0x11]
                        int32_t ebx_4 = i_2 << 4
                        int32_t edi_5 = var_178 - *(ebx_4 + eax_16)
                        int32_t ecx_7 =
                            sbb.d(var_174, *(ebx_4 + eax_16 + 4), var_178 u< *(ebx_4 + eax_16))
                        
                        if (ecx_7 s<= 0 && (ecx_7 s< 0 || edi_5 u< 0))
                            edi_5 = 0
                            ecx_7 = 0
                        
                        if (i_2 s> 0)
                            int32_t* eax_17 = eax_16 + 8
                            int32_t i
                            
                            do
                                int32_t ebx_5 = *eax_17
                                int32_t temp7_1 = edi_5
                                edi_5 += ebx_5
                                ecx_7 = adc.d(ecx_7, eax_17[1], temp7_1 + ebx_5 u< temp7_1)
                                eax_17 = &eax_17[4]
                                i = i_2
                                i_2 -= 1
                            while (i != 1)
                        
                        int32_t eax_19
                        int32_t edx_7
                        edx_7:eax_19 = sx.q(var_1a0)
                        arg1[0x14] = edi_5 - eax_19
                        arg1[0x15] = sbb.d(ecx_7, edx_7, edi_5 u< eax_19)
                        break
                
                if (edi_2 != 0)
                    arg1[0x14] = 0xffffffff
                    arg1[0x15] = 0xffffffff
                    break
                
                void var_198
                int32_t eax_13
                int32_t edx_4
                eax_13, edx_4 = sub_4013c0(arg1, &var_198, 0xffffffff, 0xffffffff)
                
                if (edx_4 s< 0 || (edx_4 s<= 0 && eax_13 u< 0))
                    int32_t eax_20
                    int32_t edx_8
                    eax_20, edx_8 = sub_401ce0(arg1, 0xffffffff)
                    arg1[0x14] = eax_20
                    arg1[0x15] = edx_8
                    break
                
                if (arg1[0x16] s< 3)
                label_401f1c:
                    int32_t i_1 = sub_40ffd0(&var_198)
                    int32_t edx_5 = arg1[0xd]
                    int32_t ecx_6 = 0
                    arg1[0x17] = i_1
                    
                    if (edx_5 s> 0)
                        int32_t* edi_4 = arg1[0x10]
                        
                        while (*edi_4 != i_1)
                            ecx_6 += 1
                            edi_4 = &edi_4[1]
                            
                            if (ecx_6 s>= edx_5)
                                break
                        
                        edi_2 = var_1a4
                    
                    if (ecx_6 == edx_5)
                        arg1[0x14] = 0xffffffff
                        arg1[0x15] = 0xffffffff
                        sub_4100a0(&var_168)
                        sub_401ca0(arg1)
                        return 0xffffff77
                    
                    arg1[0x18] = ecx_6
                    sub_4107c0(&arg1[0x1e], i_1)
                    sub_4107c0(&var_168, arg1[0x17])
                    arg1[0x16] = 3
                else
                    int32_t eax_14 = sub_40ffd0(&var_198)
                    
                    if (arg1[0x17] != eax_14)
                        sub_401ca0(arg1)
                        sub_4100a0(&var_168)
                    
                    if (arg1[0x16] s< 3)
                        goto label_401f1c
                
                sub_410460(&arg1[0x1e], &var_198)
                sub_410460(&var_168, &var_198)
                var_19c = sub_40fee0(&var_198)
                continue
            
            sub_4100a0(&var_168)
            arg1[0x1a] = 0
            arg1[0x1c] = 0
            arg1[0x1b] = 0
            arg1[0x1d] = 0
            return 0

return 0xffffff7d
