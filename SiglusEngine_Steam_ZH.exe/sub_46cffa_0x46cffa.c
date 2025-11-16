// 函数: sub_46cffa
// 地址: 0x46cffa
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

double* eax = arg1[1].d
int32_t edi
int32_t var_60 = edi
int32_t* edi_1 = *(*(eax + 0x14) + (arg2 << 2))
int16_t ecx_1 = (*edi_1).w

if ((ecx_1:1.b & 1) == 0)
    if (ecx_1.b s>= 0)
        double var_38 = fconvert.d(fconvert.t(arg1[0x15]))
        double var_30_1 = fconvert.d(fconvert.t(arg1[0x14]))
        int16_t top_1 = 0
        int32_t ecx_2 = edi_1[2]
        int32_t result
        int16_t x87control
        long double st0
        double var_20
        
        if (ecx_2 != 0xffffffff)
            eax, x87control = sub_46e8bc(arg1, ecx_2, &var_20)
            
            if (eax s< 0)
            labelid_40:
                result = 0
            else
                int32_t eax_2
                eax_2, x87control = __ftol(x87control, fconvert.t(var_20))
                top_1 = 0
                void* ecx_4 = arg1[1].d
                int32_t edx_1 = *(ecx_4 + 8)
                arg2 = 0
                
                if (edx_1 u<= 0)
                labelid_40:
                    result = 0
                else
                    int32_t* ecx_5 = *(ecx_4 + 0x14)
                    
                    while (true)
                        void* edx_2 = *ecx_5
                        
                        if (*(edx_2 + 4) == edi_1[1] && *(edx_2 + 8) == 0xffffffff
                                && *(edx_2 + 0xc) == eax_2 + edi_1[3]
                                && *(edx_2 + 0x10) == edi_1[4])
                            break
                        
                        arg2 += 1
                        ecx_5 = &ecx_5[1]
                        
                        if (arg2 u>= edx_1)
                            goto label_46db20_2
                    
                    if (sub_46cffa(arg2, &var_38) s< 0)
                        goto label_46dac1
                    
                labelid_40:
                    result = 0
        else if ((*(*(eax[2].d i+ (edi_1[1] << 2)) + 4) & 2) == 0)
        labelid_40:
            result = 0
        else
            int32_t ecx_9 = edi_1[0x12]
            
            if (ecx_9 == 0xffffffff)
            labelid_40:
                result = 0
            else
                double** esi_1 = *(eax[3].d i+ (ecx_9 << 2))
                eax = *esi_1
                int32_t ebx_2 = edi_1[4]
                void* ecx_11 = eax & 0xf0000000
                double var_28
                int32_t mxcsr
                int16_t x87control_1
                long double x87_r0
                long double x87_r0_1
                long double x87_r6_17
                long double x87_r7_19
                long double x87_r7_24
                long double x87_r7_58
                long double x87_r7_65
                long double x87_r7_76
                long double x87_r7_79
                long double x87_r7_82
                int16_t top_2
                
                if (ecx_11 == 0x10000000)
                    eax &= 0xfff00000
                    
                    if (eax == 0x10f00000 || eax == 0x11000000 || eax == 0x11100000
                        || eax == 0x11200000 || eax == 0x11300000 || eax == 0x11400000
                        || eax == 0x11500000)
                    labelid_40:
                        result = 0
                    else
                        int32_t eax_5
                        int32_t ecx_13
                        eax_5, ecx_13 = sub_46cffa(*(esi_1[2] + (ebx_2 << 2)), &var_28)
                        
                        if (eax_5 s< 0)
                            goto label_46dac1
                        
                        void* esi_3 = *esi_1 & 0xfff00000
                        
                        if (esi_3 u> 0x10700000)
                            if (esi_3 == 0x10800000)
                                long double x87_r7_77 = fconvert.t(var_20)
                                long double x87_r6_19 = fconvert.t(var_28)
                                x87_r6_19 - x87_r7_77
                                eax.w = (x87_r6_19 < x87_r7_77 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r6_19, x87_r7_77) ? 1 : 0) << 0xa
                                    | (x87_r6_19 == x87_r7_77 ? 1 : 0) << 0xe
                                bool p_12 = unimplemented  {test ah, 0x44}
                                
                                if (p_12)
                                    x87_r7_82 = fconvert.t(-1.0)
                                    goto label_46db18
                                
                                int32_t var_68_9 = ecx_13
                                int16_t var_6c_9 = ecx_13.w
                                
                                if (sub_75ed12((fconvert.d(fconvert.t(var_28))).w) == 0)
                                    x87_r7_82 = fconvert.t(-1.0)
                                    goto label_46db18
                                
                                x87_r7_79 = fconvert.t(var_28)
                                goto label_46db01
                            
                            if (esi_3 == 0x10900000)
                                long double x87_r7_74 = fconvert.t(var_20)
                                long double x87_r6_18 = fconvert.t(var_28)
                                x87_r6_18 - x87_r7_74
                                eax.w = (x87_r6_18 < x87_r7_74 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r6_18, x87_r7_74) ? 1 : 0) << 0xa
                                    | (x87_r6_18 == x87_r7_74 ? 1 : 0) << 0xe
                                bool p_11 = unimplemented  {test ah, 0x44}
                                
                                if (p_11)
                                    x87_r7_82 = fconvert.t(-1.0)
                                    goto label_46db18
                                
                                int32_t var_68_8 = ecx_13
                                int16_t var_6c_8 = ecx_13.w
                                
                                if (sub_75ed12((fconvert.d(fconvert.t(var_28))).w) == 0)
                                    x87_r7_82 = fconvert.t(-1.0)
                                    goto label_46db18
                                
                                x87_r7_76 = fconvert.t(var_28)
                                goto label_46db0e
                            
                            if (esi_3 == 0x10a00000)
                                long double x87_r7_66 = fconvert.t(var_28)
                                long double temp41_1 = fconvert.t(-1.0)
                                x87_r7_66 - temp41_1
                                eax.w = (x87_r7_66 < temp41_1 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r7_66, temp41_1) ? 1 : 0) << 0xa
                                    | (x87_r7_66 == temp41_1 ? 1 : 0) << 0xe
                                
                                if ((eax:1.b & 1) != 0)
                                label_46d4fb:
                                    var_38 = fconvert.d(fconvert.t(-1.5707963705062866))
                                    top_2 = 0xffff
                                    goto label_46db1d
                                
                                long double x87_r7_67 = fconvert.t(var_20)
                                long double temp42_1 = fconvert.t(1.0)
                                x87_r7_67 - temp42_1
                                eax.w = (x87_r7_67 < temp42_1 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r7_67, temp42_1) ? 1 : 0) << 0xa
                                    | (x87_r7_67 == temp42_1 ? 1 : 0) << 0xe
                                bool p_10 = unimplemented  {test ah, 0x41}
                                
                                if (p_10)
                                    goto label_46d4fb
                                
                                int16_t x87control_3
                                long double st0_2
                                st0_2, x87control_3 =
                                    sub_7622d0(mxcsr, x87control, fconvert.t(var_28))
                                var_38 = fconvert.d(st0_2)
                                top_2 = 0xffff
                                st0, eax, x87control =
                                    sub_7622d0(mxcsr, x87control_3, fconvert.t(var_20))
                                goto label_46db1d
                            
                            if (esi_3 == 0x10b00000)
                                long double x87_r7_59 = fconvert.t(var_28)
                                long double temp43_1 = fconvert.t(-1.0)
                                x87_r7_59 - temp43_1
                                eax.w = (x87_r7_59 < temp43_1 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r7_59, temp43_1) ? 1 : 0) << 0xa
                                    | (x87_r7_59 == temp43_1 ? 1 : 0) << 0xe
                                
                                if ((eax:1.b & 1) != 0)
                                    x87_r7_65 = float.t(0)
                                    goto label_46d745
                                
                                long double x87_r7_60 = fconvert.t(var_20)
                                long double temp46_1 = fconvert.t(1.0)
                                x87_r7_60 - temp46_1
                                eax.w = (x87_r7_60 < temp46_1 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r7_60, temp46_1) ? 1 : 0) << 0xa
                                    | (x87_r7_60 == temp46_1 ? 1 : 0) << 0xe
                                bool p_9 = unimplemented  {test ah, 0x41}
                                
                                if (p_9)
                                    x87_r7_65 = float.t(0)
                                    goto label_46d745
                                
                                int16_t x87control_2
                                long double st0_1
                                st0_1, x87control_2 =
                                    sub_7614c0(mxcsr, x87control, fconvert.t(var_20))
                                var_38 = fconvert.d(st0_1)
                                top_2 = 0xffff
                                st0, eax, x87control =
                                    sub_7614c0(mxcsr, x87control_2, fconvert.t(var_28))
                                goto label_46db1d
                            
                            if (esi_3 == 0x10c00000)
                                long double x87_r7_56 = fconvert.t(var_20)
                                long double x87_r6_16 = fconvert.t(var_28)
                                x87_r6_16 - x87_r7_56
                                eax.w = (x87_r6_16 < x87_r7_56 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r6_16, x87_r7_56) ? 1 : 0) << 0xa
                                    | (x87_r6_16 == x87_r7_56 ? 1 : 0) << 0xe
                                bool p_8 = unimplemented  {test ah, 0x44}
                                
                                if (p_8)
                                    goto label_46d4fb
                                
                                int32_t var_68_7 = ecx_13
                                int16_t var_6c_7 = ecx_13.w
                                
                                if (sub_75ed12((fconvert.d(fconvert.t(var_28))).w) == 0)
                                    goto label_46d4fb
                                
                                x87_r7_58 = fconvert.t(var_28)
                                x87_r6_17 = float.t(1)
                                goto label_46d477
                            
                            if (esi_3 == 0x10d00000 || esi_3 == 0x10e00000)
                                long double x87_r7_53 = fconvert.t(var_20)
                                long double x87_r6_15 = fconvert.t(var_28)
                                x87_r6_15 - x87_r7_53
                                top_1 = 0
                                eax.w = (x87_r6_15 < x87_r7_53 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r6_15, x87_r7_53) ? 1 : 0) << 0xa
                                    | (x87_r6_15 == x87_r7_53 ? 1 : 0) << 0xe
                                bool p_7 = unimplemented  {test ah, 0x44}
                                
                                if (p_7)
                                labelid_40:
                                    result = 0
                                else
                                    int32_t var_68_6 = ecx_13
                                    int16_t var_6c_6 = ecx_13.w
                                    top_1 = 0
                                    
                                    if (sub_75ed12((fconvert.d(fconvert.t(var_28))).w) != 0)
                                        goto label_46d440
                                    
                                labelid_40:
                                    result = 0
                            else
                            labelid_40:
                                result = 0
                        else if (esi_3 == 0x10700000)
                            long double x87_r7_46 = fconvert.t(var_28)
                            long double temp36_1 = fconvert.t(0.0)
                            x87_r7_46 - temp36_1
                            top_1 = 0
                            eax.w = (x87_r7_46 < temp36_1 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r7_46, temp36_1) ? 1 : 0) << 0xa
                                | (x87_r7_46 == temp36_1 ? 1 : 0) << 0xe
                            
                            if ((eax:1.b & 1) == 0)
                                var_38 = fconvert.d(fconvert.t(1.0) / sqrt(fconvert.t(var_20)))
                                top_2 = 0xffff
                                goto label_46db1d
                            
                        labelid_40:
                            result = 0
                        else
                            if (esi_3 == 0x10000000)
                            label_46d906:
                                var_38 = fconvert.d(fconvert.t(var_28))
                            label_46d950:
                                top_2 = 0xffff
                                goto label_46db1d
                            
                            if (esi_3 == 0x10100000)
                                var_38 = fconvert.d(fneg(fconvert.t(var_20)))
                                top_2 = 0xffff
                                goto label_46db1d
                            
                            if (esi_3 == 0x10200000)
                                long double x87_r7_31 = fconvert.t(var_28)
                                long double temp44_1 = fconvert.t(0.0)
                                x87_r7_31 - temp44_1
                                eax.w = (x87_r7_31 < temp44_1 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r7_31, temp44_1) ? 1 : 0) << 0xa
                                    | (x87_r7_31 == temp44_1 ? 1 : 0) << 0xe
                                bool p_3 = unimplemented  {test ah, 0x5}
                                long double x87_r7_33
                                
                                if (p_3)
                                    long double x87_r7_34 = fconvert.t(0.0)
                                    long double x87_r6_13 = fconvert.t(var_28)
                                    x87_r6_13 - x87_r7_34
                                    eax.w = (x87_r6_13 < x87_r7_34 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r6_13, x87_r7_34) ? 1 : 0) << 0xa
                                        | (x87_r6_13 == x87_r7_34 ? 1 : 0) << 0xe
                                    bool p_4 = unimplemented  {test ah, 0x44}
                                    
                                    if (p_4)
                                        x87_r7_33 = fconvert.t(var_28) + fconvert.t(arg1[0x16])
                                    else
                                        x87_r7_33 = float.t(0)
                                else
                                    x87_r7_33 = fconvert.t(var_28) - fconvert.t(arg1[0x16])
                                
                                var_38 = fconvert.d(x87_r7_33)
                                long double x87_r7_36 = fconvert.t(var_20)
                                long double temp48_1 = fconvert.t(0.0)
                                x87_r7_36 - temp48_1
                                eax.w = (x87_r7_36 < temp48_1 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r7_36, temp48_1) ? 1 : 0) << 0xa
                                    | (x87_r7_36 == temp48_1 ? 1 : 0) << 0xe
                                bool p_5 = unimplemented  {test ah, 0x5}
                                
                                if (not(p_5))
                                    top_2 = 0xffff
                                    arg1[0x16]
                                    goto label_46db1d
                                
                                long double x87_r7_39 = fconvert.t(0.0)
                                long double x87_r6_14 = fconvert.t(var_20)
                                x87_r6_14 - x87_r7_39
                                eax.w = (x87_r6_14 < x87_r7_39 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r6_14, x87_r7_39) ? 1 : 0) << 0xa
                                    | (x87_r6_14 == x87_r7_39 ? 1 : 0) << 0xe
                                bool p_6 = unimplemented  {test ah, 0x44}
                                
                                if (not(p_6))
                                    goto label_46da94
                                
                                top_2 = 0xffff
                                arg1[0x16]
                                goto label_46db1d
                            
                            if (esi_3 == 0x10300000)
                                long double x87_r7_25 = fconvert.t(var_28)
                                long double temp47_1 = fconvert.t(0.0)
                                x87_r7_25 - temp47_1
                                eax.w = (x87_r7_25 < temp47_1 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r7_25, temp47_1) ? 1 : 0) << 0xa
                                    | (x87_r7_25 == temp47_1 ? 1 : 0) << 0xe
                                
                                if ((eax:1.b & 0x41) == 0)
                                label_46d2f8:
                                    var_38 = fconvert.d(float.t(1) / fconvert.t(var_20))
                                    top_2 = 0xffff
                                    goto label_46db1d
                                
                                long double x87_r7_26 = fconvert.t(var_20)
                                long double temp49_1 = fconvert.t(0.0)
                                x87_r7_26 - temp49_1
                                top_1 = 0
                                eax.w = (x87_r7_26 < temp49_1 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r7_26, temp49_1) ? 1 : 0) << 0xa
                                    | (x87_r7_26 == temp49_1 ? 1 : 0) << 0xe
                                bool p_2 = unimplemented  {test ah, 0x5}
                                
                                if (not(p_2))
                                    goto label_46d2f8
                                
                            labelid_40:
                                result = 0
                            else
                                if (esi_3 == 0x10400000)
                                    long double x87_r7_20 = fconvert.t(var_20)
                                    long double x87_r6_12 = fconvert.t(var_28)
                                    x87_r6_12 - x87_r7_20
                                    eax.w = (x87_r6_12 < x87_r7_20 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r6_12, x87_r7_20) ? 1 : 0) << 0xa
                                        | (x87_r6_12 == x87_r7_20 ? 1 : 0) << 0xe
                                    bool p_1 = unimplemented  {test ah, 0x44}
                                    
                                    if (p_1)
                                        x87_r7_82 = float.t(0)
                                        goto label_46db18
                                    
                                    int16_t var_6c_4 = ecx_13.w
                                    
                                    if (sub_75ed12((fconvert.d(fconvert.t(var_28))).w) == 0)
                                        goto label_46d440
                                    
                                    int32_t var_68_5 = ecx_13
                                    int32_t var_6c_5 = ecx_13
                                    var_6c_5.q = fconvert.d(fconvert.t(var_20))
                                    st0, eax, x87control = sub_74c3d0(mxcsr, x87control, var_6c_5)
                                    x87_r7_24 = fconvert.t(var_28) - st0
                                    goto label_46db03
                                
                                if (esi_3 == 0x10500000)
                                    x87control_1 = sub_761640(mxcsr, x87control, 
                                        fconvert.t(var_28), fconvert.t(2.0))
                                    var_38 = fconvert.d(x87_r0)
                                    x87_r0_1 = fconvert.t(2.0)
                                    x87_r7_19 = fconvert.t(var_20)
                                label_46da42:
                                    eax, x87control =
                                        sub_761640(mxcsr, x87control_1, x87_r7_19, x87_r0_1)
                                    top_2 = 1
                                    goto label_46db1d
                                
                                if (esi_3 == 0x10600000)
                                    long double x87_r7_7 = fconvert.t(var_28)
                                    long double temp50_1 = fconvert.t(0.0)
                                    x87_r7_7 - temp50_1
                                    eax.w = (x87_r7_7 < temp50_1 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r7_7, temp50_1) ? 1 : 0) << 0xa
                                        | (x87_r7_7 == temp50_1 ? 1 : 0) << 0xe
                                    long double x87_r7_11
                                    
                                    if ((eax:1.b & 0x41) != 0)
                                        x87_r7_11 = fconvert.t(arg1[0x15])
                                    else
                                        x87_r7_11 = __fyl2x(fconvert.t(var_28), 
                                            fconvert.t(0.69314718048553914)
                                                + fconvert.t(7.4406171098029793e-11)) / __fyl2x(
                                            fconvert.t(2.0), 
                                            fconvert.t(0.69314718048553914)
                                                + fconvert.t(7.4406171098029793e-11))
                                    
                                    var_38 = fconvert.d(x87_r7_11)
                                    long double x87_r7_12 = fconvert.t(var_20)
                                    long double temp51_1 = fconvert.t(0.0)
                                    x87_r7_12 - temp51_1
                                    eax.w = (x87_r7_12 < temp51_1 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r7_12, temp51_1) ? 1 : 0) << 0xa
                                        | (x87_r7_12 == temp51_1 ? 1 : 0) << 0xe
                                    
                                    if ((eax:1.b & 0x41) != 0)
                                        top_2 = 0xffff
                                        arg1[0x15]
                                    else
                                        __fyl2x(fconvert.t(var_20), 
                                            fconvert.t(0.69314718048553914)
                                                + fconvert.t(7.4406171098029793e-11))
                                        __fyl2x(fconvert.t(2.0), 
                                            fconvert.t(0.69314718048553914)
                                                + fconvert.t(7.4406171098029793e-11))
                                        top_2 = 0xffff
                                    
                                    goto label_46db1d
                                
                            labelid_40:
                                result = 0
                else if (ecx_11 != 0x20000000)
                    void* ecx_29 = eax & 0xfff00000
                    double var_58
                    double var_50
                    double var_48
                    
                    if (ecx_29 == 0x50000000)
                        eax &= 0xfffff
                        var_38 = fconvert.d(float.t(0))
                        double var_30_2 = fconvert.d(float.t(0))
                        top_1 = 0
                        int32_t ebx_3 = 0
                        
                        if (eax u> 0)
                            arg2 = eax << 2
                            
                            while (sub_46cffa(*(esi_1[2] + (ebx_3 << 2)), &var_28) s>= 0)
                                if (sub_46cffa(*(arg2 + esi_1[2]), &var_48) s< 0)
                                    break
                                
                                sub_46cf57(arg1, edi_1, &var_58, &var_28, &var_48, (*edi_1).b)
                                arg2 += 4
                                ebx_3 += 1
                                var_38 = fconvert.d(fconvert.t(var_58) + fconvert.t(var_38))
                                var_30_2 = fconvert.d(fconvert.t(var_50) + fconvert.t(var_30_2))
                                top_1 = 0
                                
                                if (ebx_3 u>= eax)
                                    goto label_46db20_2
                            
                            goto label_46dac1
                        
                    labelid_40:
                        result = 0
                    else
                        double var_40
                        
                        if (ecx_29 == 0x30000000)
                            int32_t eax_16 = esi_1[2]
                            int32_t ecx_34 = *(eax_16 + (ebx_2 << 2))
                            int32_t ecx_35 = esi_1[3]
                            int32_t edx_7 = *(eax_16 + ((ecx_35 + ebx_2) << 2))
                            int32_t ebx_4 = *(eax_16 + ((ebx_2 + (ecx_35 << 1)) << 2))
                            
                            if (sub_46cffa(ecx_34, &var_58) s< 0)
                                goto label_46dac1
                            
                            if (sub_46cffa(edx_7, &var_28) s< 0)
                                goto label_46dac1
                            
                            if (sub_46cffa(ebx_4, &var_48) s< 0)
                                goto label_46dac1
                            
                            if ((*esi_1 & 0xfff00000) == 0x30000000)
                                if (ecx_34 == edx_7)
                                    long double x87_r7_108 = fconvert.t(var_28)
                                    long double temp21_1 = fconvert.t(0.0)
                                    x87_r7_108 - temp21_1
                                    eax.w = (x87_r7_108 < temp21_1 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r7_108, temp21_1) ? 1 : 0) << 0xa
                                        | (x87_r7_108 == temp21_1 ? 1 : 0) << 0xe
                                    bool p_20 = unimplemented  {test ah, 0x5}
                                    
                                    if (not(p_20))
                                        var_28 = fconvert.d(float.t(0))
                                    
                                    long double x87_r7_110 = fconvert.t(var_20)
                                    long double temp27_1 = fconvert.t(0.0)
                                    x87_r7_110 - temp27_1
                                    eax.w = (x87_r7_110 < temp27_1 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r7_110, temp27_1) ? 1 : 0) << 0xa
                                        | (x87_r7_110 == temp27_1 ? 1 : 0) << 0xe
                                    bool p_21 = unimplemented  {test ah, 0x5}
                                    
                                    if (not(p_21))
                                        var_20 = fconvert.d(float.t(0))
                                
                                long double x87_r7_114
                                
                                if (ecx_34 != ebx_4)
                                    x87_r7_114 = fconvert.t(var_40)
                                else
                                    long double x87_r7_112 = fconvert.t(var_48)
                                    long double temp26_1 = fconvert.t(0.0)
                                    x87_r7_112 - temp26_1
                                    eax.w = (x87_r7_112 < temp26_1 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r7_112, temp26_1) ? 1 : 0) << 0xa
                                        | (x87_r7_112 == temp26_1 ? 1 : 0) << 0xe
                                    
                                    if ((eax:1.b & 0x41) == 0)
                                        var_48 = fconvert.d(float.t(0))
                                    
                                    x87_r7_114 = fconvert.t(var_40)
                                    long double temp32_1 = fconvert.t(0.0)
                                    x87_r7_114 - temp32_1
                                    eax.w = (x87_r7_114 < temp32_1 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r7_114, temp32_1) ? 1 : 0) << 0xa
                                        | (x87_r7_114 == temp32_1 ? 1 : 0) << 0xe | 0x3800
                                    
                                    if ((eax:1.b & 0x41) == 0)
                                        x87_r7_114 = float.t(0)
                                
                                long double x87_r6_22 = fconvert.t(var_58)
                                long double temp31_1 = fconvert.t(0.0)
                                x87_r6_22 - temp31_1
                                eax.w = (x87_r6_22 < temp31_1 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r6_22, temp31_1) ? 1 : 0) << 0xa
                                    | (x87_r6_22 == temp31_1 ? 1 : 0) << 0xe | 0x3800
                                
                                if ((eax:1.b & 1) == 0)
                                    goto label_46d906
                                
                                long double x87_r6_23 = fconvert.t(var_50)
                                long double temp37_1 = fconvert.t(0.0)
                                x87_r6_23 - temp37_1
                                eax.w = (x87_r6_23 < temp37_1 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r6_23, temp37_1) ? 1 : 0) << 0xa
                                    | (x87_r6_23 == temp37_1 ? 1 : 0) << 0xe | 0x3800
                                bool p_22 = unimplemented  {test ah, 0x5}
                                
                                if (not(p_22))
                                    var_38 = fconvert.d(fconvert.t(var_48))
                                    top_2 = 0xffff
                                    goto label_46db1d
                                
                                long double x87_r6_25 = fconvert.t(var_28)
                                long double temp40_1 = fconvert.t(var_48)
                                x87_r6_25 - temp40_1
                                eax.w = (x87_r6_25 < temp40_1 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r6_25, temp40_1) ? 1 : 0) << 0xa
                                    | (x87_r6_25 == temp40_1 ? 1 : 0) << 0xe | 0x3800
                                bool p_23 = unimplemented  {test ah, 0x5}
                                long double x87_r6_26
                                
                                if (p_23)
                                    x87_r6_26 = fconvert.t(var_48)
                                else
                                    x87_r6_26 = fconvert.t(var_28)
                                
                                var_38 = fconvert.d(x87_r6_26)
                                long double x87_r6_27 = fconvert.t(var_20)
                                x87_r6_27 - x87_r7_114
                                top_2 = 0xffff
                                eax.w = (x87_r6_27 < x87_r7_114 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r6_27, x87_r7_114) ? 1 : 0) << 0xa
                                    | (x87_r6_27 == x87_r7_114 ? 1 : 0) << 0xe | 0x3800
                                
                                if ((eax:1.b & 0x41) != 0)
                                    goto label_46db1d
                                
                                goto label_46d950
                            
                        labelid_40:
                            result = 0
                        else if (ecx_29 == 0x50100000)
                            if (ebx_2 == 0)
                            label_46d61f:
                                x87_r7_82 = float.t(1)
                            label_46db18:
                                var_38 = fconvert.d(x87_r7_82)
                                top_2 = 0xffff
                                goto label_46db1d
                            
                            if (ebx_2 == 1)
                                if (sub_46cffa(*esi_1[2], &var_48) s< 0)
                                    goto label_46dac1
                                
                                long double x87_r7_122 = fconvert.t(var_48)
                                long double temp14_1 = fconvert.t(0.0)
                                x87_r7_122 - temp14_1
                                eax.w = (x87_r7_122 < temp14_1 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r7_122, temp14_1) ? 1 : 0) << 0xa
                                    | (x87_r7_122 == temp14_1 ? 1 : 0) << 0xe
                                
                                if ((eax:1.b & 0x41) == 0)
                                    var_38 = fconvert.d(fconvert.t(var_48))
                                label_46da77:
                                    top_2 = 0xffff
                                    goto label_46db1d
                                
                                long double x87_r7_125 = fconvert.t(var_40)
                                long double temp18_1 = fconvert.t(0.0)
                                x87_r7_125 - temp18_1
                                var_38 = fconvert.d(float.t(0))
                                bool c1_1 = unimplemented  {fstp qword [ebp-0x34], st0}
                                eax.w = (x87_r7_125 < temp18_1 ? 1 : 0) << 8 | (c1_1 ? 1 : 0) << 9
                                    | (is_unordered.t(x87_r7_125, temp18_1) ? 1 : 0) << 0xa
                                    | (x87_r7_125 == temp18_1 ? 1 : 0) << 0xe
                                bool p_28 = unimplemented  {test ah, 0x41}
                                
                                if (p_28)
                                    goto label_46da77
                                
                                goto label_46da94
                            
                            if (ebx_2 == 2)
                                if (sub_46cffa(*esi_1[2], &var_48) s< 0)
                                    goto label_46dac1
                                
                                long double x87_r7_117 = fconvert.t(var_40)
                                long double temp20_1 = fconvert.t(0.0)
                                x87_r7_117 - temp20_1
                                eax.w = (x87_r7_117 < temp20_1 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r7_117, temp20_1) ? 1 : 0) << 0xa
                                    | (x87_r7_117 == temp20_1 ? 1 : 0) << 0xe
                                bool p_24 = unimplemented  {test ah, 0x41}
                                
                                if (not(p_24))
                                label_46d440:
                                    var_38 = fconvert.d(float.t(0))
                                label_46da94:
                                    top_2 = 0xffff
                                    goto label_46db1d
                                
                                if (sub_46cffa(*(esi_1[2] + 4), &var_28) s< 0)
                                    goto label_46dac1
                                
                                long double x87_r7_118 = fconvert.t(var_20)
                                long double temp30_1 = fconvert.t(0.0)
                                x87_r7_118 - temp30_1
                                eax.w = (x87_r7_118 < temp30_1 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r7_118, temp30_1) ? 1 : 0) << 0xa
                                    | (x87_r7_118 == temp30_1 ? 1 : 0) << 0xe
                                bool p_25 = unimplemented  {test ah, 0x41}
                                
                                if (not(p_25))
                                    goto label_46d440
                                
                                if (sub_46cffa(*(esi_1[2] + 0xc), &var_58) s< 0)
                                    goto label_46dac1
                                
                                long double x87_r7_119 = fconvert.t(var_28)
                                long double temp39_1 = fconvert.t(1.0)
                                x87_r7_119 - temp39_1
                                int32_t eax_24
                                eax_24.w = (x87_r7_119 < temp39_1 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r7_119, temp39_1) ? 1 : 0) << 0xa
                                    | (x87_r7_119 == temp39_1 ? 1 : 0) << 0xe
                                bool p_26 = unimplemented  {test ah, 0x5}
                                long double x87_r7_120
                                
                                if (p_26)
                                    x87_r7_120 = fconvert.t(var_58)
                                else
                                    x87_r7_120 = fconvert.t(var_50)
                                
                                int32_t eax_25
                                eax_25, x87control_1 = sub_761640(mxcsr, x87control, 
                                    fconvert.t(fconvert.d(x87_r7_120)), fconvert.t(var_28))
                                var_38 = fconvert.d(x87_r0)
                                long double x87_r0_5 = fconvert.t(var_20)
                                long double temp45_1 = fconvert.t(1.0)
                                x87_r0_5 - temp45_1
                                eax_25.w = (x87_r0_5 < temp45_1 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r0_5, temp45_1) ? 1 : 0) << 0xa
                                    | (x87_r0_5 == temp45_1 ? 1 : 0) << 0xe | 0x800
                                bool p_27 = unimplemented  {test ah, 0x5}
                                long double x87_r0_6
                                
                                if (p_27)
                                    x87_r0_6 = fconvert.t(var_50)
                                else
                                    x87_r0_6 = fconvert.t(var_58)
                                
                                x87_r0_1 = fconvert.t(var_20)
                                x87_r7_19 = fconvert.t(fconvert.d(x87_r0_6))
                                goto label_46da42
                            
                            if (ebx_2 == 3)
                                goto label_46d61f
                            
                        labelid_40:
                            result = 0
                        else if (ecx_29 != 0x50300000)
                        labelid_40:
                            result = 0
                        else
                            int32_t ecx_46
                            eax, ecx_46 = sub_46cffa(*esi_1[2], &var_48)
                            
                            if (eax s< 0)
                                goto label_46dac1
                            
                            long double x87_r7_130 = fconvert.t(var_40)
                            long double x87_r6_29 = fconvert.t(var_48)
                            x87_r6_29 - x87_r7_130
                            eax.w = (x87_r6_29 < x87_r7_130 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r6_29, x87_r7_130) ? 1 : 0) << 0xa
                                | (x87_r6_29 == x87_r7_130 ? 1 : 0) << 0xe
                            bool p_29 = unimplemented  {test ah, 0x44}
                            
                            if (p_29)
                                x87_r7_82 = fconvert.t(-1.0)
                                goto label_46db18
                            
                            int32_t var_68_26 = ecx_46
                            int16_t var_6c_26 = ecx_46.w
                            top_1 = 0
                            
                            if (sub_75ed12((fconvert.d(fconvert.t(var_48))).w) == 0)
                                x87_r7_82 = fconvert.t(-1.0)
                                goto label_46db18
                            
                            if (ebx_2 == 0)
                                x87_r7_76 = fconvert.t(var_48)
                            label_46db0e:
                                bool c2_46
                                st0, c2_46 = __fcos(x87_r7_76)
                                x87_r7_24 = st0
                            label_46db03:
                                double var_30_4 = fconvert.d(x87_r7_24)
                                var_38 = fconvert.d(x87_r7_24)
                                top_1 = 0
                            labelid_40:
                                result = 0
                            else
                                if (ebx_2 == 1)
                                    x87_r7_79 = fconvert.t(var_48)
                                label_46db01:
                                    bool c2_45
                                    st0, c2_45 = __fsin(x87_r7_79)
                                    x87_r7_24 = st0
                                    goto label_46db03
                                
                            labelid_40:
                                result = 0
                else
                    double var_18
                    
                    if ((eax & 0xfff00000) == 0x20900000)
                    labelid_40:
                        result = 0
                    else if (sub_46cffa(*(esi_1[2] + (ebx_2 << 2)), &var_18) s< 0)
                    label_46dac1:
                        result = 0x80004005
                        var_38 = fconvert.d(fconvert.t(arg1[0x15]))
                        double var_30_3 = fconvert.d(fconvert.t(arg1[0x14]))
                        top_1 = 0
                    else
                        int32_t eax_10
                        int32_t ecx_24
                        eax_10, ecx_24 =
                            sub_46cffa(*(esi_1[2] + ((esi_1[3] + ebx_2) << 2)), &var_28)
                        
                        if (eax_10 s< 0)
                            goto label_46dac1
                        
                        void* esi_5 = *esi_1 & 0xfff00000
                        double var_10
                        
                        if (esi_5 u> 0x20400000)
                            if (esi_5 == 0x20500000)
                                sub_46cf57(arg1, edi_1, &var_38, &var_18, &var_28, (*edi_1).b)
                            labelid_40:
                                result = 0
                            else
                                if (esi_5 == 0x20600000)
                                    long double x87_r7_97 = fconvert.t(var_10)
                                    long double x87_r6_20 = fconvert.t(var_18)
                                    x87_r6_20 - x87_r7_97
                                    eax.w = (x87_r6_20 < x87_r7_97 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r6_20, x87_r7_97) ? 1 : 0) << 0xa
                                        | (x87_r6_20 == x87_r7_97 ? 1 : 0) << 0xe
                                    bool p_18 = unimplemented  {test ah, 0x44}
                                    
                                    if (p_18)
                                    label_46d73f:
                                        x87_r7_65 = fconvert.t(-3.1415927410125732)
                                    label_46d745:
                                        var_38 = fconvert.d(x87_r7_65)
                                        top_2 = 0xffff
                                        goto label_46db1d
                                    
                                    int16_t var_6c_12 = ecx_24.w
                                    
                                    if (sub_75ed12((fconvert.d(fconvert.t(var_18))).w) == 0)
                                        goto label_46d73f
                                    
                                    long double x87_r7_99 = fconvert.t(var_20)
                                    long double x87_r6_21 = fconvert.t(var_28)
                                    x87_r6_21 - x87_r7_99
                                    eax.w = (x87_r6_21 < x87_r7_99 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r6_21, x87_r7_99) ? 1 : 0) << 0xa
                                        | (x87_r6_21 == x87_r7_99 ? 1 : 0) << 0xe
                                    bool p_19 = unimplemented  {test ah, 0x44}
                                    
                                    if (p_19)
                                        goto label_46d73f
                                    
                                    int32_t var_68_13 = ecx_24
                                    int16_t var_6c_13 = ecx_24.w
                                    
                                    if (sub_75ed12((fconvert.d(fconvert.t(var_28))).w) == 0)
                                        goto label_46d73f
                                    
                                    x87_r7_58 = fconvert.t(var_18)
                                    x87_r6_17 = fconvert.t(var_28)
                                label_46d477:
                                    x87_r7_24 = __fpatan(x87_r6_17, x87_r7_58)
                                    goto label_46db03
                                
                                if (esi_5 == 0x20700000 || esi_5 == 0x20800000)
                                    long double x87_r7_94 = fconvert.t(var_18)
                                    long double temp22_1 = fconvert.t(var_28)
                                    x87_r7_94 - temp22_1
                                    eax.w = (x87_r7_94 < temp22_1 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r7_94, temp22_1) ? 1 : 0) << 0xa
                                        | (x87_r7_94 == temp22_1 ? 1 : 0) << 0xe
                                    bool p_17 = unimplemented  {test ah, 0x5}
                                    
                                    if (not(p_17))
                                        goto label_46d658
                                    
                                    goto label_46d6d1
                                
                            label_46db20:
                                result = 0
                        else if (esi_5 == 0x20400000)
                            var_38 = fconvert.d(fconvert.t(var_28) + fconvert.t(var_18))
                            top_2 = 0xffff
                        label_46db1d:
                            double var_30_5 =
                                fconvert.d(unimplemented  {fstp qword [ebp-0x2c], st0})
                            unimplemented  {fstp qword [ebp-0x2c], st0}
                            top_1 = top_2 + 1
                        label_46db20_1:
                            result = 0
                        else
                            if (esi_5 == 0x20000000)
                                long double x87_r7_87 = fconvert.t(var_18)
                                long double temp16_1 = fconvert.t(var_28)
                                x87_r7_87 - temp16_1
                                eax.w = (x87_r7_87 < temp16_1 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r7_87, temp16_1) ? 1 : 0) << 0xa
                                    | (x87_r7_87 == temp16_1 ? 1 : 0) << 0xe
                                bool p_15 = unimplemented  {test ah, 0x5}
                                long double x87_r7_88
                                
                                if (p_15)
                                    x87_r7_88 = fconvert.t(var_28)
                                else
                                    x87_r7_88 = fconvert.t(var_18)
                                
                                var_38 = fconvert.d(x87_r7_88)
                                long double x87_r7_89 = fconvert.t(var_10)
                                long double temp28_1 = fconvert.t(var_20)
                                x87_r7_89 - temp28_1
                                eax.w = (x87_r7_89 < temp28_1 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r7_89, temp28_1) ? 1 : 0) << 0xa
                                    | (x87_r7_89 == temp28_1 ? 1 : 0) << 0xe
                                bool p_16 = unimplemented  {test ah, 0x5}
                                
                                if (p_16)
                                    goto label_46d950
                                
                            label_46d6e8:
                                top_2 = 0xffff
                                goto label_46db1d
                            
                            if (esi_5 == 0x20100000)
                                long double x87_r7_85 = fconvert.t(var_18)
                                long double temp23_1 = fconvert.t(var_28)
                                x87_r7_85 - temp23_1
                                eax.w = (x87_r7_85 < temp23_1 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r7_85, temp23_1) ? 1 : 0) << 0xa
                                    | (x87_r7_85 == temp23_1 ? 1 : 0) << 0xe
                                long double x87_r7_86
                                
                                if ((eax:1.b & 0x41) != 0)
                                label_46d6d1:
                                    x87_r7_86 = fconvert.t(var_28)
                                else
                                label_46d658:
                                    x87_r7_86 = fconvert.t(var_18)
                                
                                var_38 = fconvert.d(x87_r7_86)
                                long double x87_r7_95 = fconvert.t(var_10)
                                long double temp33_1 = fconvert.t(var_20)
                                x87_r7_95 - temp33_1
                                eax.w = (x87_r7_95 < temp33_1 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r7_95, temp33_1) ? 1 : 0) << 0xa
                                    | (x87_r7_95 == temp33_1 ? 1 : 0) << 0xe
                                
                                if ((eax:1.b & 0x41) != 0)
                                    goto label_46d950
                                
                                goto label_46d6e8
                            
                            if (esi_5 == 0x20200000)
                                long double x87_r7_83 = fconvert.t(var_18)
                                long double temp29_1 = fconvert.t(var_20)
                                x87_r7_83 - temp29_1
                                eax.w = (x87_r7_83 < temp29_1 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r7_83, temp29_1) ? 1 : 0) << 0xa
                                    | (x87_r7_83 == temp29_1 ? 1 : 0) << 0xe
                                bool p_13 = unimplemented  {test ah, 0x5}
                                
                                if (p_13)
                                    goto label_46d440
                                
                                long double x87_r7_84 = fconvert.t(var_10)
                                long double temp34_1 = fconvert.t(var_28)
                                x87_r7_84 - temp34_1
                                eax.w = (x87_r7_84 < temp34_1 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r7_84, temp34_1) ? 1 : 0) << 0xa
                                    | (x87_r7_84 == temp34_1 ? 1 : 0) << 0xe
                                bool p_14 = unimplemented  {test ah, 0x5}
                                
                                if (not(p_14))
                                    goto label_46d61f
                                
                                x87_r7_82 = float.t(0)
                                goto label_46db18
                            
                            if (esi_5 == 0x20300000)
                                long double x87_r7_80 = fconvert.t(var_10)
                                long double temp35_1 = fconvert.t(var_28)
                                x87_r7_80 - temp35_1
                                eax.w = (x87_r7_80 < temp35_1 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r7_80, temp35_1) ? 1 : 0) << 0xa
                                    | (x87_r7_80 == temp35_1 ? 1 : 0) << 0xe
                                
                                if ((eax:1.b & 1) != 0)
                                    goto label_46d440
                                
                                long double x87_r7_81 = fconvert.t(var_18)
                                long double temp38_1 = fconvert.t(var_20)
                                x87_r7_81 - temp38_1
                                eax.w = (x87_r7_81 < temp38_1 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r7_81, temp38_1) ? 1 : 0) << 0xa
                                    | (x87_r7_81 == temp38_1 ? 1 : 0) << 0xe
                                
                                if ((eax:1.b & 1) == 0)
                                    goto label_46d61f
                                
                                x87_r7_82 = float.t(0)
                                goto label_46db18
                            
                        label_46db20_2:
                            result = 0
        unimplemented  {fld st0, qword [ebp-0x34]}
        int32_t ecx_48 = *edi_1
        long double temp1_1 = fconvert.t(0.0)
        unimplemented  {fcomp st0, qword [0xb0d6b8]} f- temp1_1
        bool c0_45 = unimplemented  {fcomp st0, qword [0xb0d6b8]} f< temp1_1
        bool c2_47 = is_unordered.t(unimplemented  {fcomp st0, qword [0xb0d6b8]}, temp1_1)
        bool c3_45 = unimplemented  {fcomp st0, qword [0xb0d6b8]} f== temp1_1
        unimplemented  {fcomp st0, qword [0xb0d6b8]}
        eax.w = (c0_45 ? 1 : 0) << 8 | (c2_47 ? 1 : 0) << 0xa | (c3_45 ? 1 : 0) << 0xe
            | (top_1 & 7) << 0xb
        
        if ((ecx_48.b & 4) != 0)
            if ((eax:1.b & 0x41) != 0)
                unimplemented  {fldz }
                var_38 = fconvert.d(unimplemented  {fstp qword [ebp-0x34], st0})
                unimplemented  {fstp qword [ebp-0x34], st0}
            
            unimplemented  {fld st0, qword [ebp-0x2c]}
            long double temp2_1 = fconvert.t(0.0)
            unimplemented  {fcomp st0, qword [0xb0d6b8]} f- temp2_1
            bool c0_46 = unimplemented  {fcomp st0, qword [0xb0d6b8]} f< temp2_1
            bool c2_48 = is_unordered.t(unimplemented  {fcomp st0, qword [0xb0d6b8]}, temp2_1)
            bool c3_46 = unimplemented  {fcomp st0, qword [0xb0d6b8]} f== temp2_1
            unimplemented  {fcomp st0, qword [0xb0d6b8]}
            eax.w = (c0_46 ? 1 : 0) << 8 | (c2_48 ? 1 : 0) << 0xa | (c3_46 ? 1 : 0) << 0xe
                | (top_1 & 7) << 0xb
            
            if ((eax:1.b & 0x41) != 0)
                unimplemented  {fldz }
                double var_30_6 = fconvert.d(unimplemented  {fstp qword [ebp-0x2c], st0})
                unimplemented  {fstp qword [ebp-0x2c], st0}
        else if ((eax:1.b & 1) == 0)
            *edi_1 = ecx_48 | 4
        
        int32_t ecx_50 = *edi_1
        int16_t top_12
        
        if ((ecx_50.b & 8) == 0)
            unimplemented  {fld st0, qword [ebp-0x2c]}
            long double temp3_1 = fconvert.t(0.0)
            unimplemented  {fcomp st0, qword [0xb0d6b8]} f- temp3_1
            bool c0_49 = unimplemented  {fcomp st0, qword [0xb0d6b8]} f< temp3_1
            bool c2_51 = is_unordered.t(unimplemented  {fcomp st0, qword [0xb0d6b8]}, temp3_1)
            bool c3_49 = unimplemented  {fcomp st0, qword [0xb0d6b8]} f== temp3_1
            unimplemented  {fcomp st0, qword [0xb0d6b8]}
            top_12 = top_1
            eax.w = (c0_49 ? 1 : 0) << 8 | (c2_51 ? 1 : 0) << 0xa | (c3_49 ? 1 : 0) << 0xe
                | (top_12 & 7) << 0xb
            bool p_32 = unimplemented  {test ah, 0x41}
            
            if (not(p_32))
                *edi_1 = ecx_50 | 8
        else
            unimplemented  {fld st0, qword [ebp-0x34]}
            long double temp4_1 = fconvert.t(0.0)
            unimplemented  {fcomp st0, qword [0xb0d6b8]} f- temp4_1
            bool c0_47 = unimplemented  {fcomp st0, qword [0xb0d6b8]} f< temp4_1
            bool c2_49 = is_unordered.t(unimplemented  {fcomp st0, qword [0xb0d6b8]}, temp4_1)
            bool c3_47 = unimplemented  {fcomp st0, qword [0xb0d6b8]} f== temp4_1
            unimplemented  {fcomp st0, qword [0xb0d6b8]}
            eax.w = (c0_47 ? 1 : 0) << 8 | (c2_49 ? 1 : 0) << 0xa | (c3_47 ? 1 : 0) << 0xe
                | (top_1 & 7) << 0xb
            bool p_30 = unimplemented  {test ah, 0x5}
            
            if (p_30)
                unimplemented  {fldz }
                var_38 = fconvert.d(unimplemented  {fstp qword [ebp-0x34], st0})
                unimplemented  {fstp qword [ebp-0x34], st0}
            
            unimplemented  {fld st0, qword [ebp-0x2c]}
            long double temp6_1 = fconvert.t(0.0)
            unimplemented  {fcomp st0, qword [0xb0d6b8]} f- temp6_1
            bool c0_48 = unimplemented  {fcomp st0, qword [0xb0d6b8]} f< temp6_1
            bool c2_50 = is_unordered.t(unimplemented  {fcomp st0, qword [0xb0d6b8]}, temp6_1)
            bool c3_48 = unimplemented  {fcomp st0, qword [0xb0d6b8]} f== temp6_1
            unimplemented  {fcomp st0, qword [0xb0d6b8]}
            top_12 = top_1
            eax.w = (c0_48 ? 1 : 0) << 8 | (c2_50 ? 1 : 0) << 0xa | (c3_48 ? 1 : 0) << 0xe
                | (top_12 & 7) << 0xb
            bool p_31 = unimplemented  {test ah, 0x5}
            
            if (p_31)
                unimplemented  {fldz }
                double var_30_7 = fconvert.d(unimplemented  {fstp qword [ebp-0x2c], st0})
                unimplemented  {fstp qword [ebp-0x2c], st0}
        
        unimplemented  {fld st0, qword [ebp-0x34]}
        int32_t __saved_ebx_2 = *edi_1
        long double temp5_1 = fconvert.t(-1.0)
        unimplemented  {fcomp st0, qword [0xb0da18]} f- temp5_1
        bool c0_50 = unimplemented  {fcomp st0, qword [0xb0da18]} f< temp5_1
        bool c2_52 = is_unordered.t(unimplemented  {fcomp st0, qword [0xb0da18]}, temp5_1)
        bool c3_50 = unimplemented  {fcomp st0, qword [0xb0da18]} f== temp5_1
        unimplemented  {fcomp st0, qword [0xb0da18]}
        int16_t top_16 = top_12
        eax.w = (c0_50 ? 1 : 0) << 8 | (c2_52 ? 1 : 0) << 0xa | (c3_50 ? 1 : 0) << 0xe
            | (top_16 & 7) << 0xb
        
        if ((__saved_ebx_2.b & 0x10) != 0)
            if ((eax:1.b & 0x41) != 0)
                unimplemented  {fld st0, qword [0xb0da18]}
                var_38 = fconvert.d(unimplemented  {fstp qword [ebp-0x34], st0})
                unimplemented  {fstp qword [ebp-0x34], st0}
            
            unimplemented  {fld st0, qword [ebp-0x2c]}
            long double temp9_1 = fconvert.t(-1.0)
            unimplemented  {fcomp st0, qword [0xb0da18]} f- temp9_1
            bool c0_51 = unimplemented  {fcomp st0, qword [0xb0da18]} f< temp9_1
            bool c2_53 = is_unordered.t(unimplemented  {fcomp st0, qword [0xb0da18]}, temp9_1)
            bool c3_51 = unimplemented  {fcomp st0, qword [0xb0da18]} f== temp9_1
            unimplemented  {fcomp st0, qword [0xb0da18]}
            eax.w = (c0_51 ? 1 : 0) << 8 | (c2_53 ? 1 : 0) << 0xa | (c3_51 ? 1 : 0) << 0xe
                | (top_16 & 7) << 0xb
            
            if ((eax:1.b & 0x41) != 0)
                unimplemented  {fld st0, qword [0xb0da18]}
                double var_30_8 = fconvert.d(unimplemented  {fstp qword [ebp-0x2c], st0})
                unimplemented  {fstp qword [ebp-0x2c], st0}
            
            unimplemented  {fld st0, qword [ebp-0x34]}
            long double temp11_1 = fconvert.t(1.0)
            unimplemented  {fcomp st0, qword [0xb0d850]} f- temp11_1
            bool c0_52 = unimplemented  {fcomp st0, qword [0xb0d850]} f< temp11_1
            bool c2_54 = is_unordered.t(unimplemented  {fcomp st0, qword [0xb0d850]}, temp11_1)
            bool c3_52 = unimplemented  {fcomp st0, qword [0xb0d850]} f== temp11_1
            unimplemented  {fcomp st0, qword [0xb0d850]}
            eax.w = (c0_52 ? 1 : 0) << 8 | (c2_54 ? 1 : 0) << 0xa | (c3_52 ? 1 : 0) << 0xe
                | (top_16 & 7) << 0xb
            bool p_33 = unimplemented  {test ah, 0x5}
            
            if (p_33)
                unimplemented  {fld1 }
                var_38 = fconvert.d(unimplemented  {fstp qword [ebp-0x34], st0})
                unimplemented  {fstp qword [ebp-0x34], st0}
            
            unimplemented  {fld st0, qword [ebp-0x2c]}
            long double temp13_1 = fconvert.t(1.0)
            unimplemented  {fcomp st0, qword [0xb0d850]} f- temp13_1
            bool c0_53 = unimplemented  {fcomp st0, qword [0xb0d850]} f< temp13_1
            bool c2_55 = is_unordered.t(unimplemented  {fcomp st0, qword [0xb0d850]}, temp13_1)
            bool c3_53 = unimplemented  {fcomp st0, qword [0xb0d850]} f== temp13_1
            unimplemented  {fcomp st0, qword [0xb0d850]}
            top_16 = top_16
            eax.w = (c0_53 ? 1 : 0) << 8 | (c2_55 ? 1 : 0) << 0xa | (c3_53 ? 1 : 0) << 0xe
                | (top_16 & 7) << 0xb
            bool p_34 = unimplemented  {test ah, 0x5}
            
            if (p_34)
                unimplemented  {fld1 }
                double var_30_9 = fconvert.d(unimplemented  {fstp qword [ebp-0x2c], st0})
                unimplemented  {fstp qword [ebp-0x2c], st0}
        else if ((eax:1.b & 1) == 0)
            unimplemented  {fld st0, qword [ebp-0x2c]}
            long double temp8_1 = fconvert.t(1.0)
            unimplemented  {fcomp st0, qword [0xb0d850]} f- temp8_1
            bool c0_54 = unimplemented  {fcomp st0, qword [0xb0d850]} f< temp8_1
            bool c2_56 = is_unordered.t(unimplemented  {fcomp st0, qword [0xb0d850]}, temp8_1)
            bool c3_54 = unimplemented  {fcomp st0, qword [0xb0d850]} f== temp8_1
            unimplemented  {fcomp st0, qword [0xb0d850]}
            eax.w = (c0_54 ? 1 : 0) << 8 | (c2_56 ? 1 : 0) << 0xa | (c3_54 ? 1 : 0) << 0xe
                | (top_16 & 7) << 0xb
            bool p_35 = unimplemented  {test ah, 0x41}
            
            if (not(p_35))
                __saved_ebx_2 |= 0x10
                *edi_1 = __saved_ebx_2
        
        unimplemented  {fld st0, qword [ebp-0x2c]}
        unimplemented  {fld st0, qword [ebp-0x34]}
        unimplemented  {fucompp } f- unimplemented  {fucompp }
        bool c0_55 = unimplemented  {fucompp } f< unimplemented  {fucompp }
        bool c2_57 = is_unordered.t(unimplemented  {fucompp }, unimplemented  {fucompp })
        bool c3_55 = unimplemented  {fucompp } f== unimplemented  {fucompp }
        unimplemented  {fucompp }
        unimplemented  {fucompp }
        eax.w = (c0_55 ? 1 : 0) << 8 | (c2_57 ? 1 : 0) << 0xa | (c3_55 ? 1 : 0) << 0xe
            | (top_16 & 7) << 0xb
        bool p_36 = unimplemented  {test ah, 0x44}
        
        if (not(p_36))
            unimplemented  {fld st0, qword [ebp-0x34]}
            int32_t __saved_ebx_1 = __saved_ebx_2
            int16_t var_68_27 = __saved_ebx_2.w
            var_68_27 = (fconvert.d(unimplemented  {fstp qword [esp], st0})).w
            unimplemented  {fstp qword [esp], st0}
            
            if (sub_75ed12(var_68_27) != 0)
                *edi_1 |= 0x80
                unimplemented  {fld st0, qword [ebp-0x34]}
                unimplemented  {fld st0, qword [0xb0d6b8]}
                unimplemented  {fucompp } f- unimplemented  {fucompp }
                bool c0_56 = unimplemented  {fucompp } f< unimplemented  {fucompp }
                bool c2_58 = is_unordered.t(unimplemented  {fucompp }, unimplemented  {fucompp })
                bool c3_56 = unimplemented  {fucompp } f== unimplemented  {fucompp }
                unimplemented  {fucompp }
                unimplemented  {fucompp }
                int32_t eax_28
                eax_28.w = (c0_56 ? 1 : 0) << 8 | (c2_58 ? 1 : 0) << 0xa | (c3_56 ? 1 : 0) << 0xe
                    | (top_16 & 7) << 0xb
                bool p_37 = unimplemented  {test ah, 0x44}
                bool p_38
                
                if (p_37)
                    unimplemented  {fld st0, qword [ebp-0x34]}
                    unimplemented  {fld st0, qword [0xb0d850]}
                    unimplemented  {fucompp } f- unimplemented  {fucompp }
                    bool c0_57 = unimplemented  {fucompp } f< unimplemented  {fucompp }
                    bool c2_59 =
                        is_unordered.t(unimplemented  {fucompp }, unimplemented  {fucompp })
                    bool c3_57 = unimplemented  {fucompp } f== unimplemented  {fucompp }
                    unimplemented  {fucompp }
                    unimplemented  {fucompp }
                    eax_28.w = (c0_57 ? 1 : 0) << 8 | (c2_59 ? 1 : 0) << 0xa
                        | (c3_57 ? 1 : 0) << 0xe | (top_16 & 7) << 0xb
                    p_38 = unimplemented  {test ah, 0x44}
                
                if (not(p_37) || not(p_38))
                    *edi_1 |= 1
                
                unimplemented  {fld st0, qword [ebp-0x34]}
                arg2 = __ftol(x87control, st0)
                unimplemented  {fild st0, dword [ebp+0x8]}
                unimplemented  {fsubr st0, qword [ebp-0x34]}
                unimplemented  {fabs }
                long double temp24_1 = fconvert.t(9.9999999999999995e-07)
                unimplemented  {fcomp st0, qword [0xab6da8]} f- temp24_1
                bool c0_58 = unimplemented  {fcomp st0, qword [0xab6da8]} f< temp24_1
                bool c2_60 = is_unordered.t(unimplemented  {fcomp st0, qword [0xab6da8]}, temp24_1)
                bool c3_58 = unimplemented  {fcomp st0, qword [0xab6da8]} f== temp24_1
                unimplemented  {fcomp st0, qword [0xab6da8]}
                int32_t eax_29
                eax_29.w = (c0_58 ? 1 : 0) << 8 | (c2_60 ? 1 : 0) << 0xa | (c3_58 ? 1 : 0) << 0xe
                    | (top_16 & 7) << 0xb
                bool p_39 = unimplemented  {test ah, 0x5}
                
                if (not(p_39))
                    *edi_1 |= 2
        
        unimplemented  {fld st0, qword [ebp-0x34]}
        *(edi_1 + 0x20) = fconvert.d(unimplemented  {fstp qword [edi+0x20], st0})
        unimplemented  {fstp qword [edi+0x20], st0}
        unimplemented  {fld st0, qword [ebp-0x2c]}
        *(edi_1 + 1) |= 1
        *(edi_1 + 0x28) = fconvert.d(unimplemented  {fstp qword [edi+0x28], st0})
        unimplemented  {fstp qword [edi+0x28], st0}
        
        if (arg3 != 0)
            unimplemented  {fld st0, qword [ebp-0x34]}
            *arg3 = fconvert.d(unimplemented  {fstp qword [eax], st0})
            unimplemented  {fstp qword [eax], st0}
            unimplemented  {fld st0, qword [ebp-0x2c]}
            arg3[1] = fconvert.d(unimplemented  {fstp qword [eax+0x8], st0})
            unimplemented  {fstp qword [eax+0x8], st0}
        
        return result
    
    if (arg3 != 0)
        *arg3 = fconvert.d(fconvert.t(*(edi_1 + 0x20)))
        arg3[1] = fconvert.d(fconvert.t(*(edi_1 + 0x20)))
else if (arg3 != 0)
    *arg3 = fconvert.d(fconvert.t(*(edi_1 + 0x20)))
    arg3[1] = fconvert.d(fconvert.t(*(edi_1 + 0x28)))

return 0
