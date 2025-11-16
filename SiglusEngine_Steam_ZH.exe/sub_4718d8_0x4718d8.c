// 函数: sub_4718d8
// 地址: 0x4718d8
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t i = arg2
int32_t edi
int32_t var_34 = edi

while (i != 0xffffffff)
    void* eax_1 = arg1[1].d
    int32_t ecx_1 = *(*(*(eax_1 + 0x14) + (i << 2)) + 0x48)
    
    if (ecx_1 == 0xffffffff)
        break
    
    int32_t* edi_1 = *(*(eax_1 + 0x18) + (ecx_1 << 2))
    int32_t eax_3 = *edi_1
    
    if (eax_3 != 0x10000001)
        double var_20
        
        if (eax_3 != 0x20500001)
            int32_t eax_11 = *edi_1
            int32_t* eax_23
            void* ecx_7
            int32_t edx_2
            int32_t* ebx_1
            
            if (eax_11 == 0x20200001)
                if (sub_46e8bc(arg1, *edi_1[2], &var_20) s>= 0)
                    long double x87_r7_3 = float.t(arg3)
                    
                    if (arg3 s< 0)
                        x87_r7_3 = x87_r7_3 + fconvert.t(4294967296.0)
                    
                    long double x87_r6_3 = fconvert.t(var_20)
                    x87_r6_3 - x87_r7_3
                    int32_t eax_14
                    eax_14.w = (x87_r6_3 < x87_r7_3 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_3, x87_r7_3) ? 1 : 0) << 0xa
                        | (x87_r6_3 == x87_r7_3 ? 1 : 0) << 0xe
                    bool p_3 = unimplemented  {test ah, 0x44}
                    
                    if (not(p_3))
                        arg2 = *(edi_1[2] + 4)
                        
                        if (sub_4717ca(arg1, nullptr, &arg2, 1) s>= 0)
                            ebx_1 = arg5
                            int32_t eax_18 = *ebx_1
                            
                            if (eax_18 != 0xffffffff)
                                int32_t result
                                result.b = arg2 == eax_18
                                return result
                            
                            void* esi_1 = arg1[1].d
                            int32_t ecx_6 = *(esi_1 + 0x14)
                            edx_2 = arg2
                            char* eax_19 = *(ecx_6 + (edx_2 << 2))
                            
                            if ((*eax_19 & 2) != 0)
                                int16_t eax_22 =
                                    (*(*(*(esi_1 + 0x10) + (*(eax_19 + 4) << 2)) + 4)).w
                                
                                if ((eax_22:1.b & 1) == 0 && (eax_22.b & 0x10) != 0
                                        && (eax_22:1.b & 2) != 0)
                                    eax_23 = arg4
                                    
                                    if (eax_23 == 0)
                                        *ebx_1 = edx_2
                                        return 1
                                    
                                    ecx_7 = *(ecx_6 + (*edi_1[2] << 2))
                                label_471a3d:
                                    *eax_23 = *(ecx_7 + 0x30)
                                    *ebx_1 = edx_2
                                    return 1
            else if (eax_11 == 0x30000001)
                void* eax_24 = arg1[1].d
                int32_t* edi_3 = edi_1[2]
                void* ecx_10 = *(*(eax_24 + 0x14) + (edi_3[1] << 2))
                
                if ((*(*(*(eax_24 + 0x10) + (*(ecx_10 + 4) << 2)) + 4) & 0x100) != 0
                        && *(ecx_10 + 8) == 0xffffffff)
                    long double x87_r7_4 = fconvert.t(*(ecx_10 + 0x20))
                    long double x87_r6_4 = fconvert.t(0.0)
                    x87_r6_4 - x87_r7_4
                    void* eax_26
                    eax_26.w = (x87_r6_4 < x87_r7_4 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_4, x87_r7_4) ? 1 : 0) << 0xa
                        | (x87_r6_4 == x87_r7_4 ? 1 : 0) << 0xe
                    bool p_4 = unimplemented  {test ah, 0x44}
                    
                    if (not(p_4))
                        void* eax_27 = arg1[1].d
                        void* ecx_12 = *(*(eax_27 + 0x14) + (edi_3[2] << 2))
                        
                        if ((*(*(*(eax_27 + 0x10) + (*(ecx_12 + 4) << 2)) + 4) & 0x100) != 0
                                && *(ecx_12 + 8) == 0xffffffff)
                            long double x87_r7_5 = fconvert.t(*(ecx_12 + 0x20))
                            long double x87_r6_5 = fconvert.t(1.0)
                            x87_r6_5 - x87_r7_5
                            void* eax_29
                            eax_29.w = (x87_r6_5 < x87_r7_5 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r6_5, x87_r7_5) ? 1 : 0) << 0xa
                                | (x87_r6_5 == x87_r7_5 ? 1 : 0) << 0xe
                            bool p_5 = unimplemented  {test ah, 0x44}
                            
                            if (not(p_5))
                                void* eax_30 = arg1[1].d
                                int32_t j = *edi_3
                                void* ecx_14 = *(*(eax_30 + 0x14) + (j << 2))
                                
                                if ((*(*(*(eax_30 + 0x10) + (*(ecx_14 + 4) << 2)) + 4) & 2) != 0
                                        && *(ecx_14 + 8) == 0xffffffff)
                                    int32_t* ecx_17 =
                                        *(*(arg1[1].d i+ 0x18) + (*(ecx_14 + 0x48) << 2))
                                    int32_t* var_18_1 = ecx_17
                                    
                                    if ((*ecx_17 & 0xfff00000) == 0x20400000)
                                        int32_t eax_36 = ecx_17[3]
                                        arg2 = 0
                                        
                                        if (eax_36 u> 0)
                                            int32_t* edx_6 = ecx_17[4]
                                            
                                            while (*edx_6 != j)
                                                arg2 += 1
                                                edx_6 = &edx_6[1]
                                                
                                                if (arg2 u>= eax_36)
                                                    break
                                        
                                        int32_t var_c_1 = 0
                                        int32_t var_14_1 = 1
                                        int32_t edi_5
                                        
                                        while (true)
                                            int32_t eax_37 = ecx_17[3]
                                            int32_t edi_4 = ecx_17[2]
                                            int32_t edx_7 =
                                                *(edi_4 + ((eax_37 * var_c_1 + arg2) << 2))
                                            void* ecx_21 = arg1[1].d
                                            var_20:4.d = edx_7
                                            void* edx_8 = *(*(ecx_21 + 0x14) + (edx_7 << 2))
                                            
                                            if ((*(*(*(ecx_21 + 0x10) + (*(edx_8 + 4) << 2)) + 4)
                                                    & 2) != 0 && *(edx_8 + 8) == 0xffffffff)
                                                int32_t* ecx_25 =
                                                    *(*(arg1[1].d i+ 0x18) + (*(edx_8 + 0x48) << 2))
                                                
                                                if ((*ecx_25 & 0xfff00000) == 0x10100000)
                                                    int32_t var_8_1 = 0
                                                    
                                                    if (ecx_25[3] u> 0)
                                                        int32_t* edx_13 = ecx_25[4]
                                                        
                                                        while (*edx_13 != var_20:4.d)
                                                            var_8_1 += 1
                                                            edx_13 = &edx_13[1]
                                                            
                                                            if (var_8_1 u>= ecx_25[3])
                                                                break
                                                    
                                                    edi_5 =
                                                        *(edi_4 + ((eax_37 * var_14_1 + arg2) << 2))
                                                    int32_t ebx_8 = *(ecx_25[2] + (var_8_1 << 2))
                                                    double var_28
                                                    
                                                    if (sub_46e8bc(arg1, edi_5, &var_28) s>= 0)
                                                        long double x87_r7_6 = float.t(arg3)
                                                        
                                                        if (arg3 s< 0)
                                                            x87_r7_6 =
                                                                x87_r7_6 + fconvert.t(4294967296.0)
                                                        
                                                        long double x87_r6_6 = fconvert.t(var_28)
                                                        x87_r6_6 - x87_r7_6
                                                        int32_t eax_42
                                                        eax_42.w =
                                                            (x87_r6_6 < x87_r7_6 ? 1 : 0) << 8 | (
                                                            is_unordered.t(x87_r6_6, x87_r7_6) ? 1
                                                            : 0) << 0xa
                                                            | (x87_r6_6 == x87_r7_6 ? 1 : 0) << 0xe
                                                        bool p_6 = unimplemented  {test ah, 0x44}
                                                        
                                                        if (not(p_6))
                                                            int32_t var_10 = ebx_8
                                                            
                                                            if (
                                                                    sub_4717ca(arg1, nullptr, &var_10, 1)
                                                                    s>= 0)
                                                                ebx_1 = arg5
                                                                int32_t eax_44 = *ebx_1
                                                                
                                                                if (eax_44 == 0xffffffff)
                                                                    void* eax_45 = arg1[1].d
                                                                    edx_2 = var_10
                                                                    char* ecx_30 =
                                                                        *(*(eax_45 + 0x14) + (edx_2 << 2))
                                                                    
                                                                    if ((*ecx_30 & 2) != 0)
                                                                        int16_t eax_48 = (*(*(*(eax_45 + 0x10)
                                                                            + (*(ecx_30 + 4) << 2)) + 4)).w
                                                                        
                                                                        if ((eax_48:1.b & 1) == 0
                                                                                && (eax_48.b & 0x10) != 0
                                                                                && (eax_48:1.b & 2) != 0)
                                                                            break
                                                                else if (var_10 == eax_44)
                                                                    return 1
                                            
                                            var_c_1 += 1
                                            var_14_1 -= 1
                                            
                                            if (var_c_1 u>= 2)
                                                return 0
                                            
                                            ecx_17 = var_18_1
                                        
                                        eax_23 = arg4
                                        
                                        if (eax_23 == 0)
                                            *ebx_1 = edx_2
                                            return 1
                                        
                                        ecx_7 = *(*(arg1[1].d i+ 0x14) + (edi_5 << 2))
                                        goto label_471a3d
            break
        
        if (sub_46e8bc(arg1, *edi_1[2], &var_20) s>= 0)
            long double x87_r7_1 = fconvert.t(var_20)
            long double x87_r6_1 = fconvert.t(1.0)
            x87_r6_1 - x87_r7_1
            int32_t eax_5
            eax_5.w = (x87_r6_1 < x87_r7_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
                | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe
            bool p_1 = unimplemented  {test ah, 0x44}
            
            if (not(p_1))
                i = *(edi_1[2] + 4)
                continue
        
        if (sub_46e8bc(arg1, *(edi_1[2] + 4), &var_20) s< 0)
            break
        
        long double x87_r7_2 = fconvert.t(var_20)
        long double x87_r6_2 = fconvert.t(1.0)
        x87_r6_2 - x87_r7_2
        int32_t eax_8
        eax_8.w = (x87_r6_2 < x87_r7_2 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_2, x87_r7_2) ? 1 : 0) << 0xa
            | (x87_r6_2 == x87_r7_2 ? 1 : 0) << 0xe
        bool p_2 = unimplemented  {test ah, 0x44}
        
        if (p_2)
            break
    
    i = *edi_1[2]

return 0
