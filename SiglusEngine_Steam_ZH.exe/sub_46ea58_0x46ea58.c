// 函数: sub_46ea58
// 地址: 0x46ea58
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* edx = arg3
int32_t edi
int32_t var_30 = edi

if ((edx & 0xfff00000) == 0x20500000 && (arg7 & 4) != 0)
    void* eax_3 = edx & 0xfffff
    arg3 = nullptr
    
    if (eax_3 u> 0)
        int32_t* esi_1 = arg5
        int32_t* edi_2 = arg6 - esi_1
        int32_t* var_8_1 = edi_2
        
        while (true)
            int32_t ecx = *esi_1
            
            if (ecx != *(edi_2 + esi_1))
                break
            
            if ((**(*(arg1[2] + 0x14) + (ecx << 2)) & 1) == 0)
                break
            
            arg3 += 1
            esi_1 = &esi_1[1]
            
            if (arg3 u>= eax_3)
                break
            
            edi_2 = var_8_1
    
    if (arg3 == eax_3)
        edx = (eax_3 & 0xfffff) | 0x10000000

int32_t eax_7
int32_t var_44_1
int32_t var_40_1
int32_t* var_3c_1
int32_t* var_38_1
int32_t var_34_1

if (edx != 0x50000001)
    int32_t var_14
    void* var_10
    
    if (edx != 0x50000002 || (*(arg1[2] + 0x6c) & 0x20) != 0)
        void* ecx_5 = arg1[2]
        void* eax_13
        
        if ((*(ecx_5 + 0x6c) & 0x80) != 0)
            eax_13 = edx & 0xfff00000
            var_10 = eax_13
        
        if ((*(ecx_5 + 0x6c) & 0x80) != 0 && (eax_13 == 0x20000000 || eax_13 == 0x20100000
                || eax_13 == 0x20200000 || eax_13 == 0x20300000))
            void* i_5 = edx & 0xfffff
            int32_t ecx_6 = sub_745f3f(i_5 << 4)
            int32_t var_c_1 = ecx_6
            
            if (ecx_6 == 0)
                return 0x8007000e
            
            int32_t var_24
            
            for (int32_t i = 0; i u< 4; )
                (&var_24)[i] = ecx_6
                i += 1
                ecx_6 += i_5 << 2
            
            if (i_5 u> 0)
                int32_t* var_1c
                int32_t* eax_17 = var_1c
                void* ecx_8 = arg5 - eax_17
                int32_t* edx_4 = arg6 - eax_17
                int32_t var_18
                int32_t* ecx_10 = var_18 - eax_17
                void* i_4 = i_5
                void* i_1
                
                do
                    void* edi_7 = var_10
                    
                    if (edi_7 == 0x20000000)
                        *eax_17 = *(edx_4 + eax_17)
                        *(ecx_10 + eax_17) = *(ecx_8 + eax_17)
                    else if (edi_7 == 0x20100000)
                        *eax_17 = *(ecx_8 + eax_17)
                        *(ecx_10 + eax_17) = *(edx_4 + eax_17)
                    else if (edi_7 == 0x20200000)
                        *eax_17 = arg1[9]
                        *(ecx_10 + eax_17) = arg1[8]
                    else if (edi_7 == 0x20300000)
                        *eax_17 = arg1[8]
                        *(ecx_10 + eax_17) = arg1[9]
                    
                    eax_17 = &eax_17[1]
                    i_1 = i_4
                    i_4 -= 1
                while (i_1 != 1)
            
            sub_46cc96(var_24, i_5)
            int32_t var_20
            sub_46cc96(var_20, i_5)
            void* eax_20 = arg7.d & 0x40
            void* edi_16 = i_5 & 0xfffff
            int32_t eax_18 = sub_46ea58(arg2, edi_16 | 0x10100000, var_24, arg6, 0, eax_20)
            int32_t esi_5
            
            if (eax_18 s< 0)
                esi_5 = eax_18
            else
                eax_18 = sub_46ea58(arg2, edi_16 | 0x20400000, var_20, arg5, var_24, eax_20)
                
                if (eax_18 s< 0)
                    esi_5 = eax_18
                else
                    eax_18 = sub_46ea58(arg2, edi_16 | 0x30000000, arg4, var_20, 
                        var_c_1 + (i_5 << 3), arg7.d)
                    
                    esi_5 = eax_18 s< 0 ? eax_18 : 0
            
            j__free(var_c_1)
            return esi_5
        
        int32_t eax_27 = sub_49f5a4(ecx_5, edx, 0xffffffff, 0xffffffff)
        void* ebx_1 = arg1[2]
        int32_t* ebx_2
        
        if (eax_27 u>= *(ebx_1 + 0xc))
            ebx_2 = nullptr
        else
            ebx_2 = *(*(ebx_1 + 0x18) + (eax_27 << 2))
        
        if (ebx_2 == 0)
            return 0x8007000e
        
        if (ebx_2[3] != 0 || ebx_2[1] != 0)
            void* i_3 = sub_49ef81(ebx_2, 0, nullptr)
            int32_t eax_28 = sub_49e7de(ebx_2, 0, nullptr)
            int32_t edx_5 = ebx_2[1]
            int32_t edi_18 = ebx_2[2]
            void* ecx_21 = eax_28 << 2
            var_10 = ecx_21
            int32_t esi_7
            int32_t edi_19
            edi_19, esi_7 = __builtin_memcpy(edi_18, arg5, ecx_21 u>> 2 << 2)
            __builtin_memcpy(edi_19, esi_7, ecx_21 & 3)
            __builtin_memcpy(ebx_2[2] + ecx_21, arg6, (edx_5 - eax_28) << 2)
            int32_t i_2 = 0
            
            if (ebx_2[1] u> 0)
                do
                    int32_t eax_31 = *(ebx_2[2] + (i_2 << 2))
                    void* ecx_26 = arg1[2]
                    void* const eax_32
                    
                    if (eax_31 u>= *(ecx_26 + 8))
                        eax_32 = nullptr
                    else
                        eax_32 = *(*(ecx_26 + 0x14) + (eax_31 << 2))
                    
                    if (eax_32 != 0)
                        *(eax_32 + 0x5c) += 1
                    
                    i_2 += 1
                while (i_2 u< ebx_2[1])
            
            void* edi_22 = nullptr
            arg6 = nullptr
            
            if (i_3 u> 0)
                do
                    arg5 = nullptr
                    
                    if (arg4 != 0)
                        int32_t eax_34 = *(arg4 + (edi_22 << 2))
                        
                        if (eax_34 != 0xffffffff)
                            void* ecx_28 = arg1[2]
                            int32_t* eax_35
                            
                            if (eax_34 u>= *(ecx_28 + 8))
                                eax_35 = nullptr
                            else
                                eax_35 = *(*(ecx_28 + 0x14) + (eax_34 << 2))
                            
                            arg5 = eax_35
                            
                            if (eax_35 == 0)
                                sub_46e3d1(arg1, nullptr, 0, 
                                    "internal error: result register invalid")
                                return 0x80004005
                    
                    void* ecx_30 = arg1[2]
                    void* var_34_11 = ecx_30
                    void* var_38_8 = ecx_30
                    var_38_8.q = fconvert.d(float.t(0))
                    void* eax_36 = sub_49f544(ecx_30, *(ecx_30 + 0x88), 0, 0, var_38_8)
                    var_10 = eax_36
                    
                    if (eax_36 == 0xffffffff)
                        return 0x8007000e
                    
                    void* ecx_31 = arg1[2]
                    int32_t* ecx_33
                    
                    if (eax_36 u>= *(ecx_31 + 8))
                        ecx_33 = nullptr
                    else
                        ecx_33 = *(*(ecx_31 + 0x14) + (eax_36 << 2))
                    
                    if (ecx_33 == 0)
                        return 0x8007000e
                    
                    *ecx_33 = arg7.d
                    ecx_33[0x12] = eax_27
                    ecx_33[4] = edi_22
                    
                    if ((arg8 & 0xe) == 0)
                        edi_22 = arg6
                        *ecx_33 = arg1[0x19] | arg7.d
                    
                    ecx_33[5] = arg1[0xc]
                    ecx_33[6] = arg1[0xd]
                    void** edx_14 = edi_22 << 2
                    *(edx_14 + ebx_2[4]) = eax_36
                    
                    if (arg4 != 0)
                        *(edx_14 + arg4) = eax_36
                    
                    if (arg5 != 0)
                        ecx_33[0xc] = arg5[0xc]
                        ecx_33[0x18] = arg5[0x18]
                        ecx_33[0x19] = arg5[0x19]
                    
                    if (ecx_33[0xc] != 0xffffffff)
                        *(arg1[6] + (ecx_33[0xc] << 2)) = *(edx_14 + ebx_2[4])
                        
                        if (ecx_33[0x18] == 0)
                            void* var_34_12 = var_10
                            sub_46e3d1(arg1, nullptr, 0, 
                                "internal error: argument missing context (A%u)")
                    
                    edi_22 = arg6 + 1
                    arg6 = edi_22
                while (edi_22 u< i_3)
            
            int32_t edi_29 = 0
            
            if (i_3 u> 0)
                do
                    sub_46cffa(arg1, *(ebx_2[4] + (edi_29 << 2)), nullptr)
                    edi_29 += 1
                while (edi_29 u< i_3)
            
            if ((arg1[5].b & 4) == 0 && sub_49ea13(ebx_2) == 0)
                int32_t edi_30 = 0
                bool cond:8_1 = 0 != i_3
                
                if (0 u< i_3)
                    do
                        int32_t eax_45 = *(ebx_2[4] + (edi_30 << 2))
                        
                        if ((**(*(arg1[2] + 0x14) + (eax_45 << 2)) & 0x40) != 0)
                            break
                        
                        if (sub_46e8bc(arg1, eax_45, &var_14) s< 0)
                            break
                        
                        edi_30 += 1
                    while (edi_30 u< i_3)
                    
                    cond:8_1 = edi_30 != i_3
                
                if (not(cond:8_1))
                    *ebx_2 = (i_3 & 0xfffff) | 0x10000000
                    int32_t edi_31 = 0
                    ebx_2[1] = ebx_2[3]
                    
                    if (i_3 u> 0)
                        do
                            void* ecx_40 = arg1[2]
                            void* var_34_14 = ecx_40
                            void* var_38_11 = ecx_40
                            var_38_11.q = fconvert.d(fconvert.t(
                                *(*(*(ecx_40 + 0x14) + (*(ebx_2[4] + (edi_31 << 2)) << 2)) + 0x20)))
                            *(ebx_2[2] + (edi_31 << 2)) =
                                sub_49f544(ecx_40, *(ecx_40 + 0x78), 0, 0, var_38_11)
                            
                            if (*(ebx_2[2] + (edi_31 << 2)) == 0xffffffff)
                                return 0x8007000e
                            
                            edi_31 += 1
                        while (edi_31 u< i_3)
            
            int32_t eax_57 = *ebx_2 & 0xfff00000
            
            if (eax_57 == 0x20500000)
                goto label_46f1fd
            
            if (eax_57 == 0x10000000)
                int32_t eax_70 = 0
                arg7.d = 0
                
                if (i_3 u> 0)
                    do
                        int32_t ecx_51 = *(arg1[2] + 0x14)
                        int32_t edx_25 = eax_70 << 2
                        int32_t* eax_74 = *(ecx_51 + (*(edx_25 + ebx_2[4]) << 2))
                        int32_t edx_26 = *(edx_25 + ebx_2[2])
                        int32_t* ecx_52 = *(ecx_51 + (edx_26 << 2))
                        eax_74[0xd] = edx_26
                        *eax_74 |= *ecx_52
                        *(eax_74 + 0x20) = fconvert.d(fconvert.t(*(ecx_52 + 0x20)))
                        *(eax_74 + 0x28) = fconvert.d(fconvert.t(*(ecx_52 + 0x28)))
                        eax_70 = arg7.d + 1
                        arg7.d = eax_70
                    while (eax_70 u< i_3)
            else if (eax_57 == 0x10100000)
                int32_t eax_63 = 0
                arg7.d = 0
                
                if (i_3 u> 0)
                    do
                        int32_t eax_65 = *(arg1[2] + 0x14)
                        int32_t edx_22 = eax_63 << 2
                        int32_t* ecx_50 = *(eax_65 + (*(edx_22 + ebx_2[4]) << 2))
                        *ecx_50 |= **(eax_65 + (*(edx_22 + ebx_2[2]) << 2)) & 2
                        eax_63 = arg7.d + 1
                        arg7.d = eax_63
                    while (eax_63 u< i_3)
            else
                if (eax_57 == 0x20000000 || eax_57 == 0x20100000)
                    goto label_46f1fd
                
                if (eax_57 == 0x20400000)
                    arg7.d = 0
                    
                    if (i_3 u> 0)
                        do
                            int32_t eax_59 = *(arg1[2] + 0x14)
                            int32_t ecx_43 = arg7.d << 2
                            int32_t* edx_19 = *(eax_59 + (*(ecx_43 + ebx_2[4]) << 2))
                            int32_t edx_20 = ebx_2[2]
                            *edx_19 |= **(eax_59 + (*(edx_20 + ((ebx_2[3] + arg7.d) << 2)) << 2))
                                & **(eax_59 + (*(ecx_43 + edx_20) << 2)) & 2
                            arg7.d += 1
                        while (arg7.d u< i_3)
            
            if (eax_57 == 0x20700000 || eax_57 == 0x20800000)
            label_46f1fd:
                arg7.d = 0
                
                if (i_3 u> 0)
                    do
                        int32_t eax_96 = *(arg1[2] + 0x14)
                        int32_t edx_33 = arg7.d << 2
                        int32_t* ecx_66 = *(eax_96 + (*(edx_33 + ebx_2[4]) << 2))
                        int32_t ecx_67 = ebx_2[2]
                        char eax_99 = (**(eax_96 + (*(ecx_67 + ((ebx_2[3] + arg7.d) << 2)) << 2))).b
                            & (**(eax_96 + (*(edx_33 + ecx_67) << 2))).b
                        
                        if ((eax_99 & 1) != 0)
                            *ecx_66 |= 0x17
                        else if ((eax_99 & 2) != 0)
                            *ecx_66 |= 2
                        
                        arg7.d += 1
                    while (arg7.d u< i_3)
            else if (eax_57 == 0x30000000)
                void* edi_39 = nullptr
                arg5 = nullptr
                
                if (i_3 u> 0)
                    do
                        int32_t eax_89 = *(arg1[2] + 0x14)
                        int32_t edx_31 = ebx_2[2]
                        arg7.d = *(eax_89 + (*(ebx_2[4] + (edi_39 << 2)) << 2))
                        int32_t ecx_60 = ebx_2[3]
                        char eax_92 =
                            (**(eax_89 + (*(edx_31 + ((arg5 + (ecx_60 << 1)) << 2)) << 2))).b
                            & (**(eax_89 + (*(edx_31 + ((edi_39 + ecx_60) << 2)) << 2))).b
                        
                        if ((eax_92 & 1) != 0)
                            int32_t* eax_93 = arg7.d
                            *eax_93 |= 0x17
                        else if ((eax_92 & 2) != 0)
                            int32_t* eax_94 = arg7.d
                            *eax_94 |= 2
                        
                        edi_39 = arg5 + 1
                        arg5 = edi_39
                    while (edi_39 u< i_3)
            else if (eax_57 == 0x50000000)
                int32_t* eax_78 = *(*(arg1[2] + 0x14) + (*ebx_2[4] << 2))
                arg7.d = 0
                
                if (i_3 u> 0)
                    int32_t* eax_79 = ebx_2[2]
                    int32_t ecx_56 = *(arg1[2] + 0x14)
                    arg5 = eax_79
                    void* edi_38 = &eax_79[ebx_2[3]]
                    
                    while (((**(ecx_56 + (*arg5 << 2))).b & (**(ecx_56 + (*edi_38 << 2))).b & 2)
                            != 0)
                        arg7.d += 1
                        arg5 = &arg5[1]
                        edi_38 += 4
                        
                        if (arg7.d u>= i_3)
                            break
                
                if (arg7.d == i_3)
                    *eax_78 |= 2
            
            ebx_2[0xf] = arg2
            ebx_2[0xe] = arg1[0xe]
        else
            *ebx_2 = 0
        
        return 0
    
    int32_t esi_3 = arg7.d & 0x40
    var_14 = 0xffffffff
    var_10 = 0xffffffff
    eax_7 = sub_46ea58(arg2, 0x20500001, &var_14, arg5, arg6, esi_3)
    
    if (eax_7 s>= 0)
        eax_7 = sub_46ea58(arg2, 0x20500001, &var_10, &arg5[1], &arg6[1], esi_3)
        
        if (eax_7 s>= 0)
            var_34_1 = arg7.d
            var_38_1 = &var_10
            var_3c_1 = &var_14
            var_40_1 = arg4
            var_44_1 = 0x20400001
            goto label_46eb76
else
    var_34_1 = arg7.d
    var_38_1 = arg6
    var_3c_1 = arg5
    var_40_1 = arg4
    var_44_1 = 0x20500001
label_46eb76:
    eax_7 = sub_46ea58(arg2, var_44_1, var_40_1, var_3c_1, var_38_1, var_34_1)
    
    if (eax_7 s>= 0)
        return 0
return eax_7
