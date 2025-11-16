// 函数: sub_99e5f0
// 地址: 0x99e5f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* edi = arg1

if (edi[2] s> 0)
    *edi
    int32_t ebx_1 = divs.dp.d(sx.q(arg4), *edi)
    int32_t var_10_1 = ebx_1
    __alloca_probe_16(ebx_1 << 2)
    __alloca_probe_16(ebx_1 << 2)
    int32_t var_18_1 = 0
    int32_t __saved_edi
    
    if (ebx_1 s> 0)
        int32_t* ebx_2 = arg3
        int32_t* esi_1 = 0
        int32_t* var_c_1 = &__saved_edi
        int32_t eax_32
        
        do
            int32_t i = edi[0xa]
            int32_t i_3 = i
            int32_t eax_6 = sub_742e90(ebx_2, edi[9])
            int32_t edi_3
            int32_t eax_9
            
            if (eax_6 s< 0)
                edi_3 = 0
                eax_9 = arg1[2]
            label_99e6ee:
                int32_t eax_19 = sub_742e90(ebx_2, i)
                
                if (eax_19 s< 0)
                    while (i s> 1)
                        i -= 1
                        i_3 = i
                        eax_19 = sub_742e90(ebx_2, i)
                        
                        if (eax_19 s>= 0)
                            goto label_99e721
                    
                    if (eax_19 s< 0)
                        *(esi_1 + var_c_1) = 0xffffffff
                        return 0xffffffff
                
            label_99e721:
                int32_t ecx_10 = sub_99ea20(eax_19)
                int32_t i_1 = eax_9 - edi_3
                int32_t var_24_1 = ecx_10
                
                if (i_1 s> 1)
                    int32_t ebx_3 = eax_9
                    
                    do
                        int32_t edx_10 = i_1 s>> 1
                        int32_t ecx_12 = neg.d(sbb.d(ecx_10, ecx_10, 
                            ecx_10 u< *(arg1[5] + ((edx_10 + edi_3) << 2))))
                        ebx_3 -= neg.d(ecx_12) & edx_10
                        edi_3 += (ecx_12 - 1) & edx_10
                        ecx_10 = var_24_1
                        i_1 = ebx_3 - edi_3
                    while (i_1 s> 1)
                    
                    i = i_3
                    ebx_2 = arg3
                
                int32_t edx_12 = sx.d(*(arg1[7] + edi_3))
                
                if (edx_12 s> i)
                    sub_742f50(ebx_2, i)
                    edi_3 = 0xffffffff
                else
                    sub_742f50(ebx_2, edx_12)
            else
                int32_t ecx_3 = *(edi[8] + (eax_6 << 2))
                
                if (ecx_3 s< 0)
                    edi_3 = ecx_3 s>> 0xf & 0x7fff
                    eax_9 = arg1[2] - (ecx_3 & 0x7fff)
                    goto label_99e6ee
                
                int32_t edx_4 = ebx_2[4]
                int32_t edi_4 = *ebx_2
                int32_t esi_3 = sx.d(*(edi[7] + ecx_3 - 1)) + ebx_2[1]
                
                if (edi_4 s<= edx_4 - ((esi_3 + 7) s>> 3))
                    int32_t eax_14
                    int32_t edx_5
                    edx_5:eax_14 = sx.q(esi_3)
                    ebx_2[1] = esi_3 & 7
                    int32_t eax_16 = (eax_14 + (edx_5 & 7)) s>> 3
                    ebx_2[3] += eax_16
                    *ebx_2 = eax_16 + edi_4
                    edi_3 = ecx_3 - 1
                else
                    ebx_2[3] = 0
                    edi_3 = ecx_3 - 1
                    *ebx_2 = edx_4
                    ebx_2[1] = 1
            *(esi_1 + var_c_1) = edi_3
            
            if (edi_3 == 0xffffffff)
                return 0xffffffff
            
            edi = arg1
            *var_c_1 = edi[4] + ((*arg1 * edi_3) << 2)
            eax_32 = var_18_1 + 1
            var_c_1 = &var_c_1[1]
            var_18_1 = eax_32
        while (eax_32 s< var_10_1)
        ebx_1 = var_10_1
    
    int32_t eax_33 = 0
    int32_t i_2 = 0
    int32_t var_c_2 = 0
    
    if (*edi s> 0)
        float* edx_16 = arg2
        float* var_8_3 = edx_16
        
        do
            int32_t ecx_18 = 0
            
            if (ebx_1 s>= 4)
                int32_t j_1 = ((ebx_1 - 4) u>> 2) + 1
                ecx_18 = j_1 << 2
                int32_t __saved_ebx
                int32_t* edi_7 = &__saved_ebx
                int32_t j
                
                do
                    int32_t eax_35 = edi_7[-1]
                    *edx_16 = *(edi_7[-2] + (i_2 << 2)) + *edx_16
                    int32_t eax_36 = *edi_7
                    edx_16[1] = *(eax_35 + (i_2 << 2)) + edx_16[1]
                    int32_t eax_37 = edi_7[1]
                    edi_7 = &edi_7[4]
                    edx_16[2] = *(eax_36 + (i_2 << 2)) + edx_16[2]
                    edx_16[3] = *(eax_37 + (i_2 << 2)) + edx_16[3]
                    edx_16 = &edx_16[4]
                    j = j_1
                    j_1 -= 1
                while (j != 1)
                edi = arg1
                ebx_1 = var_10_1
                eax_33 = var_c_2
                edx_16 = var_8_3
            
            if (ecx_18 s< ebx_1)
                float* edx_18 = &arg2[eax_33 + ecx_18]
                
                do
                    int32_t eax_39 = (&__saved_edi)[ecx_18]
                    ecx_18 += 1
                    *edx_18 = *(eax_39 + (i_2 << 2)) + *edx_18
                    edx_18 = &edx_18[1]
                while (ecx_18 s< ebx_1)
                
                edi = arg1
                eax_33 = var_c_2
                edx_16 = var_8_3
            
            i_2 += 1
            eax_33 += ebx_1
            edx_16 = &edx_16[ebx_1]
            var_c_2 = eax_33
            var_8_3 = edx_16
        while (i_2 s< *edi)

return 0
