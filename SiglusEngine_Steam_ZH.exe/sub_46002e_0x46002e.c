// 函数: sub_46002e
// 地址: 0x46002e
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int16_t es
arg3[-0x34].w = es

while (true)
    uint32_t edi_1 = zx.d(*(*arg3[0xe] + 2))
    arg3[0xe] += 4
    int32_t entry_ebx
    int32_t esi_2
    int32_t edi_3
    edi_3, esi_2 = __builtin_memcpy(edi_1 + entry_ebx, arg2, arg1 u>> 2 << 2)
    int32_t eax_4 = arg3[-1]
    arg2 += arg3[eax_4 - 0x34]
    int32_t eax_5 = eax_4 + 1
    bool cond:0_1 = eax_5 u< arg3[-0x1d]
    __builtin_memcpy(edi_3, esi_2, arg1 & 3)
    arg3[-1] = eax_5
    
    if (not(cond:0_1))
        while (true)
            arg3[7] += 0x44
            entry_ebx += arg3[-0x35]
            int32_t temp1_1 = arg3[-8]
            arg3[-8] -= 1
            
            if (temp1_1 == 1)
                int16_t* esi_3 = arg3[9]
                int32_t* i_5
                
                if (esi_3 != 0)
                    sub_409105(&arg3[-0x14a], esi_3, arg3[0xd])
                    sub_408746(&arg3[-0x14a], *(esi_3 + 0x2cc), arg3[-7])
                    int32_t* i = nullptr
                    
                    if (arg3[5] u> 0)
                        do
                            int32_t var_4_3 = 0
                            i_5 = i
                            sub_408771(&arg3[-0x14a], i_5, i, var_4_3)
                            i += 1
                        while (i u< arg3[5])
                
                int32_t* i_7 = arg3[-2]
                int32_t ecx_6 = *i_7
                int32_t var_8_4 = 0
                i_5 = i_7
                int32_t** esp_1 = &i_5
                int32_t result = (*(ecx_6 + 0x44))(i_5, var_8_4, &arg3[-5])
                
                if (result s< 0)
                    goto label_460343
                
                int32_t* eax_7 = arg3[-2]
                int32_t ecx_7 = *eax_7
                void* j_2 = &arg3[-6]
                int32_t var_14_1 = 0
                esp_1 = &i_5
                result = (*(ecx_7 + 0x60))(eax_7, 0, j_2)
                
                if (result s< 0)
                    goto label_460343
                
                int32_t i_6 = arg3[3]
                int32_t* eax_9 = arg3[2]
                int32_t* esi_4 = nullptr
                int32_t edx_2 = 0
                arg3[8] = i_6
                int32_t i_1
                
                do
                    int32_t* ecx_9 = *eax_9 + edx_2
                    
                    if (*ecx_9 != 0xffffffff)
                        if ((ecx_9[3].b & 4) == 0)
                            *(esi_4 + arg3[-6]) = 0
                        else
                            *(esi_4 + arg3[-6]) = ecx_9[9]
                        
                        esi_4 = &esi_4[1]
                    
                    edx_2 += 0x2c
                    i_1 = arg3[8]
                    arg3[8] -= 1
                while (i_1 != 1)
                void* ecx_12 = arg3[-5]
                
                if ((arg3[0xc].b & 1) == 0)
                    void* ecx_14 = ecx_12 + 4
                    int32_t edx_4 = 0
                    int32_t i_2
                    
                    do
                        int32_t* esi_12 = *eax_9 + edx_4
                        
                        if (*esi_12 != 0xffffffff)
                            esi_12.w = *esi_12
                            *(ecx_14 - 4) = esi_12.w
                            int32_t esi_13
                            esi_13.w = *(*eax_9 + edx_4 + 4)
                            *(ecx_14 - 2) = esi_13.w
                            int32_t esi_14
                            esi_14.w = *(*eax_9 + edx_4 + 8)
                            *ecx_14 = esi_14.w
                            ecx_14 += 6
                        
                        edx_4 += 0x2c
                        i_2 = i_6
                        i_6 -= 1
                    while (i_2 != 1)
                else
                    void* ecx_13 = ecx_12 + 8
                    int32_t* edx_3 = nullptr
                    int32_t i_3
                    
                    do
                        int32_t esi_6 = *(edx_3 + *eax_9)
                        
                        if (esi_6 != 0xffffffff)
                            *(ecx_13 - 8) = esi_6
                            *(ecx_13 - 4) = *(*eax_9 + edx_3 + 4)
                            *ecx_13 = *(*eax_9 + edx_3 + 8)
                            ecx_13 += 0xc
                        
                        edx_3 = &edx_3[0xb]
                        i_3 = i_6
                        i_6 -= 1
                    while (i_3 != 1)
                
                int32_t* j_3 = arg3[-2]
                int32_t ecx_15 = *j_3
                j_2 = j_3
                (*(ecx_15 + 0x64))(j_2)
                int32_t* j_4 = arg3[-2]
                arg3[-6] = 0
                int32_t ecx_16 = *j_4
                j_2 = j_4
                (*(ecx_16 + 0x48))(j_2)
                int32_t* j_5 = arg3[-2]
                arg3[-5] = 0
                int32_t ecx_17 = *j_5
                j_2 = j_5
                (*(ecx_17 + 0x40))(j_2)
                esp_1 = &i_5
                bool cond:6_1 = arg3[0x10] == 0
                arg3[-7] = 0
                
                if (cond:6_1)
                    goto label_460307
                
                int32_t eax_10 = arg3[6]
                j_2 = &arg3[-3]
                int32_t edi_5 = eax_10 * 0xc
                int32_t var_14_2 = edi_5
                esp_1 = &i_5
                result = sub_458de2()
                
                if (result s< 0)
                    goto label_460343
                
                int32_t* j_6 = arg3[-3]
                int32_t ecx_18 = *j_6
                j_2 = j_6
                int32_t eax_13 = (*(ecx_18 + 0xc))(j_2)
                int32_t esi_15 = arg3[5]
                arg3[8] = eax_13
                j_2 = esi_15 << 2
                int32_t eax_16 = sub_745f3f(j_2)
                esp_1 = &i_5
                arg3[-0xd] = eax_16
                
                if (eax_16 != 0)
                    int32_t ecx_20 = 0
                    
                    if (esi_15 u> 0)
                        int32_t edx_5 = 0
                        
                        do
                            *(eax_16 + (ecx_20 << 2)) = *(*arg3[4] + edx_5 + 0x30)
                            ecx_20 += 1
                            edx_5 += 0x44
                        while (ecx_20 u< esi_15)
                    
                    int32_t esi_16 = arg3[0xb]
                    
                    if (esi_16 != 0)
                        if (arg3[6] == arg3[3])
                            int32_t esi_17
                            int32_t edi_7
                            edi_7, esi_17 = __builtin_memcpy(arg3[8], esi_16, edi_5 u>> 2 << 2)
                            __builtin_memcpy(edi_7, esi_17, edi_5 & 3)
                            goto label_4602f6
                        
                        int32_t edi_8 = arg3[3]
                        j_2 = edi_8 << 2
                        int32_t eax_21 = sub_745f3f(j_2)
                        esp_1 = &i_5
                        arg3[-0xc] = eax_21
                        
                        if (eax_21 == 0)
                            goto label_460203
                        
                        int32_t esi_18 = 0
                        int32_t ecx_26 = 0
                        int32_t* edx_6 = nullptr
                        
                        do
                            if (*(edx_6 + *arg3[2]) != 0xffffffff)
                                *(eax_21 + (ecx_26 << 2)) = esi_18
                                esi_18 += 1
                            else
                                *(eax_21 + (ecx_26 << 2)) = 0xffffffff
                            
                            ecx_26 += 1
                            edx_6 = &edx_6[0xb]
                        while (ecx_26 u< edi_8)
                        
                        int32_t* ecx_27 = arg3[8]
                        int32_t i_4 = 0
                        arg3[5] = arg3[0xb]
                        
                        do
                            if (*(eax_21 + (i_4 << 2)) != 0xffffffff)
                                int32_t* esi_19 = arg3[5]
                                j_2 = 3
                                void* j_1 = j_2
                                esp_1 = &i_5
                                void* j
                                
                                do
                                    int32_t edx_7 = *esi_19
                                    
                                    if (edx_7 == 0xffffffff)
                                        *ecx_27 = 0xffffffff
                                    else
                                        *ecx_27 = *(eax_21 + (edx_7 << 2))
                                    
                                    esi_19 = &esi_19[1]
                                    ecx_27 = &ecx_27[1]
                                    j = j_1
                                    j_1 -= 1
                                while (j != 1)
                            
                            arg3[5] += 0xc
                            i_4 += 1
                        while (i_4 u< arg3[3])
                        
                        goto label_4602f6
                    
                    bool cond:9_1 = arg3[0xa] == 0
                    j_2 = arg3[8]
                    int32_t result_1
                    
                    if (cond:9_1)
                        int32_t* eax_25 = arg3[-2]
                        int32_t ecx_29 = *eax_25
                        int32_t var_14_4 = ecx_29
                        result_1 = (*(ecx_29 + 0x58))(eax_25, fconvert.s(float.t(0)))
                        esp_1 = &j_2
                    else
                        int32_t* ecx_28 = arg3[-2]
                        result_1 = (*(*ecx_28 + 0x50))(ecx_28, eax_16)
                        esp_1 = &j_2
                    
                    result = result_1
                    
                    if (result s< 0)
                        goto label_460343
                    
                label_4602f6:
                    int32_t eax_26 = arg3[-3]
                    int32_t* ecx_30 = arg3[0x10]
                    arg3[-3] = 0
                    *ecx_30 = eax_26
                label_460307:
                    int32_t* eax_28 = *arg3[0x10]
                    int32_t eax_29
                    
                    if (eax_28 == 0)
                        eax_29 = 0
                    else
                        int32_t ecx_31 = *eax_28
                        *(esp_1 - 4) = eax_28
                        eax_29 = (*(ecx_31 + 0xc))()
                    
                    int32_t* ecx_32 = arg3[-2]
                    int32_t edx_10 = *ecx_32
                    *(esp_1 - 4) = 0
                    *(esp_1 - 8) = 0
                    *(esp_1 - 0xc) = eax_29
                    *(esp_1 - 0x10) = eax_29
                    *(esp_1 - 0x14) = 0x32000000
                    *(esp_1 - 0x18) = ecx_32
                    result = (*(edx_10 + 0x6c))()
                    
                    if (result s>= 0)
                        *arg3[0xf] = arg3[-2]
                        goto label_460343
                else
                label_460203:
                    result = 0x8007000e
                label_460343:
                    
                    if (arg3[-6] != 0)
                        int32_t* eax_32 = arg3[-2]
                        int32_t ecx_34 = *eax_32
                        *(esp_1 - 4) = eax_32
                        (*(ecx_34 + 0x64))()
                    
                    if (arg3[-5] != 0)
                        int32_t* eax_33 = arg3[-2]
                        int32_t ecx_35 = *eax_33
                        *(esp_1 - 4) = eax_33
                        (*(ecx_35 + 0x48))()
                    
                    *(esp_1 - 4) = arg3[-0xd]
                    j__free()
                    *(esp_1 - 8) = arg3[-0xc]
                    j__free()
                    int32_t* eax_34 = arg3[-3]
                    *(esp_1 - 4)
                    
                    if (eax_34 != 0)
                        int32_t ecx_37 = *eax_34
                        *(esp_1 - 4) = eax_34
                        (*(ecx_37 + 8))()
                        arg3[-3] = 0
                    
                    if (arg3[-7] != 0)
                        int32_t* eax_35 = arg3[-2]
                        int32_t ecx_38 = *eax_35
                        *(esp_1 - 4) = eax_35
                        (*(ecx_38 + 0x40))()
                    
                    if (result s< 0)
                        int32_t* eax_36 = arg3[-2]
                        
                        if (eax_36 != 0)
                            int32_t ecx_39 = *eax_36
                            *(esp_1 - 4) = eax_36
                            (*(ecx_39 + 8))()
                
                *esp_1
                esp_1[1]
                esp_1[2]
                *arg3
                return result
            
            int32_t* ecx_40 = arg3[4]
            int32_t eax_38 = arg3[7]
            int32_t* esi_22 = *ecx_40 + eax_38
            int32_t* edi_11 = zx.d(*(arg3[-0x43] + 2)) + entry_ebx
            *edi_11 = *esi_22
            void* edi_12 = &edi_11[1]
            void* esi_23 = &esi_22[1]
            *edi_12 = *esi_23
            *(edi_12 + 4) = *(esi_23 + 4)
            void* edx_12 = arg3[-0x40]
            
            if (edx_12 != 0)
                int32_t* esi_27 = *ecx_40 + eax_38 + 0x24
                int32_t* edi_16 = zx.d(*(edx_12 + 2)) + entry_ebx
                *edi_16 = *esi_27
                void* edi_17 = &edi_16[1]
                void* esi_28 = &esi_27[1]
                *edi_17 = *esi_28
                *(edi_17 + 4) = *(esi_28 + 4)
            
            void* esi_31 = arg3[-0x3f]
            
            if (esi_31 != 0)
                *(zx.d(*(esi_31 + 2)) + entry_ebx) = sub_45ecc4(*arg3[4] + arg3[7] + 0xc)
                eax_38 = arg3[7]
                ecx_40 = arg3[4]
            
            if (arg3[-4] != 0)
                int32_t ecx_43 = *ecx_40
                uint32_t edx_14 = zx.d(*(arg3[-0x3d] + 2))
                *(edx_14 + entry_ebx) = *(ecx_43 + eax_38 + 0x1c)
                *(edx_14 + entry_ebx + 4) = *(ecx_43 + eax_38 + 0x20)
            
            if (arg3[8] != 0)
                void* eax_44 = arg3[8]
                bool cond:1_1 = arg3[-0x1e] u<= 0
                arg2 = *(eax_44 + 8) + (((*(eax_44 + 4) u>> 2) * *(*arg3[4] + arg3[7] + 0x40)) << 2)
                arg3[0xe] = arg2
                
                if (not(cond:1_1))
                    int32_t eax_47 = arg3[-0x2c] & 0x9000
                    int32_t var_4_6 = 0
                    int32_t ecx_47
                    ecx_47.b = eax_47 != 0
                    arg3[-1] = eax_47
                    int32_t eax_49 = arg3[-0x1e] - ecx_47
                    int32_t eax_50 = neg.d(eax_49)
                    int32_t eax_53 = neg.d(sbb.d(eax_50, eax_50, eax_49 != 0)) << 2
                    arg3[0xe] = eax_53
                    int32_t esi_35
                    int32_t edi_22
                    edi_22, esi_35 = __builtin_memcpy(zx.d(*(arg3[-0x41] + 2)) + entry_ebx, arg2, 
                        eax_53 u>> 2 << 2)
                    arg2 = &arg2[neg.d(sbb.d(eax_50, eax_50, eax_49 != 0))]
                    bool cond:4_1 = arg3[-1] == 0
                    __builtin_memcpy(edi_22, esi_35, eax_53 & 3)
                    arg3[0xe] = arg2
                    
                    if (not(cond:4_1))
                        *(zx.d(*(arg3[-0x41] + 2)) + entry_ebx) = *arg2
                
                if (arg3[-0x2a] u> 0)
                    sub_40b004(&arg3[-0x65], entry_ebx, arg3[0xe])
                    arg3[0xe] += 0xc
                    arg2 = arg3[0xe]
                
                if (arg3[-0x28] u> 0)
                    *(zx.d(*(arg3[-0x3f] + 2)) + entry_ebx) = *arg2
                    arg2 = &arg2[1]
                
                if (arg3[-0x27] u> 0)
                    *(zx.d(*(arg3[-0x3e] + 2)) + entry_ebx) = *arg2
                    arg2 = &arg2[1]
                
                if (arg3[-0x1d] u> 0)
                    int32_t ecx_58 = *(arg3[8] + 0xc)
                    eax_5 = 0
                    bool cond:7_1 = arg3[-0x1d] u<= 0
                    arg3[-1] = 0
                    
                    if (not(cond:7_1))
                        arg3[0xe] = &arg3[ecx_58 - 0x3d]
                        break
    
    arg1 = arg3[eax_5 - 0x34]
