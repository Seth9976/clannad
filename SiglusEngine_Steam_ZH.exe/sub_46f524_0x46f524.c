// 函数: sub_46f524
// 地址: 0x46f524
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* ecx = arg7
int32_t eax = 1
int32_t var_1c = 0
int32_t* var_c = 1

if (ecx u> 1)
    do
        if (arg4[eax] != *arg4)
            var_c = nullptr
            break
        
        eax += 1
    while (eax u< ecx)

int16_t eax_2 = (*(arg1[2] + 0x6c)).w
int32_t result

if ((eax_2:1.b & 2) != 0)
    if (arg5 == 0)
        goto label_46f599
    
    int32_t result_1 =
        sub_46ea58(arg1, arg3, (ecx & 0xfffff) | 0x10800000, arg5, arg4, nullptr, 0x10, arg2.b)
    result = result_1
    
    if (result_1 s>= 0)
        ecx = arg7
    label_46f599:
        
        if (arg6 == 0)
            result = 0
        else
            int32_t result_2 = sub_46ea58(arg1, arg3, (ecx & 0xfffff) | 0x10900000, arg6, arg4, 
                nullptr, 0x10, arg2.b)
            result = result_2
            
            if (result_2 s>= 0)
                result = 0
else
    void* var_18
    int32_t* var_14
    int32_t var_10
    
    if ((eax_2:1.b & 1) == 0 || var_c == 0)
        int32_t edi_20 = neg.d(arg5)
        void* edi_22 = sbb.d(edi_20, edi_20, arg5 != 0) & ecx
        int32_t eax_12 = neg.d(arg6)
        void* eax_14 = sbb.d(eax_12, eax_12, arg6 != 0) & ecx
        void* ecx_22 = arg1[2]
        void* var_130_6 = ecx_22
        void* var_134_10 = ecx_22
        var_134_10.q = fconvert.d(fconvert.t(0.15915493866300567))
        int32_t var_140_7 = *(ecx_22 + 0x78)
        var_c = eax_14 + edi_22
        int32_t eax_16 = sub_49f544(ecx_22, var_140_7, 0, 0, var_134_10)
        void* ecx_23 = arg1[2]
        void* var_130_7 = ecx_23
        void* var_134_11 = ecx_23
        var_134_11.q = fconvert.d(fconvert.t(0.25))
        int32_t var_140_8 = *(ecx_23 + 0x78)
        var_10 = eax_16
        int32_t eax_17 = sub_49f544(ecx_23, var_140_8, 0, 0, var_134_11)
        void* ecx_24 = arg1[2]
        void* var_130_8 = ecx_24
        void* var_134_12 = ecx_24
        var_134_12.q = fconvert.d(fconvert.t(0.5))
        int32_t eax_18 = sub_49f544(ecx_24, *(ecx_24 + 0x78), 0, 0, var_134_12)
        void* ecx_25 = arg1[2]
        void* var_130_9 = ecx_25
        void* var_134_13 = ecx_25
        var_134_13.q = fconvert.d(fconvert.t(6.2831854820251465))
        int32_t eax_19 = sub_49f544(ecx_25, *(ecx_25 + 0x78), 0, 0, var_134_13)
        void* ecx_26 = arg1[2]
        void* var_130_10 = ecx_26
        void* var_134_14 = ecx_26
        var_134_14.q = fconvert.d(fconvert.t(-3.1415927410125732))
        int32_t eax_20 = sub_49f544(ecx_26, *(ecx_26 + 0x78), 0, 0, var_134_14)
        void* ecx_27 = arg1[2]
        void* var_130_11 = ecx_27
        void* var_134_15 = ecx_27
        var_134_15.q = fconvert.d(fconvert.t(-2.5239851768993087e-07))
        int32_t eax_21 = sub_49f544(ecx_27, *(ecx_27 + 0x78), 0, 0, var_134_15)
        void* ecx_28 = arg1[2]
        void* var_130_12 = ecx_28
        void* var_134_16 = ecx_28
        var_134_16.q = fconvert.d(fconvert.t(2.4760899999999999e-05))
        int32_t eax_22 = sub_49f544(ecx_28, *(ecx_28 + 0x78), 0, 0, var_134_16)
        void* ecx_29 = arg1[2]
        void* var_130_13 = ecx_29
        void* var_134_17 = ecx_29
        var_134_17.q = fconvert.d(fconvert.t(-0.0013888397))
        int32_t eax_23 = sub_49f544(ecx_29, *(ecx_29 + 0x78), 0, 0, var_134_17)
        void* ecx_30 = arg1[2]
        void* var_130_14 = ecx_30
        void* var_134_18 = ecx_30
        var_134_18.q = fconvert.d(fconvert.t(0.041666641800000001))
        int32_t eax_24 = sub_49f544(ecx_30, *(ecx_30 + 0x78), 0, 0, var_134_18)
        void* ecx_31 = arg1[2]
        void* var_130_15 = ecx_31
        void* var_134_19 = ecx_31
        var_134_19.q = fconvert.d(fconvert.t(-0.49999999630000003))
        int32_t eax_25 = sub_49f544(ecx_31, *(ecx_31 + 0x78), 0, 0, var_134_19)
        int32_t eax_28 = sub_745f3f(var_c * 0x6c)
        var_1c = eax_28
        
        if (eax_28 != 0)
            int32_t i = 0
            int32_t edx_3 = var_c << 2
            int32_t* var_9c
            
            do
                (&var_9c)[i] = eax_28
                i += 1
                eax_28 += edx_3
            while (i u< 0x1b)
            
            for (int32_t i_1 = 0; i_1 u< 0xf; i_1 += 1)
                sub_46cc96((&var_9c)[i_1], var_c)
                result = 0
            
            arg7 = nullptr
            int32_t* var_60
            int32_t* var_5c
            int32_t* var_58
            int32_t* var_54
            int32_t* var_50
            int32_t* var_4c
            int32_t* var_48
            int32_t* var_44
            int32_t* var_40
            int32_t* var_3c
            int32_t* var_38
            int32_t* var_34
            
            if (var_c u> 0)
                int32_t* eax_29 = var_60
                void* var_8_1 = arg4 - (edi_22 << 2)
                var_18 = arg6 - arg4
                var_14 = arg5 - eax_29
                void* edx_8 = var_5c - eax_29
                void* edx_10 = var_58 - eax_29
                void* edx_12 = var_54 - eax_29
                void* edx_14 = var_50 - eax_29
                void* edx_16 = var_4c - eax_29
                void* edx_18 = var_48 - eax_29
                void* edx_20 = var_44 - eax_29
                void* edx_22 = var_40 - eax_29
                void* edx_24 = var_3c - eax_29
                void* edx_26 = var_38 - eax_29
                arg4 -= eax_29
                void* edx_30 = var_34 - eax_29
                
                do
                    int32_t ecx_42
                    
                    if (arg7 u>= edi_22)
                        ecx_42 = *(var_18 + var_8_1)
                    else
                        ecx_42 = *(var_14 + eax_29)
                    
                    *eax_29 = ecx_42
                    *(edx_8 + eax_29) = var_10
                    int32_t ecx_45 = eax_17
                    
                    if (arg7 u>= edi_22)
                        ecx_45 = eax_18
                    
                    *(edx_10 + eax_29) = ecx_45
                    *(edx_12 + eax_29) = eax_19
                    *(edx_14 + eax_29) = eax_20
                    *(edx_16 + eax_29) = eax_21
                    *(edx_18 + eax_29) = eax_22
                    *(edx_20 + eax_29) = eax_23
                    *(edx_22 + eax_29) = eax_24
                    *(edx_24 + eax_29) = eax_25
                    *(edx_26 + eax_29) = arg1[8]
                    int32_t ecx_55
                    
                    if (arg7 u>= edi_22)
                        ecx_55 = *var_8_1
                    else
                        ecx_55 = *(arg4 + eax_29)
                    
                    arg7 += 1
                    var_8_1 += 4
                    *(edx_30 + eax_29) = ecx_55
                    eax_29 = &eax_29[1]
                while (arg7 u< var_c)
            
            int32_t* eax_31 = var_c & 0xfffff
            int32_t* var_138_9 = var_34
            int32_t* var_13c_9 = var_9c
            arg4:2.w = eax_31:2.w | 0x2050
            var_c = eax_31
            int32_t result_10 =
                sub_46ea58(arg1, arg3, arg4, var_13c_9, var_138_9, var_5c, 0, arg2.b)
            result = result_10
            
            if (result_10 s>= 0)
                void* eax_33 = var_c | 0x20400000
                int32_t* var_98
                int32_t result_11 = sub_46ea58(arg1, arg3, eax_33, var_98, var_9c, var_58, 0)
                result = result_11
                
                if (result_11 s>= 0)
                    int32_t* var_94
                    int32_t result_12 =
                        sub_46ea58(arg1, arg3, var_c | 0x10400000, var_94, var_98, nullptr, 0x14)
                    result = result_12
                    
                    if (result_12 s>= 0)
                        int32_t* var_90
                        int32_t result_13 = sub_46ea58(arg1, arg3, arg4, var_90, var_94, var_54, 4)
                        result = result_13
                        
                        if (result_13 s>= 0)
                            int32_t* var_8c
                            int32_t result_14 =
                                sub_46ea58(arg1, arg3, eax_33, var_8c, var_90, var_50, 0)
                            result = result_14
                            
                            if (result_14 s>= 0)
                                int32_t* var_88
                                int32_t result_15 =
                                    sub_46ea58(arg1, arg3, arg4, var_88, var_8c, var_8c, 4)
                                result = result_15
                                
                                if (result_15 s>= 0)
                                    int32_t* var_84
                                    int32_t result_16 =
                                        sub_46ea58(arg1, arg3, arg4, var_84, var_88, var_4c, 0)
                                    result = result_16
                                    
                                    if (result_16 s>= 0)
                                        int32_t* var_80
                                        int32_t result_17 = sub_46ea58(arg1, arg3, eax_33, var_80, 
                                            var_84, var_48, 0)
                                        result = result_17
                                        
                                        if (result_17 s>= 0)
                                            int32_t* var_7c
                                            int32_t result_18 = sub_46ea58(arg1, arg3, arg4, 
                                                var_7c, var_88, var_80, 0)
                                            result = result_18
                                            
                                            if (result_18 s>= 0)
                                                int32_t* var_78
                                                int32_t result_19 = sub_46ea58(arg1, arg3, eax_33, 
                                                    var_78, var_7c, var_44, 0)
                                                result = result_19
                                                
                                                if (result_19 s>= 0)
                                                    int32_t* var_74
                                                    int32_t result_20 = sub_46ea58(arg1, arg3, 
                                                        arg4, var_74, var_88, var_78, 0)
                                                    result = result_20
                                                    
                                                    if (result_20 s>= 0)
                                                        int32_t* var_70
                                                        int32_t result_21 = sub_46ea58(arg1, arg3, 
                                                            eax_33, var_70, var_74, var_40, 0)
                                                        result = result_21
                                                        
                                                        if (result_21 s>= 0)
                                                            int32_t* var_6c
                                                            int32_t result_22 = sub_46ea58(arg1, 
                                                                arg3, arg4, var_6c, var_88, var_70, 0)
                                                            result = result_22
                                                            
                                                            if (result_22 s>= 0)
                                                                int32_t* var_68
                                                                int32_t result_23 = sub_46ea58(arg1, 
                                                                    arg3, eax_33, var_68, var_6c, var_3c, 0)
                                                                result = result_23
                                                                
                                                                if (result_23 s>= 0)
                                                                    int32_t* var_64
                                                                    int32_t result_24 = sub_46ea58(arg1, 
                                                                        arg3, arg4, var_64, var_88, var_68, 0)
                                                                    result = result_24
                                                                    
                                                                    if (result_24 s>= 0)
                                                                        int32_t result_25 = sub_46ea58(arg1, 
                                                                            arg3, eax_33, var_60, var_64, var_38, 
                                                                            0x10)
                                                                        result = result_25
                                                                        
                                                                        if (result_25 s>= 0)
                                                                            int32_t eax_37 = edi_22 << 2
                                                                            int32_t esi_2
                                                                            int32_t edi_24
                                                                            edi_24, esi_2 = __builtin_memcpy(arg5, 
                                                                                var_60, eax_37 u>> 2 << 2)
                                                                            __builtin_memcpy(edi_24, esi_2, 
                                                                                eax_37 & 3)
                                                                            __builtin_memcpy(arg6, &var_60[edi_22], 
                                                                                eax_14 << 2)
                                                                            result = 0
        else
            result = 0x8007000e
    else
        void* ecx_7 = arg1[2]
        void* var_130_1 = ecx_7
        void* var_134_1 = ecx_7
        var_134_1.q = fconvert.d(fconvert.t(0.15915493866300567))
        int32_t* eax_3 = sub_49f544(ecx_7, *(ecx_7 + 0x78), 0, 0, var_134_1)
        void* ecx_8 = arg1[2]
        void* var_130_2 = ecx_8
        void* var_134_2 = ecx_8
        var_134_2.q = fconvert.d(fconvert.t(0.5))
        var_c = eax_3
        int32_t eax_4 = sub_49f544(ecx_8, *(ecx_8 + 0x78), 0, 0, var_134_2)
        void* ecx_9 = arg1[2]
        void* var_130_3 = ecx_9
        void* var_134_3 = ecx_9
        var_134_3.q = fconvert.d(fconvert.t(6.2831854820251465))
        var_10 = eax_4
        void* eax_5 = sub_49f544(ecx_9, *(ecx_9 + 0x78), 0, 0, var_134_3)
        void* ecx_10 = arg1[2]
        void* var_130_4 = ecx_10
        void* var_134_4 = ecx_10
        var_134_4.q = fconvert.d(fconvert.t(-3.1415927410125732))
        var_18 = eax_5
        var_14 = sub_49f544(ecx_10, *(ecx_10 + 0x78), 0, 0, var_134_4)
        double var_110
        int32_t result_3 = sub_46cffa(arg1, *arg4, &var_110)
        result = result_3
        
        if (result_3 s>= 0)
            long double x87_r7_5 = fconvert.t(var_110)
            long double temp3_1 = fconvert.t(-3.1415927410125732)
            x87_r7_5 - temp3_1
            result_3.w = (x87_r7_5 < temp3_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_5, temp3_1) ? 1 : 0) << 0xa
                | (x87_r7_5 == temp3_1 ? 1 : 0) << 0xe
            bool p_1 = unimplemented  {test ah, 0x5}
            
            if (p_1)
                double var_108
                long double x87_r7_6 = fconvert.t(var_108)
                long double temp4_1 = fconvert.t(3.1415927410125732)
                x87_r7_6 - temp4_1
                result_3.w = (x87_r7_6 < temp4_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_6, temp4_1) ? 1 : 0) << 0xa
                    | (x87_r7_6 == temp4_1 ? 1 : 0) << 0xe
            
            int32_t var_20
            
            if (not(p_1) || (result_3:1.b & 0x41) == 0)
                int32_t var_30 = 0xffffffff
                void var_2c
                void* edi_2 = &var_2c
                *edi_2 = 0xffffffff
                void* edi_3 = edi_2 + 4
                *edi_3 = 0xffffffff
                void* edi_4 = edi_3 + 4
                *edi_4 = 0xffffffff
                *(edi_4 + 4) = 0xffffffff
                int32_t result_4 =
                    sub_46ea58(arg1, arg3, 0x20500001, &var_30, arg4, &var_c, 0, arg2.b)
                result = result_4
                
                if (result_4 s>= 0)
                    int32_t result_5 =
                        sub_46ea58(arg1, arg3, 0x20400001, &var_2c, &var_30, &var_10, 0)
                    result = result_5
                    
                    if (result_5 s>= 0)
                        void var_28
                        int32_t result_6 =
                            sub_46ea58(arg1, arg3, 0x10400001, &var_28, &var_2c, nullptr, 0x14)
                        result = result_6
                        
                        if (result_6 s>= 0)
                            void var_24
                            int32_t result_7 =
                                sub_46ea58(arg1, arg3, 0x20500001, &var_24, &var_28, &var_18, 4)
                            result = result_7
                            
                            if (result_7 s>= 0)
                                int32_t result_8 =
                                    sub_46ea58(arg1, arg3, 0x20400001, &var_20, &var_24, &var_14, 0)
                                result = result_8
                                
                                if (result_8 s>= 0)
                                    goto label_46f76c
            else
                var_20 = *arg4
            label_46f76c:
                int32_t var_100 = 0xffffffff
                int32_t var_fc
                void* edi_7 = &var_fc
                *edi_7 = 0xffffffff
                void* edi_8 = edi_7 + 4
                *edi_8 = 0xffffffff
                *(edi_8 + 4) = 0xffffffff
                int32_t eax_8 = var_20
                int32_t var_120 = eax_8
                void var_11c
                void* edi_11 = &var_11c
                *edi_11 = eax_8
                void* edi_12 = edi_11 + 4
                *edi_12 = eax_8
                *(edi_12 + 4) = eax_8
                int32_t result_9 =
                    sub_46ea58(arg1, arg3, 0x50300004, &var_100, &var_120, nullptr, 0x10, arg2.b)
                result = result_9
                
                if (result_9 s>= 0)
                    int32_t ecx_19
                    int32_t edi_16
                    
                    if (arg6 != 0 && arg7 u> 0)
                        edi_16, ecx_19 = __memfill_u32(arg6, var_100, arg7)
                    int32_t ecx_21
                    int32_t edi_18
                    
                    if (arg5 != 0 && arg7 u> 0)
                        edi_18, ecx_21 = __memfill_u32(arg5, var_fc, arg7)
                    result = 0

j__free(var_1c)
return result
