// 函数: sub_4cd403
// 地址: 0x4cd403
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_44 = 0xffffffff
int32_t var_40 = 0xffffffff
int32_t var_3c = 0xffffffff
int32_t var_54 = 0xffffffff
int32_t var_50 = 0xffffffff
int32_t var_4c = 0xffffffff
int32_t eax_1 = **(arg1 + 0x100)
int32_t edi
int32_t var_224 = edi
int32_t* edi_1 = nullptr
int32_t ebx_1 = eax_1 & 0xfffff
int32_t var_48 = 0
int32_t var_58 = 0

if ((eax_1 & 0xfff00000) != 0x20900000)
    return 1

void* eax_4 = sub_49ec23(0x74)

if (eax_4 != 0)
    edi_1 = sub_49e789(eax_4)

int32_t* var_30_1 = edi_1

if (edi_1 != 0)
    int32_t eax_6 = sub_49eecd(edi_1, *(arg1 + 0x100))
    int32_t var_c_1 = eax_6
    
    if (eax_6 s< 0)
    label_4cdb2f:
        sub_46cb59(edi_1, 1)
        return var_c_1
    
    int32_t var_24_1 = 0
    edi_1[3] = 1
    edi_1[1] = 2
    *edi_1 = 0x20900001
    
    if (ebx_1 u<= 0)
    label_4cdc0f:
        sub_46cb59(var_30_1, 1)
        return var_c_1
    
    int32_t var_2c_1 = ebx_1 << 2
    void* var_14
    int32_t* var_8
    int32_t* edx_9
    
    while (true)
        int32_t eax_10 = var_24_1 << 2
        *var_30_1[4] = *(eax_10 + *(*(arg1 + 0x100) + 0x10))
        *var_30_1[2] = *(eax_10 + *(*(arg1 + 0x100) + 8))
        *(var_30_1[2] + 4) = *(var_2c_1 + *(*(arg1 + 0x100) + 8))
        int32_t var_178
        __builtin_memset(&var_178, 0xffffffff, 0xa0)
        var_8 = nullptr
        int32_t var_18_1 = 0
        int32_t var_28_1 = 0
        int32_t var_10_1 = 0
        void* var_98
        int32_t eax_15 =
            sub_4c73cc(arg1, var_30_1, 0xacc498, &var_98, &var_8, &var_178, &var_48, 1, 1)
        var_c_1 = eax_15
        
        if (eax_15 != 0)
            var_8 = nullptr
            int32_t eax_16 =
                sub_4c73cc(arg1, var_30_1, 0xacc5f8, &var_98, &var_8, &var_178, &var_48, 1, 1)
            var_c_1 = eax_16
            
            if (eax_16 != 0)
                var_8 = nullptr
                int32_t eax_17 =
                    sub_4c73cc(arg1, var_30_1, 0xacc798, &var_98, &var_8, &var_178, &var_48, 1, 1)
                var_c_1 = eax_17
                
                if (eax_17 != 0)
                    var_8 = nullptr
                    int32_t eax_18 = sub_4c73cc(arg1, var_30_1, 0xacc938, &var_98, &var_8, 
                        &var_178, &var_48, 1, 1)
                    var_c_1 = eax_18
                    
                    if (eax_18 == 0)
                        var_10_1 = 1
                else
                    var_28_1 = 1
            else
                var_18_1 = 1
        
        int32_t var_168
        int32_t var_158
        
        if (var_168 == var_158 && var_c_1 == 0)
            int32_t eax_20 = *(arg1 + 0x14)
            int32_t ecx_16 = *(*(eax_20 + (**(var_98 + 0x10) << 2)) + 0x14)
            
            if (ecx_16 != 0xffffffff)
                int32_t edx_4 = *(arg1 + 0x18)
                int32_t* ecx_19 = *(edx_4 + (*(*(eax_20 + (ecx_16 << 2)) + 0x48) << 2))
                var_8 = nullptr
                
                if (*ecx_19 == 0x11100001)
                    int32_t edi_2 = *ecx_19[4]
                    void* ecx_21 = *(eax_20 + (edi_2 << 2))
                    int32_t ebx_3 = *(ecx_21 + 0x54)
                    int32_t ecx_22 = *(ecx_21 + 0x58)
                    
                    if (ebx_3 u<= ecx_22)
                        int32_t* edx_5 = edx_4 + (ebx_3 << 2)
                        int32_t* var_34_1 = edx_5
                        
                        do
                            int32_t* edx_6 = *edx_5
                            
                            if (*(*(eax_20 + (*edx_6[4] << 2)) + 0x14) == edi_2
                                    && *edx_6 == 0x74700001)
                                if (var_8 != 0)
                                    sub_4a4100(arg1, nullptr, 0x12e3, 
                                        "internal error: multiple breaks found")
                                    return 0x80004005
                                
                                var_8 = edx_6
                            
                            ebx_3 += 1
                            edx_5 = &var_34_1[1]
                            var_34_1 = edx_5
                        while (ebx_3 u<= ecx_22)
                        
                        int32_t* edi_3 = var_8
                        
                        if (edi_3 != 0)
                            var_14 = nullptr
                            int32_t* var_240_1
                            void* var_23c_5
                            int32_t* var_238_5
                            int32_t* var_234_5
                            int32_t* var_230_5
                            int32_t var_218
                            void var_d8
                            
                            if (var_10_1 != 0)
                                var_230_5 = &var_48
                                var_234_5 = &var_218
                                var_238_5 = &var_14
                                var_23c_5 = &var_d8
                                var_240_1 = &data_acca58
                            else if (var_28_1 != 0)
                                var_230_5 = &var_48
                                var_234_5 = &var_218
                                var_238_5 = &var_14
                                var_23c_5 = &var_d8
                                var_240_1 = &data_acc898
                            else if (var_18_1 == 0)
                                var_230_5 = &var_58
                                var_234_5 = &var_218
                                var_238_5 = &var_14
                                var_23c_5 = &var_d8
                                var_240_1 = &data_acc578
                            else
                                var_230_5 = &var_48
                                var_234_5 = &var_218
                                var_238_5 = &var_14
                                var_23c_5 = &var_d8
                                var_240_1 = &data_acc6f8
                            var_c_1 = sub_4c73cc(arg1, var_30_1, var_240_1, var_23c_5, var_238_5, 
                                var_234_5, var_230_5, 1, 1)
                            int32_t eax_22 = var_178
                            int32_t var_208
                            
                            if (var_218 == eax_22)
                                eax_22 = var_208
                            
                            if (eax_22 != 0xffffffff)
                                int32_t* ebx_4 = edi_3[2]
                                
                                if (*ebx_4 == eax_22)
                                    int32_t ecx_29 = *(*(*(arg1 + 0x14) + (*edi_3[4] << 2)) + 0x14)
                                    
                                    if (ecx_29 != 0xffffffff)
                                        int32_t eax_25 = *(arg1 + 0x14)
                                        edx_9 = *(*(arg1 + 0x18)
                                            + (*(*(eax_25 + (ecx_29 << 2)) + 0x48) << 2))
                                        void* eax_26 = *(eax_25 + (*edx_9[2] << 2))
                                        
                                        if (*edx_9 == 0x11100001 && (
                                                *(*(*(arg1 + 0x10) + (*(eax_26 + 4) << 2)) + 5) & 1) != 0)
                                            long double x87_r7_1 = float.t(*(arg1 + 0x68))
                                            
                                            if (*(arg1 + 0x68) s< 0)
                                                x87_r7_1 = x87_r7_1 + fconvert.t(4.2949673e+09f)
                                            
                                            long double x87_r6_1 = fconvert.t(*(eax_26 + 0x20))
                                            x87_r6_1 - x87_r7_1
                                            eax_26.w = (x87_r6_1 < x87_r7_1 ? 1 : 0) << 8
                                                | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0)
                                                << 0xa | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe
                                            bool p_1 = unimplemented  {test ah, 0x44}
                                            
                                            if (not(p_1))
                                                int32_t eax_27 = *(arg1 + 0x14)
                                                char* ebx_5 = *(eax_27 + (ebx_4[1] << 2))
                                                var_14 = *(eax_27 + (var_178 << 2))
                                                void* ecx_40 = *(eax_27 + (var_168 << 2))
                                                int32_t eax_28 = *(ecx_40 + 0x48)
                                                char* var_1c_2 = ebx_5
                                                int32_t var_10_2 = var_168
                                                
                                                if (eax_28 != 0xffffffff)
                                                label_4cd7f8:
                                                    
                                                    if (*(ecx_40 + 8) == 0xffffffff)
                                                        int32_t* eax_29 =
                                                            *(*(arg1 + 0x18) + (eax_28 << 2))
                                                        
                                                        if ((*eax_29 & 0xfff00000) == 0x10000000)
                                                            int32_t var_20_1 = 0
                                                            int32_t temp0_1 = *eax_29 & 0xfffff
                                                            
                                                            if (temp0_1 u> 0)
                                                                int32_t* edi_10 = eax_29[4]
                                                                
                                                                while (true)
                                                                    if (*edi_10 == var_10_2)
                                                                        int32_t ecx_42 =
                                                                            *(eax_29[2] + (var_20_1 << 2))
                                                                        var_10_2 = ecx_42
                                                                        ecx_40 =
                                                                            *(*(arg1 + 0x14) + (ecx_42 << 2))
                                                                        eax_28 = *(ecx_40 + 0x48)
                                                                        
                                                                        if (eax_28 == 0xffffffff)
                                                                            goto label_4cd860
                                                                        
                                                                        ebx_5 = var_1c_2
                                                                        goto label_4cd7f8
                                                                    
                                                                    var_20_1 += 1
                                                                    
                                                                    if (var_20_1 u>= temp0_1)
                                                                    label_4cd860:
                                                                        ebx_5 = var_1c_2
                                                                        break
                                                                    
                                                                    edi_10 = &edi_10[1]
                                                
                                                int32_t edi_13 = *(arg1 + 0x10)
                                                
                                                if ((*(*(edi_13 + (*(var_14 + 4) << 2)) + 5) & 1)
                                                        != 0 && (*(*(edi_13 + (*(ecx_40 + 4) << 2)) + 5)
                                                        & 1) != 0)
                                                    long double x87_r7_2 = fconvert.t(1.0)
                                                    long double x87_r6_2 =
                                                        fconvert.t(*(var_14 + 0x20))
                                                    x87_r6_2 - x87_r7_2
                                                    void* eax_37
                                                    eax_37.w = (x87_r6_2 < x87_r7_2 ? 1 : 0) << 8
                                                        | (is_unordered.t(x87_r6_2, x87_r7_2) ? 1
                                                        : 0) << 0xa
                                                        | (x87_r6_2 == x87_r7_2 ? 1 : 0) << 0xe
                                                    bool p_2 = unimplemented  {test ah, 0x44}
                                                    
                                                    if (not(p_2))
                                                        long double x87_r7_3 = fconvert.t(0.0)
                                                        long double x87_r6_3 =
                                                            fconvert.t(*(ecx_40 + 0x20))
                                                        x87_r6_3 - x87_r7_3
                                                        eax_37.w =
                                                            (x87_r6_3 < x87_r7_3 ? 1 : 0) << 8 | (
                                                            is_unordered.t(x87_r6_3, x87_r7_3) ? 1
                                                            : 0) << 0xa
                                                            | (x87_r6_3 == x87_r7_3 ? 1 : 0) << 0xe
                                                        bool p_3 = unimplemented  {test ah, 0x44}
                                                        
                                                        if (not(p_3) && (
                                                                *(*(edi_13 + (*(ebx_5 + 4) << 2)) + 5)
                                                                & 2) != 0 && (*ebx_5 & 2) != 0
                                                                && *(ebx_5 + 0x10) == 0
                                                                && *(ebx_5 + 8) == 0xffffffff)
                                                            break
        
        var_24_1 += 1
        var_2c_1 += 4
        
        if (var_24_1 u>= ebx_1)
            goto label_4cdc0f
    
    int32_t* eax_41 = var_8
    int32_t var_18_4 = 0xffffffff
    *edx_9[2] = *(eax_41[2] + 4)
    *eax_41 = 0
    void* ecx_46 = *(*(arg1 + 0x14) + (*edx_9[4] << 2))
    int32_t eax_44 = *(ecx_46 + 0x54)
    bool cond:13_1 = eax_44 u> *(ecx_46 + 0x58)
    var_14 = ecx_46
    int32_t var_1c_3 = eax_44
    
    if (cond:13_1)
    label_4cdb7e:
        void* eax_77 = var_14
        int32_t i = *(eax_77 + 0x54)
        int32_t i_3 = i
        
        if (i u<= *(eax_77 + 0x58))
            do
                int32_t* eax_79 = *(*(arg1 + 0x18) + (i << 2))
                int32_t ecx_78 = *eax_79
                
                if ((ecx_78 & 0xfff00000) == 0x20800000)
                    if (*(*(*(arg1 + 0x14) + (*eax_79[2] << 2)) + 0x14) == *var_8[4])
                        int32_t ecx_79 = ecx_78 & 0xfffff
                        *eax_79 = (ecx_79 & 0xfffff) | 0x10000000
                        eax_79[3] = ecx_79
                        eax_79[1] = ecx_79
                    
                    i = i_3
                
                i += 1
                i_3 = i
            while (i u<= *(var_14 + 0x58))
        
        int32_t i_1 = 0
        
        if (*(arg1 + 8) u> 0)
            do
                void* eax_82 = *(*(arg1 + 0x14) + (i_1 << 2))
                
                if (*(eax_82 + 0x14) == *var_8[4])
                    *(eax_82 + 0x14) = *edx_9[4]
                
                i_1 += 1
            while (i_1 u< *(arg1 + 8))
        
        goto label_4cdc0f
    
    while (true)
        void* ebx_7 = *(*(arg1 + 0x18) + (eax_44 << 2))
        void* var_20_2 = ebx_7
        
        if (*(ebx_7 + 0xc) != 0
                && *(*(*(arg1 + 0x14) + (**(ebx_7 + 0x10) << 2)) + 0x14) == *var_8[4])
            int32_t i_2 = 0
            
            if (*(ebx_7 + 4) u> 0)
                do
                    int32_t ecx_51 = *(arg1 + 0x14)
                    void* edi_15 = *(ecx_51 + (*(*(ebx_7 + 8) + (i_2 << 2)) << 2))
                    int32_t edx_11 = *(edi_15 + 8)
                    int32_t var_10_3 = 0xffffffff
                    
                    if (edx_11 == 0xffffffff)
                    label_4cd9f5:
                        
                        if (var_10_3 == *var_8[2])
                            int32_t eax_58 = var_18_4
                            
                            if (eax_58 == 0xffffffff)
                                int32_t eax_59
                                int32_t ecx_58
                                eax_59, ecx_58 = sub_49f4eb(arg1, 0xacd098, 0x15, eax_58, 4)
                                int32_t var_228_2 = ecx_58
                                int32_t var_22c_2 = ecx_58
                                var_22c_2.q = fconvert.d(float.t(0))
                                eax_58 = sub_49f544(arg1, eax_59, 0, 0, var_22c_2)
                                var_18_4 = eax_58
                                *(edi_15 + 8) = eax_58
                            
                            *(edi_15 + 8) = eax_58
                            int32_t edi_16 = *(edi_15 + 0x38)
                            
                            if (edi_16 != 0xffffffff)
                                *(*(*(arg1 + 0x14) + (edi_16 << 2)) + 8) = eax_58
                    else
                        int32_t ecx_53 = *(*(ecx_51 + (edx_11 << 2)) + 0x48)
                        
                        if (ecx_53 != 0xffffffff)
                            int32_t* ecx_54 = *(*(arg1 + 0x18) + (ecx_53 << 2))
                            int32_t eax_52 = *ecx_54
                            
                            if ((eax_52 & 0xfff00000) != 0x10000000)
                                var_10_3 = edx_11
                            else
                                int32_t var_24_2 = 0
                                int32_t temp1_1 = eax_52 & 0xfffff
                                
                                if (temp1_1 u> 0)
                                    int32_t* ebx_10 = ecx_54[4]
                                    
                                    do
                                        if (*ebx_10 == edx_11)
                                            var_10_3 = *(ecx_54[2] + (var_24_2 << 2))
                                            break
                                        
                                        var_24_2 += 1
                                        ebx_10 = &ebx_10[1]
                                    while (var_24_2 u< temp1_1)
                            
                            ebx_7 = var_20_2
                            goto label_4cd9f5
                    
                    i_2 += 1
                while (i_2 u< *(ebx_7 + 4))
        
        var_1c_3 += 1
        
        if (var_1c_3 u> *(var_14 + 0x58))
            break
        
        eax_44 = var_1c_3
    
    if (var_18_4 == 0xffffffff)
        goto label_4cdb7e
    
    int32_t var_228_3 = var_1c_3
    int32_t var_22c_3 = var_1c_3
    var_22c_3.q = fconvert.d(float.t(0))
    int32_t eax_62
    int32_t ecx_64
    eax_62, ecx_64 = sub_49f544(arg1, 0, 0, 0, var_22c_3)
    int32_t var_228_4 = ecx_64
    int32_t var_22c_4 = ecx_64
    var_22c_4.q = fconvert.d(float.t(0))
    int32_t eax_63 = sub_49f544(arg1, 0, 0, 0, var_22c_4)
    
    if (eax_62 != 0xffffffff && eax_63 != 0xffffffff)
        int32_t ecx_66 = *(arg1 + 0x14)
        int32_t* edx_15 = *(ecx_66 + (*edx_9[2] << 2))
        int32_t* edi_18 = *(ecx_66 + (eax_62 << 2))
        int32_t* ebx_11 = *(ecx_66 + (eax_63 << 2))
        sub_49f070(edi_18, edx_15)
        sub_49f070(ebx_11, edx_15)
        edi_18[4] = 1
        ebx_11[4] = 2
        void* eax_64 = sub_49ec23(0x74)
        
        if (eax_64 == 0)
            edi_1 = nullptr
        else
            edi_1 = sub_49e789(eax_64)
        
        if (edi_1 != 0)
            int32_t eax_66 = sub_49ec6e(edi_1, 0x74100001, 3, 1, 0)
            
            if (eax_66 s< 0)
                sub_46cb59(edi_1, 1)
                return eax_66
            
            int32_t eax_67 = sub_49e7bf(edi_1, edx_9)
            var_c_1 = eax_67
            
            if (eax_67 s< 0)
                goto label_4cdb2f
            
            *edi_1[4] = *edx_9[4]
            *edi_1[2] = *edx_9[2]
            *(edi_1[2] + 4) = *edx_9[2]
            *(edi_1[2] + 8) = *edx_9[2]
            var_c_1 = sub_49eecd(edx_9, edi_1)
            sub_46cb59(edi_1, 1)
            
            if (var_c_1 s< 0)
                return var_c_1
            
            goto label_4cdb7e

return 0x8007000e
