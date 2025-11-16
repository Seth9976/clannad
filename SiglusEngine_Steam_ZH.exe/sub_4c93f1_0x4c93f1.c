// 函数: sub_4c93f1
// 地址: 0x4c93f1
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax_1 = **(arg1 + 0x100)
int32_t edi
int32_t var_134 = edi
int32_t esi_1 = eax_1 & 0xfffff
int32_t* var_10 = nullptr
int32_t var_38 = 0
int32_t var_48 = 0
int32_t var_44 = 1
int32_t var_40 = 2
int32_t var_3c = 3

if ((eax_1 & 0xfff00000) == 0x30000000)
    int32_t var_1c_1 = 0
    int32_t var_28_1 = 0
    int32_t var_24_1 = 0
    int32_t var_2c_1 = 0
    int32_t var_c_1 = 0
    int32_t var_8_2
    
    if (esi_1 u<= 0)
    label_4c9692:
        int32_t eax_31
        eax_31.b = arg2 == 0
        void var_128
        int32_t var_e8[0x4]
        int32_t eax_32 = sub_4c73cc(arg1, *(arg1 + 0x100), 0xacb8d8, &var_128, &var_38, &var_e8, 
            &var_48, esi_1, eax_31)
        var_8_2 = eax_32
        
        if (eax_32 == 0)
            int32_t edi_15 = 0
            int32_t var_1c_2 = 0
            
            for (int32_t i = 0; i u< 2; i += 1)
                for (int32_t j = 0; j u< 8; j += 4)
                    int32_t edx_6 = 0
                    int32_t var_30_2 = 0
                    int32_t var_d8[0x4]
                    
                    if (esi_1 u> 0)
                        int32_t ecx_27 = *(arg1 + 0x14)
                        
                        do
                            int32_t eax_34 = i << 2
                            int32_t edi_17 = var_e8[eax_34 + edx_6]
                            int32_t eax_35 = var_d8[edx_6 - eax_34]
                            int32_t var_b8[0x1c]
                            int32_t edx_8 = var_b8[edx_6 - j]
                            int32_t var_c8[0x4]
                            int32_t eax_37 = var_c8[j + edx_6]
                            void* edx_9 = *(ecx_27 + (edx_8 << 2))
                            int32_t edx_10 = *(arg1 + 0x10)
                            int32_t edx_13 = *(*(ecx_27 + (edi_17 << 2)) + 0x38)
                            int32_t eax_41
                            
                            if (edx_13 == eax_37)
                                if ((*(*(ecx_27 + (edi_17 << 2)) + 0x3c) ^ 0x80000)
                                        != *(*(ecx_27 + (eax_37 << 2)) + 0x3c) || eax_35 != edx_8)
                                    goto label_4c9788
                                
                                edi_15 = 1
                                eax_41 = 0
                            else
                                int32_t edx_15 = *(*(ecx_27 + (eax_37 << 2)) + 0x38)
                                
                                if ((edx_15 == edi_17 || (edx_13 != 0xffffffff && edx_13 == edx_15))
                                        && (*(*(ecx_27 + (edi_17 << 2)) + 0x3c) ^ 0x80000)
                                        == *(*(ecx_27 + (eax_37 << 2)) + 0x3c) && eax_35 == edx_8)
                                    edi_15 = 1
                                    eax_41 = 0
                                else
                                label_4c9788:
                                    
                                    if (edi_17 != eax_37)
                                        edi_15 = 0
                                        eax_41 = 0
                                    else
                                        void* eax_39 = *(ecx_27 + (eax_35 << 2))
                                        int32_t edx_19 = *(eax_39 + 0x38)
                                        
                                        if (edx_19 == edx_8)
                                            if ((*(eax_39 + 0x3c) ^ 0x80000) != *(edx_9 + 0x3c))
                                                goto label_4c97c8
                                            
                                            eax_41 = 1
                                            edi_15 = 1
                                        else
                                            int32_t edi_31 = *(edx_9 + 0x38)
                                            
                                            if ((edi_31 == eax_35
                                                    || (edx_19 != 0xffffffff && edx_19 == edi_31))
                                                    && (*(eax_39 + 0x3c) ^ 0x80000)
                                                    == *(edx_9 + 0x3c))
                                                eax_41 = 1
                                                edi_15 = 1
                                            else
                                            label_4c97c8:
                                                
                                                if ((*(*(edx_10
                                                        + (*(*(ecx_27 + (eax_35 << 2)) + 4) << 2)) + 4)
                                                        & 0x100) == 0 || (
                                                        *(*(edx_10 + (*(edx_9 + 4) << 2)) + 4)
                                                        & 0x100) == 0)
                                                    edi_15 = 0
                                                    eax_41 = 0
                                                else
                                                    long double x87_r7_3 =
                                                        fneg(fconvert.t(*(eax_39 + 0x20)))
                                                    long double x87_r6_3 =
                                                        fconvert.t(*(edx_9 + 0x20))
                                                    x87_r6_3 - x87_r7_3
                                                    void* eax_40
                                                    eax_40.w = (x87_r6_3 < x87_r7_3 ? 1 : 0) << 8
                                                        | (is_unordered.t(x87_r6_3, x87_r7_3) ? 1
                                                        : 0) << 0xa
                                                        | (x87_r6_3 == x87_r7_3 ? 1 : 0) << 0xe
                                                    bool p_3 = unimplemented  {test ah, 0x44}
                                                    
                                                    if (p_3)
                                                        edi_15 = 0
                                                        eax_41 = 0
                                                    else
                                                        eax_41 = 1
                                                        edi_15 = 1
                            
                            if (var_30_2 == 0)
                                var_1c_2 = eax_41
                            else if (var_1c_2 != eax_41)
                                edi_15 = 0
                            
                            if (edi_15 == 0)
                                goto label_4c981b
                            
                            edx_6 = var_30_2 + 1
                            var_30_2 = edx_6
                        while (edx_6 u< esi_1)
                    
                    if (edi_15 != 0)
                        void* eax_43 = sub_49ec23(0x74)
                        int32_t* ecx_30
                        
                        if (eax_43 == 0)
                            ecx_30 = nullptr
                        else
                            ecx_30 = sub_49e789(eax_43)
                        
                        var_10 = ecx_30
                        
                        if (ecx_30 == 0)
                            var_8_2 = 0x8007000e
                            goto label_4c9852
                        
                        if (var_1c_2 == 0)
                            if (i == 0)
                            label_4c99c3:
                                int32_t eax_58 = sub_49ec6e(ecx_30, (esi_1 & 0xfffff) | 0x70b00000, 
                                    esi_1 * 2, esi_1, 0)
                                var_8_2 = eax_58
                                
                                if (eax_58 s< 0)
                                    goto label_4c9840
                                
                                if (var_1c_2 != 0)
                                    goto label_4c9892
                                
                                goto label_4c99de
                            
                        label_4c99de:
                            
                            if (i == 1)
                            label_4c98ad:
                                int32_t eax_49 = sub_49ec6e(var_10, (esi_1 & 0xfffff) | 0x70c00000, 
                                    esi_1 * 2, esi_1, 0)
                                var_8_2 = eax_49
                                
                                if (eax_49 s< 0)
                                    goto label_4c9840
                        else
                            if (i == 1)
                                goto label_4c99c3
                            
                        label_4c9892:
                            
                            if (i == 0)
                                goto label_4c98ad
                        
                        int32_t eax_50 = sub_49e7bf(var_10, *(arg1 + 0x100))
                        var_8_2 = eax_50
                        
                        if (eax_50 s< 0)
                            goto label_4c9840
                        
                        int32_t ecx_34 = esi_1 << 2
                        int32_t esi_13
                        int32_t edi_37
                        edi_37, esi_13 = __builtin_memcpy(var_10[4], *(*(arg1 + 0x100) + 0x10), 
                            ecx_34 u>> 2 << 2)
                        __builtin_memcpy(edi_37, esi_13, ecx_34 & 3)
                        int32_t __saved_ebp
                        int32_t esi_15
                        int32_t edi_39
                        edi_39, esi_15 = __builtin_memcpy(var_10[2], &(&__saved_ebp)[i * 4 - 0x39], 
                            ecx_34 u>> 2 << 2)
                        __builtin_memcpy(edi_39, esi_15, ecx_34 & 3)
                        int32_t esi_17
                        int32_t edi_42
                        edi_42, esi_17 = __builtin_memcpy(var_10[2] + ecx_34, &var_d8 - (i << 4), 
                            ecx_34 u>> 2 << 2)
                        __builtin_memcpy(edi_42, esi_17, ecx_34 & 3)
                        int32_t* edx_26 = var_10[2]
                        int32_t ecx_48 = *(arg1 + 0x14)
                        void* edi_44 = *(ecx_48 + (edx_26[esi_1] << 2))
                        void* esi_19 = *(ecx_48 + (*edx_26 << 2))
                        void* ecx_49 = *(ecx_48 + (*var_10[4] << 2))
                        int32_t edx_30 = *(ecx_49 + 4)
                        
                        if (edx_30 == *(esi_19 + 4) && *(ecx_49 + 0xc) == *(esi_19 + 0xc))
                            goto label_4c9836
                        
                        if (edx_30 == *(edi_44 + 4) && *(ecx_49 + 0xc) == *(edi_44 + 0xc))
                            goto label_4c9836
                        
                        if (arg2 == 0)
                            goto label_4c9683
                        
                        *arg2 = var_10
                        int32_t eax_53 = var_38
                        
                        if (eax_53 u> 0)
                            __builtin_memcpy(arg3, &var_128, eax_53 << 2)
                        
                        *arg4 = eax_53
                        goto label_4c9852
                    
                label_4c981b:
            
        label_4c9836:
            var_8_2 = 1
            goto label_4c9840
    else
        long double x87_r7_1 = fconvert.t(0.0)
        int32_t* edx_1 = *(*(arg1 + 0x100) + 8)
        int32_t eax_6 = esi_1 << 2
        int32_t var_18_1 = eax_6
        int32_t eax_8 = esi_1 << 3
        int32_t var_8_1 = eax_8
        
        do
            int32_t eax_10 = *(arg1 + 0x14)
            void* ecx_1 = *(eax_10 + (*(edx_1 + var_18_1) << 2))
            void* eax_11 = *(eax_10 + (*(edx_1 + var_8_1) << 2))
            int32_t eax_12 = *(arg1 + 0x10)
            
            if ((*(*(eax_12 + (*(ecx_1 + 4) << 2)) + 5) & 1) == 0)
                var_24_1 = 1
            else
                long double x87_r5_1 = fconvert.t(*(ecx_1 + 0x20))
                x87_r5_1 - x87_r7_1
                void* eax_13
                eax_13.w = (x87_r5_1 < x87_r7_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r5_1, x87_r7_1) ? 1 : 0) << 0xa
                    | (x87_r5_1 == x87_r7_1 ? 1 : 0) << 0xe | 0x3800
                bool p_1 = unimplemented  {test ah, 0x44}
                
                if (p_1 || *(ecx_1 + 8) != 0xffffffff)
                    var_24_1 = 1
                else
                    int32_t* eax_15 = *(*(arg1 + 0x100) + 8)
                    
                    if (*(eax_15 + var_8_1) != eax_15[var_c_1])
                        var_24_1 = 1
                    else
                        var_1c_1 = 1
            
            if ((*(*(eax_12 + (*(eax_11 + 4) << 2)) + 5) & 1) == 0)
                var_2c_1 = 1
            else
                long double x87_r5_2 = fconvert.t(*(eax_11 + 0x20))
                x87_r5_2 - x87_r7_1
                void* eax_16
                eax_16.w = (x87_r5_2 < x87_r7_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r5_2, x87_r7_1) ? 1 : 0) << 0xa
                    | (x87_r5_2 == x87_r7_1 ? 1 : 0) << 0xe | 0x3800
                bool p_2 = unimplemented  {test ah, 0x44}
                
                if (p_2 || *(eax_11 + 8) != 0xffffffff)
                    var_2c_1 = 1
                else
                    int32_t* eax_18 = *(*(arg1 + 0x100) + 8)
                    
                    if (*(eax_18 + var_18_1) != eax_18[var_c_1])
                        var_2c_1 = 1
                    else
                        var_28_1 = 1
            
            var_c_1 += 1
            var_8_1 += 4
            var_18_1 += 4
        while (var_c_1 u< esi_1)
        
        int32_t var_13c_1
        int32_t* eax_20
        int32_t ecx_8
        int32_t esi_3
        
        if (var_1c_1 == 0 || var_24_1 != 0)
            if (var_28_1 == 0 || var_2c_1 != 0)
                goto label_4c9692
            
            if (arg2 == 0)
                void* eax_22 = sub_49ec23(0x74)
                
                if (eax_22 == 0)
                    eax_20 = nullptr
                else
                    eax_20 = sub_49e789(eax_22)
                
                var_10 = eax_20
                
                if (eax_20 != 0)
                    int32_t var_138_2 = 0
                    var_13c_1 = esi_1
                    ecx_8 = esi_1 * 2
                    esi_3 = (esi_1 & 0xfffff) | 0x70c00000
                    goto label_4c95de
        else
            void* eax_19 = sub_49ec23(0x74)
            
            if (eax_19 == 0)
                eax_20 = nullptr
            else
                eax_20 = sub_49e789(eax_19)
            
            var_10 = eax_20
            
            if (eax_20 != 0)
                int32_t var_138_1 = 0
                var_13c_1 = esi_1
                ecx_8 = esi_1 * 2
                esi_3 = (esi_1 & 0xfffff) | 0x70b00000
            label_4c95de:
                int32_t eax_24 = sub_49ec6e(eax_20, esi_3, ecx_8, var_13c_1, 0)
                var_8_2 = eax_24
                
                if (eax_24 s< 0)
                    goto label_4c9840
                
                int32_t eax_25 = sub_49e7bf(var_10, *(arg1 + 0x100))
                var_8_2 = eax_25
                
                if (eax_25 s< 0)
                    goto label_4c9840
                
                int32_t esi_6
                int32_t edi_9
                edi_9, esi_6 =
                    __builtin_memcpy(var_10[4], *(*(arg1 + 0x100) + 0x10), eax_6 u>> 2 << 2)
                __builtin_memcpy(edi_9, esi_6, eax_6 & 3)
                int32_t esi_8
                int32_t edi_11
                edi_11, esi_8 =
                    __builtin_memcpy(var_10[2], *(*(arg1 + 0x100) + 8), eax_6 u>> 2 << 2)
                __builtin_memcpy(edi_11, esi_8, eax_6 & 3)
                int32_t esi_9 = *(*(arg1 + 0x100) + 8)
                int32_t esi_10
                
                if (var_1c_1 == 0)
                    esi_10 = esi_9 + eax_8
                else
                    esi_10 = esi_9 + eax_6
                
                int32_t esi_11
                int32_t edi_14
                edi_14, esi_11 = __builtin_memcpy(var_10[2] + eax_6, esi_10, eax_6 u>> 2 << 2)
                __builtin_memcpy(edi_14, esi_11, eax_6 & 3)
            label_4c9683:
                var_8_2 = sub_49eecd(*(*(arg1 + 0x18) + (*(arg1 + 0xfc) << 2)), var_10)
            label_4c9840:
                
                if (var_10 != 0)
                    sub_46cb59(var_10, 1)

label_4c9852:
