// 函数: sub_4d086f
// 地址: 0x4d086f
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax_1 = *arg4
int32_t edi
int32_t var_848 = edi
void* edi_1 = arg1
void* var_28 = edi_1
int32_t var_c = eax_1

if (eax_1 u< arg8)
    int32_t esi_1 = 0
    
    while (true)
        int32_t* ebx_1 = *(*(edi_1 + 0x18) + (eax_1 << 2))
        int32_t eax_2 = *ebx_1
        int32_t ecx_2 = eax_2 & 0xfff00000
        int32_t i_2 = eax_2 & 0xfffff
        int32_t var_850_8
        char const* const var_84c_19
        
        if (ebx_1[3] == 0)
            var_84c_19 = "internal error: instruction missing outputs"
            var_850_8 = 0x12df
        else
            void* edx_2 = *(*(edi_1 + 0x14) + (*ebx_1[4] << 2))
            
            if (*(edx_2 + 0x14) != arg2)
                if (ecx_2 != 0x20700000)
                    *arg4 = var_c
                    break
                
                if (arg10 != 0)
                    goto label_4d0ba6
                
                int32_t* eax_54 = ebx_1[2]
                int32_t ecx_39 = *(edi_1 + 0x14)
                void* edx_9 = *(ecx_39 + (*eax_54 << 2))
                int32_t ecx_41 = *(edx_9 + 0x14)
                
                if (ecx_41 != *(*(ecx_39 + (eax_54[i_2] << 2)) + 0x14))
                    var_84c_19 = "internal error: if block with non matching predicates found"
                    var_850_8 = 0x12e0
                else if (arg5 == 0 || arg6 == 0 || arg7 == 0)
                    var_84c_19 = "internal error: unexpected endif found"
                    var_850_8 = 0x12e1
                else
                    if (ecx_41 != arg2)
                        *arg4 = var_c
                        break
                    
                    if (arg9 == 0)
                        goto label_4d0ba6
                    
                    int32_t var_20_3 = 1
                    int32_t i_3 = 0
                    
                    if (*(edx_9 + 0x18) != arg3)
                        i_3 = i_2
                    
                    if (i_2 u> 0)
                        int32_t* var_10_3 = ebx_1[4]
                        void* var_8_3 = &eax_54[i_3]
                        int32_t i_1 = i_2
                        int32_t i
                        
                        do
                            int32_t eax_57 = *(edi_1 + 0x14)
                            void* ecx_46 = *(eax_57 + (*var_10_3 << 2))
                            void* eax_58 = *(eax_57 + (*var_8_3 << 2))
                            
                            if (*(ecx_46 + 0xc) != *(eax_58 + 0xc)
                                    || *(ecx_46 + 0x10) != *(eax_58 + 0x10)
                                    || *(ecx_46 + 8) != *(eax_58 + 8)
                                    || *(ecx_46 + 4) != *(eax_58 + 4)
                                    || *(ecx_46 + 0x3c) != *(eax_58 + 0x3c))
                                var_20_3 = 0
                            
                            var_10_3 = &var_10_3[1]
                            var_8_3 += 4
                            i = i_1
                            i_1 -= 1
                        while (i != 1)
                    
                    if (*arg7 + i_2 u< 0x80)
                        if (var_20_3 == 0)
                            void* eax_65 = sub_49ec23(0x74)
                            int32_t* var_8_4
                            
                            if (eax_65 == 0)
                                var_8_4 = nullptr
                            else
                                var_8_4 = sub_49e789(eax_65)
                            
                            if (var_8_4 == 0)
                                return 0x8007000e
                            
                            int32_t eax_70 =
                                sub_49ec6e(var_8_4, (i_2 & 0xfffff) | 0x10000000, i_2, i_2, 0)
                            
                            if (eax_70 s< 0)
                            label_4d10b4:
                                sub_46cb59(var_8_4, 1)
                                return eax_70
                            
                            eax_70 = sub_49e7bf(var_8_4, ebx_1)
                            
                            if (eax_70 s< 0)
                                goto label_4d10b4
                            
                            eax_70 = sub_49f431(edi_1, var_8_4)
                            
                            if (eax_70 s< 0)
                                goto label_4d10b4
                            
                            int32_t esi_3 = ebx_1[2]
                            int32_t i_4
                            int32_t ecx_63
                            int32_t esi_4
                            int32_t edi_12
                            
                            if (*(edx_9 + 0x18) != arg3)
                                int32_t ecx_61 = i_2 << 2
                                edi_12, esi_4 =
                                    __builtin_memcpy(var_8_4[2], esi_3 + ecx_61, ecx_61 u>> 2 << 2)
                                ecx_63 = ecx_61
                                i_4 = i_2
                            else
                                i_4 = i_2
                                int32_t ecx_58 = i_4 << 2
                                edi_12, esi_4 =
                                    __builtin_memcpy(var_8_4[2], esi_3, ecx_58 u>> 2 << 2)
                                ecx_63 = ecx_58
                            
                            int32_t var_10_4 = 0
                            int32_t ecx_65 = __builtin_memcpy(edi_12, esi_4, ecx_63 & 3)
                            
                            if (i_4 u> 0)
                                int32_t var_18_5 = i_4 << 2
                                
                                while (true)
                                    int32_t var_84c_16 = ecx_65
                                    int32_t var_850_7 = ecx_65
                                    var_850_7.q = fconvert.d(float.t(0))
                                    *(arg5 + ((*arg7 + var_10_4) << 2)) =
                                        sub_49f544(var_28, *(var_28 + 0x88), 0, 0, var_850_7)
                                    int32_t ecx_68 = *(arg5 + ((*arg7 + var_10_4) << 2))
                                    
                                    if (ecx_68 == 0xffffffff)
                                        break
                                    
                                    int32_t eax_79 = *(var_28 + 0x14)
                                    int32_t* ecx_69 = *(eax_79 + (ecx_68 << 2))
                                    int32_t esi_7 = var_10_4 << 2
                                    int32_t* edx_33 = *(eax_79 + (*(esi_7 + ebx_1[4]) << 2))
                                    int32_t* ecx_71
                                    
                                    if (sub_49f070(ecx_69, edx_33) s< 0)
                                        ecx_71 = var_8_4
                                    else
                                        ecx_71 = var_8_4
                                        
                                        if (sub_49f12c(ecx_69, edx_33) s>= 0)
                                            *(esi_7 + ecx_71[4]) =
                                                *(arg5 + ((*arg7 + var_10_4) << 2))
                                            *(arg6 + ((*arg7 + var_10_4) << 2)) =
                                                *(esi_7 + ebx_1[4])
                                            int32_t* eax_87 = ebx_1[2]
                                            ecx_65 = eax_87[var_10_4]
                                            
                                            if (*(*(*(var_28 + 0x14) + (ecx_65 << 2)) + 0x18)
                                                    != arg3)
                                                ecx_65 = var_8_4[2]
                                                *(esi_7 + ecx_65) = *(eax_87 + var_18_5)
                                            else
                                                *(esi_7 + var_8_4[2]) = ecx_65
                                            
                                            var_10_4 += 1
                                            var_18_5 += 4
                                            
                                            if (var_10_4 u>= i_2)
                                                goto label_4d1033
                                            
                                            continue
                                    
                                    sub_46cb59(ecx_71, 1)
                                    return 0x8007000e
                                
                                sub_46cb59(var_8_4, 1)
                                return 0x8007000e
                        else if (i_2 u> 0)
                            int32_t var_24_1 = i_3 << 2
                            
                            do
                                int32_t ecx_49 = *(var_24_1 + ebx_1[2])
                                var_24_1 += 4
                                *(arg5 + ((*arg7 + esi_1) << 2)) = ecx_49
                                int32_t ecx_51 = *(ebx_1[4] + (esi_1 << 2))
                                int32_t edx_26 = *arg7 + esi_1
                                esi_1 += 1
                                *(arg6 + (edx_26 << 2)) = ecx_51
                            while (esi_1 u< i_2)
                        
                    label_4d1033:
                        *arg7 += i_2
                        var_c += 1
                        edi_1 = var_28
                        esi_1 = 0
                        goto label_4d103d
                    
                    var_84c_19 = "Conditional block too complex"
                    var_850_8 = 0x1194
            else if (arg10 == 0 || ecx_2 == 0x11200000)
                int32_t var_8_1 = arg9
                
                if (arg9 != 0 && *(edx_2 + 0x18) != arg3)
                    var_8_1 = 0
                
                void var_43c
                int32_t var_23c[0x80]
                int32_t var_1c
                int32_t eax_10
                int32_t ebx_2
                
                if (sub_4d031b(ecx_2) == 0)
                    if (sub_4d0351(ecx_2) != 0)
                        int32_t var_3c = var_c + 1
                        var_1c = 0
                        
                        if (var_8_1 != 0)
                            eax_10 = sub_49f69d(edi_1, ebx_1)
                            
                            if (eax_10 s< 0)
                                return eax_10
                            
                            *(edx_2 + 4) = *(edi_1 + 0x74)
                        
                        eax_10 = sub_4d086f(*ebx_1[4], 1, &var_3c, &var_43c, &var_23c, &var_1c, 
                            arg8, var_8_1, 0, 0, 0)
                        
                        if (eax_10 s< 0)
                            return eax_10
                        
                        var_c = var_3c
                        goto label_4d103d
                    
                    if (ecx_2 != 0x11100000 && ecx_2 != 0x74100000)
                        if (ecx_2 == 0x11200000)
                            if (var_8_1 == 0 || arg10 == 0)
                                goto label_4d0ba6
                            
                            int32_t ecx_27 = 0
                            
                            if (i_2 u> 0)
                                do
                                    void* eax_35 =
                                        *(*(edi_1 + 0x14) + (*(ebx_1[4] + (ecx_27 << 2)) << 2))
                                    *(eax_35 + 0x34) = arg12
                                    ecx_27 += 1
                                    *(eax_35 + 0x30) = arg11
                                while (ecx_27 u< i_2)
                        else if (arg9 == 0 || *(edx_2 + 0x18) != arg3)
                            goto label_4d0ba6
                        
                        eax_10 = sub_49f69d(edi_1, ebx_1)
                        
                        if (eax_10 s< 0)
                            return eax_10
                        
                        goto label_4d0ba6
                    
                    int32_t var_2c = var_c + 1
                    var_1c = 0
                    eax_10 = sub_4d086f(*ebx_1[4], 1, &var_2c, &var_43c, &var_23c, &var_1c, arg8, 
                        var_8_1, 1, arg2, arg3)
                    
                    if (eax_10 s< 0)
                        return eax_10
                    
                    if (var_8_1 != 0)
                        if (ecx_2 != 0x11100000)
                            eax_10 = sub_49f69d(edi_1, ebx_1)
                            
                            if (eax_10 s< 0)
                                return eax_10
                        else
                            int32_t eax_41 = i_2 & 0xfffff
                            *ebx_1 = eax_41 | 0x74200000
                            eax_10 = sub_49f69d(edi_1, ebx_1)
                            
                            if (eax_10 s< 0)
                                return eax_10
                            
                            *ebx_1 = eax_41 | 0x11100000
                        
                        *(edx_2 + 4) = *(edi_1 + 0x74)
                    
                    var_2c = var_c + 1
                    int32_t ecx_33
                    eax_10, ecx_33 = sub_4d086f(*ebx_1[4], 1, &var_2c, &var_43c, &var_23c, &var_1c, 
                        arg8, var_8_1, 0, 0, 0)
                    
                    if (eax_10 s< 0)
                        return eax_10
                    
                    if (var_8_1 != 0)
                        int32_t var_84c_11 = ecx_33
                        int32_t var_850_5 = ecx_33
                        var_850_5.q = fconvert.d(float.t(0))
                        int32_t eax_48 = sub_49f544(edi_1, *(edi_1 + 0xa8), 0, 0, var_850_5)
                        
                        if (eax_48 == 0xffffffff)
                            return 0x8007000e
                        
                        void* eax_49 = sub_49ec23(0x74)
                        int32_t* var_10_2
                        
                        if (eax_49 == 0)
                            var_10_2 = nullptr
                        else
                            var_10_2 = sub_49e789(eax_49)
                        
                        if (var_10_2 == 0)
                            return 0x8007000e
                        
                        int32_t var_858_7
                        
                        var_858_7 = ecx_2 != 0x11100000 ? 0x74a00001 : 0x74b00001
                        
                        int32_t eax_51 = sub_49ec6e(var_10_2, var_858_7, 0, 1, 0)
                        
                        if (eax_51 s< 0)
                            sub_46cb59(var_10_2, 1)
                            return eax_51
                        
                        ebx_2 = sub_49e7bf(var_10_2, ebx_1)
                        
                        if (ebx_2 s< 0)
                            sub_46cb59(var_10_2, 1)
                            return ebx_2
                        
                        *var_10_2[4] = eax_48
                        eax_10 = sub_49f431(edi_1, var_10_2)
                        
                        if (eax_10 s< 0)
                            return eax_10
                    
                    var_c = var_2c
                    goto label_4d103d
                
                if (i_2 != 1)
                    var_84c_19 = "internal error: IF with size greater then 1 found"
                    var_850_8 = 0x12e0
                else
                    if (var_8_1 != 0)
                        int32_t* eax_9 = sub_4d0387(edi_1, ebx_1, 1)
                        
                        if (eax_9 == 0)
                            return 0x8007000e
                        
                        eax_10 = sub_49f431(edi_1, eax_9)
                        
                        if (eax_10 s< 0)
                            return eax_10
                    
                    int32_t var_30 = var_c + 1
                    int32_t var_38 = 0
                    var_1c = 0
                    eax_10 = sub_4d086f(*ebx_1[4], 1, &var_30, &var_43c, &var_23c, &var_1c, arg8, 
                        var_8_1, 0, 0, 0)
                    
                    if (eax_10 s< 0)
                        return eax_10
                    
                    if (var_8_1 != 0)
                        int32_t* eax_14 = sub_4d0387(edi_1, ebx_1, 0)
                        
                        if (eax_14 == 0)
                            return 0x8007000e
                        
                        eax_10 = sub_49f431(edi_1, eax_14)
                        
                        if (eax_10 s< 0)
                            return eax_10
                    
                    var_30 = var_c + 1
                    void var_83c
                    int32_t var_63c[0x80]
                    eax_10 = sub_4d086f(*ebx_1[4], 0, &var_30, &var_83c, &var_63c, &var_38, arg8, 
                        var_8_1, 0, 0, 0)
                    
                    if (eax_10 s< 0)
                        return eax_10
                    
                    if (var_8_1 == 0)
                        goto label_4d0ad5
                    
                    int32_t ecx_9 = var_38
                    int32_t var_18_2 = 1
                    
                    if (var_1c == ecx_9)
                        int32_t eax_17 = 0
                        
                        if (ecx_9 u> 0)
                            do
                                if (var_63c[eax_17] != var_23c[eax_17])
                                    var_18_2 = 0
                                
                                eax_17 += 1
                            while (eax_17 u< var_38)
                    
                    if (var_1c == ecx_9 && (ecx_9 u<= 0 || var_18_2 != 0))
                        void* eax_18 = sub_49ec23(0x74)
                        int32_t* edi_2
                        
                        if (eax_18 == 0)
                            edi_2 = nullptr
                        else
                            edi_2 = sub_49e789(eax_18)
                        
                        int32_t* var_18_3 = edi_2
                        
                        if (edi_2 == 0)
                            return 0x8007000e
                        
                        int32_t eax_20 = var_38
                        int32_t eax_23 = sub_49ec6e(edi_2, (eax_20 & 0xfffff) | 0x73400000, 
                            eax_20 * 2, eax_20, 0)
                        
                        if (eax_23 s< 0)
                            sub_46cb59(edi_2, 1)
                            return eax_23
                        
                        ebx_2 = sub_49e7bf(edi_2, ebx_1)
                        
                        if (ebx_2 s< 0)
                            sub_46cb59(edi_2, 1)
                            return ebx_2
                        
                        __builtin_memcpy(edi_2[4], &var_63c, var_1c << 2)
                        __builtin_memcpy(edi_2[2], &var_43c, var_1c << 2)
                        int32_t ecx_18 = var_1c << 2
                        int32_t esi_2
                        int32_t edi_7
                        edi_7, esi_2 =
                            __builtin_memcpy(edi_2[2] + ecx_18, &var_83c, ecx_18 u>> 2 << 2)
                        __builtin_memcpy(edi_7, esi_2, ecx_18 & 3)
                        eax_10 = sub_49f431(var_28, edi_2)
                        
                        if (eax_10 s< 0)
                            return eax_10
                        
                        edi_1 = var_28
                        esi_1 = 0
                    label_4d0ad5:
                        *(edx_2 + 4) = *(edi_1 + 0x74)
                        var_c = var_30
                        goto label_4d103d
                    
                    var_84c_19 = "internal error: endif mismatch"
                    var_850_8 = 0x12e1
            else
            label_4d0ba6:
                var_c += 1
            label_4d103d:
                eax_1 = var_c
                
                if (eax_1 u>= arg8)
                    break
                
                continue
        
        sub_4a4100(edi_1, ebx_1[0xf], var_850_8, var_84c_19)
        return 0x80004005

return 0
