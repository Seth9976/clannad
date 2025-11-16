// 函数: sub_4a80a9
// 地址: 0x4a80a9
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_b0 = edi
int32_t eax = *(arg1 + 0x14)
int32_t i = *(*(eax + (arg4 << 2)) + 0x30)
int32_t esi = *(*(eax + (arg5 << 2)) + 0x30)
char* edx = *(eax + (i << 2))
char* edx_1 = *(eax + (esi << 2))
int32_t edi_1 = *(*(eax + (arg6 << 2)) + 0x30)
int32_t* ecx_7 = *(eax + (arg3 << 2))
int32_t* esi_1 = *(eax + (edi_1 << 2))
int32_t eax_1 = *ecx_7
int32_t edx_3 = eax_1 & 0x40
int16_t edx_6 = (*(*(*(arg1 + 0x10) + (ecx_7[1] << 2)) + 4)).w

if ((edx_6.b & 1) != 0 && (edx_6:1.b & 0x10) == 0)
    char* edi_3
    
    if ((eax_1 & 0xe000000) != 0 || (*arg2 & 0xfff00000) != 0x30000000)
        edi_3 = edx_1
    else
        edi_3 = edx_1
        int32_t edx_11 = *esi_1 | *edi_3
        
        if ((edx_11 & 0x8000000) != 0)
            *ecx_7 = eax_1 | 0x8000000
        else if ((edx_11 & &data_4000000) != 0)
            *ecx_7 = eax_1 | &data_4000000
        else if ((edx_11 & &data_2000000) != 0)
            *ecx_7 = eax_1 | &data_2000000
        
        *ecx_7 |= *esi_1 & *edi_3 & 0x1f
    
    if ((((*esi_1).b | (*edi_3).b) & 0x40) != 0 && (*arg2 & 0xfff00000) == 0x30000000)
        *ecx_7 |= 0x40
    
    if ((*arg2 & 0xfff00000) == 0x30000000)
        *ecx_7 |= *esi_1 & *edi_3 & 0x1f
        
        if (i == esi && (*esi_1 & 4) != 0)
            *ecx_7 |= 4
        
        if (i == edi_1 && (*edi_3 & 8) != 0)
            *ecx_7 |= 8
    
    if ((*arg2 & 0xfff00000) == 0x30000000)
        char* edi_4 = edx
        
        if (edx_3 != 0 || (*edi_4 & 4) == 0)
            int16_t eax_25 = (*(*(*(arg1 + 0x10) + (*(edi_4 + 4) << 2)) + 4)).w
            char var_14_1 = eax_25.b
            
            if ((eax_25:1.b & 1) == 0 || *(edi_4 + 8) != 0xffffffff)
                if (esi == edi_1)
                    ecx_7[0xc] = esi
                else
                    int32_t eax_28 = *(arg1 + 0x10)
                    int32_t edx_17 = *(*(eax_28 + (*(edx_1 + 4) << 2)) + 4) & 0x100
                    bool p_1
                    
                    if (edx_17 != 0 && *(edx_1 + 8) == 0xffffffff
                            && (*(*(eax_28 + (esi_1[1] << 2)) + 5) & 1) != 0
                            && esi_1[2] == 0xffffffff)
                        long double x87_r7_2 = fconvert.t(*(esi_1 + 0x20))
                        long double x87_r6_1 = fconvert.t(*(edx_1 + 0x20))
                        x87_r6_1 - x87_r7_2
                        char* eax_30
                        eax_30.w = (x87_r6_1 < x87_r7_2 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r6_1, x87_r7_2) ? 1 : 0) << 0xa
                            | (x87_r6_1 == x87_r7_2 ? 1 : 0) << 0xe
                        p_1 = unimplemented  {test ah, 0x44}
                    
                    if (edx_17 != 0 && *(edx_1 + 8) == 0xffffffff
                            && (*(*(eax_28 + (esi_1[1] << 2)) + 5) & 1) != 0
                            && esi_1[2] == 0xffffffff && not(p_1))
                        ecx_7[0xc] = esi
                    else if (edx_3 == 0)
                        if (*(edi_4 + 8) != 0xffffffff || (var_14_1 & 2) == 0)
                            goto label_4a836c
                        
                        int32_t* eax_33 = *(*(arg1 + 0x18) + (*(edi_4 + 0x48) << 2))
                        
                        if ((*eax_33 & 0xfff00000) != 0x10100000 || edx_17 == 0
                                || *(edx_1 + 8) != 0xffffffff)
                            goto label_4a836c
                        
                        long double x87_r7_3 = fconvert.t(*(edx_1 + 0x20))
                        long double x87_r6_2 = fconvert.t(0.0)
                        x87_r6_2 - x87_r7_3
                        char* eax_36
                        eax_36.w = (x87_r6_2 < x87_r7_3 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r6_2, x87_r7_3) ? 1 : 0) << 0xa
                            | (x87_r6_2 == x87_r7_3 ? 1 : 0) << 0xe
                        bool p_2 = unimplemented  {test ah, 0x44}
                        
                        if (p_2 || (*(*(*(arg1 + 0x10) + (esi_1[1] << 2)) + 5) & 1) == 0
                                || esi_1[2] != 0xffffffff)
                            goto label_4a836c
                        
                        long double x87_r7_4 = fconvert.t(*(esi_1 + 0x20))
                        long double x87_r6_3 = fconvert.t(1.0)
                        x87_r6_3 - x87_r7_4
                        void* eax_38
                        eax_38.w = (x87_r6_3 < x87_r7_4 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r6_3, x87_r7_4) ? 1 : 0) << 0xa
                            | (x87_r6_3 == x87_r7_4 ? 1 : 0) << 0xe
                        bool p_3 = unimplemented  {test ah, 0x44}
                        
                        if (p_3)
                            goto label_4a836c
                        
                        int32_t edx_22 = 0
                        
                        if (eax_33[3] u> 0)
                            int32_t* var_8_1 = eax_33[4]
                            
                            while (*var_8_1 != i)
                                var_8_1 = &var_8_1[1]
                                edx_22 += 1
                                
                                if (edx_22 u>= eax_33[3])
                                    break
                        
                        int32_t eax_42 = *(arg1 + 0x14)
                        int32_t edx_25 = *(*(eax_42 + (*(eax_33[2] + (edx_22 << 2)) << 2)) + 0x30)
                        
                        if ((**(eax_42 + (edx_25 << 2)) & 1) == 0)
                            edi_4 = edx
                        label_4a836c:
                            
                            if (*(edi_4 + 8) == 0xffffffff)
                                if ((var_14_1 & 2) == 0)
                                    goto label_4a84b7
                                
                                int32_t* edx_27 = *(*(arg1 + 0x18) + (*(edi_4 + 0x48) << 2))
                                
                                if ((*edx_27 & 0xfff00000) != 0x20500000 || edx_17 == 0
                                        || *(edx_1 + 8) != 0xffffffff)
                                    goto label_4a84b7
                                
                                long double x87_r7_5 = fconvert.t(*(edx_1 + 0x20))
                                long double x87_r6_4 = fconvert.t(0.0)
                                x87_r6_4 - x87_r7_5
                                char* eax_48
                                eax_48.w = (x87_r6_4 < x87_r7_5 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r6_4, x87_r7_5) ? 1 : 0) << 0xa
                                    | (x87_r6_4 == x87_r7_5 ? 1 : 0) << 0xe
                                bool p_4 = unimplemented  {test ah, 0x44}
                                
                                if (p_4)
                                    goto label_4a84b7
                                
                                bool p_5
                                
                                if ((*(*(*(arg1 + 0x10) + (esi_1[1] << 2)) + 5) & 1) != 0
                                        && esi_1[2] == 0xffffffff)
                                    long double x87_r7_6 = fconvert.t(*(esi_1 + 0x20))
                                    long double x87_r6_5 = fconvert.t(1.0)
                                    x87_r6_5 - x87_r7_6
                                    void* eax_50
                                    eax_50.w = (x87_r6_5 < x87_r7_6 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r6_5, x87_r7_6) ? 1 : 0) << 0xa
                                        | (x87_r6_5 == x87_r7_6 ? 1 : 0) << 0xe
                                    p_5 = unimplemented  {test ah, 0x44}
                                
                                if ((*(*(*(arg1 + 0x10) + (esi_1[1] << 2)) + 5) & 1) == 0
                                    || esi_1[2] != 0xffffffff || p_5)
                                label_4a84b4:
                                    edi_4 = edx
                                label_4a84b7:
                                    
                                    if (*(edi_4 + 8) == 0xffffffff && (var_14_1 & 2) != 0)
                                        int32_t* ecx_9 = *(*(arg1 + 0x18) + (*(edi_4 + 0x48) << 2))
                                        
                                        if ((*ecx_9 & 0xfff00000) == 0x20400000)
                                            int32_t var_14_2 = 0xffffffff
                                            
                                            if (edx_17 != 0 && *(edx_1 + 8) == 0xffffffff && (
                                                    *(*(*(arg1 + 0x10) + (esi_1[1] << 2)) + 5) & 1) != 0
                                                    && esi_1[2] == 0xffffffff)
                                                long double x87_r7_8 = fconvert.t(*(edx_1 + 0x20))
                                                long double x87_r6_6 = fconvert.t(0.0)
                                                x87_r6_6 - x87_r7_8
                                                void* eax_67
                                                eax_67.w = (x87_r6_6 < x87_r7_8 ? 1 : 0) << 8
                                                    | (is_unordered.t(x87_r6_6, x87_r7_8) ? 1 : 0)
                                                    << 0xa | (x87_r6_6 == x87_r7_8 ? 1 : 0) << 0xe
                                                bool p_7 = unimplemented  {test ah, 0x44}
                                                bool p_8
                                                
                                                if (not(p_7))
                                                    long double x87_r7_9 =
                                                        fconvert.t(*(esi_1 + 0x20))
                                                    long double x87_r6_7 = fconvert.t(1.0)
                                                    x87_r6_7 - x87_r7_9
                                                    eax_67.w = (x87_r6_7 < x87_r7_9 ? 1 : 0) << 8
                                                        | (is_unordered.t(x87_r6_7, x87_r7_9) ? 1
                                                        : 0) << 0xa
                                                        | (x87_r6_7 == x87_r7_9 ? 1 : 0) << 0xe
                                                    p_8 = unimplemented  {test ah, 0x44}
                                                
                                                if (p_7 || p_8)
                                                    long double x87_r7_10 =
                                                        fconvert.t(*(edx_1 + 0x20))
                                                    long double x87_r6_8 = fconvert.t(1.0)
                                                    x87_r6_8 - x87_r7_10
                                                    eax_67.w = (x87_r6_8 < x87_r7_10 ? 1 : 0) << 8
                                                        | (is_unordered.t(x87_r6_8, x87_r7_10) ? 1
                                                        : 0) << 0xa
                                                        | (x87_r6_8 == x87_r7_10 ? 1 : 0) << 0xe
                                                    bool p_9 = unimplemented  {test ah, 0x44}
                                                    
                                                    if (not(p_9))
                                                        long double x87_r7_11 =
                                                            fconvert.t(*(esi_1 + 0x20))
                                                        long double x87_r6_9 = fconvert.t(0.0)
                                                        x87_r6_9 - x87_r7_11
                                                        eax_67.w =
                                                            (x87_r6_9 < x87_r7_11 ? 1 : 0) << 8 | (
                                                            is_unordered.t(x87_r6_9, x87_r7_11) ? 1
                                                            : 0) << 0xa
                                                            | (x87_r6_9 == x87_r7_11 ? 1 : 0)
                                                            << 0xe
                                                        bool p_10 = unimplemented  {test ah, 0x44}
                                                        
                                                        if (not(p_10))
                                                            var_14_2 = 0x20300001
                                                else
                                                    var_14_2 = 0x20200001
                                            
                                            int32_t esi_4 = ecx_9[3]
                                            int32_t edx_37 = 0
                                            
                                            if (esi_4 u> 0)
                                                int32_t* eax_68 = ecx_9[4]
                                                
                                                while (*eax_68 != i)
                                                    edx_37 += 1
                                                    eax_68 = &eax_68[1]
                                                    
                                                    if (edx_37 u>= esi_4)
                                                        break
                                            
                                            int32_t eax_69 = ecx_9[3]
                                            int32_t ecx_10 = ecx_9[2]
                                            arg4 = 0
                                            int32_t* edi_17 = ecx_10 + (edx_37 << 2)
                                            int32_t* ecx_11 = ecx_10 + ((eax_69 + edx_37) << 2)
                                            int32_t* var_1c_2 = edi_17
                                            int32_t* var_8_4 = ecx_11
                                            
                                            do
                                                int32_t eax_71 = *(arg1 + 0x14)
                                                int32_t edx_40 =
                                                    *(*(eax_71 + (*edi_17 << 2)) + 0x30)
                                                int32_t j = *(*(eax_71 + (*ecx_11 << 2)) + 0x30)
                                                void* eax_72 = *(eax_71 + (j << 2))
                                                
                                                if (*(eax_72 + 8) == 0xffffffff && (*(
                                                        *(*(arg1 + 0x10) + (*(eax_72 + 4) << 2))
                                                        + 4) & 2) != 0)
                                                    int32_t* eax_74 =
                                                        *(*(arg1 + 0x18) + (*(eax_72 + 0x48) << 2))
                                                    
                                                    if ((*eax_74 & 0xfff00000) == 0x10100000)
                                                        int32_t ecx_19 = 0
                                                        
                                                        if (eax_74[3] u> 0)
                                                            int32_t* edi_19 = eax_74[4]
                                                            
                                                            while (*edi_19 != j)
                                                                ecx_19 += 1
                                                                
                                                                if (ecx_19 u>= eax_74[3])
                                                                    break
                                                                
                                                                edi_19 = &edi_19[1]
                                                        
                                                        int32_t edi_21 = *(*(*(arg1 + 0x14)
                                                            + (*(eax_74[2] + (ecx_19 << 2)) << 2))
                                                            + 0x30)
                                                        int32_t var_18_2 = var_14_2
                                                        
                                                        if (var_14_2 != 0xffffffff)
                                                            goto label_4a8689
                                                        
                                                        if (esi == edi_21 && edi_1 == edx_40)
                                                            var_18_2 = 0x20000001
                                                        label_4a8689:
                                                            void var_a4
                                                            sub_49e789(&var_a4)
                                                            int32_t result =
                                                                sub_49ec6e(&var_a4, var_18_2, 2, 1, 0)
                                                            
                                                            if (result s>= 0)
                                                                result = sub_49e7bf(&var_a4, arg2)
                                                                
                                                                if (result s>= 0)
                                                                    int32_t* var_94
                                                                    *var_94 = arg3
                                                                    int32_t* var_9c
                                                                    *var_9c = edx_40
                                                                    var_9c[1] = edi_21
                                                                    int80_t st0_1
                                                                    st0_1, result = sub_4a712c(arg1, 
                                                                        &var_a4, arg3, edx_40, edi_21)
                                                            
                                                            return result
                                                        
                                                        if (esi == edx_40 && edi_1 == edi_21)
                                                            var_18_2 = 0x20100001
                                                            goto label_4a8689
                                                
                                                edi_17 = &var_1c_2[eax_69]
                                                arg4 += 1
                                                ecx_11 = &var_8_4[neg.d(eax_69)]
                                                var_1c_2 = edi_17
                                                var_8_4 = ecx_11
                                            while (arg4 u< 2)
                                else
                                    int32_t esi_2 = edx_27[3]
                                    int32_t var_8_2 = 0
                                    
                                    if (esi_2 u> 0)
                                        int32_t* eax_51 = edx_27[4]
                                        
                                        while (*eax_51 != i)
                                            var_8_2 += 1
                                            eax_51 = &eax_51[1]
                                            
                                            if (var_8_2 u>= esi_2)
                                                break
                                    
                                    int32_t eax_52 = edx_27[3]
                                    int32_t esi_3 = *(arg1 + 0x14)
                                    int32_t edx_28 = edx_27[2]
                                    int32_t var_c_2 = 0
                                    int32_t* var_1c_1 = edx_28 + (var_8_2 << 2)
                                    int32_t* edx_29 = edx_28 + ((eax_52 + var_8_2) << 2)
                                    int32_t* var_8_3 = edx_29
                                    int32_t eax_57
                                    
                                    while (true)
                                        eax_57 = *(*(esi_3 + (*var_1c_1 << 2)) + 0x30)
                                        void* edx_33 =
                                            *(esi_3 + (*(*(esi_3 + (*edx_29 << 2)) + 0x30) << 2))
                                        
                                        if ((**(esi_3 + (eax_57 << 2)) & 1) != 0 && (
                                                *(*(*(arg1 + 0x10) + (*(edx_33 + 4) << 2)) + 5) & 1) != 0
                                                && *(edx_33 + 8) == 0xffffffff)
                                            long double x87_r7_7 = fconvert.t(*(edx_33 + 0x20))
                                            long double temp2_1 = fconvert.t(0.0)
                                            x87_r7_7 - temp2_1
                                            void* eax_61
                                            eax_61.w = (x87_r7_7 < temp2_1 ? 1 : 0) << 8
                                                | (is_unordered.t(x87_r7_7, temp2_1) ? 1 : 0)
                                                << 0xa | (x87_r7_7 == temp2_1 ? 1 : 0) << 0xe
                                            bool p_6 = unimplemented  {test ah, 0x5}
                                            
                                            if (not(p_6))
                                                break
                                        
                                        var_c_2 += 1
                                        var_1c_1 = &var_1c_1[eax_52]
                                        edx_29 = &var_8_3[neg.d(eax_52)]
                                        var_8_3 = edx_29
                                        
                                        if (var_c_2 u>= 2)
                                            goto label_4a84b4
                                    
                                    ecx_7[0xc] = eax_57
                        else
                            ecx_7[0xc] = edx_25
            else
                long double x87_r7_1 = fconvert.t(*(edi_4 + 0x20))
                long double temp1_1 = fconvert.t(0.0)
                x87_r7_1 - temp1_1
                int32_t eax_26 = esi
                
                if ((((x87_r7_1 < temp1_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r7_1, temp1_1) ? 1 : 0) << 0xa
                        | (x87_r7_1 == temp1_1 ? 1 : 0) << 0xe):1.b & 1) != 0)
                    eax_26 = edi_1
                
                ecx_7[0xc] = eax_26
        else
            ecx_7[0xc] = esi

return 0
