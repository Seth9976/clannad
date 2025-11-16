// 函数: sub_4729cc
// 地址: 0x4729cc
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = arg1[0xc]
int32_t ecx = arg1[0x11]
int32_t eax_1 = arg1[0xd]
int32_t eax_2 = arg1[0x1a]
int32_t eax_3 = arg1[0x1b]
int32_t var_84 = 0
int32_t eax_4
eax_4.b = arg4 != 0
int32_t var_2c = 0
int32_t var_20 = 0
double* var_30 = nullptr
double* var_34 = nullptr
void* eax_5 = arg1[2]

if (ecx u>= *(eax_5 + 0x5c))
    return 0x80004005

arg1[0x11] = ecx + 1
int32_t edx_1 = *(eax_5 + 8)
int32_t i_12 = *(eax_5 + 0xc)
int32_t i_13 = *(arg1[1] + 0x18)
int32_t* eax_9 = sub_745f3f(i_13 << 2)
int32_t result

if (eax_9 == 0)
labelid_a9:
    result = 0x8007000e
else
    int32_t eax_12 = sub_745f3f(i_13 << 2)
    var_2c = eax_12
    
    if (eax_12 == 0)
    labelid_a9:
        result = 0x8007000e
    else
        int32_t eax_15 = sub_745f3f(i_13 << 2)
        var_20 = eax_15
        
        if (eax_15 == 0)
        label_4737a8:
            result = 0x8007000e
        else
            int32_t eax_17 = i_13 << 4
            double* eax_18 = sub_745f3f(eax_17)
            var_30 = eax_18
            
            if (eax_18 == 0)
            label_4737a8_1:
                result = 0x8007000e
            else
                double* eax_19 = sub_745f3f(eax_17)
                var_34 = eax_19
                
                if (eax_19 == 0)
                label_4737a8_2:
                    result = 0x8007000e
                else
                    int32_t edi = 0
                    
                    if (i_13 u> 0)
                        arg4 = var_30
                        
                        do
                            int32_t esi_2 = edi << 2
                            int32_t eax_22 = *(esi_2 + arg1[6])
                            int32_t eax_23
                            
                            if (eax_22 != 0xffffffff)
                                eax_23 = sub_46cffa(arg1, eax_22, arg4)
                            
                            if (eax_22 == 0xffffffff || eax_23 s< 0)
                                double* eax_24 = arg4
                                *eax_24 = fconvert.d(fconvert.t(*(arg1 + 0xa0)))
                                eax_24[1] = fconvert.d(fconvert.t(*(arg1 + 0xa8)))
                            
                            int32_t ecx_9 = *(esi_2 + arg1[6])
                            void* eax_26
                            int32_t* ecx_10
                            
                            if (ecx_9 != 0xffffffff)
                                eax_26 = arg1[2]
                                ecx_10 = *(*(eax_26 + 0x14) + (ecx_9 << 2))
                            
                            if (ecx_9 == 0xffffffff || *(eax_26 + 0x74) == ecx_10[1])
                                *(esi_2 + var_2c) = 0x1f
                            else
                                *(esi_2 + var_2c) = *ecx_10 & 0x1f
                            
                            arg4 = &arg4[2]
                            edi += 1
                        while (edi u< i_13)
                    
                    double var_8c = fconvert.d(float.t(1))
                    int32_t ecx_13 = i_13 << 2
                    int32_t esi_4
                    int32_t edi_2
                    edi_2, esi_4 = __builtin_memcpy(var_20, var_2c, ecx_13 u>> 2 << 2)
                    __builtin_memcpy(edi_2, esi_4, ecx_13 & 3)
                    int32_t esi_6
                    int32_t edi_4
                    edi_4, esi_6 = __builtin_memcpy(var_34, var_30, eax_17 u>> 2 << 2)
                    __builtin_memcpy(edi_4, esi_6, eax_17 & 3)
                    int32_t eax_33 = arg1[8]
                    int32_t var_80 = 0xffffffff
                    int32_t var_7c = 0xffffffff
                    int32_t var_24 = eax_33
                    void* var_10 = 1
                    int32_t var_38_1 = 1
                    int32_t eax_35 = *(arg1[2] + 0x68)
                    int32_t var_28_1 = eax_35
                    
                    if (eax_35 == 0)
                        var_28_1 = 0xff
                    
                    int32_t var_18_1 = 0
                    
                    if (var_28_1 u> 0)
                        while (true)
                            arg1[0x1a] = var_18_1
                            arg1[0x1b] = var_18_1 + 1
                            double var_ac
                            double var_a4
                            
                            if (arg6 == 0 || eax_4 == 0)
                            label_472bf7:
                                int32_t ecx_23 = i_13 << 2
                                int32_t esi_8
                                int32_t edi_6
                                edi_6, esi_8 = __builtin_memcpy(eax_9, arg1[6], ecx_23 u>> 2 << 2)
                                __builtin_memcpy(edi_6, esi_8, ecx_23 & 3)
                                arg4 = 0xffffffff
                                
                                if (arg5 == 0)
                                label_472c84:
                                    
                                    if (sub_46e8bc(arg1, var_24, &var_8c) s< 0)
                                    label_472d19:
                                        int32_t eax_53 = 0
                                        int32_t var_c_2 = 0
                                        
                                        if (i_13 u> 0)
                                            int32_t edx_4 = arg7 - var_20
                                            double* edi_8 = var_34
                                            int32_t var_14_3 = edx_4
                                            
                                            do
                                                int32_t* esi_10 = var_20 + (eax_53 << 2)
                                                int32_t ecx_37 = *(arg1[6] + (eax_53 << 2))
                                                
                                                if (*(esi_10 + edx_4) != ecx_37)
                                                    long double x87_r7_7 = fconvert.t(*edi_8)
                                                    long double temp1_1 = fconvert.t(*(arg1 + 0xa8))
                                                    x87_r7_7 - temp1_1
                                                    eax_53.w = (x87_r7_7 < temp1_1 ? 1 : 0) << 8 | (
                                                        is_unordered.t(x87_r7_7, temp1_1) ? 1 : 0)
                                                        << 0xa | (x87_r7_7 == temp1_1 ? 1 : 0) << 0xe
                                                    
                                                    if ((eax_53:1.b & 0x41) == 0)
                                                    label_472d71:
                                                        double var_bc
                                                        
                                                        if (sub_46cffa(arg1, ecx_37, &var_bc) s< 0)
                                                            *edi_8 =
                                                                fconvert.d(fconvert.t(*(arg1 + 0xa0)))
                                                            edi_8[1] =
                                                                fconvert.d(fconvert.t(*(arg1 + 0xa8)))
                                                        else
                                                            long double x87_r7_9 =
                                                                fconvert.t(*edi_8)
                                                            long double temp7_1 = fconvert.t(var_bc)
                                                            x87_r7_9 - temp7_1
                                                            int32_t eax_54
                                                            eax_54.w =
                                                                (x87_r7_9 < temp7_1 ? 1 : 0) << 8 | (
                                                                is_unordered.t(x87_r7_9, temp7_1) ? 1
                                                                : 0) << 0xa
                                                                | (x87_r7_9 == temp7_1 ? 1 : 0) << 0xe
                                                            
                                                            if ((eax_54:1.b & 0x41) == 0)
                                                                *edi_8 = fconvert.d(fconvert.t(var_bc))
                                                            
                                                            long double x87_r7_11 =
                                                                fconvert.t(edi_8[1])
                                                            double var_b4
                                                            long double temp9_1 = fconvert.t(var_b4)
                                                            x87_r7_11 - temp9_1
                                                            eax_54.w =
                                                                (x87_r7_11 < temp9_1 ? 1 : 0) << 8 | (
                                                                is_unordered.t(x87_r7_11, temp9_1) ? 1
                                                                : 0) << 0xa
                                                                | (x87_r7_11 == temp9_1 ? 1 : 0) << 0xe
                                                            bool p_3 = unimplemented  {test ah, 0x5}
                                                            
                                                            if (not(p_3))
                                                                edi_8[1] =
                                                                    fconvert.d(fconvert.t(var_b4))
                                                    else
                                                        long double x87_r7_8 = fconvert.t(edi_8[1])
                                                        long double temp3_1 =
                                                            fconvert.t(*(arg1 + 0xa0))
                                                        x87_r7_8 - temp3_1
                                                        eax_53.w = (x87_r7_8 < temp3_1 ? 1 : 0) << 8
                                                            | (is_unordered.t(x87_r7_8, temp3_1)
                                                            ? 1 : 0) << 0xa
                                                            | (x87_r7_8 == temp3_1 ? 1 : 0) << 0xe
                                                        bool p_2 = unimplemented  {test ah, 0x5}
                                                        
                                                        if (not(p_2))
                                                            goto label_472d71
                                                    
                                                    *esi_10 &= **(*(arg1[2] + 0x14)
                                                        + (*(arg1[6] + (var_c_2 << 2)) << 2))
                                                    edx_4 = var_14_3
                                                    eax_53 = var_c_2
                                                
                                                eax_53 += 1
                                                edi_8 = &edi_8[2]
                                                var_c_2 = eax_53
                                            while (eax_53 u< i_13)
                                    else
                                        long double x87_r7_4 = fconvert.t(var_8c)
                                        long double x87_r6_1 = fconvert.t(0.0)
                                        x87_r6_1 - x87_r7_4
                                        int32_t eax_42
                                        eax_42.w = (x87_r6_1 < x87_r7_4 ? 1 : 0) << 8
                                            | (is_unordered.t(x87_r6_1, x87_r7_4) ? 1 : 0) << 0xa
                                            | (x87_r6_1 == x87_r7_4 ? 1 : 0) << 0xe
                                        bool p_1 = unimplemented  {test ah, 0x44}
                                        
                                        if (not(p_1))
                                            goto label_472d19
                                        
                                        int32_t edi_7 = 0
                                        
                                        if (i_13 u> 0)
                                            int32_t ecx_31 = arg7 - var_20
                                            double* var_c_1 = var_34
                                            int32_t var_14_2 = ecx_31
                                            
                                            do
                                                int32_t* esi_9 = var_20 + (edi_7 << 2)
                                                int32_t eax_46 = *(arg1[6] + (edi_7 << 2))
                                                
                                                if (*(esi_9 + ecx_31) != eax_46)
                                                    if (sub_46cffa(arg1, eax_46, var_c_1) s< 0)
                                                        *var_c_1 =
                                                            fconvert.d(fconvert.t(*(arg1 + 0xa0)))
                                                        var_c_1[1] =
                                                            fconvert.d(fconvert.t(*(arg1 + 0xa8)))
                                                    
                                                    ecx_31 = var_14_2
                                                    *esi_9 = **(*(arg1[2] + 0x14)
                                                        + (*(arg1[6] + (edi_7 << 2)) << 2))
                                                
                                                var_c_1 = &var_c_1[2]
                                                edi_7 += 1
                                            while (edi_7 u< i_13)
                                    
                                    if (arg4 == 0xffffffff)
                                        goto label_472e7b
                                    
                                    double var_cc
                                    
                                    if (sub_46cffa(arg1, arg4, &var_cc) s< 0)
                                    label_472e63:
                                        *(*(*(arg1[2] + 0x14) + (arg4 << 2)) + 0x20) =
                                            fconvert.d(float.t(1))
                                        *(*(*(arg1[2] + 0x14) + (arg4 << 2)) + 0x28) =
                                            fconvert.d(float.t(1))
                                    label_472e7b:
                                        
                                        if (i_13 u> 0)
                                            int32_t* edi_9 = eax_9
                                            double* esi_11 = var_30
                                            int32_t* eax_67 = arg7 - edi_9
                                            void* ecx_46 = var_2c - edi_9
                                            int32_t* var_94_1 = eax_67
                                            int32_t i_11 = i_13
                                            int32_t i
                                            
                                            do
                                                int32_t ecx_48 = *edi_9
                                                
                                                if (*(eax_67 + edi_9) != ecx_48)
                                                    long double x87_r7_20 = fconvert.t(*esi_11)
                                                    long double temp5_1 = fconvert.t(*(arg1 + 0xa8))
                                                    x87_r7_20 - temp5_1
                                                    eax_67.w = (x87_r7_20 < temp5_1 ? 1 : 0) << 8
                                                        | (is_unordered.t(x87_r7_20, temp5_1) ? 1
                                                        : 0) << 0xa
                                                        | (x87_r7_20 == temp5_1 ? 1 : 0) << 0xe
                                                    
                                                    if ((eax_67:1.b & 0x41) == 0)
                                                    label_472ed4:
                                                        
                                                        if (sub_46cffa(arg1, ecx_48, &var_ac) s< 0)
                                                            *esi_11 =
                                                                fconvert.d(fconvert.t(*(arg1 + 0xa0)))
                                                            esi_11[1] =
                                                                fconvert.d(fconvert.t(*(arg1 + 0xa8)))
                                                        else
                                                            long double x87_r7_22 =
                                                                fconvert.t(*esi_11)
                                                            long double temp10_1 =
                                                                fconvert.t(var_ac)
                                                            x87_r7_22 - temp10_1
                                                            int32_t eax_68
                                                            eax_68.w =
                                                                (x87_r7_22 < temp10_1 ? 1 : 0) << 8 | (
                                                                is_unordered.t(x87_r7_22, temp10_1) ? 1
                                                                : 0) << 0xa
                                                                | (x87_r7_22 == temp10_1 ? 1 : 0)
                                                                << 0xe
                                                            
                                                            if ((eax_68:1.b & 0x41) == 0)
                                                                *esi_11 = fconvert.d(fconvert.t(var_ac))
                                                            
                                                            long double x87_r7_24 =
                                                                fconvert.t(esi_11[1])
                                                            long double temp11_1 =
                                                                fconvert.t(var_a4)
                                                            x87_r7_24 - temp11_1
                                                            eax_68.w =
                                                                (x87_r7_24 < temp11_1 ? 1 : 0) << 8 | (
                                                                is_unordered.t(x87_r7_24, temp11_1) ? 1
                                                                : 0) << 0xa
                                                                | (x87_r7_24 == temp11_1 ? 1 : 0)
                                                                << 0xe
                                                            bool p_8 = unimplemented  {test ah, 0x5}
                                                            
                                                            if (not(p_8))
                                                                esi_11[1] =
                                                                    fconvert.d(fconvert.t(var_a4))
                                                    else
                                                        long double x87_r7_21 =
                                                            fconvert.t(esi_11[1])
                                                        long double temp8_1 =
                                                            fconvert.t(*(arg1 + 0xa0))
                                                        x87_r7_21 - temp8_1
                                                        eax_67.w =
                                                            (x87_r7_21 < temp8_1 ? 1 : 0) << 8 | (
                                                            is_unordered.t(x87_r7_21, temp8_1) ? 1
                                                            : 0) << 0xa
                                                            | (x87_r7_21 == temp8_1 ? 1 : 0) << 0xe
                                                        bool p_7 = unimplemented  {test ah, 0x5}
                                                        
                                                        if (not(p_7))
                                                            goto label_472ed4
                                                    
                                                    void* eax_70 = ecx_46 + edi_9
                                                    *eax_70 &= **(*(arg1[2] + 0x14) + (*edi_9 << 2))
                                                    eax_67 = var_94_1
                                                
                                                esi_11 = &esi_11[2]
                                                edi_9 = &edi_9[1]
                                                i = i_11
                                                i_11 -= 1
                                            while (i != 1)
                                        
                                        if (var_38_1 != 0)
                                            if (var_10 != 0)
                                                var_38_1 = 0
                                            else if (sub_4718d8(arg1, arg4, var_18_1, &var_80, 
                                                    &var_7c) == 0)
                                                var_38_1 = 0
                                            else
                                                var_38_1 = 1
                                        
                                        if (arg6 == 0 || eax_4 != 0)
                                        label_472fb3:
                                            bool cond:10_1 = var_18_1 + 1 u< var_28_1
                                            var_18_1 += 1
                                            
                                            if (cond:10_1)
                                                continue
                                        else
                                            result = sub_47ad82(arg1, arg6, 0)
                                            
                                            if (result s< 0)
                                                goto label_4737b0
                                            
                                            if (arg1[0x17] == 0)
                                                if (arg1[0x14] != 0)
                                                    break
                                                
                                                if (arg1[0x15] != 0)
                                                    break
                                                
                                                goto label_472fb3
                                    else
                                        long double x87_r7_14 = fconvert.t(var_cc)
                                        long double x87_r6_2 = fconvert.t(0.0)
                                        x87_r6_2 - x87_r7_14
                                        int32_t eax_59
                                        eax_59.w = (x87_r6_2 < x87_r7_14 ? 1 : 0) << 8
                                            | (is_unordered.t(x87_r6_2, x87_r7_14) ? 1 : 0) << 0xa
                                            | (x87_r6_2 == x87_r7_14 ? 1 : 0) << 0xe
                                        bool p_4 = unimplemented  {test ah, 0x44}
                                        double var_c4
                                        bool p_5
                                        
                                        if (not(p_4))
                                            long double x87_r7_15 = fconvert.t(var_c4)
                                            long double x87_r6_3 = fconvert.t(0.0)
                                            x87_r6_3 - x87_r7_15
                                            eax_59.w = (x87_r6_3 < x87_r7_15 ? 1 : 0) << 8
                                                | (is_unordered.t(x87_r6_3, x87_r7_15) ? 1 : 0)
                                                << 0xa | (x87_r6_3 == x87_r7_15 ? 1 : 0) << 0xe
                                            p_5 = unimplemented  {test ah, 0x44}
                                        
                                        if (p_4 || p_5)
                                            long double x87_r7_16 = float.t(0)
                                            long double temp2_1 = fconvert.t(var_cc)
                                            x87_r7_16 - temp2_1
                                            eax_59.w = (x87_r7_16 < temp2_1 ? 1 : 0) << 8
                                                | (is_unordered.t(x87_r7_16, temp2_1) ? 1 : 0)
                                                << 0xa | (x87_r7_16 == temp2_1 ? 1 : 0) << 0xe
                                            
                                            if ((eax_59:1.b & 1) == 0)
                                                long double x87_r7_17 = float.t(0)
                                                long double temp6_1 = fconvert.t(var_c4)
                                                x87_r7_17 - temp6_1
                                                eax_59.w = (x87_r7_17 < temp6_1 ? 1 : 0) << 8
                                                    | (is_unordered.t(x87_r7_17, temp6_1) ? 1 : 0)
                                                    << 0xa | (x87_r7_17 == temp6_1 ? 1 : 0) << 0xe
                                                bool p_6 = unimplemented  {test ah, 0x41}
                                                
                                                if (not(p_6))
                                                    var_10 = nullptr
                                            
                                            goto label_472e63
                                else
                                    arg4 = 0xffffffff
                                    result = sub_47bd3b(arg5, &arg4, 0)
                                    
                                    if (result s< 0)
                                        goto label_4737b0
                                    
                                    result = sub_46ea58(arg1, arg5, 0x20500001, &var_24, &var_24, 
                                        &arg4, 0x17, arg2.b)
                                    
                                    if (result s< 0)
                                        goto label_4737b0
                                    
                                    if (arg1[0x17] == 0)
                                        if (arg1[0x14] != 0)
                                            break
                                        
                                        if (arg1[0x15] != 0)
                                            break
                                        
                                        goto label_472c84
                            else
                                result = sub_47ad82(arg1, arg6, 0)
                                
                                if (result s< 0)
                                    goto label_4737b0
                                
                                if (arg1[0x17] == 0)
                                    if (arg1[0x14] != 0)
                                        break
                                    
                                    if (arg1[0x15] != 0)
                                        break
                                    
                                    goto label_472bf7
                            
                            if (var_18_1 u<= 1)
                                break
                            
                            if (var_18_1 u< var_28_1)
                                if (arg1[0x18] != 0)
                                    break
                                
                                if ((*(arg1 + 0x15) & 2) != 0)
                                    break
                                
                                if (arg1[0x17] == 0)
                                    var_38_1 = 0
                            
                            int32_t i_2
                            
                            if (var_10 != 0 || var_38_1 != 0)
                                i_2 = i_12
                            else
                                void* eax_75 = arg1[2]
                                
                                if ((*(eax_75 + 0x70) & 4) == 0)
                                    break
                                
                                i_2 = i_12
                                int32_t i_1 = i_2
                                
                                if (i_2 u< *(eax_75 + 0xc))
                                    do
                                        if (sub_49eb7a(*(*(arg1[2] + 0x18) + (i_1 << 2))) != 0)
                                            goto label_47379d
                                        
                                        i_1 += 1
                                    while (i_1 u< *(arg1[2] + 0xc))
                            
                            if (arg1[0x17] != 0)
                                var_18_1 = var_28_1
                                arg1[0x17] = 0
                            
                            if (var_18_1 == var_28_1 && sub_46e8bc(arg1, var_24, &var_8c) s>= 0)
                                long double x87_r7_27 = fconvert.t(var_8c)
                                long double x87_r6_4 = fconvert.t(0.0)
                                x87_r6_4 - x87_r7_27
                                int32_t eax_82
                                eax_82.w = (x87_r6_4 < x87_r7_27 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r6_4, x87_r7_27) ? 1 : 0) << 0xa
                                    | (x87_r6_4 == x87_r7_27 ? 1 : 0) << 0xe
                                bool p_9 = unimplemented  {test ah, 0x44}
                                
                                if (p_9)
                                    break
                            
                            if (var_18_1 u< var_28_1 && var_10 != 0 && (*(arg1 + 0x15) & 4) == 0)
                                void* eax_84 = arg1[2]
                                int32_t esi_12 = *(eax_84 + 0xc)
                                bool cond:13_1 = i_2 == esi_12
                                
                                if (i_2 u< esi_12)
                                    int32_t* ecx_57 = *(eax_84 + 0x18) + (i_2 << 2)
                                    
                                    do
                                        int32_t eax_88 = **ecx_57 & 0xfff00000
                                        bool cond:19_1
                                        
                                        if (eax_88 u> 0x20100000)
                                            if (eax_88 != 0x20200000 && eax_88 != 0x20300000
                                                    && eax_88 != 0x20400000
                                                    && eax_88 != 0x20500000)
                                                cond:19_1 = eax_88 != 0x30000000
                                            label_47310f:
                                                
                                                if (cond:19_1)
                                                    break
                                        else if (eax_88 != 0x20100000 && eax_88 != 0
                                                && eax_88 != 0x10000000 && eax_88 != 0x10100000
                                                && eax_88 != 0x10200000 && eax_88 != 0x10400000)
                                            cond:19_1 = eax_88 != 0x20000000
                                            goto label_47310f
                                        i_2 += 1
                                        ecx_57 = &ecx_57[1]
                                    while (i_2 u< *(arg1[2] + 0xc))
                                    
                                    cond:13_1 = i_2 == esi_12
                                
                                if (cond:13_1)
                                    break
                            
                            int32_t ecx_58 = 0
                            int32_t edi_10 = 0
                            
                            if (i_13 u> 0)
                                do
                                    int32_t eax_91 = *(arg7 + (ecx_58 << 2))
                                    
                                    if (eax_91 != 0xffffffff
                                            && *(arg1[6] + (ecx_58 << 2)) != eax_91)
                                        edi_10 += 1
                                    
                                    ecx_58 += 1
                                while (ecx_58 u< i_13)
                            
                            int32_t eax_94 = sub_745f3f(edi_10 * 0x24)
                            var_84 = eax_94
                            
                            if (eax_94 == 0)
                                goto label_4737a8_2
                            
                            sub_46cc96(eax_94, edi_10 * 9)
                            int32_t i_3 = 0
                            int32_t ecx_61 = eax_94
                            int32_t* var_64
                            
                            do
                                (&var_64)[i_3] = ecx_61
                                i_3 += 1
                                ecx_61 += edi_10 << 2
                            while (i_3 u< 9)
                            
                            int32_t* var_60
                            int32_t* edx_9 = var_60
                            int32_t ecx_62 = 0
                            arg4 = nullptr
                            int32_t var_c_4 = 0
                            int32_t* var_5c
                            
                            if (i_13 u> 0)
                                void* var_14_5 = var_5c - edx_9
                                var_10 = var_64 - var_5c
                                
                                do
                                    int32_t esi_15 = ecx_62 << 2
                                    int32_t eax_99 = arg7 + esi_15
                                    int32_t ecx_63 = *eax_99
                                    
                                    if (ecx_63 != 0xffffffff && *(esi_15 + arg1[6]) != ecx_63)
                                        void* ecx_65 = var_14_5 + edx_9
                                        *(ecx_65 + var_10) = var_c_4
                                        *edx_9 = *eax_99
                                        *ecx_65 = *eax_99
                                        void* ecx_66
                                        
                                        if (*eax_99 != 0xffffffff)
                                            ecx_66 = arg1[2]
                                        
                                        if (*eax_99 == 0xffffffff || *(ecx_66 + 0x74)
                                                == *(*(*(ecx_66 + 0x14) + (*eax_99 << 2)) + 4))
                                            *edx_9 = arg1[9]
                                        
                                        arg4 += 1
                                        edx_9 = &edx_9[1]
                                    
                                    ecx_62 = var_c_4 + 1
                                    var_c_4 = ecx_62
                                while (ecx_62 u< i_13)
                            
                            sub_46e9ba(arg1, edx_1, i_12, arg7)
                            void* ecx_70 = arg1[2]
                            long double x87_r7_28 = float.t(var_18_1)
                            arg1[0x1a] = 0
                            arg1[0x1b] = var_18_1
                            
                            if (var_18_1 s< 0)
                                x87_r7_28 = x87_r7_28 + fconvert.t(4294967296.0)
                            
                            void* var_dc_17 = ecx_70
                            void* var_e0_15 = ecx_70
                            var_e0_15.q = fconvert.d(x87_r7_28)
                            int32_t eax_104 = sub_49f544(ecx_70, *(ecx_70 + 0x78), 0, 0, var_e0_15)
                            int32_t var_40 = 0xffffffff
                            int32_t var_90 = eax_104
                            result = sub_46ea58(arg1, arg3, 0x11100001, &var_40, &var_90, nullptr, 
                                0, arg2.b)
                            
                            if (result s< 0)
                                goto label_4737b0
                            
                            void* eax_106 = arg1[2]
                            *(*(*(eax_106 + 0x14) + (var_40 << 2)) + 4) = *(eax_106 + 0xa4)
                            arg1[0xc] = var_40
                            int32_t eax_110 = arg4 & 0xfffff
                            arg1[0xd] = 1
                            result = sub_46ea58(arg1, arg3, eax_110 | 0x11200000, var_5c, var_60, 
                                nullptr, 0)
                            
                            if (result s< 0)
                                goto label_4737b0
                            
                            int32_t* var_44
                            result = sub_46ea58(arg1, arg3, eax_110 | 0x11300000, var_44, var_5c, 
                                nullptr, 0)
                            
                            if (result s< 0)
                                goto label_4737b0
                            
                            double* i_14 = arg4
                            
                            if (i_14 u> 0)
                                int32_t* esi_20 = var_5c
                                var_10 = var_64 - esi_20
                                void* eax_119 = var_44 - esi_20
                                double* i_9 = i_14
                                double* i_4
                                
                                do
                                    int32_t* edx_11 = *(*(arg1[2] + 0x14) + (*esi_20 << 2))
                                    double* ecx_80 = &var_30[*(var_10 + esi_20) * 2]
                                    long double x87_r7_29 = fconvert.t(*ecx_80)
                                    long double temp12_1 = fconvert.t(ecx_80[1])
                                    x87_r7_29 - temp12_1
                                    void* eax_121
                                    eax_121.w = (x87_r7_29 < temp12_1 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r7_29, temp12_1) ? 1 : 0) << 0xa
                                        | (x87_r7_29 == temp12_1 ? 1 : 0) << 0xe
                                    bool p_10 = unimplemented  {test ah, 0x41}
                                    
                                    if (not(p_10))
                                        *(edx_11 + 0x20) = fconvert.d(fconvert.t(*ecx_80))
                                        long double x87_r7_31 = fconvert.t(ecx_80[1])
                                        *(edx_11 + 1) |= 1
                                        int32_t eax_122 = *edx_11
                                        *(edx_11 + 0x28) = fconvert.d(x87_r7_31)
                                        long double x87_r7_32 = fconvert.t(ecx_80[1])
                                        int32_t var_6c_2 = eax_122
                                        long double x87_r6_5 = fconvert.t(*ecx_80)
                                        x87_r6_5 - x87_r7_32
                                        eax_122.w = (x87_r6_5 < x87_r7_32 ? 1 : 0) << 8
                                            | (is_unordered.t(x87_r6_5, x87_r7_32) ? 1 : 0) << 0xa
                                            | (x87_r6_5 == x87_r7_32 ? 1 : 0) << 0xe
                                        bool p_11 = unimplemented  {test ah, 0x44}
                                        
                                        if (not(p_11))
                                            *edx_11 = var_6c_2 | 0x80
                                    
                                    *edx_11 |= *(var_2c + (*(var_10 + esi_20) << 2))
                                    void* eax_128 = arg1[2]
                                    *(*(*(eax_128 + 0x14) + (*esi_20 << 2)) + 4) = *(eax_128 + 0x98)
                                    void* eax_130 = arg1[2]
                                    void* ecx_86 = *(*(eax_130 + 0x14) + (*(eax_119 + esi_20) << 2))
                                    esi_20 = &esi_20[1]
                                    i_4 = i_9
                                    i_9 -= 1
                                    *(ecx_86 + 4) = *(eax_130 + 0xac)
                                while (i_4 != 1)
                            
                            if (arg6 != 0 && eax_4 != 0)
                                result = sub_47ad82(arg1, arg6, 0)
                                
                                if (result s< 0)
                                    goto label_4737b0
                            
                            var_24 = 0xffffffff
                            result = sub_47bd3b(arg5, &var_24, 0)
                            
                            if (result s< 0)
                                goto label_4737b0
                            
                            double* i_15 = arg4
                            
                            if (i_15 u> 0)
                                int32_t* eax_134 = var_5c
                                void* ecx_90 = var_64 - eax_134
                                double* i_10 = i_15
                                double* i_5
                                
                                do
                                    *eax_134 = *(arg1[6] + (*(ecx_90 + eax_134) << 2))
                                    eax_134 = &eax_134[1]
                                    i_5 = i_10
                                    i_10 -= 1
                                while (i_5 != 1)
                            
                            int32_t* var_4c
                            
                            if (sub_46cffa(arg1, var_24, &var_ac) s< 0)
                            label_473497:
                                
                                if (var_18_1 u< var_28_1 && (*(arg1[2] + 0x70) & 4) == 0)
                                    break
                                
                                var_10 = 0xffffffff
                                result =
                                    sub_46ea58(arg1, arg3, 0x11400001, &var_10, &var_24, nullptr, 0)
                                
                                if (result s< 0)
                                    goto label_4737b0
                                
                                void* eax_141 = arg1[2]
                                *(*(*(eax_141 + 0x14) + (var_10 << 2)) + 4) = *(eax_141 + 0xa0)
                                arg1[0xc] = var_10
                                arg1[0xd] = 1
                                
                                if (arg6 != 0 && eax_4 == 0)
                                    result = sub_47ad82(arg1, arg6, 0)
                                    
                                    if (result s< 0)
                                        goto label_4737b0
                                
                                double* edx_19 = arg4
                                int32_t* var_58
                                int32_t* eax_145 = var_58
                                
                                if (edx_19 u> 0)
                                    int32_t* ecx_102 = var_64 - eax_145
                                    arg6 = edx_19
                                    double* i_6
                                    
                                    do
                                        *eax_145 = *(arg1[6] + (*(ecx_102 + eax_145) << 2))
                                        eax_145 = &eax_145[1]
                                        i_6 = arg6
                                        arg6 -= 1
                                    while (i_6 != 1)
                                
                                double* eax_147 = eax_110 | 0x10000000
                                int32_t* var_54
                                result = sub_46ea58(arg1, arg3, eax_147, var_54, var_58, nullptr, 0)
                                
                                if (result s< 0)
                                    goto label_4737b0
                                
                                int32_t ecx_104 = 0
                                
                                if (arg4 u> 0)
                                    bool cond:24_1
                                    
                                    do
                                        void* eax_149 = arg1[2]
                                        void* edx_24 = *(*(eax_149 + 0x14) + (var_54[ecx_104] << 2))
                                        ecx_104 += 1
                                        cond:24_1 = ecx_104 u< arg4
                                        *(edx_24 + 4) = *(eax_149 + 0x98)
                                    while (cond:24_1)
                                
                                arg1[0xc] = var_10
                                arg1[0xd] = 0
                                int32_t* var_50
                                result = sub_46ea58(arg1, arg3, eax_147, var_50, var_5c, nullptr, 0)
                                
                                if (result s< 0)
                                    goto label_4737b0
                                
                                int32_t ecx_106 = 0
                                
                                if (arg4 u> 0)
                                    bool cond:26_1
                                    
                                    do
                                        void* eax_153 = arg1[2]
                                        void* edx_27 = *(*(eax_153 + 0x14) + (var_50[ecx_106] << 2))
                                        ecx_106 += 1
                                        cond:26_1 = ecx_106 u< arg4
                                        *(edx_27 + 4) = *(eax_153 + 0x98)
                                    while (cond:26_1)
                                
                                arg1[0xc] = var_40
                                arg1[0xd] = 1
                                result = sub_46ea58(arg1, arg3, eax_110 | 0x20800000, var_4c, 
                                    var_54, var_50, 0)
                                
                                if (result s< 0)
                                    goto label_4737b0
                                
                                int32_t ecx_108 = 0
                                
                                if (arg4 u> 0)
                                    bool cond:27_1
                                    
                                    do
                                        void* eax_159 = arg1[2]
                                        void* edx_30 = *(*(eax_159 + 0x14) + (var_4c[ecx_108] << 2))
                                        ecx_108 += 1
                                        cond:27_1 = ecx_108 u< arg4
                                        *(edx_30 + 4) = *(eax_159 + 0x98)
                                    while (cond:27_1)
                            else
                                long double x87_r7_33 = fconvert.t(var_ac)
                                long double temp14_1 = fconvert.t(0.0)
                                x87_r7_33 - temp14_1
                                int32_t eax_135
                                eax_135.w = (x87_r7_33 < temp14_1 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r7_33, temp14_1) ? 1 : 0) << 0xa
                                    | (x87_r7_33 == temp14_1 ? 1 : 0) << 0xe
                                
                                if ((eax_135:1.b & 0x41) != 0)
                                    long double x87_r7_34 = fconvert.t(var_a4)
                                    long double temp16_1 = fconvert.t(0.0)
                                    x87_r7_34 - temp16_1
                                    eax_135.w = (x87_r7_34 < temp16_1 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r7_34, temp16_1) ? 1 : 0) << 0xa
                                        | (x87_r7_34 == temp16_1 ? 1 : 0) << 0xe
                                    bool p_12 = unimplemented  {test ah, 0x5}
                                    
                                    if (p_12)
                                        goto label_473497
                                
                                if (arg6 != 0 && eax_4 == 0)
                                    result = sub_47ad82(arg1, arg6, 0)
                                    
                                    if (result s< 0)
                                        goto label_4737b0
                                
                                double* ecx_93 = arg4
                                
                                if (ecx_93 u> 0)
                                    int32_t* eax_137 = var_4c
                                    int32_t* edx_17 = var_64 - eax_137
                                    arg6 = ecx_93
                                    double* i_7
                                    
                                    do
                                        int32_t ecx_95 = *(arg1[6] + (*(edx_17 + eax_137) << 2))
                                        *eax_137 = ecx_95
                                        
                                        if (ecx_95 == 0xffffffff)
                                            *eax_137 = arg1[9]
                                        
                                        eax_137 = &eax_137[1]
                                        i_7 = arg6
                                        arg6 -= 1
                                    while (i_7 != 1)
                            
                            result = sub_46ea58(arg1, arg3, eax_110 | 0x10000000, var_4c, var_4c, 
                                nullptr, 0)
                            
                            if (result s< 0)
                                goto label_4737b0
                            
                            int32_t ecx_110 = 0
                            
                            if (arg4 u> 0)
                                bool cond:22_1
                                
                                do
                                    void* eax_164 = arg1[2]
                                    void* edx_33 = *(*(eax_164 + 0x14) + (var_4c[ecx_110] << 2))
                                    ecx_110 += 1
                                    cond:22_1 = ecx_110 u< arg4
                                    *(edx_33 + 4) = *(eax_164 + 0x98)
                                while (cond:22_1)
                            
                            int32_t* var_48
                            result = sub_46ea58(arg1, arg3, eax_110 | 0x20900000, var_48, var_4c, 
                                var_44, 0)
                            
                            if (result s< 0)
                                goto label_4737b0
                            
                            int32_t ecx_112 = 0
                            
                            if (arg4 u> 0)
                                bool cond:25_1
                                
                                do
                                    void* eax_169 = arg1[2]
                                    void* edx_36 = *(*(eax_169 + 0x14) + (var_48[ecx_112] << 2))
                                    ecx_112 += 1
                                    cond:25_1 = ecx_112 u< arg4
                                    *(edx_36 + 4) = *(eax_169 + 0x98)
                                while (cond:25_1)
                            
                            arg1[0xc] = eax
                            arg1[0xd] = eax_1
                            result = sub_46ea58(arg1, arg3, eax_110 | 0x11500000, var_5c, var_48, 
                                nullptr, 0)
                            
                            if (result s< 0)
                                goto label_4737b0
                            
                            double* ecx_114 = arg4
                            
                            if (ecx_114 u> 0)
                                int32_t* esi_29 = var_64
                                void* eax_177 = var_5c - esi_29
                                arg6 = ecx_114
                                double* i_8
                                
                                do
                                    int32_t* edx_37 =
                                        *(*(arg1[2] + 0x14) + (*(eax_177 + esi_29) << 2))
                                    void* ecx_119 = &var_34[*esi_29 * 2]
                                    long double x87_r7_35 = fconvert.t(*ecx_119)
                                    long double temp19_1 = fconvert.t(*(ecx_119 + 8))
                                    x87_r7_35 - temp19_1
                                    int32_t eax_179
                                    eax_179.w = (x87_r7_35 < temp19_1 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r7_35, temp19_1) ? 1 : 0) << 0xa
                                        | (x87_r7_35 == temp19_1 ? 1 : 0) << 0xe
                                    bool p_13 = unimplemented  {test ah, 0x41}
                                    
                                    if (not(p_13))
                                        *(edx_37 + 0x20) = fconvert.d(fconvert.t(*ecx_119))
                                        long double x87_r7_37 = fconvert.t(*(ecx_119 + 8))
                                        *(edx_37 + 1) |= 1
                                        int32_t eax_180 = *edx_37
                                        *(edx_37 + 0x28) = fconvert.d(x87_r7_37)
                                        long double x87_r7_38 = fconvert.t(*(ecx_119 + 8))
                                        arg7 = eax_180
                                        long double x87_r6_6 = fconvert.t(*ecx_119)
                                        x87_r6_6 - x87_r7_38
                                        eax_180.w = (x87_r6_6 < x87_r7_38 ? 1 : 0) << 8
                                            | (is_unordered.t(x87_r6_6, x87_r7_38) ? 1 : 0) << 0xa
                                            | (x87_r6_6 == x87_r7_38 ? 1 : 0) << 0xe
                                        bool p_14 = unimplemented  {test ah, 0x44}
                                        
                                        if (not(p_14))
                                            *edx_37 = arg7 | 0x80
                                    
                                    *edx_37 |= *(var_20 + (*esi_29 << 2))
                                    esi_29 = &esi_29[1]
                                    i_8 = arg6
                                    arg6 -= 1
                                while (i_8 != 1)
                            
                            if (var_18_1 != 0 && var_38_1 != 0 && arg1[0x14] == 0 && arg1[0x15] == 0
                                    && sub_46ea58(arg1, arg5, 0x10000001, arg1[6] + (var_80 << 2), 
                                    &var_7c, nullptr, 0) s< 0)
                                break
                            
                            result = 0
                            goto label_4737b0
                    
                label_47379d:
                    result = 0x80004005

label_4737b0:
j__free(eax_9)
j__free(var_2c)
j__free(var_20)
j__free(var_30)
j__free(var_34)
j__free(var_84)
arg1[0xc] = eax
arg1[0xd] = eax_1
arg1[0x1a] = eax_2
arg1[0x11] -= 1
arg1[0x1b] = eax_3
return result
