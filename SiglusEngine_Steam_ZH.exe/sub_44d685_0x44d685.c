// 函数: sub_44d685
// 地址: 0x44d685
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_38 = edi

if (arg3 != 0 && *arg3 != 0)
    int32_t var_3c_1 = 0xa
    void* eax_1 = sub_4439e9(arg1, arg2)
    void* eax_2
    void* ecx
    
    if (eax_1 == 0)
        int32_t var_3c_2 = 0xa
        void* eax_3 = sub_4441fb(arg1, arg2)
        
        if (eax_3 != 0)
        label_44d6e0:
            ecx = eax_3 + 0x2c
            eax_2 = eax_3 + 0x30
            goto label_44d6e6
        
        int32_t var_3c_3 = 0xa
        eax_3 = sub_4441ba(arg1, arg2)
        
        if (eax_3 != 0)
            goto label_44d6e0
    else
        ecx = eax_1 + 0x38
        eax_2 = eax_1 + 0x3c
    label_44d6e6:
        int32_t* i = *eax_2
        arg2 = i
        int32_t* i_1 = nullptr
        
        while (i != 0)
            int32_t eax_4 = i[5]
            int32_t ecx_2 = *(arg1 + 0xac)
            int32_t* edx_1 = i[1]
            void* eax_6
            
            if (eax_4 u>= ecx_2)
                eax_6 = *(*(arg1 + 0x11c) + ((eax_4 - ecx_2) << 2))
            else if (*(*(*(arg1 + 0xb0) + (eax_4 << 2)) + 0x40) != 0)
                eax_6 = *(*(arg1 + 0x38) + 0x10)
            else
                eax_6 = *(arg1 + 0x20)
            
            int32_t* eax_9 = eax_6 + edx_1[2]
            void* ecx_6 = nullptr
            
            if (*eax_9 != 0)
                ecx_6 = &eax_9[1]
            
            char* esi_1 = arg3
            
            while (true)
                eax_9.b = *esi_1
                
                if (eax_9.b != *ecx_6)
                    break
                
                if (eax_9.b == 0)
                    break
                
                esi_1 = &esi_1[1]
                ecx_6 += 1
            
            eax_9.b = *esi_1
            ecx_6.b = *ecx_6
            
            if (eax_9.b == ecx_6.b)
                return not.d(i)
            
            if (ecx_6.b == 0)
                if (eax_9.b == 0x2e)
                    return sub_4524f7(arg1, not.d(i), &esi_1[1], arg4)
                
                if (eax_9.b == 0x5b)
                    void* esi_3 = &esi_1[1]
                    eax_9.b = *esi_3
                    
                    if (eax_9.b s< 0x30)
                        return 0
                    
                    if (eax_9.b s> 0x39)
                        return 0
                    
                    void* var_3c_6 = esi_3
                    int32_t eax_31 = sub_75efed()
                    
                    if (eax_31 u>= edx_1[4])
                        return 0
                    
                    while (true)
                        int32_t* ecx_18
                        ecx_18.b = *esi_3
                        
                        if (ecx_18.b s< 0x30)
                            break
                        
                        if (ecx_18.b s> 0x39)
                            break
                        
                        esi_3 += 1
                    
                    if (*esi_3 != 0x5d)
                        return 0
                    
                    int32_t eax_30 = sub_443cff(arg1, not.d(i), eax_31, arg4)
                    
                    if (eax_30 == 0)
                        return 0
                    
                    char ecx_20 = *(esi_3 + 1)
                    
                    if (ecx_20 == 0)
                        return eax_30
                    
                    if (ecx_20 != 0x2e)
                        return 0
                    
                    return sub_4524f7(arg1, eax_30, esi_3 + 2, arg4)
            
            i_1 = i
            i = i[0xf]
            arg2 = i
        
        if ((*(arg1 + 0x118) & 2) != 0)
            int32_t eax_10 = *(arg1 + 0x120)
            char* ecx_7 = arg3
            char* eax_11
            eax_11.b = *arg3
            int32_t var_24_1 = 0
            void* var_c_1 = nullptr
            int32_t var_8_1 = 0
            int32_t var_10_1 = 0
            arg4 = nullptr
            
            while (true)
                int32_t eax_12 = sx.d(eax_11.b)
                
                if (eax_12 != 0x2e && eax_12 != 0x40 && eax_12 != 0x5b && eax_12 != 0x5d)
                    ecx_7 = &ecx_7[1]
                    eax_11.b = *ecx_7
                    
                    if (eax_11.b != 0)
                        continue
                    else
                        char* eax_17 = arg3
                        void* esi_2 = &eax_17[1]
                        
                        do
                            ecx_7.b = *eax_17
                            eax_17 = &eax_17[1]
                        while (ecx_7.b != 0)
                        
                        void* ecx_9 = (eax_17 - esi_2 + 1) & 3
                        char temp5_1 = ecx_9.b
                        ecx_9.b = neg.b(ecx_9.b)
                        int32_t ecx_13 = (neg.d(sbb.d(ecx_9, ecx_9, temp5_1 != 0))
                            + ((eax_17 - esi_2 + 1) u>> 2)) << 2
                        int32_t eax_23 = sub_745f3f((*(arg1 + 0xa8) << 2) + 4)
                        var_8_1 = eax_23
                        
                        if (eax_23 != 0)
                            int32_t eax_26 = sub_745f3f((*(arg1 + 0x120) << 2) + 4)
                            var_10_1 = eax_26
                            
                            if (eax_26 != 0)
                                int32_t* eax_27 = sub_745f3f(0x50)
                                
                                if (eax_27 == 0)
                                    arg2 = nullptr
                                else
                                    arg2 = sub_44cb3f(eax_27)
                                
                                if (arg2 == 0)
                                    break
                                
                                int32_t ecx_23 = *(arg1 + 0x120) << 2
                                int32_t esi_8
                                int32_t edi_5
                                edi_5, esi_8 =
                                    __builtin_memcpy(var_10_1, *(arg1 + 0x11c), ecx_23 u>> 2 << 2)
                                __builtin_memcpy(edi_5, esi_8, ecx_23 & 3)
                                *(var_10_1 + (*(arg1 + 0x120) << 2)) = 0
                                j__free(*(arg1 + 0x11c))
                                *(arg1 + 0x11c) = var_10_1
                                *(arg1 + 0x120) += 1
                                uint32_t ecx_28 = zx.d(*(arg1 + 0xa8))
                                arg2[2] = 0xffffffff
                                arg2[5] = ecx_28
                                arg2[0xb] = ecx_13 + 4
                                arg2[0xa] = 4
                                arg2[6] = 0
                                arg2[7] = 0
                                int32_t* eax_35 = *(arg1 + 0xc4)
                                int32_t ecx_31 = eax_35[1]
                                int32_t edx_3 = *eax_35
                                int32_t esi_9 = eax_35[4]
                                var_10_1 = 0
                                
                                if (ecx_31 s>= 0)
                                    int32_t* edx_8
                                    
                                    if (ecx_31 s<= 3)
                                        if (edx_3 == 1 || edx_3 == 2 || edx_3 == 3)
                                            int32_t eax_48 = (eax_35[6] * eax_35[5]) << 2
                                            arg2[3] = 4
                                            arg2[3] = eax_48
                                            int32_t ecx_54 = eax_48
                                            
                                            if (esi_9 != 0)
                                                ecx_54 *= esi_9
                                                arg2[3] = eax_48 * esi_9
                                            
                                            int32_t* eax_51 = sub_745f3f(ecx_54 + ecx_13 + 0x20)
                                            arg4 = eax_51
                                            
                                            if (eax_51 != 0)
                                                __builtin_memset(
                                                    __builtin_memset(arg4, 0, 
                                                        (ecx_54 + ecx_13 + 0x20) u>> 2 << 2), 
                                                    0, (ecx_54 + ecx_13 + 0x20) & 3)
                                                __builtin_memcpy(
                                                    &arg4[neg.d(sbb.d(ecx_9, ecx_9, temp5_1 != 0))
                                                        + ((eax_17 - esi_2 + 1) u>> 2) + 1], 
                                                    *(arg1 + 0xc4), 0x1c)
                                                arg2[0xc] = arg2[0xb] + 0x1c
                                                edx_8 = arg2
                                            label_44db2e:
                                                *arg4 = eax_17 - esi_2 + 1
                                                int32_t esi_22
                                                int32_t edi_19
                                                edi_19, esi_22 = __builtin_memcpy(&arg4[1], arg3, 
                                                    (eax_17 - esi_2 + 1) u>> 2 << 2)
                                                __builtin_memcpy(edi_19, esi_22, 
                                                    (eax_17 - esi_2 + 1) & 3)
                                                *(edx_8[0xb] + arg4 + 8) = 0
                                                *(edx_8[0xb] + arg4 + 0xc) = 0
                                                int32_t ecx_68 = *(arg1 + 0xa8) << 2
                                                int32_t esi_26
                                                int32_t edi_25
                                                edi_25, esi_26 = __builtin_memcpy(var_8_1, 
                                                    *(arg1 + 0xb0), ecx_68 u>> 2 << 2)
                                                __builtin_memcpy(edi_25, esi_26, ecx_68 & 3)
                                                *(var_8_1 + (*(arg1 + 0xa8) << 2)) = edx_8
                                                int32_t eax_58 = *(arg1 + 0xb0)
                                                
                                                if (eax_58 != 0)
                                                    j__free(eax_58)
                                                    *(arg1 + 0xb0) = 0
                                                    edx_8 = arg2
                                                
                                                *(arg1 + 0xa8) += 1
                                                *(arg1 + 0xb0) = var_8_1
                                                var_8_1 = 0
                                                
                                                if (i_1 == 0)
                                                    *eax_2 = edx_8
                                                else
                                                    i_1[0xf] = edx_8
                                                
                                                *ecx += 1
                                                edx_8[1] = edx_8[0xb] + arg4
                                                *edx_8 = edx_8[0xc] + arg4
                                                *(*(arg1 + 0x11c) + (eax_10 << 2)) = arg4
                                                arg4 = nullptr
                                                var_24_1 = not.d(edx_8)
                                                arg2 = nullptr
                                    else if (ecx_31 == 4 && esi_9 == 0 && edx_3 == ecx_31)
                                        int32_t* eax_38 = sub_745f3f(ecx_13 + 0x1c)
                                        arg4 = eax_38
                                        
                                        if (eax_38 != 0)
                                            int32_t esi_11 = *(arg1 + 0x14) + 1
                                            int32_t* eax_41 = sub_745f3f(esi_11 * 0x18 + 4)
                                            
                                            if (eax_41 == 0)
                                                var_c_1 = nullptr
                                            else
                                                *eax_41 = esi_11
                                                sub_61cdd0(&eax_41[1], 0x18, esi_11, sub_443369)
                                                var_c_1 = &eax_41[1]
                                            
                                            if (var_c_1 != 0)
                                                __builtin_memset(
                                                    __builtin_memset(arg4, 0, 
                                                        (ecx_13 + 0x1c) u>> 2 << 2), 
                                                    0, (ecx_13 + 0x1c) & 3)
                                                __builtin_memset(var_c_1 + *(arg1 + 0x14) * 0x18, 
                                                    0, 0x18)
                                                *(var_c_1 + *(arg1 + 0x14) * 0x18) = 4
                                                int32_t ecx_41 = *(arg1 + 0x14) * 0x18
                                                int32_t esi_14
                                                int32_t edi_11
                                                edi_11, esi_14 = __builtin_memcpy(var_c_1, 
                                                    *(arg1 + 0x18), ecx_41 u>> 2 << 2)
                                                edx_8 = arg2
                                                __builtin_memcpy(edi_11, esi_14, ecx_41 & 3)
                                                void* ecx_45 = edx_8[0xb]
                                                edx_8[3] = 4
                                                edx_8[0xc] = ecx_45 + 0x14
                                                __builtin_memcpy(ecx_45 + arg4, *(arg1 + 0xc4), 
                                                    0x14)
                                                *(arg4 + edx_8[0xc]) = *(arg1 + 0x14)
                                                int32_t ecx_48 = *(arg1 + 0x14) * 0x18
                                                __builtin_memset(
                                                    __builtin_memset(*(arg1 + 0x18), 0, 
                                                        ecx_48 u>> 2 << 2), 
                                                    0, ecx_48 & 3)
                                                int32_t* ecx_52 = *(arg1 + 0x18)
                                                
                                                if (ecx_52 != 0)
                                                    sub_449097(ecx_52, 3)
                                                    *(arg1 + 0x18) = 0
                                                    edx_8 = arg2
                                                
                                                void* eax_45 = var_c_1
                                                var_c_1 = nullptr
                                                *(arg1 + 0x14) += 1
                                                *(arg1 + 0x18) = eax_45
                                                goto label_44db2e
                
                if (arg2 == 0)
                    break
                
                sub_44cbb2(arg2, 1)
                break
            
            if (var_8_1 != 0)
                j__free(var_8_1)
            
            if (var_10_1 != 0)
                j__free(var_10_1)
            
            if (var_c_1 != 0)
                sub_449097(var_c_1, 3)
            
            if (arg4 != 0)
                j__free(arg4)
            
            return var_24_1

return 0
