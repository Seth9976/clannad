// 函数: sub_743720
// 地址: 0x743720
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* esi = arg1
int32_t result

while (true)
    if (esi[0x16] == 3)
        result = sub_744470(esi)
        
        if (result s< 0)
            break
    
    if (esi[0x16] == 4)
        char eax_1 = sub_99cdb0(esi[0x12])
        
        while (true)
            void var_58
            void* edi_1 = &var_58
            
            if (arg2 != 0)
                edi_1 = arg2
            
            int32_t eax_3 = sub_6e5340(&esi[0x1e], edi_1)
            arg2 = nullptr
            
            if (eax_3 == 0xffffffff)
                return 0xfffffffd
            
            if (eax_3 s<= 0)
                break
            
            int32_t eax_4 = *(edi_1 + 0x14)
            int32_t ebx_1 = *(edi_1 + 0x10)
            
            if (sub_99cfa0(&esi[0x94], edi_1) == 0)
                if (sub_99bdf0(&esi[0x78], nullptr) != 0)
                    return 0xffffff7f
                
                sub_99be50(&esi[0x78], &esi[0x94])
                *(esi + 0x70) =
                    _mm_cvtepi32_pd(zx.q(sub_99bdf0(&esi[0x78], nullptr) << eax_1)) f+ *(esi + 0x70)
                *(esi + 0x68) = _mm_cvtepi32_pd(zx.q(*(edi_1 + 4) << 3)) f+ *(esi + 0x68)
                
                if ((ebx_1 & eax_4) != 0xffffffff && *(edi_1 + 0xc) == 0)
                    int32_t ecx_4 = esi[1]
                    int32_t eax_29
                    
                    if (ecx_4 == 0)
                        eax_29 = 0
                    else
                        eax_29 = esi[0x18]
                    
                    int32_t edi_3 = eax_4
                    
                    if (ecx_4 != 0 && eax_29 s> 0)
                        int32_t eax_30 = esi[0x11]
                        int32_t ecx_6 = eax_29 << 4
                        int32_t temp3_1 = ebx_1
                        ebx_1 -= *(ecx_6 + eax_30)
                        edi_3 = sbb.d(edi_3, *(ecx_6 + eax_30 + 4), temp3_1 u< *(ecx_6 + eax_30))
                    
                    if (edi_3 s<= 0 && (edi_3 s< 0 || ebx_1 u< 0))
                        int64_t var_28_1 = 0
                        edi_3 = 0
                        ebx_1 = 0
                    
                    int64_t var_20_1 = 0
                    int64_t var_28_2 = 0
                    int32_t eax_34
                    int32_t edx_3
                    edx_3:eax_34 = sx.q(sub_99bdf0(&esi[0x78], nullptr) << eax_1)
                    int32_t ebx_2 = ebx_1 - eax_34
                    int32_t var_c_2 = 0
                    int32_t edi_4 = sbb.d(edi_3, edx_3, ebx_1 u< eax_34)
                    int32_t edx_4 = var_28_2.d
                    int32_t var_18_1
                    int32_t var_14_1
                    int32_t ecx_13
                    
                    if (eax_29 s< 2)
                        ecx_13 = var_28_2:4.d
                        var_18_1 = var_20_1:4.d
                        var_14_1 = var_20_1.d
                    else
                        int32_t esi_1 = var_20_1:4.d
                        void* eax_36 = esi[0x11] + 0x18
                        int32_t edi_5 = var_20_1.d
                        int32_t i_2 = ((eax_29 - 2) u>> 1) + 1
                        var_c_2 = (((eax_29 - 2) u>> 1) + 1) * 2
                        ecx_13 = var_28_2:4.d
                        int32_t i
                        
                        do
                            int32_t temp5_1 = edi_5
                            edi_5 += *(eax_36 - 0x10)
                            esi_1 =
                                adc.d(esi_1, *(eax_36 - 0xc), temp5_1 + *(eax_36 - 0x10) u< temp5_1)
                            int32_t temp7_1 = edx_4
                            edx_4 += *eax_36
                            ecx_13 = adc.d(ecx_13, *(eax_36 + 4), temp7_1 + *eax_36 u< temp7_1)
                            eax_36 += 0x20
                            i = i_2
                            i_2 -= 1
                        while (i != 1)
                        var_14_1 = edi_5
                        var_18_1 = esi_1
                        esi = arg1
                    
                    if (var_c_2 s< eax_29)
                        int32_t eax_40 = var_c_2 << 4
                        int32_t eax_41 = esi[0x11]
                        int32_t temp13_1 = ebx_2
                        ebx_2 += *(eax_40 + eax_41 + 8)
                        edi_4 = adc.d(edi_4, *(eax_40 + eax_41 + 0xc), 
                            temp13_1 + *(eax_40 + eax_41 + 8) u< temp13_1)
                        esi = arg1
                    
                    int32_t edx_5 = edx_4 + var_14_1
                    esi[0x14] = edx_5 + ebx_2
                    esi[0x15] = adc.d(adc.d(ecx_13, var_18_1, edx_4 + var_14_1 u< edx_4), edi_4, 
                        edx_5 + ebx_2 u< edx_5)
                
                return 1
    
    void var_38
    
    if (esi[0x16] s>= 2)
        while (true)
            if (arg3 == 0)
                return 0
            
            int32_t eax_10
            int32_t edx_1
            eax_10, edx_1 = sub_743dc0(esi, &var_38, 0xffffffff, 0xffffffff)
            
            if (edx_1 s>= 0 && (edx_1 s> 0 || eax_10 u>= 0))
                bool cond:2_1 = esi[0x16] != 4
                int32_t var_34
                *(esi + 0x68) = _mm_cvtepi32_pd(zx.q(var_34 << 3)) f+ *(esi + 0x68)
                
                if (cond:2_1)
                    break
                
                uint32_t eax_13 = sub_6e47d0(&var_38)
                
                if (esi[0x17] == eax_13)
                    goto label_743884
                
                if (sub_6e4700(&var_38) == 0)
                    continue
                else if (arg4 != 0)
                    sub_99c590(&esi[0x78])
                    sub_99cba0(&esi[0x94])
                    esi[0x16] = 2
                    
                    if (esi[1] != 0)
                        goto label_74389e
                    
                    sub_99b640(esi[0x12])
                    sub_99b8c0(esi[0x13])
                    goto label_743884
            
            return 0xfffffffe
        
        goto label_74388e
    
label_743884:
    
    if (esi[0x16] != 4)
    label_74388e:
        
        if (esi[0x16] s< 3)
            if (esi[1] == 0)
                result = sub_743ac0(esi, esi[0x12], esi[0x13], nullptr, nullptr, &var_38)
                
                if (result != 0)
                    break
                
                int32_t eax_18 = esi[0x72]
                esi[0x18] += 1
                esi[0x17] = eax_18
            else
            label_74389e:
                uint32_t i_1 = sub_6e47d0(&var_38)
                int32_t edi_2 = esi[0xd]
                int32_t ecx_2 = 0
                
                if (edi_2 s> 0)
                    int32_t* edx_2 = esi[0x10]
                    
                    while (*edx_2 != i_1)
                        ecx_2 += 1
                        edx_2 = &edx_2[1]
                        
                        if (ecx_2 s>= edi_2)
                            break
                
                if (ecx_2 == edi_2)
                    continue
                else
                    esi[0x17] = i_1
                    esi[0x18] = ecx_2
                    sub_6e51f0(&esi[0x1e], i_1)
                    esi[0x16] = 3
    
    sub_6e4e20(&esi[0x1e], &var_38)

return result
