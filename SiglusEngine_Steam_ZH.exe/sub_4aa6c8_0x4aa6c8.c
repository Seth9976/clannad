// 函数: sub_4aa6c8
// 地址: 0x4aa6c8
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg3 != 0 && arg3 u<= 4)
    int32_t esi_1 = 1
    int32_t edi
    int32_t var_dc_1 = edi
    
    if (arg3 u> 1)
        do
            if (sub_4a2e1f(arg1, *arg2, arg2[esi_1]) == 0)
                break
            
            esi_1 += 1
        while (esi_1 u< arg3)
    
    if (esi_1 != arg3)
        int32_t eax_5 = arg3 << 2
        int32_t var_40[0x4]
        int32_t esi_3
        int32_t edi_2
        edi_2, esi_3 = __builtin_memcpy(&var_40, arg2, eax_5 u>> 2 << 2)
        __builtin_memcpy(edi_2, esi_3, eax_5 & 3)
        int32_t esi_4 = 0
        int32_t var_6c[0x4]
        __builtin_memset(__builtin_memset(&var_6c, 0, eax_5 u>> 2 << 2), 0, eax_5 & 3)
        int32_t var_20_1
        
        if (arg4 != 0)
            var_20_1 = 0
        
        if (arg4 == 0 || (*arg6 & 0xfff00000) == 0x11200000)
            var_20_1 = 1
        
        int32_t var_10_1 = 0
        int32_t var_8_1 = 0
        int64_t var_c0[0x4]
        int64_t var_a0[0x4]
        double var_54
        double var_4c
        
        if (arg3 u> 0)
            int32_t (* esi_5)[0x4] = &var_40
            int32_t (* var_1c_1)[0x4] = &var_40
            
            do
                int32_t i_14 = *esi_5
                
                while (true)
                    if (sub_4a2db5(arg1, i_14, arg6, arg7, arg8) != 0)
                        var_54 = fconvert.d(float.t(1))
                        int32_t i = i_14
                        var_4c = fconvert.d(float.t(0))
                        
                        if (i_14 != 0xffffffff)
                            void** edi_4 = *(arg1 + 0x14)
                            
                            while (true)
                                void* eax_11 = edi_4[i]
                                
                                if ((*(*(*(arg1 + 0x10) + (*(eax_11 + 4) << 2)) + 4) & 0x100) != 0
                                        && *(eax_11 + 8) == 0xffffffff)
                                    long double x87_r7_3 = fconvert.t(var_54)
                                    long double x87_r6_1 = fconvert.t(1.0)
                                    x87_r6_1 - x87_r7_3
                                    eax_11.w = (x87_r6_1 < x87_r7_3 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r6_1, x87_r7_3) ? 1 : 0) << 0xa
                                        | (x87_r6_1 == x87_r7_3 ? 1 : 0) << 0xe
                                    bool p_1 = unimplemented  {test ah, 0x44}
                                    bool p_2
                                    
                                    if (not(p_1))
                                        long double x87_r7_4 = fconvert.t(var_4c)
                                        long double x87_r6_2 = fconvert.t(0.0)
                                        x87_r6_2 - x87_r7_4
                                        eax_11.w = (x87_r6_2 < x87_r7_4 ? 1 : 0) << 8
                                            | (is_unordered.t(x87_r6_2, x87_r7_4) ? 1 : 0) << 0xa
                                            | (x87_r6_2 == x87_r7_4 ? 1 : 0) << 0xe
                                        p_2 = unimplemented  {test ah, 0x44}
                                    
                                    if (p_1 || p_2)
                                        long double x87_r7_6 =
                                            fconvert.t(var_54) * fconvert.t(*(edi_4[i] + 0x20))
                                        i = 0
                                        int32_t temp1_1 = *(arg1 + 8)
                                        bool cond:12_1 = 0 != temp1_1
                                        long double x87_r7_7 = x87_r7_6 + fconvert.t(var_4c)
                                        
                                        if (0 u< temp1_1)
                                            void** var_14_1 = edi_4
                                            
                                            do
                                                void* eax_14 = *var_14_1
                                                
                                                if ((*(*(*(arg1 + 0x10) + (*(eax_14 + 4) << 2)) + 4)
                                                        & 0x100) != 0 && *(eax_14 + 8) == 0xffffffff)
                                                    long double x87_r6_3 =
                                                        fconvert.t(*(eax_14 + 0x20))
                                                    x87_r7_7 - x87_r6_3
                                                    eax_14.w = (x87_r7_7 < x87_r6_3 ? 1 : 0) << 8
                                                        | (is_unordered.t(x87_r7_7, x87_r6_3) ? 1
                                                        : 0) << 0xa
                                                        | (x87_r7_7 == x87_r6_3 ? 1 : 0) << 0xe
                                                        | 0x3800
                                                    bool p_3 = unimplemented  {test ah, 0x44}
                                                    
                                                    if (not(p_3))
                                                        break
                                                
                                                var_14_1 = &var_14_1[1]
                                                i += 1
                                            while (i u< *(arg1 + 8))
                                            
                                            cond:12_1 = i != *(arg1 + 8)
                                        
                                        if (not(cond:12_1))
                                            int32_t i_8 = i
                                            int32_t i_6 = i
                                            i_6.q = fconvert.d(x87_r7_7)
                                            i = sub_49f544(arg1, *(arg1 + 0x78), 0, 0, i_6)
                                            
                                            if (i == 0xffffffff)
                                                goto label_4aac74
                                    
                                    esi_5 = var_1c_1
                                    var_10_1 += 1
                                    var_c0[var_8_1] = fconvert.d(float.t(1))
                                    var_a0[var_8_1] = fconvert.d(float.t(0))
                                    *esi_5 = i
                                    
                                    if (i != 0xffffffff)
                                        goto label_4aa8c6
                                    
                                    goto label_4aa8b8
                                
                                i = sub_4a2e72(arg1, i, &var_54, &var_4c)
                                
                                if (i == 0xffffffff)
                                    esi_5 = var_1c_1
                                    break
                    
                label_4aa8b8:
                    int32_t i_15 = *(*(*(arg1 + 0x14) + (i_14 << 2)) + 0x34)
                    
                    if (*esi_5 == i_15)
                        break
                    
                    i_14 = i_15
                
            label_4aa8c6:
                var_8_1 += 1
                esi_5 = &(*esi_5)[1]
                var_1c_1 = esi_5
            while (var_8_1 u< arg3)
            
            esi_4 = 0
        
        if (var_10_1 == arg3)
        label_4aac5e:
            int32_t esi_11
            int32_t edi_9
            edi_9, esi_11 = __builtin_memcpy(arg2, &var_40, eax_5 u>> 2 << 2)
            __builtin_memcpy(edi_9, esi_11, eax_5 & 3)
        else
            int32_t var_c_1 = 0
            double var_80
            double var_78
            int32_t __saved_ebp
            
            if (arg3 u> 0)
                do
                    if ((&__saved_ebp)[var_c_1 - 0x1a] == 0)
                        int32_t i_17 = (&__saved_ebp)[var_c_1 - 0xf]
                        void* eax_26 = *(*(arg1 + 0x14) + (i_17 << 2))
                        
                        if ((*(*(*(arg1 + 0x10) + (*(eax_26 + 4) << 2)) + 5) & 1) == 0
                                || *(eax_26 + 8) != 0xffffffff)
                            int32_t i_10 = 0xffffffff
                            int32_t var_1c_2 = 0
                            int32_t var_24_2 = 0
                            int32_t i_11 = i_17
                            
                            while (true)
                                if (sub_4a2db5(arg1, i_11, arg6, arg7, arg8) != 0)
                                    int32_t i_1 = i_11
                                    var_4c = fconvert.d(float.t(1))
                                    var_54 = fconvert.d(float.t(0))
                                    
                                    for (; i_1 != 0xffffffff; 
                                            i_1 = sub_4a2e72(arg1, i_1, &var_4c, &var_54))
                                        int32_t var_14_2 = 0
                                        int32_t var_8_2 = 0
                                        
                                        if (*(*(*(arg1 + 0x14) + (i_1 << 2)) + 0x48) == 0xffffffff)
                                            var_8_2 = 0xffffffff
                                        
                                        int32_t var_2c_1 = 0
                                        
                                        do
                                            if (var_6c[var_2c_1] == 0)
                                                int32_t j = var_40[var_2c_1]
                                                int32_t j_1 = j
                                                int32_t j_2
                                                
                                                for (; j != 0xffffffff; j = j_2)
                                                    if (sub_4a2db5(arg1, j, arg6, arg7, arg8) != 0)
                                                        int32_t j_3 = j
                                                        
                                                        if (j != 0xffffffff)
                                                            while (true)
                                                                double* eax_31 =
                                                                    sub_4a2e1f(arg1, i_1, j_3)
                                                                
                                                                if (eax_31 != 0)
                                                                    var_14_2 += 1
                                                                    
                                                                    if (
                                                                            *(*(*(arg1 + 0x14) + (j_3 << 2)) + 0x48)
                                                                            != 0xffffffff)
                                                                        int32_t eax_38 =
                                                                            *(*(*(arg1 + 0x14) + (j_3 << 2)) + 0x48)
                                                                            - arg7
                                                                        var_8_2 += eax_38 * eax_38
                                                                    
                                                                    break
                                                                
                                                                if (var_20_1 != eax_31)
                                                                    j_3 = 0xffffffff
                                                                    break
                                                                
                                                                j_3 =
                                                                    sub_4a2e72(arg1, j_3, eax_31, eax_31)
                                                                
                                                                if (j_3 == 0xffffffff)
                                                                    goto label_4aaa1f
                                                            
                                                            if (j_3 != 0xffffffff)
                                                                break
                                                    
                                                label_4aaa1f:
                                                    j_2 = *(*(*(arg1 + 0x14) + (j << 2)) + 0x34)
                                                    
                                                    if (j_1 == j_2)
                                                        break
                                            
                                            var_2c_1 += 1
                                        while (var_2c_1 u< arg3)
                                        
                                        if (var_1c_2 u< var_14_2)
                                        label_4aaa59:
                                            var_78 = fconvert.d(fconvert.t(var_4c))
                                            var_1c_2 = var_14_2
                                            var_80 = fconvert.d(fconvert.t(var_54))
                                            i_10 = i_1
                                            var_24_2 = var_8_2
                                        else if (var_1c_2 == var_14_2 && var_24_2 u< var_8_2)
                                            goto label_4aaa59
                                        
                                        if (var_20_1 != 0)
                                            break
                                
                                int32_t i_16 = *(*(*(arg1 + 0x14) + (i_11 << 2)) + 0x34)
                                
                                if ((&__saved_ebp)[var_c_1 - 0xf] == i_16)
                                    break
                                
                                i_11 = i_16
                            
                            if (i_10 == 0xffffffff)
                                return 
                            
                            (&__saved_ebp)[var_c_1 - 0xf] = i_10
                            int32_t var_8_3 = 0
                            var_c0[var_c_1] = fconvert.d(fconvert.t(var_78))
                            var_a0[var_c_1] = fconvert.d(fconvert.t(var_80))
                            (&__saved_ebp)[var_c_1 - 0x1a] = 1
                            
                            do
                                if ((&__saved_ebp)[var_8_3 - 0x1a] == 0)
                                    int32_t i_2 = (&__saved_ebp)[var_8_3 - 0xf]
                                    
                                    while (i_2 != 0xffffffff)
                                        if (sub_4a2db5(arg1, i_2, arg6, arg7, arg8) != 0)
                                            int32_t i_13 = i_2
                                            var_54 = fconvert.d(float.t(1))
                                            var_4c = fconvert.d(float.t(0))
                                            
                                            while (true)
                                                if (i_13 == 0xffffffff)
                                                    goto label_4aab8e
                                                
                                                int32_t eax_53 = sub_4a2e1f(arg1, i_10, i_13)
                                                
                                                if (eax_53 != 0)
                                                    var_c0[var_8_3] = fconvert.d(fconvert.t(var_54))
                                                    (&__saved_ebp)[var_8_3 - 0xf] = i_13
                                                    var_a0[var_8_3] = fconvert.d(fconvert.t(var_4c))
                                                    (&__saved_ebp)[var_8_3 - 0x1a] = 1
                                                    break
                                                
                                                if (var_20_1 != eax_53)
                                                    i_13 = 0xffffffff
                                                    break
                                                
                                                i_13 = sub_4a2e72(arg1, i_13, &var_54, &var_4c)
                                            
                                            if (i_13 != 0xffffffff)
                                                break
                                        
                                    label_4aab8e:
                                        i_2 = *(*(*(arg1 + 0x14) + (i_2 << 2)) + 0x34)
                                        
                                        if ((&__saved_ebp)[var_8_3 - 0xf] == i_2)
                                            break
                                
                                var_8_3 += 1
                            while (var_8_3 u< arg3)
                    
                    var_c_1 += 1
                while (var_c_1 u< arg3)
                
                esi_4 = 0
            
            arg7 = 0
            int32_t var_14_3 = 0
            int32_t var_1c_3 = 0
            void* var_2c_2 = nullptr
            
            if (arg3 u<= 0)
                goto label_4aac5e
            
            do
                int32_t eax_62 = var_40[esi_4]
                void* edi_7 = *(*(arg1 + 0x14) + (eax_62 << 2))
                
                if (sub_4a2e1f(arg1, eax_62, var_40[0]) == 0)
                    arg7 = 1
                
                long double x87_r7_20 = fconvert.t(var_c0[esi_4])
                long double x87_r6_4 = fconvert.t(1.0)
                x87_r6_4 - x87_r7_20
                int32_t eax_63
                eax_63.w = (x87_r6_4 < x87_r7_20 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_4, x87_r7_20) ? 1 : 0) << 0xa
                    | (x87_r6_4 == x87_r7_20 ? 1 : 0) << 0xe
                bool p_4 = unimplemented  {test ah, 0x44}
                
                if (p_4)
                    var_14_3 = 1
                
                long double x87_r7_21 = fconvert.t(var_a0[esi_4])
                long double x87_r6_5 = fconvert.t(0.0)
                x87_r6_5 - x87_r7_21
                eax_63.w = (x87_r6_5 < x87_r7_21 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_5, x87_r7_21) ? 1 : 0) << 0xa
                    | (x87_r6_5 == x87_r7_21 ? 1 : 0) << 0xe
                bool p_5 = unimplemented  {test ah, 0x44}
                
                if (p_5)
                    var_1c_3 = 1
                
                if ((*(*(*(arg1 + 0x10) + (*(edi_7 + 4) << 2)) + 5) & 1) != 0
                        && *(edi_7 + 8) == 0xffffffff)
                    var_2c_2 = 1
                
                esi_4 += 1
            while (esi_4 u< arg3)
            
            if (var_14_3 == 0 && var_1c_3 == 0 && arg7 == 0)
                goto label_4aac5e
            
            if (var_20_1 == 0)
                arg8 = 0
                int32_t var_c_2 = 0
                int32_t var_10_3 = *(arg1 + 0x6c) << 0x1d s>> 0x1f
                arg7 = 0
                int32_t var_d0[0x4]
                bool cond:18_1
                
                do
                    void* edx_7 = *(*(arg1 + 0x14) + (var_40[var_c_2] << 2))
                    int32_t ecx_40 = 0
                    
                    if (var_10_3 != 0 || (*(arg1 + 0x6c) & 2) != 0)
                        ecx_40 = var_c_2
                    else
                        int32_t esi_13 = *(edx_7 + 4)
                        
                        if ((*(*(*(arg1 + 0x10) + (esi_13 << 2)) + 5) & 1) == 0
                                || *(edx_7 + 8) != 0xffffffff)
                            if (arg7 u> 0)
                                do
                                    long double x87_r7_23 = fconvert.t(var_c0[ecx_40])
                                    void* edi_13 = *(*(arg1 + 0x14) + (var_40[ecx_40] << 2))
                                    long double x87_r6_7 = fconvert.t(*(&var_c0 + arg7))
                                    x87_r6_7 - x87_r7_23
                                    int32_t eax_77
                                    eax_77.w = (x87_r6_7 < x87_r7_23 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r6_7, x87_r7_23) ? 1 : 0) << 0xa
                                        | (x87_r6_7 == x87_r7_23 ? 1 : 0) << 0xe
                                    bool p_7 = unimplemented  {test ah, 0x44}
                                    
                                    if (not(p_7))
                                        long double x87_r7_24 = fconvert.t(var_a0[ecx_40])
                                        long double x87_r6_8 = fconvert.t(*(&var_a0 + arg7))
                                        x87_r6_8 - x87_r7_24
                                        int32_t eax_78
                                        eax_78.w = (x87_r6_8 < x87_r7_24 ? 1 : 0) << 8
                                            | (is_unordered.t(x87_r6_8, x87_r7_24) ? 1 : 0) << 0xa
                                            | (x87_r6_8 == x87_r7_24 ? 1 : 0) << 0xe
                                        bool p_8 = unimplemented  {test ah, 0x44}
                                        
                                        if (not(p_8) && esi_13 == *(edi_13 + 4)
                                                && *(edx_7 + 8) == *(edi_13 + 8)
                                                && *(edx_7 + 0xc) == *(edi_13 + 0xc)
                                                && *(edx_7 + 0x10) == *(edi_13 + 0x10))
                                            break
                                    
                                    ecx_40 += 1
                                while (ecx_40 u< var_c_2)
                        else if (arg7 u> 0)
                            do
                                void* eax_75 = *(*(arg1 + 0x14) + (var_40[ecx_40] << 2))
                                
                                if (esi_13 == *(eax_75 + 4) && *(eax_75 + 8) == 0xffffffff)
                                    long double x87_r7_22 = fconvert.t(*(eax_75 + 0x20))
                                    long double x87_r6_6 = fconvert.t(*(edx_7 + 0x20))
                                    x87_r6_6 - x87_r7_22
                                    eax_75.w = (x87_r6_6 < x87_r7_22 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r6_6, x87_r7_22) ? 1 : 0) << 0xa
                                        | (x87_r6_6 == x87_r7_22 ? 1 : 0) << 0xe
                                    bool p_6 = unimplemented  {test ah, 0x44}
                                    
                                    if (not(p_6))
                                        break
                                
                                ecx_40 += 1
                            while (ecx_40 u< var_c_2)
                    
                    var_d0[var_c_2] = ecx_40
                    
                    if (var_c_2 == ecx_40)
                        arg8 += 1
                    
                    arg7 += 8
                    cond:18_1 = var_c_2 + 1 u< arg3
                    var_c_2 += 1
                while (cond:18_1)
                int32_t var_24_3 = 0xffffffff
                void* esi_14 = nullptr
                arg7 = 1
                void* var_8_4 = nullptr
                void* var_c_3 = nullptr
                
                do
                    if (esi_14 == var_d0[esi_14])
                        void* ecx_42 = *(*(arg1 + 0x14) + (var_40[esi_14] << 2))
                        int32_t edx_8 = *(arg1 + 0x88)
                        
                        if (edx_8 == *(ecx_42 + 4))
                            int32_t var_18_1 = arg8
                            int32_t edi_14 = 0
                            
                            do
                                if (edi_14 == var_d0[edi_14])
                                    void* eax_87 = *(*(arg1 + 0x14) + (var_40[edi_14] << 2))
                                    
                                    if (edx_8 == *(eax_87 + 4)
                                            && *(ecx_42 + 0xc) == *(eax_87 + 0xc))
                                        long double x87_r7_25 = fconvert.t(var_c0[edi_14])
                                        long double x87_r6_9 = fconvert.t(1.0)
                                        x87_r6_9 - x87_r7_25
                                        eax_87.w = (x87_r6_9 < x87_r7_25 ? 1 : 0) << 8
                                            | (is_unordered.t(x87_r6_9, x87_r7_25) ? 1 : 0) << 0xa
                                            | (x87_r6_9 == x87_r7_25 ? 1 : 0) << 0xe
                                        bool p_9 = unimplemented  {test ah, 0x44}
                                        
                                        if (not(p_9))
                                            long double x87_r7_26 = fconvert.t(var_a0[edi_14])
                                            long double x87_r6_10 = fconvert.t(0.0)
                                            x87_r6_10 - x87_r7_26
                                            eax_87.w = (x87_r6_10 < x87_r7_26 ? 1 : 0) << 8
                                                | (is_unordered.t(x87_r6_10, x87_r7_26) ? 1 : 0)
                                                << 0xa | (x87_r6_10 == x87_r7_26 ? 1 : 0) << 0xe
                                            bool p_10 = unimplemented  {test ah, 0x44}
                                            
                                            if (not(p_10))
                                                var_18_1 -= 1
                                    
                                    esi_14 = var_c_3
                                
                                edi_14 += 1
                            while (edi_14 u< arg3)
                            
                            if (*(arg4 + (*(ecx_42 + 0xc) << 2)) + var_18_1 u<= 4
                                    && var_18_1 u< var_24_3)
                                arg7 = 0
                                var_24_3 = var_18_1
                                var_8_4 = esi_14
                    
                    esi_14 += 1
                    var_c_3 = esi_14
                while (esi_14 u< arg3)
                
                if (var_10_3 != 0 || (*(arg1 + 0x6c) & 2) != 0)
                    int32_t eax_92 = *arg6 & 0xf0000000
                    
                    if (eax_92 u>= 0x10000000 && eax_92 u<= 0x40000000)
                        var_10_3 = 0
                        
                        while (arg7 == 0)
                            int32_t edx_9 = *(arg1 + 0x14)
                            void* eax_94 = *(edx_9 + (var_40[var_10_3] << 2))
                            int32_t ecx_46 = *(eax_94 + 4)
                            
                            if (((*(*(*(arg1 + 0x10) + (ecx_46 << 2)) + 5) & 1) == 0
                                    || *(eax_94 + 8) == 0xffffffff) && *(eax_94 + 0x10)
                                    != *(*(edx_9 + (*((var_10_3 << 2) + arg6[4]) << 2)) + 0x10))
                                int32_t var_18_2 = 0
                                arg8 = 0
                                
                                do
                                    void* edi_18 = *(edx_9 + (var_40[arg8] << 2))
                                    
                                    if (*(edi_18 + 4) == ecx_46
                                            && *(edi_18 + 0xc) == *(eax_94 + 0xc)
                                            && *(edi_18 + 8) == *(eax_94 + 8))
                                        var_18_2 += 1
                                    
                                    arg8 += 1
                                while (arg8 u< arg3)
                                
                                if (var_18_2 u> 1)
                                    arg7 = 1
                            
                            var_10_3 += 1
                            
                            if (var_10_3 u>= arg3)
                                break
                
                int32_t eax_97 = *arg6 & 0xfff00000
                
                if ((eax_97 != 0x10000000 || (*(arg1 + 0x6c) & 8) != 0 || (
                        *(*(*(arg1 + 0x10) + (*(*(*(arg1 + 0x14) + (*arg6[4] << 2)) + 4) << 2)) + 4)
                        & 0x20) == 0) && eax_97 != 0x11200000 && eax_97 == 0x10000000 && var_14_3 == 0
                        && var_1c_3 == 0 && var_2c_2 == 0)
                    int32_t esi_29
                    int32_t edi_22
                    edi_22, esi_29 = __builtin_memcpy(arg2, &var_40, eax_5 u>> 2 << 2)
                    __builtin_memcpy(edi_22, esi_29, eax_5 & 3)
                else
                    int32_t var_70_1 = 0xffffffff
                    int32_t edx_10
                    
                    if (arg7 == 0)
                        edx_10 = *(*(*(arg1 + 0x14) + (var_40[var_8_4] << 2)) + 0xc)
                    else
                        edx_10 = *arg5
                        *arg5 = edx_10 + 1
                    
                    void* eax_105 = *(*(arg1 + 0x14) + (*arg6[4] << 2))
                    int32_t ecx_59 = *(eax_105 + 0x14)
                    int32_t eax_106 = *(eax_105 + 0x18)
                    __builtin_memset(__builtin_memset(&var_6c, 0, eax_5 u>> 2 << 2), 0, eax_5 & 3)
                    int32_t ecx_64 = 0
                    
                    do
                        if (ecx_64 != var_d0[ecx_64])
                            var_6c[ecx_64] = 1
                        else
                            void* eax_108 = *(*(arg1 + 0x14) + (var_40[ecx_64] << 2))
                            
                            if (*(arg1 + 0x88) == *(eax_108 + 4) && edx_10 == *(eax_108 + 0xc))
                                long double x87_r7_27 = fconvert.t(var_c0[ecx_64])
                                long double x87_r6_11 = fconvert.t(1.0)
                                x87_r6_11 - x87_r7_27
                                eax_108.w = (x87_r6_11 < x87_r7_27 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r6_11, x87_r7_27) ? 1 : 0) << 0xa
                                    | (x87_r6_11 == x87_r7_27 ? 1 : 0) << 0xe
                                bool p_11 = unimplemented  {test ah, 0x44}
                                
                                if (not(p_11))
                                    long double x87_r7_28 = fconvert.t(var_a0[ecx_64])
                                    long double x87_r6_12 = fconvert.t(0.0)
                                    x87_r6_12 - x87_r7_28
                                    eax_108.w = (x87_r6_12 < x87_r7_28 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r6_12, x87_r7_28) ? 1 : 0) << 0xa
                                        | (x87_r6_12 == x87_r7_28 ? 1 : 0) << 0xe
                                    bool p_12 = unimplemented  {test ah, 0x44}
                                    
                                    if (not(p_12))
                                        var_6c[ecx_64] = 1
                        
                        ecx_64 += 1
                    while (ecx_64 u< arg3)
                    
                    if (arg7 == 0)
                        int32_t eax_109 = 0
                        int32_t var_c_4 = 0
                        
                        do
                            if (var_6c[eax_109] == 0)
                                int32_t esi_33 = var_40[eax_109]
                                void* edi_24 = *(*(arg1 + 0x14) + (esi_33 << 2))
                                
                                if (*(arg1 + 0x88) == *(edi_24 + 4))
                                    int32_t var_14_4 = 0
                                    int32_t var_18_3 = 0
                                    arg7 = 0
                                    
                                    do
                                        if (var_6c[arg7] == 0)
                                            var_14_4 += 1
                                            
                                            if (sub_4a2e1f(arg1, esi_33, var_40[arg7]) != 0)
                                                var_18_3 += 1
                                                long double x87_r7_29 = fconvert.t(var_c0[arg7])
                                                long double x87_r6_13 = fconvert.t(1.0)
                                                x87_r6_13 - x87_r7_29
                                                int32_t eax_115
                                                eax_115.w = (x87_r6_13 < x87_r7_29 ? 1 : 0) << 8 | (
                                                    is_unordered.t(x87_r6_13, x87_r7_29) ? 1 : 0) << 0xa
                                                    | (x87_r6_13 == x87_r7_29 ? 1 : 0) << 0xe
                                                bool p_13 = unimplemented  {test ah, 0x44}
                                                
                                                if (p_13)
                                                    break
                                                
                                                long double x87_r7_30 = fconvert.t(var_a0[arg7])
                                                long double x87_r6_14 = fconvert.t(0.0)
                                                x87_r6_14 - x87_r7_30
                                                eax_115.w = (x87_r6_14 < x87_r7_30 ? 1 : 0) << 8 | (
                                                    is_unordered.t(x87_r6_14, x87_r7_30) ? 1 : 0) << 0xa
                                                    | (x87_r6_14 == x87_r7_30 ? 1 : 0) << 0xe
                                                bool p_14 = unimplemented  {test ah, 0x44}
                                                
                                                if (p_14)
                                                    break
                                        
                                        arg7 += 1
                                    while (arg7 u< arg3)
                                    
                                    if (arg7 u>= arg3)
                                        int32_t ecx_68 = *(edi_24 + 0xc)
                                        int32_t edx_12 = arg4 + (edx_10 << 2)
                                        
                                        if (*(arg4 + (ecx_68 << 2)) - var_18_3 + *edx_12 + var_14_4
                                                u<= 4)
                                            int32_t edi_25 = 0
                                            
                                            do
                                                if ((&__saved_ebp)[edi_25 - 0x1a] == 0)
                                                    void* eax_124 =
                                                        *(*(arg1 + 0x14) + (var_40[edi_25] << 2))
                                                    
                                                    if (*(arg1 + 0x88) == *(eax_124 + 4)
                                                            && ecx_68 == *(eax_124 + 0xc))
                                                        (&__saved_ebp)[edi_25 - 0x1a] = 1
                                                
                                                edi_25 += 1
                                            while (edi_25 u< arg3)
                                            
                                            int32_t i_3 = 0
                                            
                                            if (*(arg1 + 8) u> 0)
                                                do
                                                    void* eax_126 = *(*(arg1 + 0x14) + (i_3 << 2))
                                                    
                                                    if (*(arg1 + 0x88) == *(eax_126 + 4)
                                                            && ecx_68 == *(eax_126 + 0xc))
                                                        *(eax_126 + 0xc) = edx_10
                                                        *(eax_126 + 0x10) += *edx_12
                                                    
                                                    i_3 += 1
                                                while (i_3 u< *(arg1 + 8))
                                            
                                            int32_t* eax_128 = arg4 + (ecx_68 << 2)
                                            *edx_12 += *eax_128
                                            *eax_128 = 0
                            
                            eax_109 = var_c_4 + 1
                            var_c_4 = eax_109
                        while (eax_109 u< arg3)
                    
                    if ((*(arg1 + 0x6c) & 6) == 0)
                        int32_t eax_130 = 0
                        int32_t var_c_5 = 0
                        
                        do
                            if (var_6c[eax_130] == 0)
                                int32_t esi_39 = (&__saved_ebp)[eax_130 - 0xf]
                                void* eax_133 = *(*(arg1 + 0x14) + (esi_39 << 2))
                                
                                if ((*(*(*(arg1 + 0x10) + (*(eax_133 + 4) << 2)) + 5) & 1) == 0
                                        || *(eax_133 + 8) != 0xffffffff)
                                    arg7 = 0
                                    arg8 = 0
                                    
                                    do
                                        if (var_6c[arg8] == 0
                                                && sub_4a2e1f(arg1, esi_39, var_40[arg8]) != 0)
                                            arg7 += 1
                                        
                                        arg8 += 1
                                    while (arg8 u< arg3)
                                    
                                    arg8 = 0
                                    
                                    while (arg7 u< 4)
                                        if (var_6c[arg8] == 0)
                                            void* edx_18 = *(*(arg1 + 0x14)
                                                + ((&__saved_ebp)[arg8 - 0xf] << 2))
                                            
                                            if ((*(*(*(arg1 + 0x10) + (*(edx_18 + 4) << 2)) + 5)
                                                    & 1) != 0 && *(edx_18 + 8) == 0xffffffff)
                                                long double x87_r7_31 = fconvert.t(*(edx_18 + 0x20))
                                                (&__saved_ebp)[arg8 - 0xf] =
                                                    (&__saved_ebp)[eax_130 - 0xf]
                                                int32_t ecx_78 = arg8 << 3
                                                arg7 += 1
                                                *(&__saved_ebp + ecx_78 - 0x9c) = fconvert.d(
                                                    x87_r7_31
                                                    * fconvert.t(*(&__saved_ebp + ecx_78 - 0xbc))
                                                    + fconvert.t(*(&__saved_ebp + ecx_78 - 0x9c)))
                                                *(&__saved_ebp + ecx_78 - 0xbc) =
                                                    fconvert.d(float.t(0))
                                        
                                        arg8 += 1
                                        
                                        if (arg8 u>= arg3)
                                            break
                            
                            eax_130 = var_c_5 + 1
                            var_c_5 = eax_130
                        while (eax_130 u< arg3)
                    
                    int32_t var_c_6 = 0
                    
                    while (true)
                        int32_t esi_41 = 0
                        
                        if (var_6c[var_c_6] == 0)
                            int32_t edi_27 = var_40[var_c_6]
                            var_80:4.d = edi_27
                            arg8 = 0
                            int32_t var_28_2 = 0
                            int32_t var_18_4 = 1
                            int32_t var_20_2 = 0
                            int32_t var_30_2 = 1
                            
                            do
                                if (var_6c[esi_41] == 0
                                        && sub_4a2e1f(arg1, edi_27, var_40[esi_41]) != 0)
                                    arg8 += 1
                                    long double x87_r7_35 =
                                        fconvert.t(*(&__saved_ebp + (esi_41 << 3) - 0xbc))
                                    long double x87_r6_15 = fconvert.t(1.0)
                                    x87_r6_15 - x87_r7_35
                                    int32_t eax_146
                                    eax_146.w = (x87_r6_15 < x87_r7_35 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r6_15, x87_r7_35) ? 1 : 0) << 0xa
                                        | (x87_r6_15 == x87_r7_35 ? 1 : 0) << 0xe
                                    bool p_15 = unimplemented  {test ah, 0x44}
                                    
                                    if (p_15)
                                        var_28_2 = 1
                                    
                                    long double x87_r7_36 =
                                        fconvert.t(*(&__saved_ebp + (esi_41 << 3) - 0xbc))
                                    long double x87_r6_16 = fconvert.t(-1.0)
                                    x87_r6_16 - x87_r7_36
                                    eax_146.w = (x87_r6_16 < x87_r7_36 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r6_16, x87_r7_36) ? 1 : 0) << 0xa
                                        | (x87_r6_16 == x87_r7_36 ? 1 : 0) << 0xe
                                    bool p_16 = unimplemented  {test ah, 0x44}
                                    
                                    if (p_16)
                                        var_18_4 = 0
                                    
                                    long double x87_r7_37 = fconvert.t(var_a0[esi_41])
                                    long double x87_r6_17 = fconvert.t(0.0)
                                    x87_r6_17 - x87_r7_37
                                    eax_146.w = (x87_r6_17 < x87_r7_37 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r6_17, x87_r7_37) ? 1 : 0) << 0xa
                                        | (x87_r6_17 == x87_r7_37 ? 1 : 0) << 0xe
                                    bool p_17 = unimplemented  {test ah, 0x44}
                                    
                                    if (p_17)
                                        var_20_2 = 1
                                    
                                    long double x87_r7_38 =
                                        fconvert.t(*(&__saved_ebp + (esi_41 << 3) - 0xbc))
                                    long double x87_r6_18 = fconvert.t(0.0)
                                    x87_r6_18 - x87_r7_38
                                    eax_146.w = (x87_r6_18 < x87_r7_38 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r6_18, x87_r7_38) ? 1 : 0) << 0xa
                                        | (x87_r6_18 == x87_r7_38 ? 1 : 0) << 0xe
                                    bool p_18 = unimplemented  {test ah, 0x44}
                                    
                                    if (p_18)
                                        var_30_2 = 0
                                
                                esi_41 += 1
                            while (esi_41 u< arg3)
                            
                            if (var_30_2 != 0)
                                var_28_2 = 0
                                var_20_2 = 0
                            
                            if (var_28_2 != 0)
                                int32_t eax_149
                                
                                if (var_18_4 == 0)
                                    eax_149 = (arg8 & 0xfffff) | 0x20500000
                                else
                                    eax_149 = (arg8 & 0xfffff) | 0x10100000
                                
                                int32_t eax_151 = sub_49f5a4(arg1, eax_149, 0xffffffff, 0xffffffff)
                                var_10_3 = eax_151
                                
                                if (eax_151 == 0xffffffff)
                                    break
                                
                                void* edi_28 = *(*(arg1 + 0x18) + (eax_151 << 2))
                                var_2c_2 = edi_28
                                sub_49e7bf(edi_28, arg6)
                                
                                if (var_20_2 != 0)
                                    goto label_4ab3b8
                                
                                var_24_3 = eax_151
                                var_8_4 = edi_28
                            
                            if (var_20_2 == 0)
                                goto label_4ab3ea
                            
                        label_4ab3b8:
                            int32_t eax_156 = sub_49f5a4(arg1, (arg8 & 0xfffff) | 0x20400000, 
                                0xffffffff, 0xffffffff)
                            var_24_3 = eax_156
                            
                            if (eax_156 == 0xffffffff)
                                break
                            
                            void* edi_29 = *(*(arg1 + 0x18) + (eax_156 << 2))
                            var_8_4 = edi_29
                            sub_49e7bf(edi_29, arg6)
                            
                            if (var_28_2 == 0)
                                var_10_3 = eax_156
                                var_2c_2 = edi_29
                            label_4ab3ea:
                                
                                if (var_28_2 == 0 && var_20_2 == 0)
                                    int32_t eax_161 = sub_49f5a4(arg1, 
                                        (arg8 & 0xfffff) | 0x10000000, 0xffffffff, 0xffffffff)
                                    var_24_3 = eax_161
                                    var_10_3 = eax_161
                                    
                                    if (eax_161 == 0xffffffff)
                                        break
                                    
                                    void* eax_162 = *(*(arg1 + 0x18) + (eax_161 << 2))
                                    var_8_4 = eax_162
                                    var_2c_2 = eax_162
                                    sub_49e7bf(eax_162, arg6)
                            
                            int32_t var_14_5 = arg8 << 2
                            int32_t* esi_44 = nullptr
                            arg7 = 0
                            var_4c:4.d = arg2 - &var_40
                            
                            do
                                var_54:4.d = &(&__saved_ebp)[arg7 - 0x1a]
                                
                                if ((&__saved_ebp)[arg7 - 0x1a] == 0)
                                    int32_t edi_30 = (&__saved_ebp)[arg7 - 0xf]
                                    
                                    if (sub_4a2e1f(arg1, var_80:4.d, edi_30) != 0)
                                        int32_t eax_170
                                        
                                        if (var_30_2 == 0)
                                            eax_170 = edi_30
                                        else
                                            int32_t var_e0_20 = arg7
                                            int32_t var_e4_17 = arg7
                                            var_e4_17.q = fconvert.d(fconvert.t(var_a0[arg7]))
                                            eax_170 =
                                                sub_49f544(arg1, *(arg1 + 0x78), 0, 0, var_e4_17)
                                        
                                        if (eax_170 == 0xffffffff)
                                            return 
                                        
                                        void* ecx_95 = *(*(arg1 + 0x14) + (eax_170 << 2))
                                        *(esi_44 + *(var_2c_2 + 8)) = eax_170
                                        var_78:4.d = ecx_95
                                        
                                        if (var_30_2 != 0)
                                            *(ecx_95 + 0x34) = eax_170
                                        
                                        if (var_28_2 == 0)
                                        label_4ab5ac:
                                            int32_t i_4 = 0
                                            
                                            if (var_20_2 != 0)
                                                int32_t temp4_1 = *(arg1 + 8)
                                                bool cond:31_1 = 0 != temp4_1
                                                
                                                if (0 u< temp4_1)
                                                    int32_t* edx_22 = *(arg1 + 0x14)
                                                    
                                                    do
                                                        void* eax_185 = *edx_22
                                                        
                                                        if (*(arg1 + 0x78) == *(eax_185 + 4)
                                                                && *(eax_185 + 8) == 0xffffffff)
                                                            long double x87_r7_42 =
                                                                fconvert.t(var_a0[arg7])
                                                            long double x87_r6_19 =
                                                                fconvert.t(*(eax_185 + 0x20))
                                                            x87_r6_19 - x87_r7_42
                                                            eax_185.w =
                                                                (x87_r6_19 < x87_r7_42 ? 1 : 0) << 8 | (
                                                                is_unordered.t(x87_r6_19, x87_r7_42) ? 1
                                                                : 0) << 0xa
                                                                | (x87_r6_19 == x87_r7_42 ? 1 : 0)
                                                                << 0xe
                                                            bool p_19 =
                                                                unimplemented  {test ah, 0x44}
                                                            
                                                            if (not(p_19))
                                                                break
                                                        
                                                        i_4 += 1
                                                        edx_22 = &edx_22[1]
                                                    while (i_4 u< *(arg1 + 8))
                                                    
                                                    cond:31_1 = i_4 != *(arg1 + 8)
                                                
                                                if (not(cond:31_1))
                                                    int32_t i_9 = i_4
                                                    int32_t i_7 = i_4
                                                    i_7.q = fconvert.d(fconvert.t(var_a0[arg7]))
                                                    i_4 =
                                                        sub_49f544(arg1, *(arg1 + 0x78), 0, 0, i_7)
                                                    
                                                    if (i_4 == 0xffffffff)
                                                        return 
                                                    
                                                    *(*(*(arg1 + 0x14) + (i_4 << 2)) + 0x34) = i_4
                                                
                                                *(var_14_5 + *(var_8_4 + 8)) = i_4
                                        else
                                            if (var_18_4 == 0)
                                                void* var_e0_21 = ecx_95
                                                void* var_e4_18 = ecx_95
                                                var_e4_18.q = fconvert.d(fconvert.t(var_c0[arg7]))
                                                *(var_14_5 + *(var_2c_2 + 8)) = sub_49f544(arg1, 
                                                    *(arg1 + 0x78), 0, 0, var_e4_18)
                                                
                                                if (*(var_14_5 + *(var_2c_2 + 8)) == 0xffffffff)
                                                    return 
                                            
                                            if (var_20_2 != 0)
                                                int32_t edx_21 = var_70_1
                                                
                                                if (edx_21 == 0xffffffff)
                                                    edx_21 = *arg5
                                                    var_70_1 = edx_21
                                                    *arg5 = edx_21 + 1
                                                
                                                int32_t ecx_99 = arg4 + (edx_21 << 2)
                                                int32_t eax_176 = *ecx_99
                                                int32_t var_e0_22 = ecx_99
                                                int32_t var_e4_19 = ecx_99
                                                var_e4_19.q = fconvert.d(float.t(0))
                                                *ecx_99 = eax_176 + 1
                                                int32_t eax_177 = sub_49f544(arg1, *(arg1 + 0x88), 
                                                    edx_21, eax_176, var_e4_19)
                                                
                                                if (eax_177 == 0xffffffff)
                                                    return 
                                                
                                                if (*ecx_99 u> 4)
                                                    sub_4a4100(arg1, nullptr, 0, 
                                                        "internal error: component out of range")
                                                
                                                int32_t* eax_180 =
                                                    *(*(arg1 + 0x14) + (eax_177 << 2))
                                                eax_180[5] = ecx_59
                                                eax_180[6] = eax_106
                                                *eax_180 = *var_78:4.d & 0xe000000
                                                eax_180[0x12] = var_10_3
                                                *(esi_44 + *(var_8_4 + 8)) = eax_177
                                                *(esi_44 + *(var_2c_2 + 0x10)) = eax_177
                                                goto label_4ab5ac
                                        
                                        int32_t ecx_108 = arg4 + (edx_10 << 2)
                                        int32_t eax_193 = *ecx_108
                                        int32_t var_e0_23 = ecx_108
                                        int32_t var_e4_20 = ecx_108
                                        var_e4_20.q = fconvert.d(float.t(0))
                                        *ecx_108 = eax_193 + 1
                                        int32_t eax_194 = sub_49f544(arg1, *(arg1 + 0x88), edx_10, 
                                            eax_193, var_e4_20)
                                        
                                        if (eax_194 == 0xffffffff)
                                            return 
                                        
                                        if (*ecx_108 u> 4)
                                            sub_4a4100(arg1, nullptr, 0, 
                                                "internal error: component out of range")
                                        
                                        int32_t* eax_197 = *(*(arg1 + 0x14) + (eax_194 << 2))
                                        eax_197[5] = ecx_59
                                        eax_197[6] = eax_106
                                        int32_t ecx_113 = var_4c:4.d + &(&__saved_ebp)[arg7 - 0xf]
                                        *eax_197 = **(*(arg1 + 0x14) + (*ecx_113 << 2))
                                        eax_197[0x12] = var_24_3
                                        *(esi_44 + *(var_8_4 + 0x10)) = eax_194
                                        int32_t eax_200 = *(arg1 + 0x14)
                                        *(*(eax_200 + (eax_194 << 2)) + 0x34) =
                                            *(*(eax_200 + (*ecx_113 << 2)) + 0x34)
                                        *(*(*(arg1 + 0x14) + (*ecx_113 << 2)) + 0x34) = eax_194
                                        (&__saved_ebp)[arg7 - 0xf] = *(esi_44 + *(var_8_4 + 0x10))
                                        esi_44 = &esi_44[1]
                                        var_14_5 += 4
                                        *var_54:4.d = 1
                                
                                arg7 += 1
                            while (arg7 u< arg3)
                        
                        var_c_6 += 1
                        
                        if (var_c_6 u>= arg3)
                            int32_t* eax_209 = arg2
                            int32_t* ecx_121 = &var_d0 - eax_209
                            int32_t i_12 = arg3
                            int32_t i_5
                            
                            do
                                *eax_209 = var_40[*(ecx_121 + eax_209)]
                                eax_209 = &eax_209[1]
                                i_5 = i_12
                                i_12 -= 1
                            while (i_5 != 1)
                            int32_t eax_210 = 0
                            
                            while (var_6c[eax_210] != 0)
                                eax_210 += 1
                                
                                if (eax_210 u>= arg3)
                                    break
                            
                            break

label_4aac74:
