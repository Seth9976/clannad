// 函数: sub_408300
// 地址: 0x408300
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* ebx = arg1

if (*ebx s<= 8)
    int32_t edi_3 = 0
    int32_t var_8_1 = 0
    
    if (arg4 s> 0)
        float* esi_5 = arg2
        
        while (true)
            arg2 = ebx[0xa]
            int32_t eax_14 = sub_410af0(arg3, ebx[9])
            int32_t ebp_9
            int32_t ebx_2
            int32_t edi_6
            
            if (eax_14 s< 0)
                ebx_2 = ebx[2]
                edi_6 = 0
            label_4084fc:
                float* ebp_10 = arg2
                int32_t i = sub_410af0(arg3, ebp_10)
                
                if (i s< 0)
                    do
                        if (ebp_10 s<= 1)
                            arg2 = ebp_10
                            
                            if (i s< 0)
                                goto label_408665_1
                            
                            goto label_40853d
                        
                        ebp_10 -= 1
                        i = sub_410af0(arg3, ebp_10)
                    while (i s< 0)
                    
                    arg2 = ebp_10
                
            label_40853d:
                int32_t eax_17 = sub_407cd0(i)
                int32_t i_1 = ebx_2 - edi_6
                
                if (i_1 s> 1)
                    do
                        int32_t edx_12 = i_1 s>> 1
                        int32_t ecx_18 = edx_12 + edi_6
                        int32_t ecx_20 =
                            neg.d(sbb.d(ecx_18, ecx_18, eax_17 u< *(arg1[5] + (ecx_18 << 2))))
                        ebx_2 -= neg.d(ecx_20) & edx_12
                        edi_6 += (ecx_20 - 1) & edx_12
                        i_1 = ebx_2 - edi_6
                    while (i_1 s> 1)
                    
                    ebp_10 = arg2
                
                int32_t eax_19 = sx.d(*(arg1[7] + edi_6))
                
                if (eax_19 s> ebp_10)
                    sub_410ba0(arg3, ebp_10)
                    break
                
                sub_410ba0(arg3, eax_19)
                ebx = arg1
                ebp_9 = edi_6
                edi_3 = var_8_1
            else
                int32_t ebp_7 = *(ebx[8] + (eax_14 << 2))
                
                if ((ebp_7 & 0x80000000) != 0)
                    edi_6 = ebp_7 s>> 0xf & 0x7fff
                    ebx_2 = ebx[2] - (ebp_7 & 0x7fff)
                    goto label_4084fc
                
                sub_410ba0(arg3, sx.d(*(ebx[7] + ebp_7 - 1)))
                ebp_9 = ebp_7 - 1
            
            if (ebp_9 == 0xffffffff)
                break
            
            int32_t edx_15 = *ebx
            float* ecx_25 = ebx[4] + ((edx_15 * ebp_9) << 2)
            int32_t eax_22 = 0
            
            if (edx_15 - 1 u<= 7)
                switch (edx_15)
                    case 2
                        goto label_408628
                    case 3
                        goto label_40861b
                    case 4
                        goto label_40860e
                    case 5
                        goto label_408601
                    case 6
                        goto label_4085f4
                    case 7
                        goto label_4085e7
                    case 8
                        long double x87_r7_4 = fconvert.t(*ecx_25) + fconvert.t(*esi_5)
                        edi_3 += 1
                        eax_22 = 1
                        esi_5 = &esi_5[1]
                        esi_5[-1] = fconvert.s(x87_r7_4)
                    label_4085e7:
                        long double x87_r7_6 = fconvert.t(ecx_25[eax_22]) + fconvert.t(*esi_5)
                        eax_22 += 1
                        edi_3 += 1
                        esi_5 = &esi_5[1]
                        esi_5[-1] = fconvert.s(x87_r7_6)
                    label_4085f4:
                        long double x87_r7_8 = fconvert.t(ecx_25[eax_22]) + fconvert.t(*esi_5)
                        eax_22 += 1
                        edi_3 += 1
                        esi_5 = &esi_5[1]
                        esi_5[-1] = fconvert.s(x87_r7_8)
                    label_408601:
                        long double x87_r7_10 = fconvert.t(ecx_25[eax_22]) + fconvert.t(*esi_5)
                        eax_22 += 1
                        edi_3 += 1
                        esi_5 = &esi_5[1]
                        esi_5[-1] = fconvert.s(x87_r7_10)
                    label_40860e:
                        long double x87_r7_12 = fconvert.t(ecx_25[eax_22]) + fconvert.t(*esi_5)
                        eax_22 += 1
                        edi_3 += 1
                        esi_5 = &esi_5[1]
                        esi_5[-1] = fconvert.s(x87_r7_12)
                    label_40861b:
                        long double x87_r7_14 = fconvert.t(ecx_25[eax_22]) + fconvert.t(*esi_5)
                        eax_22 += 1
                        edi_3 += 1
                        esi_5 = &esi_5[1]
                        esi_5[-1] = fconvert.s(x87_r7_14)
                    label_408628:
                        long double x87_r7_16 = fconvert.t(ecx_25[eax_22]) + fconvert.t(*esi_5)
                        eax_22 += 1
                        edi_3 += 1
                        esi_5 = &esi_5[1]
                        esi_5[-1] = fconvert.s(x87_r7_16)
                
                long double x87_r7_18 = fconvert.t(ecx_25[eax_22]) + fconvert.t(*esi_5)
                edi_3 += 1
                esi_5 = &esi_5[1]
                var_8_1 = edi_3
                esi_5[-1] = fconvert.s(x87_r7_18)
            
            if (edi_3 s>= arg4)
                return 0
        
    label_408665:
        return 0xffffffff
