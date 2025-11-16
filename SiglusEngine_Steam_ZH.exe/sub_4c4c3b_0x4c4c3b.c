// 函数: sub_4c4c3b
// 地址: 0x4c4c3b
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* ebx = arg1
int32_t* eax = *(ebx + 0x100)
int32_t i_6 = *eax & 0xfffff
void* var_24 = ebx

if (i_6 == 0)
    return 1

uint32_t temp0_1 = divu.dp.d(0:(eax[1]), i_6)
int32_t var_40_1 = 0
int32_t edi
int32_t var_70_1 = edi
int32_t result

if (temp0_1 u<= 0)
label_4c5013:
    result = 1
else
    int32_t var_34_1 = 0
    
    while (true)
        int32_t esi_1 = 0xffffffff
        int32_t var_54 = 0xffffffff
        void var_50
        void* edi_1 = &var_50
        *edi_1 = 0xffffffff
        void* edi_2 = edi_1 + 4
        *edi_2 = 0xffffffff
        int32_t var_8_1 = 0
        int32_t* var_20_1 = nullptr
        int32_t* var_1c_1 = nullptr
        int32_t* var_28_1 = nullptr
        int32_t* var_2c_1 = nullptr
        *(edi_2 + 4) = 0xffffffff
        int32_t var_10_1 = 0xffffffff
        int32_t var_c_1 = 0xffffffff
        int32_t var_64[0x3]
        
        if (i_6 u> 0)
            int32_t* var_30_1 = *(*(ebx + 0x100) + 8) + var_34_1
            int32_t i_3 = i_6
            int32_t i
            
            do
                int32_t ecx_1 = *var_30_1
                void* eax_9 = *(*(ebx + 0x14) + (ecx_1 << 2))
                int32_t edx_3 = *(eax_9 + 0x10)
                int32_t eax_19
                
                if (edx_3 == 0)
                    if (*(eax_9 + 0x48) != 0xffffffff && var_20_1 == 0)
                        eax_19 = *(eax_9 + 0x48)
                        var_20_1 = *(*(ebx + 0x18) + (eax_19 << 2))
                    label_4c4e0e:
                        (&var_54)[var_8_1] = eax_19
                        var_64[var_8_1] = ecx_1
                        var_8_1 += 1
                else if (edx_3 == 1)
                    if (*(eax_9 + 0x48) != 0xffffffff && var_1c_1 == 0)
                        eax_19 = *(eax_9 + 0x48)
                        var_1c_1 = *(*(ebx + 0x18) + (eax_19 << 2))
                        goto label_4c4e0e
                else if (edx_3 == 2)
                    if (esi_1 == 0xffffffff)
                        int32_t eax_15 = *(eax_9 + 0x48)
                        (&var_54)[var_8_1] = 0xffffffff
                        esi_1 = ecx_1
                        var_10_1 = esi_1
                        var_64[var_8_1] = ecx_1
                        
                        if (eax_15 != 0xffffffff)
                            int32_t* edi_6 = *(*(ebx + 0x18) + (eax_15 << 2))
                            int32_t eax_16 = *edi_6
                            var_28_1 = edi_6
                            
                            if ((eax_16 & 0xfff00000) != 0x10000000)
                                var_28_1 = nullptr
                            else
                                int32_t ecx_9 = 0
                                int32_t eax_17 = eax_16 & 0xfffff
                                
                                if (eax_17 u> 0)
                                    int32_t* edx_13 = edi_6[4]
                                    
                                    do
                                        if (*edx_13 == esi_1)
                                            esi_1 = *(edi_6[2] + (ecx_9 << 2))
                                            var_10_1 = esi_1
                                            break
                                        
                                        ecx_9 += 1
                                        edx_13 = &edx_13[1]
                                    while (ecx_9 u< eax_17)
                        
                        var_8_1 += 1
                else if (edx_3 == 3 && var_c_1 == 0xffffffff)
                    int32_t eax_10 = *(eax_9 + 0x48)
                    (&var_54)[var_8_1] = 0xffffffff
                    var_c_1 = ecx_1
                    var_64[var_8_1] = ecx_1
                    
                    if (eax_10 != 0xffffffff)
                        int32_t* edi_5 = *(*(ebx + 0x18) + (eax_10 << 2))
                        int32_t eax_11 = *edi_5
                        var_2c_1 = edi_5
                        
                        if ((eax_11 & 0xfff00000) != 0x10000000)
                            var_2c_1 = nullptr
                        else
                            int32_t ecx_5 = 0
                            int32_t eax_12 = eax_11 & 0xfffff
                            
                            if (eax_12 u> 0)
                                int32_t* edx_10 = edi_5[4]
                                
                                do
                                    if (*edx_10 == var_c_1)
                                        var_c_1 = *(edi_5[2] + (ecx_5 << 2))
                                        break
                                    
                                    ecx_5 += 1
                                    edx_10 = &edx_10[1]
                                while (ecx_5 u< eax_12)
                                
                                esi_1 = var_10_1
                    
                    var_8_1 += 1
                var_30_1 = &var_30_1[1]
                i = i_3
                i_3 -= 1
            while (i != 1)
        
        if (var_8_1 == i_6 && var_8_1 u> 1)
            int32_t ecx_10 = 0
            
            if (var_1c_1 != 0)
                if (*var_1c_1 != 0x20500001)
                    ecx_10 = 1
                else
                    if (esi_1 != 0xffffffff)
                        int32_t* eax_21 = var_1c_1[2]
                        
                        if (esi_1 != *eax_21 && esi_1 != eax_21[1])
                            ecx_10 = 1
                    
                    if (var_c_1 != 0xffffffff)
                        int32_t* eax_22 = var_1c_1[2]
                        
                        if (var_c_1 != *eax_22 && var_c_1 != eax_22[1])
                            ecx_10 = 1
                        
                        if (esi_1 != 0xffffffff)
                            int32_t* eax_23 = var_1c_1[2]
                            int32_t edx_21 = *eax_23
                            
                            if (var_c_1 == esi_1)
                                if (edx_21 != eax_23[1])
                                    ecx_10 = 1
                            else if (edx_21 == eax_23[1])
                                ecx_10 = 1
            
            int32_t edx_22 = 0
            
            if (var_20_1 == 0)
            label_4c4ed9:
                
                if (ecx_10 == 0)
                    int32_t var_3c_1 = 0
                    
                    if (var_8_1 u> 0)
                        int32_t i_8
                        
                        while (true)
                            int32_t eax_28 = (&var_54)[edx_22]
                            
                            if (eax_28 != 0xffffffff)
                                int32_t var_18_1 = 1
                                i_8 = i_6
                                
                                if (i_6 u> 0)
                                    int32_t* eax_32 = *(*(ebx + 0x100) + 8) + var_34_1
                                    int32_t i_4 = i_6
                                    int32_t i_1
                                    
                                    do
                                        void* ecx_13 = *(*(ebx + 0x14) + (*eax_32 << 2))
                                        
                                        if (*(ecx_13 + 0x50) u< *(ebx + 0xfc))
                                            var_18_1 = 0
                                        
                                        if (*(ecx_13 + 0x4c) u> eax_28)
                                            var_18_1 = 0
                                        
                                        if ((var_28_1 == 0 && *(ecx_13 + 0x10) == 2)
                                                || (var_2c_1 == 0 && *(ecx_13 + 0x10) == 3))
                                            i_8 -= 1
                                        else if (*(ecx_13 + 0x54) u< eax_28)
                                            var_18_1 = 0
                                        
                                        eax_32 = &eax_32[1]
                                        i_1 = i_4
                                        i_4 -= 1
                                    while (i_1 != 1)
                                    edx_22 = var_3c_1
                                
                                int32_t var_30_2 = 0
                                
                                do
                                    int32_t eax_34 = (&var_54)[var_30_2]
                                    
                                    if (eax_34 != 0xffffffff)
                                        void* eax_35 = *(*(ebx + 0x18) + (eax_34 << 2))
                                        int32_t i_7 = *(eax_35 + 4)
                                        
                                        if (i_7 u> 0)
                                            int32_t* eax_36 = *(eax_35 + 8)
                                            int32_t i_5 = i_7
                                            int32_t i_2
                                            
                                            do
                                                void* ecx_17 = *(*(ebx + 0x14) + (*eax_36 << 2))
                                                int32_t esi_7 = *(ecx_17 + 0x48)
                                                
                                                if (esi_7 u<= eax_28)
                                                    if (*(ecx_17 + 0x50) u< eax_28)
                                                        var_18_1 = 0
                                                else if (esi_7 != 0xffffffff
                                                        || *(ecx_17 + 0x50) u< eax_28)
                                                    var_18_1 = 0
                                                
                                                eax_36 = &eax_36[1]
                                                i_2 = i_5
                                                i_5 -= 1
                                            while (i_2 != 1)
                                            edx_22 = var_3c_1
                                            ebx = var_24
                                    
                                    var_30_2 += 1
                                while (var_30_2 u< var_8_1)
                                
                                if (var_18_1 != 0)
                                    break
                            
                            edx_22 += 1
                            var_3c_1 = edx_22
                            
                            if (edx_22 u>= var_8_1)
                                goto label_4c4ffc
                        
                        int32_t eax_38 = (&var_54)[edx_22]
                        
                        if (eax_38 != 0xffffffff && i_8 u>= 2)
                            void* eax_42 = sub_49ec23(0x74)
                            int32_t* esi_8
                            
                            if (eax_42 == 0)
                                esi_8 = nullptr
                            else
                                esi_8 = sub_49e789(eax_42)
                            
                            if (esi_8 != 0)
                                int32_t result_1 =
                                    sub_49ec6e(esi_8, (i_8 & 0xfffff) | 0x70900000, i_8 * 2, i_8, 0)
                                
                                if (result_1 s>= 0)
                                    result_1 = sub_49e7bf(esi_8, *(ebx + 0x100))
                                    
                                    if (result_1 s< 0)
                                        goto label_4c505b
                                    
                                    int32_t ecx_21 = 0
                                    void* var_80_2
                                    void* var_7c_2
                                    int32_t var_78_2
                                    
                                    if (i_8 u> 0)
                                        int32_t eax_49 = i_8 << 2
                                        
                                        while (true)
                                            int32_t edx_30
                                            
                                            if (var_1c_1 == 0)
                                                edx_30 = var_c_1
                                                
                                                if (edx_30 == 0xffffffff)
                                                    edx_30 = var_10_1
                                                    
                                                    if (edx_30 == 0xffffffff)
                                                        goto label_4c50b1
                                                else if (var_10_1 != 0xffffffff)
                                                label_4c50b1:
                                                    char const* const var_74_2 =
                                                        "internal error: DST test failure"
                                                    var_78_2 = 0x12d9
                                                    var_7c_2 = *(*(ebx + 0x100) + 0x3c)
                                                    var_80_2 = ebx
                                                    break
                                                
                                                *(esi_8[2] + (ecx_21 << 2)) = edx_30
                                            else
                                                *(esi_8[2] + (ecx_21 << 2)) = *var_1c_1[2]
                                                edx_30 = *(var_1c_1[2] + 4)
                                            
                                            *(eax_49 + esi_8[2]) = edx_30
                                            ecx_21 += 1
                                            eax_49 += 4
                                            
                                            if (ecx_21 u>= i_8)
                                                goto label_4c50ea
                                        
                                        goto label_4c50bf
                                    
                                label_4c50ea:
                                    int32_t edx_31 = 0
                                    int32_t edi_16 = 0
                                    
                                    if (var_8_1 u<= 0)
                                    label_4c512e:
                                        int32_t eax_52 = esi_8[3]
                                        int32_t var_14_1 = 0
                                        
                                        if (eax_52 u<= 0)
                                        label_4c51ae:
                                            int32_t ecx_28 = 0
                                            
                                            if (var_8_1 u> 0)
                                                do
                                                    int32_t eax_61 = (&var_54)[ecx_28]
                                                    
                                                    if (eax_61 != 0xffffffff)
                                                        **(*(ebx + 0x18) + (eax_61 << 2)) = 0
                                                    
                                                    ecx_28 += 1
                                                while (ecx_28 u< var_8_1)
                                            
                                            if (var_28_1 != 0)
                                                int32_t eax_63 = *var_28_1
                                                
                                                if (eax_63 == 0x10000001)
                                                    *var_28_1 = 0
                                                else if (eax_63 == 0x10000002)
                                                    int32_t* eax_66 = var_28_1[2]
                                                    
                                                    if (*eax_66 == var_10_1 && eax_66[1] == var_c_1)
                                                        *var_28_1 = 0
                                                    
                                                    if (eax_66[1] == var_10_1 && *eax_66 == var_c_1)
                                                        *var_28_1 = 0
                                            
                                            if (var_2c_1 != 0)
                                                int32_t eax_68 = *var_2c_1
                                                
                                                if (eax_68 == 0x10000001)
                                                    *var_2c_1 = 0
                                                else if (eax_68 == 0x10000002)
                                                    int32_t* eax_69 = var_2c_1[2]
                                                    
                                                    if (*eax_69 == var_10_1 && eax_69[1] == var_c_1)
                                                        *var_2c_1 = 0
                                                    
                                                    if (eax_69[1] == var_10_1 && *eax_69 == var_c_1)
                                                        *var_2c_1 = 0
                                            
                                            void** edi_21 = eax_38 << 2
                                            void* ecx_33 = *(edi_21 + *(ebx + 0x18))
                                            
                                            if (ecx_33 != 0)
                                                sub_46cb59(ecx_33, 1)
                                            
                                            *(edi_21 + *(ebx + 0x18)) = esi_8
                                            result = 0
                                        else
                                            int32_t var_40_2 = 1
                                            
                                            while (true)
                                                int32_t var_34_2 = var_40_2
                                                
                                                if (var_40_2 u< eax_52)
                                                    while (true)
                                                        int32_t eax_53 = esi_8[4]
                                                        int32_t ecx_26 = *(ebx + 0x14)
                                                        void* edi_17 = *(ecx_26
                                                            + (*(eax_53 + (var_14_1 << 2)) << 2))
                                                        int32_t edx_35 = var_34_2 << 2
                                                        void* ecx_27 =
                                                            *(ecx_26 + (*(edx_35 + eax_53) << 2))
                                                        
                                                        if (*(edi_17 + 0x10) u> *(ecx_27 + 0x10))
                                                            int32_t eax_56 = esi_8[4]
                                                            int32_t* edx_36 = edx_35 + eax_56
                                                            int32_t ebx_2 = *edx_36
                                                            *edx_36 = *(eax_56 + (var_14_1 << 2))
                                                            *(esi_8[4] + (var_14_1 << 2)) = ebx_2
                                                            ebx = var_24
                                                        
                                                        if (*(edi_17 + 0x10) == *(ecx_27 + 0x10))
                                                            sub_4a4100(ebx, 
                                                                *(*(ebx + 0x100) + 0x3c), 0x12db, 
                                                                "internal error: multiple write to same "
                                                            "output")
                                                            break
                                                        
                                                        var_34_2 += 1
                                                        
                                                        if (var_34_2 u>= esi_8[3])
                                                            goto label_4c519e
                                                    
                                                    break
                                                
                                            label_4c519e:
                                                var_14_1 += 1
                                                eax_52 = esi_8[3]
                                                var_40_2 += 1
                                                
                                                if (var_14_1 u>= eax_52)
                                                    goto label_4c51ae
                                            
                                            sub_46cb59(esi_8, 1)
                                            result = 0x80004005
                                    else
                                        while (true)
                                            int32_t eax_51 = var_64[edx_31]
                                            void* ecx_23 = *(*(ebx + 0x14) + (eax_51 << 2))
                                            
                                            if ((var_28_1 != 0 || *(ecx_23 + 0x10) != 2)
                                                    && (var_2c_1 != 0 || *(ecx_23 + 0x10) != 3))
                                                *(esi_8[4] + (edi_16 << 2)) = eax_51
                                                edi_16 += 1
                                            
                                            if (edi_16 u> i_8)
                                                char const* const var_74_3 =
                                                    "internal error: DST test failure"
                                                var_78_2 = 0x12da
                                                var_7c_2 = *(*(var_24 + 0x100) + 0x3c)
                                                var_80_2 = var_24
                                                break
                                            
                                            ebx = var_24
                                            edx_31 += 1
                                            
                                            if (edx_31 u>= var_8_1)
                                                goto label_4c512e
                                        
                                    label_4c50bf:
                                        sub_4a4100(var_80_2, var_7c_2, var_78_2, 
                                            "internal error: DST test failure")
                                        sub_46cb59(esi_8, 1)
                                        result = 1
                                else
                                label_4c505b:
                                    sub_46cb59(esi_8, 1)
                                    result = result_1
                            else
                                result = 0x8007000e
                            
                            break
            else if (*var_20_1 == 0x10000001)
                void* eax_27 = *(*(ebx + 0x14) + (*var_20_1[2] << 2))
                
                if ((*(*(*(ebx + 0x10) + (*(eax_27 + 4) << 2)) + 5) & 1) == 0)
                    ecx_10 = 1
                else
                    long double x87_r7_1 = fconvert.t(1.0)
                    long double x87_r6_1 = fconvert.t(*(eax_27 + 0x20))
                    x87_r6_1 - x87_r7_1
                    eax_27.w = (x87_r6_1 < x87_r7_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
                        | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe
                    bool p_1 = unimplemented  {test ah, 0x44}
                    
                    if (p_1)
                        ecx_10 = 1
                
                goto label_4c4ed9
        
    label_4c4ffc:
        var_40_1 += 1
        var_34_1 += i_6 << 2
        
        if (var_40_1 u>= temp0_1)
            goto label_4c5013

return result
