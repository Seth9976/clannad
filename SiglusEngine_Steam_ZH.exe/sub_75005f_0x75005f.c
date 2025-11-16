// 函数: sub_75005f
// 地址: 0x75005f
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

while (true)
    sub_750280(&arg1[-0x8b], __return_addr, arg4, arg5, arg6)
    int32_t entry_ebx
    
    if ((entry_ebx.b & 8) != 0)
        return sub_750073(arg1, arg2, arg3, arg8, arg9) __tailcall
    
    void* eax_2 = arg1[-0x8a]
    int32_t result_1
    int32_t edx_2
    
    if (arg1[-0x91] == 0 || eax_2 s<= 0)
        sub_750280(arg2, eax_2, arg1[-0x8c], &arg1[-0x88], arg1[-0x97])
    label_750139:
        result_1 = arg1[-0x88]
    else
        int16_t* ecx_2 = arg2
        
        while (true)
            arg1[-0x8f] = eax_2 - 1
            arg6 = zx.d(*ecx_2)
            arg1[-0x9d] = &ecx_2[1]
            int32_t eax_7
            eax_7, edx_2 = _wctomb_s(&arg1[-0x98], &arg1[-3], 6, arg6)
            
            if (eax_7 != 0 || arg1[-0x98] == eax_7)
                result_1 = 0xffffffff
                arg1[-0x88] = 0xffffffff
                break
            
            sub_750280(&arg1[-3], arg1[-0x98], arg1[-0x8c], &arg1[-0x88], arg1[-0x97])
            eax_2 = arg1[-0x8f]
            ecx_2 = arg1[-0x9d]
            
            if (eax_2 == 0)
                goto label_750139
            
            continue
    
    if (result_1 s< 0)
        goto label_750166
    
    if ((entry_ebx.b & 4) == 0)
        break
    
    _write_multi_char(0x20, arg3, arg1[-0x8c], &arg1[-0x88])
    
    while (true)
        result_1 = arg1[-0x88]
    label_750166:
        int32_t* eax_11 = arg1[-0x96]
        
        if (eax_11 != 0)
            _free(eax_11)
            arg1[-0x96] = 0
            goto label_75017f
        
    label_750185:
        char* eax_12 = arg1[-0x84]
    label_75018b:
        edx_2.b = *eax_12
        *(arg1 - 0x211) = edx_2.b
        arg1[-0x93].b = edx_2.b
        
        if (edx_2.b != 0)
            arg1[-0x84] = &eax_12[1]
        
        if (edx_2.b == 0 || result_1 s< 0)
            int32_t eax_13 = arg1[-0x8e]
            int32_t result
            
            if (eax_13 == 0 || eax_13 == 7)
                result = result_1
            else
            label_7501b5:
                *__errno() = 0x16
                __invalid_parameter_noinfo()
                result = 0xffffffff
            
            if (arg1[-0x99].b != 0)
                void* ecx_6 = arg1[-0x9a]
                *(ecx_6 + 0x70) &= 0xfffffffd
            
            sub_745f2b(arg1[-1] ^ arg1)
            *arg1
            return result
        
        int32_t eax_20
        
        if (edx_2.b - 0x20 u> 0x58)
            eax_20 = 0
        else
            eax_20 = zx.d(*(sx.d(edx_2.b) + 0xaae408)) & 0xf
        
        uint32_t edi_2 = zx.d(*(eax_20 * 9 + arg1[-0x8e] + 0xaae428))
        arg1[-0x8e] = edi_2
        int16_t** edi_3 = arg1[-0x87]
        uint32_t eax_23 = edi_2 u>> 4
        arg1[-0x8e] = eax_23
        
        if (eax_23 != 8)
            if (eax_23 u> 7)
                goto label_750185
            
            switch (eax_23)
                case 0
                label_74fa0f:
                    arg1[-0x91] = 0
                    int32_t eax_42 = sub_75a22c(edx_2.b, &arg1[-0x9c])
                    char eax_44
                    
                    if (eax_42 != 0)
                        sub_75020c(arg1[-0x93].b, arg1[-0x8c], &arg1[-0x88])
                        char* ecx_14 = arg1[-0x84]
                        eax_44 = *ecx_14
                        arg1[-0x93].b = eax_44
                        arg1[-0x84] = &ecx_14[1]
                    
                    if (eax_42 == 0 || eax_44 != 0)
                        sub_75020c(arg1[-0x93].b, arg1[-0x8c], &arg1[-0x88])
                    label_75017f:
                        result_1 = arg1[-0x88]
                        goto label_750185
                case 1
                    arg1[-0x89] = 0xffffffff
                    entry_ebx = 0
                    arg1[-0x94] = 0
                    arg1[-0x92] = 0
                    arg1[-0x90] = 0
                    arg1[-0x8d] = 0
                    arg1[-0x86] = 0
                    arg1[-0x91] = 0
                    goto label_750185
                case 2
                    int32_t eax_24 = sx.d(edx_2.b)
                    
                    if (eax_24 == 0x20)
                        entry_ebx |= 2
                        arg1[-0x86] = entry_ebx
                        goto label_750185
                    
                    if (eax_24 == 0x23)
                        entry_ebx |= 0x80
                        arg1[-0x86] = entry_ebx
                        goto label_750185
                    
                    if (eax_24 == 0x2b)
                        entry_ebx |= 1
                        arg1[-0x86] = entry_ebx
                        goto label_750185
                    
                    if (eax_24 == 0x2d)
                        entry_ebx |= 4
                        arg1[-0x86] = entry_ebx
                        goto label_750185
                    
                    eax_12 = arg1[-0x84]
                    
                    if (eax_24 != 0x30)
                        goto label_75018b
                    
                    entry_ebx |= 8
                    arg1[-0x86] = entry_ebx
                    goto label_75018b
                case 3
                    if (edx_2.b != 0x2a)
                        arg1[-0x90] = sx.d(edx_2.b) + arg1[-0x90] * 0xa - 0x30
                        goto label_75017f
                    
                    int16_t* eax_30 = *edi_3
                    arg1[-0x87] = &edi_3[1]
                    arg1[-0x90] = eax_30
                    
                    if (eax_30 s>= 0)
                        goto label_750185
                    
                    entry_ebx |= 4
                    arg1[-0x86] = entry_ebx
                    arg1[-0x90] = neg.d(eax_30)
                    goto label_750185
                case 4
                    arg1[-0x89] = 0
                    goto label_750185
                case 5
                    if (edx_2.b != 0x2a)
                        arg1[-0x89] = sx.d(edx_2.b) + arg1[-0x89] * 0xa - 0x30
                        goto label_75017f
                    
                    int16_t* eax_34 = *edi_3
                    arg1[-0x89] = eax_34
                    eax_12 = arg1[-0x84]
                    arg1[-0x87] = &edi_3[1]
                    
                    if (eax_34 s>= 0)
                        goto label_75018b
                    
                    arg1[-0x89] = 0xffffffff
                    goto label_75018b
                case 6
                    if (edx_2.b != 0x49)
                        if (edx_2.b == 0x68)
                            entry_ebx |= 0x20
                            arg1[-0x86] = entry_ebx
                            goto label_750185
                        
                        eax_12 = arg1[-0x84]
                        
                        if (edx_2.b != 0x6c)
                            if (edx_2.b != 0x77)
                                goto label_75018b
                            
                            entry_ebx |= 0x800
                        else if (*eax_12 != 0x6c)
                            entry_ebx |= 0x10
                        else
                            eax_12 = &eax_12[1]
                            entry_ebx |= 0x1000
                        
                        arg1[-0x86] = entry_ebx
                        goto label_75018b
                    
                    char* eax_37
                    eax_37.b = *arg1[-0x84]
                    void* edi_6
                    
                    if (eax_37.b == 0x36)
                        edi_6 = arg1[-0x84]
                    
                    if (eax_37.b == 0x36 && *(edi_6 + 1) == 0x34)
                        eax_12 = edi_6 + 2
                        entry_ebx |= 0x8000
                        arg1[-0x86] = entry_ebx
                        goto label_75018b
                    
                    void* edi_7
                    
                    if (eax_37.b == 0x33)
                        edi_7 = arg1[-0x84]
                    
                    if (eax_37.b == 0x33 && *(edi_7 + 1) == 0x32)
                        eax_12 = edi_7 + 2
                        entry_ebx &= 0xffff7fff
                        arg1[-0x86] = entry_ebx
                        goto label_75018b
                    
                    switch (eax_37.b)
                        case 0x58
                            goto label_750185
                        case 0x64
                            goto label_750185
                        case 0x69
                            goto label_750185
                        case 0x6f
                            goto label_750185
                        case 0x75
                            goto label_750185
                        case 0x78
                            goto label_750185
                    
                    arg1[-0x8e] = 0
                    goto label_74fa0f
                case 7
                    int32_t eax_46 = sx.d(edx_2.b)
                    void* eax_56
                    
                    if (eax_46 s> 0x64)
                        if (eax_46 s> 0x70)
                            if (eax_46 != 0x73)
                                if (eax_46 == 0x75)
                                    goto label_74fcef
                                
                                if (eax_46 != 0x78)
                                    goto label_74ffcd
                                
                                arg6 = 0x27
                                goto label_74fe64
                            
                        label_74fb30:
                            edx_2 = arg1[-0x89]
                            int32_t ecx_16 = 0x7fffffff
                            
                            if (edx_2 != 0xffffffff)
                                ecx_16 = edx_2
                            
                            arg2 = *edi_3
                            arg1[-0x87] = &edi_3[1]
                            
                            if ((entry_ebx & 0x810) == 0)
                                if (arg2 == 0)
                                    arg2 = data_b4cc08
                                
                                int16_t* eax_100 = arg2
                            label_74ffc1:
                                
                                if (ecx_16 != 0)
                                    ecx_16 -= 1
                                    
                                    if (*eax_100 != 0)
                                        eax_100 += 1
                                        goto label_74ffc1
                                
                                eax_56 = eax_100 - arg2
                            else
                                if (arg2 == 0)
                                    arg2 = data_b4cc0c
                                
                                arg1[-0x91] = 1
                                int16_t* eax_54 = arg2
                                
                                if (ecx_16 != 0)
                                label_74fb75:
                                    ecx_16 -= 1
                                    
                                    if (*eax_54 != 0)
                                        eax_54 = &eax_54[1]
                                        
                                        if (ecx_16 != 0)
                                            goto label_74fb75
                                
                                eax_56 = (eax_54 - arg2) s>> 1
                            
                            goto label_74ffc7
                        
                        if (eax_46 == 0x70)
                            arg1[-0x89] = 8
                        label_74fe44:
                            arg6 = 7
                        label_74fe64:
                            arg1[-0x8a] = 0x10
                            arg1[-0x95] = arg6
                            
                            if (entry_ebx.b s< 0)
                                int32_t* eax_87
                                eax_87.b = arg6.b + 0x51
                                arg1[-0x8b].b = 0x30
                                *(arg1 - 0x22b) = eax_87.b
                                arg1[-0x8d] = 2
                            
                            goto label_74fd07
                        
                        if (eax_46 s< 0x65)
                            goto label_74ffcd
                        
                        if (eax_46 s<= 0x67)
                            goto label_74fac8
                        
                        if (eax_46 == 0x69)
                            goto label_74fce6
                        
                        if (eax_46 != 0x6e)
                            if (eax_46 != 0x6f)
                                goto label_74ffcd
                            
                            arg1[-0x8a] = 8
                            
                            if (entry_ebx.b s< 0)
                                entry_ebx |= 0x200
                                arg1[-0x86] = entry_ebx
                            
                            goto label_74fd07
                        
                        arg1[-0x87] = &edi_3[1]
                        int16_t* edi_12 = *edi_3
                        
                        if (__get_printf_count_output() != 0)
                            int32_t eax_70 = arg1[-0x88]
                            
                            if ((entry_ebx.b & 0x20) == 0)
                                *edi_12 = eax_70
                            else
                                *edi_12 = eax_70.w
                            
                            arg1[-0x92] = 1
                            continue
                    else
                        if (eax_46 == 0x64)
                        label_74fce6:
                            entry_ebx |= 0x40
                            arg1[-0x86] = entry_ebx
                        label_74fcef:
                            arg1[-0x8a] = 0xa
                        label_74fd07:
                            int16_t* ecx_18
                            int32_t edi_14
                            
                            if ((entry_ebx & 0x8000) != 0 || (entry_ebx & 0x1000) != 0)
                                ecx_18 = *edi_3
                                arg1[-0x87] = &edi_3[2]
                                edi_14 = edi_3[1]
                            else
                                arg1[-0x87] = &edi_3[1]
                                int32_t eax_88
                                
                                if ((entry_ebx.b & 0x20) != 0)
                                    if ((entry_ebx.b & 0x40) == 0)
                                        eax_88 = zx.d(*edi_3)
                                    else
                                        eax_88 = sx.d(*edi_3)
                                    
                                    goto label_74fec4
                                
                                if ((entry_ebx.b & 0x40) == 0)
                                    ecx_18 = *edi_3
                                    edi_14 = 0
                                else
                                    eax_88 = *edi_3
                                label_74fec4:
                                    int16_t* eax_89
                                    int32_t edx_3
                                    edx_3:eax_89 = sx.q(eax_88)
                                    ecx_18 = eax_89
                                    edi_14 = edx_3
                            
                            if ((entry_ebx.b & 0x40) != 0 && edi_14 s<= 0
                                    && (edi_14 s< 0 || ecx_18 u< 0))
                                int16_t* temp17_1 = ecx_18
                                ecx_18 = neg.d(ecx_18)
                                edi_14 = neg.d(adc.d(edi_14, 0, temp17_1 != 0))
                                entry_ebx |= 0x100
                                arg1[-0x86] = entry_ebx
                            
                            if ((entry_ebx & 0x9000) == 0)
                                edi_14 = 0
                            
                            int32_t edx_4 = arg1[-0x89]
                            
                            if (edx_4 s>= 0)
                                entry_ebx &= 0xfffffff7
                                arg1[-0x86] = entry_ebx
                                
                                if (edx_4 s> 0x200)
                                    edx_4 = 0x200
                            else
                                edx_4 = 1
                            
                            if ((ecx_18 | edi_14) == 0)
                                arg1[-0x8d] = 0
                            
                            void* esi_1 = arg1 - 0xd
                        label_74ff30:
                            arg1[-0x89] = edx_4 - 1
                            
                            if (edx_4 s<= 0 && (ecx_18 | edi_14) == 0)
                                entry_ebx = arg1[-0x86]
                                void* eax_99 = arg1 - 0xd - esi_1
                                arg2 = esi_1 + 1
                                arg1[-0x8a] = eax_99
                                
                                if ((entry_ebx & 0x200) != 0 && (eax_99 == 0 || *arg2 != 0x30))
                                    arg2 -= 1
                                    arg1[-0x8a] += 1
                                    *arg2 = 0x30
                                
                                goto label_74ffcd
                            
                            int32_t* eax_96
                            int32_t* edx_5
                            edx_5:eax_96 = sx.q(arg1[-0x8a])
                            uint32_t eax_97
                            int32_t ecx_22
                            int32_t edx_6
                            eax_97, ecx_22, edx_6 = __aulldvrm(ecx_18, edi_14, eax_96, edx_5)
                            int32_t ecx_23 = ecx_22 + 0x30
                            arg1[-0x9d] = entry_ebx
                            arg1[-0x8f] = eax_97
                            edi_14 = edx_6
                            
                            if (ecx_23 s> 0x39)
                                ecx_23 += arg1[-0x95]
                            
                            edx_4 = arg1[-0x89]
                            *esi_1 = ecx_23.b
                            esi_1 -= 1
                            ecx_18 = arg1[-0x8f]
                            goto label_74ff30
                        
                        if (eax_46 s> 0x53)
                            if (eax_46 == 0x58)
                                goto label_74fe44
                            
                            if (eax_46 != 0x5a)
                                if (eax_46 == 0x61)
                                    goto label_74fac8
                                
                                if (eax_46 != 0x63)
                                    goto label_74ffcd
                                
                            label_74fbac:
                                arg1[-0x87] = &edi_3[1]
                                
                                if ((entry_ebx & 0x810) == 0)
                                    int32_t eax_49
                                    eax_49.b = *edi_3
                                    arg1[-0x83].b = eax_49.b
                                    arg1[-0x8a] = 1
                                else
                                    int32_t eax_65
                                    eax_65, edx_2 =
                                        _wctomb_s(&arg1[-0x8a], &arg1[-0x83], 0x200, zx.d(*edi_3))
                                    
                                    if (eax_65 != 0)
                                        arg1[-0x92] = 1
                                
                                arg2 = &arg1[-0x83]
                                goto label_74ffcd
                            
                            int16_t* eax_66 = *edi_3
                            arg1[-0x87] = &edi_3[1]
                            
                            if (eax_66 != 0)
                                arg2 = *(eax_66 + 4)
                            
                            if (eax_66 != 0 && arg2 != 0)
                                eax_56 = sx.d(*eax_66)
                                
                                if ((entry_ebx & 0x800) == 0)
                                    arg1[-0x91] = 0
                                else
                                    int32_t eax_67
                                    edx_2:eax_67 = sx.q(eax_56)
                                    arg1[-0x91] = 1
                                    eax_56 = (eax_67 - edx_2) s>> 1
                                
                                goto label_74ffc7
                            
                            arg2 = data_b4cc08
                        label_74fc51:
                            eax_56, edx_2 = _strlen(arg2)
                        label_74ffc7:
                            arg1[-0x8a] = eax_56
                        label_74ffcd:
                            
                            if (arg1[-0x92] == 0)
                                if ((entry_ebx.b & 0x40) != 0)
                                    if ((entry_ebx & 0x100) != 0)
                                        arg1[-0x8b].b = 0x2d
                                        arg1[-0x8d] = 1
                                    else if ((entry_ebx.b & 1) != 0)
                                        arg1[-0x8b].b = 0x2b
                                        arg1[-0x8d] = 1
                                    else if ((entry_ebx.b & 2) != 0)
                                        arg1[-0x8b].b = 0x20
                                        arg1[-0x8d] = 1
                                
                                void* __return_addr_1 = arg1[-0x8d]
                                arg3 = arg1[-0x90] - arg1[-0x8a] - __return_addr_1
                                
                                if ((entry_ebx.b & 0xc) == 0)
                                    _write_multi_char(0x20, arg3, arg1[-0x8c], &arg1[-0x88])
                                    return sub_750042(arg1) __tailcall
                                
                                arg6 = arg1[-0x97]
                                arg5 = &arg1[-0x88]
                                arg4 = arg1[-0x8c]
                                __return_addr = __return_addr_1
                                break
                            
                            continue
                        
                        if (eax_46 == 0x53)
                            if ((entry_ebx & 0x830) == 0)
                                entry_ebx |= 0x800
                                arg1[-0x86] = entry_ebx
                            
                            goto label_74fb30
                        
                        if (eax_46 != 0x41)
                            if (eax_46 == 0x43)
                                if ((entry_ebx & 0x830) == 0)
                                    entry_ebx |= 0x800
                                    arg1[-0x86] = entry_ebx
                                
                                goto label_74fbac
                            
                            if (eax_46 == 0x45 || eax_46 == 0x47)
                                goto label_74fab5
                            
                            goto label_74ffcd
                        
                    label_74fab5:
                        edx_2.b += 0x20
                        arg1[-0x94] = 1
                        *(arg1 - 0x211) = edx_2.b
                    label_74fac8:
                        void* eax_71 = arg1[-0x89]
                        arg2 = &arg1[-0x83]
                        entry_ebx |= 0x40
                        arg1[-0x86] = entry_ebx
                        arg1[-0x8f] = 0x200
                        
                        if (eax_71 s< 0)
                            arg1[-0x89] = 6
                        else if (eax_71 != 0)
                            if (eax_71 s> 0x200)
                                eax_71 = 0x200
                                arg1[-0x89] = 0x200
                            
                            if (eax_71 s> 0xa3)
                                int16_t* eax_72
                                eax_72, edx_2 = sub_74cd17(eax_71 + 0x15d)
                                edx_2.b = *(arg1 - 0x211)
                                arg1[-0x96] = eax_72
                                
                                if (eax_72 == 0)
                                    arg1[-0x89] = 0xa3
                                else
                                    arg2 = eax_72
                                    arg1[-0x8f] = eax_71 + 0x15d
                                
                                edi_3 = arg1[-0x87]
                        else if (edx_2.b == 0x67)
                            arg1[-0x89] = 1
                        
                        arg1[-0xa0] = *edi_3
                        arg1[-0x87] = &edi_3[2]
                        arg1[-0x9f] = edi_3[1]
                        arg6 = &arg1[-0x9c]
                        arg5 = arg1[-0x94]
                        arg4 = arg1[-0x89]
                        __return_addr = sx.d(edx_2.b)
                        DecodePointer(data_b4cec8)(&arg1[-0xa0], arg2, arg1[-0x8f])
                        int32_t edi_18 = entry_ebx & 0x80
                        
                        if (edi_18 != 0 && arg1[-0x89] == 0)
                            arg6 = &arg1[-0x9c]
                            DecodePointer(data_b4ced4)()
                        
                        if (*(arg1 - 0x211) == 0x67 && edi_18 == 0)
                            arg6 = &arg1[-0x9c]
                            DecodePointer(data_b4ced0)()
                        
                        if (*arg2 == 0x2d)
                            entry_ebx |= 0x100
                            arg2 += 1
                            arg1[-0x86] = entry_ebx
                        
                        goto label_74fc51
        
        goto label_7501b5

goto label_750166
