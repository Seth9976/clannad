// 函数: sub_47380a
// 地址: 0x47380a
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = arg1[0xb].d
int32_t var_3c = *(arg1 + 0x5c)
int32_t eax_2 = arg1[3].d
int32_t* i_5 = *(*(arg1 + 4) + 0x18)
int32_t eax_5 = i_5 << 2
int32_t* var_20 = nullptr
void* var_14 = nullptr
void* var_24 = nullptr
int32_t var_c = 0
int32_t var_28 = 0
int32_t* eax_6 = sub_745f3f(eax_5)
int32_t* var_8 = eax_6

if (eax_6 != 0)
    int32_t* eax_7 = sub_745f3f(eax_5)
    var_20 = eax_7
    
    if (eax_7 != 0)
        int32_t esi = i_5 << 4
        void* eax_8 = sub_745f3f(esi)
        var_14 = eax_8
        
        if (eax_8 != 0)
            void* eax_9 = sub_745f3f(esi)
            var_24 = eax_9
            
            if (eax_9 != 0)
                int32_t eax_10 = sub_745f3f(eax_5)
                var_c = eax_10
                
                if (eax_10 != 0)
                    int32_t eax_11 = sub_745f3f(eax_5)
                    var_28 = eax_11
                    
                    if (eax_11 != 0)
                        void* arg_8
                        bool cond:6_1 = arg_8 == 0
                        *(arg1 + 0x5c) = 0
                        
                        if (cond:6_1)
                        label_473903:
                            int32_t esi_3
                            int32_t edi_1
                            edi_1, esi_3 = __builtin_memcpy(var_8, arg1[3].d, eax_5 u>> 2 << 2)
                            __builtin_memcpy(edi_1, esi_3, eax_5 & 3)
                            int32_t esi_5
                            int32_t edi_3
                            edi_3, esi_5 = __builtin_memcpy(arg6, arg1[3].d, eax_5 u>> 2 << 2)
                            __builtin_memcpy(edi_3, esi_5, eax_5 & 3)
                            int32_t edi_4 = 0
                            
                            if (i_5 u> 0)
                                arg_8 = var_14
                                
                                do
                                    int32_t esi_7 = edi_4 << 2
                                    int32_t eax_16 = *(esi_7 i+ arg1[3].d)
                                    int32_t eax_17
                                    
                                    if (eax_16 != 0xffffffff)
                                        eax_17 = sub_46cffa(arg1, eax_16, arg_8)
                                    
                                    if (eax_16 == 0xffffffff || eax_17 s< 0)
                                        double* eax_18 = arg_8
                                        *eax_18 = fconvert.d(fconvert.t(arg1[0x14]))
                                        eax_18[1] = fconvert.d(fconvert.t(arg1[0x15]))
                                    
                                    int32_t ecx_16 = *(esi_7 i+ arg1[3].d)
                                    void* eax_20
                                    int32_t* ecx_17
                                    
                                    if (ecx_16 != 0xffffffff)
                                        eax_20 = arg1[1].d
                                        ecx_17 = *(*(eax_20 + 0x14) + (ecx_16 << 2))
                                    
                                    if (ecx_16 == 0xffffffff || *(eax_20 + 0x74) == ecx_17[1])
                                        *(esi_7 + var_c) = 0x1f
                                    else
                                        *(esi_7 + var_c) = *ecx_17 & 0x1f
                                    
                                    arg_8 += 0x10
                                    edi_4 += 1
                                while (edi_4 u< i_5)
                            
                            void* eax_25 = arg1[4].d
                            int32_t var_38_1 = 0
                            int32_t var_4c = 0xffffffff
                            int32_t var_48 = 0xffffffff
                            int32_t var_1c_1 = 0
                            void* var_40 = eax_25
                            void* var_30 = eax_25
                            int32_t var_34_1 = 1
                            
                            while (true)
                                void* eax_26 = arg1[1].d
                                int32_t ecx_19 = *(eax_26 + 8)
                                int32_t eax_27 = *(eax_26 + 0xc)
                                int32_t esi_9
                                int32_t edi_6
                                edi_6, esi_9 = __builtin_memcpy(var_20, var_8, eax_5 u>> 2 << 2)
                                __builtin_memcpy(edi_6, esi_9, eax_5 & 3)
                                int32_t esi_11
                                int32_t edi_8
                                edi_8, esi_11 = __builtin_memcpy(var_24, var_14, esi u>> 2 << 2)
                                arg_8 = 0xffffffff
                                __builtin_memcpy(edi_8, esi_11, esi & 3)
                                int32_t esi_13
                                int32_t edi_10
                                edi_10, esi_13 = __builtin_memcpy(var_28, var_c, eax_5 u>> 2 << 2)
                                __builtin_memcpy(edi_10, esi_13, eax_5 & 3)
                                
                                if (arg4 == 0)
                                    goto label_473aee
                                
                                arg_8 = 0xffffffff
                                arg1[3].d = var_8
                                arg1[0xa].d = 0
                                *(arg1 + 0x54) = 0
                                
                                if (sub_47bd3b(arg4, &arg_8, 0) s< 0)
                                    break
                                
                                if (sub_46ea58(arg1, arg4, 0x20500001, &var_40, &var_40, &arg_8, 
                                        0x17, arg2.b) s< 0)
                                    break
                                
                                arg_8 = 0xffffffff
                                arg1[3].d = arg6
                                arg1[0xa].d = 0
                                *(arg1 + 0x54) = 0
                                
                                if (sub_47bd3b(arg4, &arg_8, 0) s< 0)
                                    break
                                
                                if (sub_46ea58(arg1, arg4, 0x20500001, &var_30, &var_30, &arg_8, 
                                        0x17) s< 0)
                                    break
                                
                                if (arg1[0xb].d != 0)
                                label_473add:
                                    arg1[0xa].d = 0
                                    *(arg1 + 0x54) = 0
                                label_473aee:
                                    double var_70
                                    double var_68
                                    
                                    if (sub_46cffa(arg1, var_30, &var_70) s< 0)
                                        var_70 = fconvert.d(fconvert.t(arg1[0x15]))
                                        var_68 = fconvert.d(fconvert.t(arg1[0x14]))
                                    
                                    long double x87_r7_5 = fconvert.t(var_70)
                                    long double temp1_1 = fconvert.t(0.0)
                                    x87_r7_5 - temp1_1
                                    int32_t eax_37
                                    eax_37.w = (x87_r7_5 < temp1_1 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r7_5, temp1_1) ? 1 : 0) << 0xa
                                        | (x87_r7_5 == temp1_1 ? 1 : 0) << 0xe
                                    
                                    if ((eax_37:1.b & 0x41) == 0)
                                        var_38_1 = 1
                                    else
                                        long double x87_r7_6 = fconvert.t(var_68)
                                        long double temp2_1 = fconvert.t(0.0)
                                        x87_r7_6 - temp2_1
                                        eax_37.w = (x87_r7_6 < temp2_1 ? 1 : 0) << 8
                                            | (is_unordered.t(x87_r7_6, temp2_1) ? 1 : 0) << 0xa
                                            | (x87_r7_6 == temp2_1 ? 1 : 0) << 0xe
                                        bool p_1 = unimplemented  {test ah, 0x5}
                                        
                                        if (not(p_1))
                                            var_38_1 = 1
                                    
                                    if (i_5 u> 0)
                                        int32_t* esi_14 = arg6
                                        void* var_2c_1 = var_14
                                        int32_t* edi_12 = var_c - esi_14
                                        int32_t* i_3 = i_5
                                        int32_t* i
                                        
                                        do
                                            eax_37 = *esi_14
                                            void* ecx_38
                                            
                                            if (eax_37 == 0xffffffff)
                                                ecx_38 = var_2c_1
                                            else
                                                double var_80
                                                long double x87_r7_8
                                                double var_78
                                                
                                                if (sub_46cffa(arg1, eax_37, &var_80) s>= 0)
                                                    x87_r7_8 = fconvert.t(var_78)
                                                else
                                                    var_80 = fconvert.d(fconvert.t(arg1[0x14]))
                                                    x87_r7_8 = fconvert.t(arg1[0x15])
                                                    var_78 = fconvert.d(x87_r7_8)
                                                ecx_38 = var_2c_1
                                                
                                                if (var_38_1 == 0)
                                                    long double x87_r6_2 = fconvert.t(*ecx_38)
                                                    long double temp6_1 = fconvert.t(var_80)
                                                    x87_r6_2 - temp6_1
                                                    int32_t eax_40
                                                    eax_40.w = (x87_r6_2 < temp6_1 ? 1 : 0) << 8 | (
                                                        is_unordered.t(x87_r6_2, temp6_1) ? 1 : 0)
                                                        << 0xa | (x87_r6_2 == temp6_1 ? 1 : 0) << 0xe
                                                        | 0x3800
                                                    
                                                    if ((eax_40:1.b & 0x41) == 0)
                                                        *ecx_38 = fconvert.d(fconvert.t(var_80))
                                                    
                                                    long double temp9_1 = fconvert.t(*(ecx_38 + 8))
                                                    x87_r7_8 - temp9_1
                                                    eax_40.w = (x87_r7_8 < temp9_1 ? 1 : 0) << 8 | (
                                                        is_unordered.t(x87_r7_8, temp9_1) ? 1 : 0)
                                                        << 0xa | (x87_r7_8 == temp9_1 ? 1 : 0) << 0xe
                                                        | 0x3800
                                                    
                                                    if ((eax_40:1.b & 0x41) == 0)
                                                        *(ecx_38 + 8) = fconvert.d(x87_r7_8)
                                                    
                                                    *(edi_12 + esi_14) &=
                                                        **(*(arg1[1].d i+ 0x14) + (*esi_14 << 2))
                                                else
                                                    double* eax_41 = ecx_38
                                                    *eax_41 = fconvert.d(fconvert.t(var_80))
                                                    eax_41[1] = fconvert.d(x87_r7_8)
                                                    *(edi_12 + esi_14) =
                                                        **(*(arg1[1].d i+ 0x14) + (*esi_14 << 2))
                                                        & 0x1f
                                            
                                            esi_14 = &esi_14[1]
                                            i = i_3
                                            i_3 -= 1
                                            var_2c_1 = ecx_38 + 0x10
                                        while (i != 1)
                                    
                                    long double x87_r7_9 = fconvert.t(var_70)
                                    long double x87_r6_4 = fconvert.t(0.0)
                                    x87_r6_4 - x87_r7_9
                                    eax_37.w = (x87_r6_4 < x87_r7_9 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r6_4, x87_r7_9) ? 1 : 0) << 0xa
                                        | (x87_r6_4 == x87_r7_9 ? 1 : 0) << 0xe
                                    bool p_2 = unimplemented  {test ah, 0x44}
                                    bool p_3
                                    
                                    if (not(p_2))
                                        long double x87_r7_10 = fconvert.t(var_68)
                                        long double x87_r6_5 = fconvert.t(0.0)
                                        x87_r6_5 - x87_r7_10
                                        eax_37.w = (x87_r6_5 < x87_r7_10 ? 1 : 0) << 8
                                            | (is_unordered.t(x87_r6_5, x87_r7_10) ? 1 : 0) << 0xa
                                            | (x87_r6_5 == x87_r7_10 ? 1 : 0) << 0xe
                                        p_3 = unimplemented  {test ah, 0x44}
                                    
                                    if (p_2 || p_3)
                                        long double x87_r7_11 = float.t(0)
                                        long double temp3_1 = fconvert.t(var_70)
                                        x87_r7_11 - temp3_1
                                        eax_37.w = (x87_r7_11 < temp3_1 ? 1 : 0) << 8
                                            | (is_unordered.t(x87_r7_11, temp3_1) ? 1 : 0) << 0xa
                                            | (x87_r7_11 == temp3_1 ? 1 : 0) << 0xe
                                        
                                        if ((eax_37:1.b & 1) == 0)
                                            long double x87_r7_12 = float.t(0)
                                            long double temp4_1 = fconvert.t(var_68)
                                            x87_r7_12 - temp4_1
                                            eax_37.w = (x87_r7_12 < temp4_1 ? 1 : 0) << 8
                                                | (is_unordered.t(x87_r7_12, temp4_1) ? 1 : 0)
                                                << 0xa | (x87_r7_12 == temp4_1 ? 1 : 0) << 0xe
                                            bool p_4 = unimplemented  {test ah, 0x41}
                                            
                                            if (not(p_4))
                                                arg1[0xb].d = 1
                                        
                                        if (var_34_1 != 0)
                                            if (var_38_1 != 0)
                                                var_34_1 = 0
                                            else
                                                var_34_1 = 1
                                                
                                                if (sub_4718d8(arg1, arg_8, var_1c_1, &var_4c, 
                                                        &var_48) == 0)
                                                    var_34_1 = 0
                                        
                                        if (i_5 u> 0)
                                            int32_t* esi_15 = arg6
                                            int32_t* ecx_42 = var_8 - esi_15
                                            int32_t* var_2c_2 = ecx_42
                                            int32_t* i_4 = i_5
                                            int32_t* i_1
                                            
                                            do
                                                int32_t eax_49 = *(ecx_42 + esi_15)
                                                int32_t edx_6 = *esi_15
                                                
                                                if (eax_49 != edx_6)
                                                    int32_t ecx_44 = *(arg1[1].d i+ 0x14)
                                                    int16_t* eax_50 = *(ecx_44 + (eax_49 << 2))
                                                    int32_t* ecx_45 = *(ecx_44 + (edx_6 << 2))
                                                    *eax_50 &= 0xfe60
                                                    *eax_50 |= *ecx_45 & 0x19f
                                                    *(eax_50 + 0x20) =
                                                        fconvert.d(fconvert.t(*(ecx_45 + 0x20)))
                                                    ecx_42 = var_2c_2
                                                    *(eax_50 + 0x28) =
                                                        fconvert.d(fconvert.t(*(ecx_45 + 0x28)))
                                                
                                                esi_15 = &esi_15[1]
                                                i_1 = i_4
                                                i_4 -= 1
                                            while (i_1 != 1)
                                        
                                        if (arg5 == 0)
                                            goto label_473d1f
                                        
                                        int32_t var_90_10 = 0
                                        void* var_98_6 = var_30
                                        arg1[3].d = var_8
                                        arg1[0xa].d = 0
                                        *(arg1 + 0x54) = 0
                                        int32_t eax_52
                                        long double st0_1
                                        st0_1, eax_52 = sub_471c8d(arg1, 0, arg4, var_98_6, arg5)
                                        
                                        if (eax_52 s< 0)
                                            break
                                        
                                        arg1[3].d = arg6
                                        arg1[0xa].d = 0
                                        *(arg1 + 0x54) = 0
                                        
                                        if (sub_47ad82(arg1, arg5, 0) s< 0)
                                            break
                                        
                                        if (arg1[0xb].d != 0)
                                        label_473d19:
                                            arg1[0xa].d = 0
                                            *(arg1 + 0x54) = 0
                                        label_473d1f:
                                            
                                            if (*(arg1 + 0x5c) != 0)
                                                int32_t* ecx_48 = var_20
                                                var_20 = var_8
                                                void* eax_56 = var_14
                                                var_14 = var_24
                                                var_24 = eax_56
                                                int32_t eax_57 = var_c
                                                var_8 = ecx_48
                                                var_c = var_28
                                                var_28 = eax_57
                                                sub_46e9ba(arg1, ecx_19, eax_27, ecx_48)
                                                *(arg1 + 0x4c) = 0
                                                arg1[0xa].d = 0
                                                *(arg1 + 0x54) = 0
                                                
                                                if (var_1c_1 == 0)
                                                    var_3c = 1
                                            else
                                                var_1c_1 += 1
                                                
                                                if (var_1c_1 u< 0x400)
                                                    continue
                                        else if (arg1[0xa].d == 0 && *(arg1 + 0x54) == 0)
                                            goto label_473d19
                                else if (arg1[0xa].d == 0 && *(arg1 + 0x54) == 0)
                                    goto label_473add
                                
                                if (var_1c_1 == 0x400)
                                    int32_t var_90_12 = 0x400
                                    sub_46e3d1(arg1, arg3, 0xdb7, 
                                        "loop does not appear to terminate in a timely manner (%d 
                                            iterations)")
                                    break
                                
                                if (i_5 u> 0)
                                    int32_t* edx_10 = var_8
                                    void* ecx_50 = var_14
                                    int32_t* esi_17 = var_c - edx_10
                                    arg6 = i_5
                                    int32_t* i_2
                                    
                                    do
                                        int32_t eax_59 = *edx_10
                                        
                                        if (eax_59 != 0xffffffff)
                                            int32_t* eax_60 =
                                                *(*(arg1[1].d i+ 0x14) + (eax_59 << 2))
                                            *(eax_60 + 0x20) = fconvert.d(fconvert.t(*ecx_50))
                                            *(eax_60 + 0x28) = fconvert.d(fconvert.t(*(ecx_50 + 8)))
                                            *eax_60 = *(esi_17 + edx_10) | 0x180
                                        
                                        ecx_50 += 0x10
                                        edx_10 = &edx_10[1]
                                        i_2 = arg6
                                        arg6 -= 1
                                    while (i_2 != 1)
                                
                                arg1[3].d = eax_2
                                int32_t esi_19
                                int32_t edi_21
                                edi_21, esi_19 = __builtin_memcpy(eax_2, var_8, eax_5 u>> 2 << 2)
                                __builtin_memcpy(edi_21, esi_19, eax_5 & 3)
                                var_1c_1 != 0 && var_34_1 != 0 && arg1[0xa].d == 0
                                    && *(arg1 + 0x54) == 0 && sub_46ea58(arg1, arg4, 0x10000001, 
                                    arg1[3].d i+ (var_4c << 2), &var_48, nullptr, 0, arg2.b) s< 0
                                break
                        else if (sub_47ad82(arg1, arg_8, 0) s>= 0)
                            if (*(arg1 + 0x5c) != 0)
                                var_3c = 1
                            
                            if (arg1[0xa].d == 0 && *(arg1 + 0x54) == 0)
                                goto label_473903

arg1[3].d = eax_2
j__free(var_8)
j__free(var_20)
j__free(var_14)
j__free(var_24)
j__free(var_c)
j__free(var_28)
arg1[0xb].d = eax
*(arg1 + 0x5c) = var_3c
