// 函数: sub_99e110
// 地址: 0x99e110
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* edi = arg3
int32_t* var_24 = edi

if (edi[2] s> 0)
    int32_t esi_1 = 0
    int32_t var_c_1 = 0
    
    if (arg5 s> 0)
        int32_t* ebx_1 = arg4
        
        while (true)
            int32_t i = edi[0xa]
            int32_t eax_1 = sub_742e90(ebx_1, edi[9])
            int32_t eax_12
            int32_t var_8_2
            int32_t eax_6
            
            if (eax_1 s< 0)
                eax_6 = edi[2]
                var_8_2 = 0
            label_99e1f5:
                int32_t edx_6 = sub_742e90(ebx_1, i)
                
                if (edx_6 s< 0)
                    while (i s> 1)
                        int32_t i_3 = i - 1
                        i = i_3
                        edx_6 = sub_742e90(ebx_1, i_3)
                        
                        if (edx_6 s>= 0)
                            goto label_99e225
                    
                    if (edx_6 s< 0)
                        return 0xffffffff
                
            label_99e225:
                int32_t edx_8 = rol.d(edx_6, 0x10)
                int32_t ecx_13 = ((edx_8 u>> 8 ^ edx_8 << 8) & 0xff00ff) ^ edx_8 << 8
                int32_t edx_14 = ((ecx_13 u>> 4 ^ ecx_13 << 4) & 0xf0f0f0f) ^ ecx_13 << 4
                int32_t ecx_19 = ((edx_14 u>> 2 ^ edx_14 << 2) & 0x33333333) ^ edx_14 << 2
                int32_t ecx_20 = var_8_2
                int32_t i_1 = eax_6 - ecx_20
                
                if (i_1 s> 1)
                    int32_t ecx_21 = edi[5]
                    int32_t ebx_2 = var_8_2
                    int32_t edi_1 = eax_6
                    int32_t var_20_1 = ecx_21
                    
                    do
                        int32_t edx_21 = i_1 s>> 1
                        int32_t ecx_23 = neg.d(sbb.d(ecx_21, ecx_21, 
                            (((ecx_19 u>> 1 ^ (ecx_19 * 2)) & 0x55555555) ^ (ecx_19 * 2))
                                u< *(ecx_21 + ((edx_21 + ebx_2) << 2))))
                        edi_1 -= neg.d(ecx_23) & edx_21
                        ebx_2 += (ecx_23 - 1) & edx_21
                        ecx_21 = var_20_1
                        i_1 = edi_1 - ebx_2
                    while (i_1 s> 1)
                    
                    esi_1 = var_c_1
                    edi = var_24
                    var_8_2 = ebx_2
                    ebx_1 = arg4
                    ecx_20 = var_8_2
                
                int32_t ecx_26 = sx.d(*(edi[7] + ecx_20))
                
                if (ecx_26 s> i)
                    int32_t edx_32 = ebx_1[4]
                    int32_t esi_4 = ebx_1[1] + i
                    int32_t edi_2 = *ebx_1
                    
                    if (edi_2 s> edx_32 - ((esi_4 + 7) s>> 3))
                        ebx_1[3] = 0
                        *ebx_1 = edx_32
                        ebx_1[1] = 1
                        return 0xffffffff
                    
                    int32_t eax_67
                    int32_t edx_33
                    edx_33:eax_67 = sx.q(esi_4)
                    int32_t eax_69 = (eax_67 + (edx_33 & 7)) s>> 3
                    ebx_1[3] += eax_69
                    *ebx_1 = eax_69 + edi_2
                    ebx_1[1] = esi_4 & 7
                    return 0xffffffff
                
                int32_t edx_24 = ebx_1[1] + ecx_26
                int32_t ecx_29 = *ebx_1
                
                if (ecx_29 s<= ebx_1[4] - ((edx_24 + 7) s>> 3))
                    int32_t eax_41
                    int32_t edx_25
                    edx_25:eax_41 = sx.q(edx_24)
                    int32_t eax_43 = (eax_41 + (edx_25 & 7)) s>> 3
                    ebx_1[3] += eax_43
                    *ebx_1 = eax_43 + ecx_29
                    ebx_1[1] = edx_24 & 7
                else
                    int32_t eax_39 = ebx_1[4]
                    ebx_1[3] = 0
                    *ebx_1 = eax_39
                    ebx_1[1] = 1
                
                eax_12 = var_8_2
            else
                int32_t ecx_2 = *(edi[8] + (eax_1 << 2))
                
                if (ecx_2 s< 0)
                    var_8_2 = ecx_2 s>> 0xf & 0x7fff
                    eax_6 = edi[2] - (ecx_2 & 0x7fff)
                    goto label_99e1f5
                
                int32_t edx_2 = sx.d(*(edi[7] + ecx_2 - 1)) + ebx_1[1]
                int32_t ecx_6 = *ebx_1
                
                if (ecx_6 s<= ebx_1[4] - ((edx_2 + 7) s>> 3))
                    int32_t eax_14
                    int32_t edx_3
                    edx_3:eax_14 = sx.q(edx_2)
                    int32_t eax_16 = (eax_14 + (edx_3 & 7)) s>> 3
                    ebx_1[3] += eax_16
                    *ebx_1 = eax_16 + ecx_6
                    ebx_1[1] = edx_2 & 7
                    eax_12 = ecx_2 - 1
                else
                    *ebx_1 = ebx_1[4]
                    ebx_1[3] = 0
                    eax_12 = ecx_2 - 1
                    ebx_1[1] = 1
            
            if (eax_12 == 0xffffffff)
                return 0xffffffff
            
            int32_t edx_27 = edi[4] + ((*edi * eax_12) << 2)
            int32_t i_2 = 0
            
            if (arg5 - esi_1 s< 4)
            label_99e3b9:
                
                if (esi_1 s>= arg5)
                    break
                
                int32_t* edx_31 = edx_27 + (i_2 << 2)
                
                while (i_2 s< *edi)
                    i_2 += 1
                    int32_t eax_60 = *edx_31
                    edx_31 = &edx_31[1]
                    *(arg2 + (esi_1 << 2)) = eax_60
                    esi_1 += 1
                    ebx_1 = arg4
                    var_c_1 = esi_1
                    
                    if (esi_1 s>= arg5)
                        return 0
            else
                void* edx_30 = arg2 + 8 + (esi_1 << 2)
                
                while (i_2 s< *edi)
                    *(edx_30 - 8) = *(edx_27 + (i_2 << 2))
                    
                    if (i_2 + 1 s>= *edi)
                        esi_1 += 1
                    else
                        *(edx_30 - 4) = *(edx_27 + ((i_2 + 1) << 2))
                        
                        if (i_2 + 2 s>= *edi)
                            esi_1 += 2
                        else
                            *edx_30 = *(edx_27 + ((i_2 + 2) << 2))
                            
                            if (i_2 + 3 s>= *edi)
                                esi_1 += 3
                            else
                                esi_1 += 4
                                var_c_1 = esi_1
                                int32_t eax_57 = *(edx_27 + ((i_2 + 3) << 2))
                                i_2 += 4
                                *(edx_30 + 4) = eax_57
                                edx_30 += 0x10
                                
                                if (esi_1 s>= arg5 - 3)
                                    goto label_99e3b9
                                
                                continue
                    
                    var_c_1 = esi_1
                    break
            
            if (esi_1 s>= arg5)
                return 0
else if (arg5 s> 0)
    __builtin_memset(arg2, 0, arg5 << 2)

return 0