else
    int32_t edi = 0
    int32_t var_8 = 0
    
    if (arg4 s> 0)
        while (true)
            arg1 = ebx[0xa]
            int32_t eax_3 = sub_410af0(arg3, ebx[9])
            int32_t esi_4
            int32_t edi_2
            
            if (eax_3 s< 0)
                edi_2 = ebx[2]
                esi_4 = 0
            label_408389:
                int32_t* ebp_3 = arg1
                int32_t i_2 = sub_410af0(arg3, ebp_3)
                
                if (i_2 s< 0)
                    do
                        if (ebp_3 s<= 1)
                            arg1 = ebp_3
                            
                            if (i_2 s< 0)
                                goto label_408665_1
                            
                            goto label_4083ca
                        
                        ebp_3 -= 1
                        i_2 = sub_410af0(arg3, ebp_3)
                    while (i_2 s< 0)
                    
                    arg1 = ebp_3
                
            label_4083ca:
                int32_t eax_6 = sub_407cd0(i_2)
                int32_t i_3 = edi_2 - esi_4
                
                if (i_3 s> 1)
                    do
                        int32_t ecx_3 = ebx[5]
                        int32_t edx_4 = i_3 s>> 1
                        int32_t ecx_5 =
                            neg.d(sbb.d(ecx_3, ecx_3, eax_6 u< *(ecx_3 + ((edx_4 + esi_4) << 2))))
                        edi_2 -= neg.d(ecx_5) & edx_4
                        esi_4 += (ecx_5 - 1) & edx_4
                        i_3 = edi_2 - esi_4
                    while (i_3 s> 1)
                    
                    ebp_3 = arg1
                
                int32_t eax_7 = sx.d(*(ebx[7] + esi_4))
                
                if (eax_7 s> ebp_3)
                    sub_410ba0(arg3, ebp_3)
                    return 0xffffffff
                
                sub_410ba0(arg3, eax_7)
                edi = var_8
            else
                int32_t ebp_1 = *(ebx[8] + (eax_3 << 2))
                
                if ((ebp_1 & 0x80000000) != 0)
                    esi_4 = ebp_1 s>> 0xf & 0x7fff
                    edi_2 = ebx[2] - (ebp_1 & 0x7fff)
                    goto label_408389
                
                sub_410ba0(arg3, sx.d(*(ebx[7] + ebp_1 - 1)))
                esi_4 = ebp_1 - 1
            
            if (esi_4 == 0xffffffff)
                break
            
            int32_t eax_8 = *ebx
            float* ecx_11 = ebx[4] + ((eax_8 * esi_4) << 2)
            int32_t i_4 = 0
            
            if (eax_8 s> 0)
                float* eax_10 = &arg2[edi]
                
                do
                    long double x87_r7_2 = fconvert.t(*ecx_11) + fconvert.t(*eax_10)
                    i_4 += 1
                    ecx_11 = &ecx_11[1]
                    edi += 1
                    eax_10 = &eax_10[1]
                    eax_10[-1] = fconvert.s(x87_r7_2)
                while (i_4 s< *ebx)
                
                var_8 = edi
            
            if (edi s>= arg4)
                return 0
        
    label_408665_1:
        return 0xffffffff

return 0
