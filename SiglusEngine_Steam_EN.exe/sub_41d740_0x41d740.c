// 函数: sub_41d740
// 地址: 0x41d740
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* eax_4

if (arg2 u> 0x1ff)
label_41d992:
    eax_4 = arg3
    
    if (*eax_4 == 4)
        *eax_4 = 3
else
    sub_425430(arg2, 1)
    
    if (*(arg2 * 0x74 + 0x13747b0) == 0)
        goto label_41d992
    
    int32_t edi_1
    
    if (*(arg2 * 0x74 + 0x13747c4) == 2)
        edi_1 = **(arg2 * 0x74 + 0x13747b4)
        
        if (edi_1 s<= 0)
            goto label_41d992
    else
        edi_1 = 1
    
    eax_4 = *arg3 - 4
    int32_t eax_5
    int32_t eax_12
    int32_t* ecx_2
    int32_t* ebx_1
    
    switch (eax_4)
        case nullptr
            ecx_2 = arg4
            eax_5 = *ecx_2
            
            if (eax_5 s>= edi_1 - 1)
                *ecx_2 = edi_1 - 1
                *arg3 = 3
                return eax_5
            
        label_41d7b1:
            int32_t eax_6 = eax_5 + 1
            
            if (eax_5 + 1 s< 0)
                eax_6 = 0
            
            *ecx_2 = eax_6
            int32_t eax_7 = arg3[0x1d]
            arg3[8] = eax_7
            return eax_7
        case 1, 2, 3
            int32_t edx = *arg4
            
            if (edx s< edi_1 - 1)
                *arg4 = edx + 1
            
            if (edx s>= edi_1 - 1 || edx + 1 s< 0)
                *arg4 = 0
            
            int32_t eax_10 = arg3[0x1d]
            arg3[8] = eax_10
            return eax_10
        case 4
            ecx_2 = arg4
            eax_5 = *ecx_2
            
            if (eax_5 s< edi_1 - 1)
                goto label_41d7b1
            
            *ecx_2 = edi_1 - 1
            arg3[4] = 1
            return eax_5
        case 5
            if (edi_1 s< 2)
                return sub_41d6d0(eax_4, arg4, arg3, 5)
            
            bool cond:0_1 = arg3[0xb] != 0
            ebx_1 = arg4
            arg3[8] = arg3[0x1d]
            eax_12 = *ebx_1
            
            if (not(cond:0_1))
                if (eax_12 s>= edi_1 - 1)
                    *ebx_1 = edi_1 - 1
                    arg3[0xb] = 1
                    goto label_41d959
                
                *ebx_1 = eax_12 + 1
                
                if (eax_12 + 1 s< edi_1 - 1)
                    goto label_41d959
                
                *ebx_1 = edi_1 - 1
            label_41d952:
                arg3[8] = 0xa
                goto label_41d959
            
            if (eax_12 s> 0)
            label_41d946:
                *ebx_1 = eax_12 - 1
                
                if (eax_12 - 1 s> 0)
                    goto label_41d959
                
                *ebx_1 = 0
                goto label_41d952
            
            sub_41d6d0(eax_12, ebx_1, arg3, 5)
        label_41d959:
            eax_4 = *ebx_1
            
            if (eax_4 s< 0 || eax_4 s>= edi_1)
                *ebx_1 = 0
        case 6
            arg3[8] = arg3[0x1d]
            eax_4 = sub_445700()
            
            if (eax_4 == 0)
            label_41d976:
                eax_4 = *arg3 - 4
                
                if (eax_4 u<= 6)
                    return sub_41d6d0(eax_4, arg4, arg3, eax_4)
            else
                if (eax_4 == 1)
                    if (arg3[0xc] == 0xffffffff && edi_1 s>= 2)
                        if ((sub_4d18c0(eax_4 + 1) & 1) == 0)
                            arg3[0xc] = modu.dp.d(0:(sub_4d18c0(2)), edi_1 - 1) + 2
                        else
                            arg3[0xc] = edi_1
                    
                    int32_t eax_19 = arg3[0xc]
                    ebx_1 = arg4
                    
                    if (eax_19 s> 0)
                        int32_t ecx_9 = *ebx_1
                        
                        if (ecx_9 s< eax_19 - 1)
                            *ebx_1 = ecx_9 + 1
                            int32_t eax_24 = arg3[0xc] - 1
                            
                            if (ecx_9 + 1 s< eax_24)
                                goto label_41d959
                            
                            *ebx_1 = eax_24
                            goto label_41d952
                        
                        *ebx_1 = eax_19 - 1
                        int32_t eax_21
                        eax_21.b = edi_1 s>= 2
                        arg3[0xc] = eax_21 - 1
                        goto label_41d959
                    
                    if (eax_19 != 0)
                        goto label_41d959
                    
                    eax_12 = *ebx_1
                    
                    if (eax_12 s> 0)
                        goto label_41d946
                    
                    *ebx_1 = 0
                    
                    if (edi_1 s< 2)
                        arg3[0xc] = 0xffffffff
                    else if ((sub_4d18c0(2) & 1) == 0)
                        arg3[0xc] = modu.dp.d(0:(sub_4d18c0(2)), edi_1 - 1) + 2
                    else
                        arg3[0xc] = edi_1
                    
                    goto label_41d959
                
                if (eax_4 == 2)
                    goto label_41d976

return eax_4
