// 函数: sub_4019c0
// 地址: 0x4019c0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax_2 = _realloc(arg1[0x12], arg1[0xd] << 5)
int32_t edx = arg1[0xd]
arg1[0x12] = eax_2
int32_t eax_4 = _realloc(arg1[0x13], edx << 4)
int32_t ecx_1 = arg1[0xd]
arg1[0x13] = eax_4
int32_t eax_5 = _malloc(ecx_1 << 3)
int32_t edx_2 = arg1[0xd]
arg1[0xf] = eax_5
arg1[0x11] = _malloc(edx_2 << 4)
int32_t result = arg1[0xd]
int32_t ebx = 0

if (result s> 0)
    while (true)
        if (ebx != 0)
            int32_t* eax_8 = arg1[0xe]
            int32_t edi_1 = ebx << 3
            sub_401760(arg1, eax_8[ebx * 2], eax_8[ebx * 2 + 1])
            bool cond:0_1 =
                sub_401270(arg1, (ebx << 5) + arg1[0x12], (ebx << 4) + arg1[0x13], nullptr, nullptr)
                s>= 0
            int32_t eax_14 = arg1[0xf]
            
            if (cond:0_1)
                int32_t* edi_3 = edi_1 + eax_14
                *edi_3 = arg1[2]
                edi_3[1] = arg1[3]
            else
                int32_t* edi_2 = edi_1 + eax_14
                *edi_2 = 0xffffffff
                edi_2[1] = 0xffffffff
        else
            int32_t* edx_4 = arg1[0xf]
            *edx_4 = arg2
            edx_4[1] = arg3
            sub_401760(arg1, arg2, arg3)
        
        int32_t ecx_8 = arg1[0xf]
        void var_30
        
        if ((*(ecx_8 + (ebx << 3)) & *(ecx_8 + (ebx << 3) + 4)) != 0xffffffff)
            int32_t var_38_1 = 0
            int32_t var_34_1 = 0
            int32_t edi_4 = 0xffffffff
            sub_4107c0(&arg1[0x1e], *(arg1[0x10] + (ebx << 2)))
            
            while (true)
                int32_t eax_18
                int32_t edx_10
                eax_18, edx_10 = sub_4013c0(arg1, &var_30, 0xffffffff, 0xffffffff)
                
                if (edx_10 s< 0)
                    break
                
                if (edx_10 s<= 0 && eax_18 u< 0)
                    break
                
                if (sub_40ffd0(&var_30) != *(arg1[0x10] + (ebx << 2)))
                    break
                
                sub_410460(&arg1[0x1e], &var_30)
                void var_20
                int32_t eax_20 = sub_4107e0(&arg1[0x1e], &var_20)
                bool cond:5_1 = eax_20 s<= 0
                
                if (eax_20 != 0)
                    int32_t i
                    
                    do
                        if (not(cond:5_1))
                            int32_t eax_21 = sub_404970((ebx << 5) + arg1[0x12], &var_20)
                            
                            if (edi_4 != 0xffffffff)
                                int32_t eax_24
                                int32_t edx_14
                                edx_14:eax_24 = sx.q((eax_21 + edi_4) s>> 2)
                                int32_t eax_26 =
                                    adc.d(var_34_1, edx_14, var_38_1 + eax_24 u< var_38_1)
                                var_38_1 += eax_24
                                var_34_1 = eax_26
                            
                            edi_4 = eax_21
                        
                        i = sub_4107e0(&arg1[0x1e], &var_20)
                        cond:5_1 = i s<= 0
                    while (i != 0)
                
                int32_t eax_27
                int32_t edx_15
                eax_27, edx_15 = sub_40fef0(&var_30)
                
                if ((eax_27 & edx_15) != 0xffffffff)
                    int32_t eax_29
                    int32_t edx_16
                    eax_29, edx_16 = sub_40fef0(&var_30)
                    int32_t edx_17 = sbb.d(edx_16, var_34_1, eax_29 u< var_38_1)
                    var_38_1 = eax_29 - var_38_1
                    var_34_1 = edx_17
                    break
            
            if (var_34_1 s<= 0 && (var_34_1 s< 0 || var_38_1 u< 0))
                var_38_1 = 0
                var_34_1 = 0
            
            int32_t* eax_33 = (ebx << 4) + arg1[0x11]
            *eax_33 = var_38_1
            eax_33[1] = var_34_1
        
        int32_t eax_34 = arg1[0xe]
        sub_401760(arg1, *(eax_34 + (ebx << 3) + 8), *(eax_34 + (ebx << 3) + 0xc))
        
        while (true)
            int32_t eax_35
            int32_t edx_20
            eax_35, edx_20 = sub_401640(arg1, &var_30)
            
            if (edx_20 s< 0 || (edx_20 s<= 0 && eax_35 u< 0))
                sub_403140((ebx << 5) + arg1[0x12])
                sub_403080((ebx << 4) + arg1[0x13])
                break
            
            int32_t eax_36
            int32_t edx_21
            eax_36, edx_21 = sub_40fef0(&var_30)
            
            if ((eax_36 & edx_21) == 0xffffffff)
                arg1[2] = eax_35
                arg1[3] = edx_20
                continue
            
            int32_t* edi_9 = (ebx << 4) + arg1[0x11]
            int32_t eax_41
            int32_t edx_27
            eax_41, edx_27 = sub_40fef0(&var_30)
            int32_t ebp_3 = *edi_9
            int32_t edx_28 = sbb.d(edx_27, edi_9[1], eax_41 u< ebp_3)
            edi_9[2] = eax_41 - ebp_3
            edi_9[3] = edx_28
            break
        
        result = arg1[0xd]
        ebx += 1
        
        if (ebx s>= result)
            break

return result
