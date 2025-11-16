// 函数: sub_479c26
// 地址: 0x479c26
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg7 == 0)
label_479e2a:
    sub_46e3d1(arg1, arg3, 0xdb0, "array index out of bounds")
    return 

int32_t* var_8_1 = nullptr
uint32_t var_c_1

if (arg5 == 0)
    var_c_1 = 1
else
    var_c_1 = divu.dp.d(0:arg7, arg5)

double var_38
int32_t eax_4
int32_t ecx_1
int16_t x87control_1
eax_4, ecx_1, x87control_1 = sub_46cffa(arg1, *arg8, &var_38)
double var_30

if (eax_4 s>= 0)
    long double x87_r7_1 = fconvert.t(0.0)
    long double x87_r6_1 = fconvert.t(var_38)
    x87_r6_1 - x87_r7_1
    long double x87_r6_2 = fconvert.t(var_38)
    eax_4.w = (x87_r6_1 < x87_r7_1 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
        | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe | 0x3000
    bool p_1 = unimplemented  {test ah, 0x5}
    long double x87_r6_3
    
    if (p_1)
        x87_r6_2 - x87_r7_1
        eax_4.w = (x87_r6_2 < x87_r7_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_2, x87_r7_1) ? 1 : 0) << 0xa
            | (x87_r6_2 == x87_r7_1 ? 1 : 0) << 0xe | 0x3800
        
        if ((eax_4:1.b & 0x41) != 0)
            x87_r6_3 = float.t(0)
        else
            x87_r6_3 = fconvert.t(var_38) + fconvert.t(arg1[0x16])
    else
        x87_r6_3 = x87_r6_2 - fconvert.t(arg1[0x16])
    
    var_38 = fconvert.d(x87_r6_3)
    long double x87_r6_5 = fconvert.t(var_30)
    x87_r6_5 - x87_r7_1
    eax_4.w = (x87_r6_5 < x87_r7_1 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_5, x87_r7_1) ? 1 : 0) << 0xa
        | (x87_r6_5 == x87_r7_1 ? 1 : 0) << 0xe | 0x3800
    bool p_2 = unimplemented  {test ah, 0x5}
    long double x87_r7_3
    
    if (p_2)
        long double x87_r6_6 = fconvert.t(var_30)
        x87_r6_6 - x87_r7_1
        eax_4.w = (x87_r6_6 < x87_r7_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_6, x87_r7_1) ? 1 : 0) << 0xa
            | (x87_r6_6 == x87_r7_1 ? 1 : 0) << 0xe
        
        if ((eax_4:1.b & 0x41) != 0)
            x87_r7_3 = float.t(0)
        else
            x87_r7_3 = fconvert.t(var_30) + fconvert.t(arg1[0x16])
    else
        x87_r7_3 = fconvert.t(var_30) - fconvert.t(arg1[0x16])
    
    var_30 = fconvert.d(x87_r7_3)
    int16_t var_80_2 = ecx_1.w
    bool cond:4_1 = sub_75ed12((fconvert.d(fconvert.t(var_38))).w) == 0
    int32_t* eax_5
    
    if (not(cond:4_1))
        long double x87_r7_6 = fconvert.t(var_38)
        long double temp3_1 = fconvert.t(0.0)
        x87_r7_6 - temp3_1
        eax_5.w = (x87_r7_6 < temp3_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r7_6, temp3_1) ? 1 : 0) << 0xa
            | (x87_r7_6 == temp3_1 ? 1 : 0) << 0xe
    
    if (cond:4_1 || (eax_5:1.b & 1) != 0)
        var_8_1 = nullptr
    else
        eax_5, x87control_1 = __ftol(x87control_1, fconvert.t(var_38))
        var_8_1 = eax_5
    
    long double x87_r7_8 = fconvert.t(var_30)
    long double temp4_1 = fconvert.t(0.0)
    x87_r7_8 - temp4_1
    eax_5.w = (x87_r7_8 < temp4_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_8, temp4_1) ? 1 : 0) << 0xa
        | (x87_r7_8 == temp4_1 ? 1 : 0) << 0xe
    bool p_3 = unimplemented  {test ah, 0x5}
    
    if (p_3 && var_8_1 * arg5 u< arg7)
        int32_t var_7c_3 = ecx_1
        int16_t var_80_3 = ecx_1.w
        int32_t eax_9
        
        if (sub_75ed12((fconvert.d(fconvert.t(var_30))).w) == 0)
            eax_9 = var_c_1 - 1
        else
            eax_9 = __ftol(x87control_1, fconvert.t(var_30))
        
        if (var_c_1 u> eax_9 + 1)
            var_c_1 = eax_9 + 1
        
        goto label_479d60
    
    if (arg1[0xb].d == 0)
        goto label_479e2a
    
    *(arg1 + 0x5c) = 1
    
    if (arg4 != 0)
        __builtin_memcpy(arg4, arg6, arg5 << 2)
    
    return 

label_479d60:

if (arg4 == 0)
    return 

int32_t* edi = arg6
int32_t* arg_20
int32_t* arg_18

if (arg_20 != 0)
label_479d87:
    int32_t eax_13 = 0xffffffff
    int32_t edx_3 = 0
    int32_t var_14_1 = 0
    
    if (arg7 u> 0)
        void* ecx_5 = arg1[1].d
        int32_t ecx_6 = *(ecx_5 + 0x10)
        arg_18 = *(ecx_5 + 0x14)
        
        do
            int32_t ecx_11 = *(*(ecx_6 + (*(arg_18[edi[edx_3]] + 4) << 2)) + 4)
            var_14_1 |= ecx_11
            eax_13 &= ecx_11
            edx_3 += 1
        while (edx_3 u< arg7)
    
    int32_t ebx_1 = arg5
    int32_t var_20_2 = eax_13 & 2
    int32_t ecx_19 = eax_13 & 0x40
    arg_18 = eax_13 & 0x400
    
    if ((var_14_1:2.b & 0x10) == 0)
        if (arg_18 == 0 && (*(arg1[1].d i+ 0x71) & 2) == 0)
            arg1[0xc].d = 1
    else if (var_8_1 u< arg1[0xd].d || var_c_1 u> *(arg1 + 0x6c))
        arg_18 = nullptr
        arg1[0xc].d = 1
    
    if (var_8_1 + 1 != var_c_1)
        int32_t eax_20 = ebx_1
        int32_t var_10_1 = ecx_19
        int32_t var_14_2 = ecx_19
        int32_t var_1c_1 = eax_20
        
        if (ebx_1 u< arg7)
            int32_t* var_18_1 = edi
            
            do
                if (var_10_1 == 0 && var_14_2 == 0)
                    goto label_479ed9
                
                int32_t ecx_22 = *(arg1[1].d i+ 0x14)
                void* edx_7 = *(ecx_22 + (*var_18_1 << 2))
                void* ecx_23 = *(ecx_22 + (edi[eax_20] << 2))
                
                if (*(edx_7 + 4) != *(ecx_23 + 4) || *(edx_7 + 8) != *(ecx_23 + 8))
                    var_10_1 = 0
                    var_14_2 = 0
                else
                    if (*(edx_7 + 0xc) != *(ecx_23 + 0xc))
                        var_10_1 = 0
                    
                    if (*(edx_7 + 0x10) != *(ecx_23 + 0x10))
                        var_14_2 = 0
                
                var_18_1 = &var_18_1[1]
                eax_20 = var_1c_1 + 1
                var_1c_1 = eax_20
            while (eax_20 u< arg7)
        
        if (var_14_2 == 0)
        label_479ed9:
            arg_18 = nullptr
        
        if (var_10_1 == 0 || var_14_2 == 0)
            if (arg_18 == 0)
                var_20_2 = 0
            else
                if (var_10_1 == 0)
                    void* edx_8 = arg1[1].d
                    int32_t ecx_24 = *(edx_8 + 0x14)
                    int32_t ecx_27 =
                        *(*(ecx_24 + (edi[ebx_1] << 2)) + 0xc) - *(*(ecx_24 + (*edi << 2)) + 0xc)
                    ebx_1 = arg5
                    int32_t var_14_3 = 1
                    
                    if (ebx_1 u> 1)
                        int32_t edx_9 = *(edx_8 + 0x14)
                        void* var_18_2 = &edi[ebx_1 + 1]
                        
                        do
                            if (ecx_27 != *(*(edx_9 + (*var_18_2 << 2)) + 0xc)
                                    - *(*(edx_9 + (edi[var_14_3] << 2)) + 0xc))
                                arg_18 = nullptr
                                break
                            
                            var_14_3 += 1
                            var_18_2 += 4
                        while (var_14_3 u< arg5)
                        
                        ebx_1 = arg5
                
                if (arg_18 == 0)
                    var_20_2 = 0
            
            if (arg_20 == 0 || var_20_2 != 0)
                if (arg_18 != 0)
                    int32_t* eax_34 = 1
                    
                    if (arg7 u> ebx_1)
                        int32_t eax_36 = *(arg1[1].d i+ 0x14)
                        eax_34 = *(*(eax_36 + (edi[ebx_1] << 2)) + 0xc)
                            - *(*(eax_36 + (*edi << 2)) + 0xc)
                    
                    arg7 = *arg8
                    
                    if (eax_34 == 1 && (*(arg1[1].d i+ 0x6f) & eax_34.b) != 0)
                        goto label_47a0da
                    
                    void* ecx_33 = arg1[1].d
                    arg8 = eax_34
                    long double x87_r7_11 = float.t(arg8)
                    
                    if (eax_34 s< 0)
                        x87_r7_11 = x87_r7_11 + fconvert.t(4294967296.0)
                    
                    void* var_7c_6 = ecx_33
                    void* var_80_6 = ecx_33
                    var_80_6.q = fconvert.d(x87_r7_11)
                    int32_t* eax_38 = sub_49f544(ecx_33, *(ecx_33 + 0x78), 0, 0, var_80_6)
                    arg_20 = eax_38
                    
                    if (eax_38 != 0xffffffff)
                        int32_t* ecx_34 = arg7
                        int32_t var_3c = 0xffffffff
                        int32_t** edi_2 = &var_38
                        *edi_2 = 0xffffffff
                        void* edi_3 = &edi_2[1]
                        *edi_3 = 0xffffffff
                        void* edi_4 = edi_3 + 4
                        *edi_4 = 0xffffffff
                        *(edi_4 + 4) = 0xffffffff
                        
                        if ((**(*(arg1[1].d i+ 0x14) + (ecx_34 << 2)) & 2) != 0)
                            goto label_47a0c7
                        
                        if (sub_46ea58(arg1, arg3, 0x10200001, &var_3c, &arg7, nullptr, 4, arg2.b)
                                s>= 0 && sub_46ea58(arg1, arg3, 0x10400001, &var_38, &var_3c, nullptr, 4)
                                s>= 0 && sub_46ea58(arg1, arg3, 0x10100001, &var_38:4, &var_38, nullptr, 8)
                                s>= 0 && sub_46ea58(arg1, arg3, 0x20400001, &var_30, &var_38:4, &var_3c, 6)
                                s>= 0)
                            arg7 = var_30.d
                        label_47a0c7:
                            
                            if (sub_46ea58(arg1, arg3, 0x20500001, &var_30:4, &arg7, &arg_20, 2, 
                                    arg2.b) s>= 0)
                                arg7 = var_30:4.d
                            label_47a0da:
                                void* eax_49 = arg1[1].d
                                int32_t* ecx_43 = *(*(*(eax_49 + 0x14) + (*arg6 << 2)) + 8)
                                arg8 = ecx_43
                                
                                if (ecx_43 == 0xffffffff)
                                    goto label_47a1dd
                                
                                *(*(*(eax_49 + 0x14) + (ecx_43 << 2)) + 4) = *(eax_49 + 0x88)
                                int32_t* ecx_45 = arg8
                                var_3c = 0xffffffff
                                int32_t** edi_8 = &var_38
                                *edi_8 = 0xffffffff
                                void* edi_9 = &edi_8[1]
                                *edi_9 = 0xffffffff
                                void* edi_10 = edi_9 + 4
                                *edi_10 = 0xffffffff
                                *(edi_10 + 4) = 0xffffffff
                                
                                if ((**(*(arg1[1].d i+ 0x14) + (ecx_45 << 2)) & 2) != 0)
                                    goto label_47a1c5
                                
                                if (sub_46ea58(arg1, arg3, 0x10200001, &var_3c, &arg8, nullptr, 4, 
                                        arg2.b) s>= 0 && sub_46ea58(arg1, arg3, 0x10400001, &var_38, 
                                        &var_3c, nullptr, 4) s>= 0 && sub_46ea58(arg1, arg3, 0x10100001, 
                                        &var_38:4, &var_38, nullptr, 8) s>= 0 && sub_46ea58(arg1, arg3, 
                                        0x20400001, &var_30, &var_38:4, &var_3c, 6) s>= 0)
                                    arg8 = var_30.d
                                label_47a1c5:
                                    
                                    if (sub_46ea58(arg1, arg3, 0x20400001, &var_30:4, &arg8, &arg7, 
                                            0, arg2.b) s>= 0)
                                        arg7 = var_30:4.d
                                    label_47a1dd:
                                        
                                        if (*(arg1[1].d i+ 0x30) == 0)
                                            goto label_47a223
                                        
                                        arg_20 = 0xffffffff
                                        
                                        if (sub_46ea58(arg1, arg3, 0x10000001, &arg_20, &arg7, 
                                                nullptr, 4, arg2.b) s>= 0)
                                            int32_t* ecx_52 = arg_20
                                            void* eax_63 = arg1[1].d
                                            arg7 = ecx_52
                                            *(*(*(eax_63 + 0x14) + (ecx_52 << 2)) + 4) =
                                                *(eax_63 + 0x8c)
                                        label_47a223:
                                            arg_20 = nullptr
                                            
                                            if (arg5 u> 0)
                                                int32_t* ebx_12 = arg4 - arg6
                                                arg3 = arg6
                                                arg4 = ebx_12
                                                
                                                do
                                                    void* ecx_54 = arg1[1].d
                                                    void* var_7c_7 = ecx_54
                                                    void* var_80_11 = ecx_54
                                                    var_80_11.q = fconvert.d(float.t(0))
                                                    int32_t eax_66 = sub_49f544(ecx_54, 
                                                        *(ecx_54 + 0x88), 0, 0, var_80_11)
                                                    *(ebx_12 + arg3) = eax_66
                                                    
                                                    if (eax_66 == 0xffffffff)
                                                        break
                                                    
                                                    int32_t ecx_57 = *(arg1[1].d i+ 0x14)
                                                    int32_t* edi_14 = *(ecx_57 + (eax_66 << 2))
                                                    sub_49f070(edi_14, *(ecx_57 + (*arg3 << 2)))
                                                    edi_14[0xd] = 0xffffffff
                                                    edi_14[2] = arg7
                                                    *edi_14 = 0x1f
                                                    *(edi_14 + 0x20) =
                                                        fconvert.d(fconvert.t(arg1[0x14]))
                                                    *(edi_14 + 0x28) =
                                                        fconvert.d(fconvert.t(arg1[0x15]))
                                                    
                                                    if (var_8_1 u< var_c_1)
                                                        void* i_9 = var_c_1 - var_8_1
                                                        void* ebx_13 =
                                                            arg6 + ((var_8_1 * arg5 + arg_20) << 2)
                                                        void* i
                                                        
                                                        do
                                                            int32_t* ecx_62 =
                                                                *(*(arg1[1].d i+ 0x14) + (*ebx_13 << 2))
                                                            *edi_14 &= *ecx_62
                                                            
                                                            if ((*(ecx_62 + 1) & 1) != 0)
                                                                long double x87_r7_15 =
                                                                    fconvert.t(*(edi_14 + 0x20))
                                                                long double temp7_1 =
                                                                    fconvert.t(*(ecx_62 + 0x20))
                                                                x87_r7_15 - temp7_1
                                                                int32_t eax_74
                                                                eax_74.w =
                                                                    (x87_r7_15 < temp7_1 ? 1 : 0) << 8 | (
                                                                    is_unordered.t(x87_r7_15, temp7_1) ? 1
                                                                    : 0) << 0xa
                                                                    | (x87_r7_15 == temp7_1 ? 1 : 0) << 0xe
                                                                
                                                                if ((eax_74:1.b & 0x41) == 0)
                                                                    *(edi_14 + 0x20) =
                                                                        fconvert.d(fconvert.t(*(ecx_62 + 0x20)))
                                                                
                                                                long double x87_r7_17 =
                                                                    fconvert.t(*(edi_14 + 0x28))
                                                                long double temp8_1 =
                                                                    fconvert.t(*(ecx_62 + 0x28))
                                                                x87_r7_17 - temp8_1
                                                                eax_74.w =
                                                                    (x87_r7_17 < temp8_1 ? 1 : 0) << 8 | (
                                                                    is_unordered.t(x87_r7_17, temp8_1) ? 1
                                                                    : 0) << 0xa
                                                                    | (x87_r7_17 == temp8_1 ? 1 : 0) << 0xe
                                                                bool p_4 = unimplemented  {test ah, 0x5}
                                                                
                                                                if (not(p_4))
                                                                    *(edi_14 + 0x28) =
                                                                        fconvert.d(fconvert.t(*(ecx_62 + 0x28)))
                                                            
                                                            ebx_13 += arg5 << 2
                                                            i = i_9
                                                            i_9 -= 1
                                                        while (i != 1)
                                                        ebx_12 = arg4
                                                    
                                                    long double x87_r7_19 =
                                                        fconvert.t(*(edi_14 + 0x20))
                                                    long double temp5_1 =
                                                        fconvert.t(*(edi_14 + 0x28))
                                                    x87_r7_19 - temp5_1
                                                    int32_t* eax_69
                                                    eax_69.w = (x87_r7_19 < temp5_1 ? 1 : 0) << 8
                                                        | (is_unordered.t(x87_r7_19, temp5_1) ? 1
                                                        : 0) << 0xa
                                                        | (x87_r7_19 == temp5_1 ? 1 : 0) << 0xe
                                                    bool p_5 = unimplemented  {test ah, 0x41}
                                                    
                                                    if (not(p_5))
                                                        *(edi_14 + 1) |= 1
                                                    
                                                    long double x87_r7_20 =
                                                        fconvert.t(*(edi_14 + 0x28))
                                                    long double x87_r6_7 =
                                                        fconvert.t(*(edi_14 + 0x20))
                                                    x87_r6_7 - x87_r7_20
                                                    eax_69.w = (x87_r6_7 < x87_r7_20 ? 1 : 0) << 8
                                                        | (is_unordered.t(x87_r6_7, x87_r7_20) ? 1
                                                        : 0) << 0xa
                                                        | (x87_r6_7 == x87_r7_20 ? 1 : 0) << 0xe
                                                    bool p_6 = unimplemented  {test ah, 0x44}
                                                    
                                                    if (not(p_6))
                                                        *edi_14 |= 0x80
                                                    
                                                    arg_20 += 1
                                                    arg3 += 4
                                                while (arg_20 u< arg5)
                else if ((not.d(var_14_1 u>> 7) & 1) != 0)
                    void* eax_78 = arg1[1].d
                    
                    if ((**(*(eax_78 + 0x14) + (*arg8 << 2)) & 1) == 0)
                        int32_t* ebx_15 = var_c_1 - var_8_1
                        arg7 = ebx_15
                        int32_t* var_6c
                        int32_t* var_68
                        int32_t* var_64
                        int32_t** var_60
                        int32_t* var_5c
                        int32_t* var_58
                        int32_t* var_54
                        int32_t* var_50
                        int32_t* var_4c
                        int32_t* var_48
                        int32_t* var_44
                        
                        if (ebx_15 u> 4
                                || ((arg5 != 1 || ecx_19 != 0) && (arg5 u> 4 || var_10_1 == 0)))
                            if (arg1[0xb].d != 0)
                                arg1[0xc].d = 1
                            
                            void* edi_27 = ebx_15 * 3 + arg5
                            int32_t eax_120 = sub_46cb79(arg1, edi_27 * 2 + 4)
                            
                            if (eax_120 != 0)
                                sub_46cc96(eax_120, edi_27 * 2 + 4)
                                int32_t eax_121 = eax_120
                                
                                for (int32_t i_1 = 0; i_1 u< 4; i_1 += 1)
                                    (&var_6c)[i_1] = eax_121
                                    eax_121 += 4
                                
                                for (int32_t i_2 = 4; i_2 u< 0xa; i_2 += 1)
                                    (&var_6c)[i_2] = eax_121
                                    eax_121 += ebx_15 << 2
                                
                                for (int32_t i_3 = 0xa; i_3 u< 0xc; i_3 += 1)
                                    (&var_6c)[i_3] = eax_121
                                    eax_121 += arg5 << 2
                                
                                int32_t* eax_123 = *arg8
                                void* ecx_104 = arg1[1].d
                                arg_20 = eax_123
                                
                                if ((**(*(ecx_104 + 0x14) + (eax_123 << 2)) & 2) != 0)
                                    goto label_47a901
                                
                                if (sub_46ea58(arg1, arg3, 0x10200001, var_6c, &arg_20, nullptr, 4, 
                                        arg2.b) s>= 0 && sub_46ea58(arg1, arg3, 0x10400001, var_68, var_6c, 
                                        nullptr, 4) s>= 0 && sub_46ea58(arg1, arg3, 0x10100001, var_64, 
                                        var_68, nullptr, 8) s>= 0 && sub_46ea58(arg1, arg3, 0x20400001, 
                                        var_60, var_64, var_6c, 6) s>= 0)
                                    eax_123 = *var_60
                                    arg_20 = eax_123
                                label_47a901:
                                    int32_t* ecx_112 = arg1[1].d
                                    
                                    if ((*(ecx_112 + 0x71) & 2) == 0 || arg7 u> 4)
                                        int32_t* edi_30 = var_58
                                        int32_t ebx_22 = 0
                                        
                                        if (arg7 u> 0)
                                            arg8 = var_5c - edi_30
                                            
                                            while (true)
                                                *(arg8 + edi_30) = eax_123
                                                void* ecx_125 = arg1[1].d
                                                void* eax_142 = var_8_1 + ebx_22
                                                arg_18 = eax_142
                                                long double x87_r7_35 = float.t(arg_18)
                                                
                                                if (eax_142 s< 0)
                                                    x87_r7_35 = x87_r7_35 + fconvert.t(4294967296.0)
                                                
                                                void* var_7c_25 = ecx_125
                                                void* var_80_32 = ecx_125
                                                var_80_32.q = fconvert.d(fneg(x87_r7_35))
                                                int32_t eax_143 = sub_49f544(ecx_125, 
                                                    *(ecx_125 + 0x78), 0, 0, var_80_32)
                                                *edi_30 = eax_143
                                                
                                                if (eax_143 == 0xffffffff)
                                                    return 
                                                
                                                ebx_22 += 1
                                                edi_30 = &edi_30[1]
                                                
                                                if (ebx_22 u>= arg7)
                                                    break
                                                
                                                eax_123 = arg_20
                                        
                                        void* edi_32 = arg7 & 0xfffff
                                        
                                        if (sub_46ea58(arg1, arg3, edi_32 | 0x20400000, var_54, 
                                            var_5c, var_58, 2, arg2.b) s>= 0 && sub_471474(arg1, 
                                            edi_32, arg3, var_50, var_4c, var_54, arg7) s>= 0 &&
                                            sub_46ea58(arg1, arg3, edi_32 | 0x20300000, var_48, 
                                            var_4c, var_50, 0x17) s>= 0)
                                        label_47ab41:
                                            int32_t eax_149 = 0
                                            
                                            if (arg5 u> 0)
                                                do
                                                    arg4[eax_149] = *(arg1 + 0x24)
                                                    eax_149 += 1
                                                while (eax_149 u< arg5)
                                            
                                            bool cond:29_1 = arg7 u<= 0
                                            arg_18 = nullptr
                                            
                                            if (not(cond:29_1))
                                                arg8 = var_48
                                                arg6 += (var_8_1 * arg5) << 2
                                                
                                                do
                                                    int32_t i_10 = arg5
                                                    int32_t* var_40
                                                    
                                                    if (i_10 u> 0)
                                                        int32_t* eax_154 = arg4
                                                        void* ecx_131 = var_44 - eax_154
                                                        void* edx_29 = var_40 - eax_154
                                                        int32_t i_4
                                                        
                                                        do
                                                            *(ecx_131 + eax_154) = *arg8
                                                            *(edx_29 + eax_154) = *eax_154
                                                            eax_154 = &eax_154[1]
                                                            i_4 = i_10
                                                            i_10 -= 1
                                                        while (i_4 != 1)
                                                    
                                                    sub_46cc96(arg4, arg5)
                                                    char eax_156 = (*(arg1[1].d i+ 0x6c)).b
                                                    int32_t eax_157
                                                    
                                                    if (eax_156 s>= 0 || (eax_156 & 4) != 0)
                                                        int32_t edi_36 = arg5 & 0xfffff
                                                        
                                                        if (sub_46ea58(arg1, arg3, 
                                                                edi_36 | 0x20500000, arg4, var_44, 
                                                                arg6, 0, arg2.b) s< 0)
                                                            break
                                                        
                                                        eax_157 = sub_46ea58(arg1, arg3, 
                                                            edi_36 | 0x20400000, arg4, arg4, 
                                                            var_40, 0)
                                                    else
                                                        eax_157 = sub_470b6a(arg1, i_10, arg3, 
                                                            arg4, var_40, arg6, var_44, arg5)
                                                    
                                                    if (eax_157 s< 0)
                                                        break
                                                    
                                                    arg_18 += 1
                                                    arg8 = &arg8[1]
                                                    arg6 += arg5 << 2
                                                while (arg_18 u< arg7)
                                    else
                                        if (var_8_1 u<= 0)
                                            goto label_47a978
                                        
                                        arg8 = var_8_1
                                        long double x87_r7_29 = float.t(arg8)
                                        
                                        if (var_8_1 s< 0)
                                            x87_r7_29 = x87_r7_29 + fconvert.t(4294967296.0)
                                        
                                        int32_t* var_7c_22 = ecx_112
                                        int32_t* var_80_28 = ecx_112
                                        var_80_28.q = fconvert.d(fneg(x87_r7_29))
                                        int32_t* eax_130 =
                                            sub_49f544(ecx_112, ecx_112[0x1e], 0, 0, var_80_28)
                                        arg_18 = eax_130
                                        
                                        if (eax_130 != 0xffffffff)
                                            arg8 = 0xffffffff
                                            int32_t eax_131
                                            eax_131, ecx_112 = sub_46ea58(arg1, arg3, 0x20400001, 
                                                &arg8, &arg_20, &arg_18, 4, arg2.b)
                                            
                                            if (eax_131 s>= 0)
                                                arg_20 = arg8
                                            label_47a978:
                                                
                                                if (*(arg1[1].d i+ 0x30) == 0)
                                                    goto label_47a9bb
                                                
                                                arg8 = 0xffffffff
                                                
                                                if (sub_46ea58(arg1, arg3, 0x10000001, &arg8, 
                                                        &arg_20, nullptr, 4, arg2.b) s>= 0)
                                                    int32_t* ecx_114 = arg8
                                                    void* eax_135 = arg1[1].d
                                                    arg_20 = ecx_114
                                                    ecx_112 = *(*(eax_135 + 0x14) + (ecx_114 << 2))
                                                    ecx_112[1] = *(eax_135 + 0x8c)
                                                label_47a9bb:
                                                    
                                                    if (arg1[9].d != 0xffffffff)
                                                    label_47aa18:
                                                        int32_t ebx_21 = 0
                                                        
                                                        if (arg7 u> 0)
                                                            bool cond:32_1
                                                            
                                                            do
                                                                int32_t* var_7c_24 = ecx_112
                                                                int32_t* var_80_31 = ecx_112
                                                                var_80_31.q = fconvert.d(float.t(0))
                                                                int32_t eax_139 = sub_49f544(arg1[1].d, 
                                                                    arg1[9].d, 0, ebx_21, var_80_31)
                                                                var_48[ebx_21] = eax_139
                                                                
                                                                if (eax_139 == 0xffffffff)
                                                                    return 
                                                                
                                                                int32_t* eax_140 =
                                                                    *(*(arg1[1].d i+ 0x14) + (eax_139 << 2))
                                                                ecx_112 = arg_20
                                                                *(eax_140 + 0x20) =
                                                                    fconvert.d(float.t(0))
                                                                ebx_21 += 1
                                                                cond:32_1 = ebx_21 u< arg7
                                                                *(eax_140 + 0x28) =
                                                                    fconvert.d(float.t(1))
                                                                eax_140[2] = ecx_112
                                                                *eax_140 = 0x117
                                                            while (cond:32_1)
                                                        
                                                        goto label_47ab41
                                                    
                                                    int32_t eax_137
                                                    eax_137, ecx_112 =
                                                        sub_49f4eb(arg1[1].d, 0xabff58, 0x751, 4, 4)
                                                    arg1[9].d = eax_137
                                                    
                                                    if (eax_137 != 0xffffffff)
                                                        for (int32_t i_5 = 0; i_5 u< 4; i_5 += 1)
                                                            for (int32_t j = 0; j u< 4; j += 1)
                                                                long double x87_r7_31
                                                                
                                                                if (i_5 != j)
                                                                    x87_r7_31 = float.t(0)
                                                                else
                                                                    x87_r7_31 = float.t(1)
                                                                
                                                                int32_t* var_7c_23 = ecx_112
                                                                int32_t* var_80_30 = ecx_112
                                                                var_80_30.q = fconvert.d(x87_r7_31)
                                                                int32_t eax_138
                                                                eax_138, ecx_112 = sub_49f544(
                                                                    arg1[1].d, arg1[9].d, i_5, j, var_80_30)
                                                                
                                                                if (eax_138 == 0xffffffff)
                                                                    return 
                                                        
                                                        goto label_47aa18
                        else
                            if (arg1[0xb].d != 0 && (arg5 u> 1 || (*(eax_78 + 0x71) & 2) == 0))
                                arg1[0xc].d = 1
                            
                            int32_t eax_83 = sub_46cb79(arg1, ebx_15 * 7 + 4)
                            
                            if (eax_83 != 0)
                                sub_46cc96(eax_83, ebx_15 * 7 + 4)
                                int32_t eax_84 = eax_83
                                
                                for (int32_t i_6 = 0; i_6 u< 4; i_6 += 1)
                                    (&var_6c)[i_6] = eax_84
                                    eax_84 += 4
                                
                                for (int32_t i_7 = 4; i_7 u< 0xb; i_7 += 1)
                                    (&var_6c)[i_7] = eax_84
                                    eax_84 += ebx_15 << 2
                                
                                int32_t* eax_86 = *arg8
                                void* ecx_73 = arg1[1].d
                                arg_20 = eax_86
                                
                                if ((**(*(ecx_73 + 0x14) + (eax_86 << 2)) & 2) != 0 || (
                                        (*(ecx_73 + 0x71) & 2) != 0 && (*(ecx_73 + 0x6f) & 1) != 0))
                                    goto label_47a524
                                
                                if (sub_46ea58(arg1, arg3, 0x10200001, var_6c, &arg_20, nullptr, 4, 
                                        arg2.b) s>= 0 && sub_46ea58(arg1, arg3, 0x10400001, var_68, var_6c, 
                                        nullptr, 4) s>= 0 && sub_46ea58(arg1, arg3, 0x10100001, var_64, 
                                        var_68, nullptr, 8) s>= 0 && sub_46ea58(arg1, arg3, 0x20400001, 
                                        var_60, var_64, var_6c, 6) s>= 0)
                                    eax_86 = *var_60
                                    arg_20 = eax_86
                                label_47a524:
                                    int32_t* ecx_79 = arg1[1].d
                                    
                                    if ((*(ecx_79 + 0x71) & 2) == 0)
                                        int32_t* edi_19 = var_58
                                        int32_t ebx_18 = 0
                                        
                                        if (arg7 u> 0)
                                            arg8 = var_5c - edi_19
                                            
                                            while (true)
                                                *(arg8 + edi_19) = eax_86
                                                void* ecx_92 = arg1[1].d
                                                void* eax_105 = var_8_1 + ebx_18
                                                arg_18 = eax_105
                                                long double x87_r7_27 = float.t(arg_18)
                                                
                                                if (eax_105 s< 0)
                                                    x87_r7_27 = x87_r7_27 + fconvert.t(4294967296.0)
                                                
                                                void* var_7c_17 = ecx_92
                                                void* var_80_20 = ecx_92
                                                var_80_20.q = fconvert.d(fneg(x87_r7_27))
                                                int32_t eax_106 = sub_49f544(ecx_92, 
                                                    *(ecx_92 + 0x78), 0, 0, var_80_20)
                                                *edi_19 = eax_106
                                                
                                                if (eax_106 == 0xffffffff)
                                                    return 
                                                
                                                ebx_18 += 1
                                                edi_19 = &edi_19[1]
                                                
                                                if (ebx_18 u>= arg7)
                                                    break
                                                
                                                eax_86 = arg_20
                                        
                                        void* edi_21 = arg7 & 0xfffff
                                        
                                        if (sub_46ea58(arg1, arg3, edi_21 | 0x20400000, var_54, 
                                            var_5c, var_58, 2, arg2.b) s>= 0 && sub_471474(arg1, 
                                            edi_21, arg3, var_50, var_4c, var_54, arg7) s>= 0 &&
                                            sub_46ea58(arg1, arg3, edi_21 | 0x20300000, var_48, 
                                            var_4c, var_50, 0x17) s>= 0)
                                        label_47a760:
                                            sub_46cc96(arg4, arg5)
                                            arg8 = nullptr
                                            
                                            if (arg5 u> 0)
                                                void* edi_25 = (arg7 & 0xfffff) | 0x50000000
                                                
                                                do
                                                    int32_t edx_22 = 0
                                                    
                                                    if (arg7 u> 0)
                                                        void* eax_116 =
                                                            arg6 + ((var_8_1 * arg5 + arg8) << 2)
                                                        
                                                        do
                                                            var_44[edx_22] = *eax_116
                                                            edx_22 += 1
                                                            eax_116 += arg5 << 2
                                                        while (edx_22 u< arg7)
                                                    
                                                    if (sub_46ea58(arg1, arg3, edi_25, arg4, 
                                                            var_44, var_48, 0, arg2.b) s< 0)
                                                        break
                                                    
                                                    arg8 += 1
                                                    arg4 = &arg4[1]
                                                while (arg8 u< arg5)
                                    else
                                        if (var_8_1 u<= 0)
                                            goto label_47a591
                                        
                                        arg8 = var_8_1
                                        long double x87_r7_21 = float.t(arg8)
                                        
                                        if (var_8_1 s< 0)
                                            x87_r7_21 = x87_r7_21 + fconvert.t(4294967296.0)
                                        
                                        int32_t* var_7c_14 = ecx_79
                                        int32_t* var_80_16 = ecx_79
                                        var_80_16.q = fconvert.d(fneg(x87_r7_21))
                                        int32_t* eax_93 =
                                            sub_49f544(ecx_79, ecx_79[0x1e], 0, 0, var_80_16)
                                        arg_18 = eax_93
                                        
                                        if (eax_93 != 0xffffffff)
                                            arg8 = 0xffffffff
                                            int32_t eax_94
                                            eax_94, ecx_79 = sub_46ea58(arg1, arg3, 0x20400001, 
                                                &arg8, &arg_20, &arg_18, 4, arg2.b)
                                            
                                            if (eax_94 s>= 0)
                                                arg_20 = arg8
                                            label_47a591:
                                                
                                                if (*(arg1[1].d i+ 0x30) == 0)
                                                    goto label_47a5d4
                                                
                                                arg8 = 0xffffffff
                                                
                                                if (sub_46ea58(arg1, arg3, 0x10000001, &arg8, 
                                                        &arg_20, nullptr, 4, arg2.b) s>= 0)
                                                    int32_t* ecx_81 = arg8
                                                    void* eax_98 = arg1[1].d
                                                    arg_20 = ecx_81
                                                    ecx_79 = *(*(eax_98 + 0x14) + (ecx_81 << 2))
                                                    ecx_79[1] = *(eax_98 + 0x8c)
                                                label_47a5d4:
                                                    
                                                    if (arg1[9].d != 0xffffffff)
                                                    label_47a631:
                                                        int32_t ebx_17 = 0
                                                        
                                                        if (arg7 u> 0)
                                                            bool cond:33_1
                                                            
                                                            do
                                                                int32_t* var_7c_16 = ecx_79
                                                                int32_t* var_80_19 = ecx_79
                                                                var_80_19.q = fconvert.d(float.t(0))
                                                                int32_t eax_102 = sub_49f544(arg1[1].d, 
                                                                    arg1[9].d, 0, ebx_17, var_80_19)
                                                                var_48[ebx_17] = eax_102
                                                                
                                                                if (eax_102 == 0xffffffff)
                                                                    return 
                                                                
                                                                int32_t* eax_103 =
                                                                    *(*(arg1[1].d i+ 0x14) + (eax_102 << 2))
                                                                ecx_79 = arg_20
                                                                *(eax_103 + 0x20) =
                                                                    fconvert.d(float.t(0))
                                                                ebx_17 += 1
                                                                cond:33_1 = ebx_17 u< arg7
                                                                *(eax_103 + 0x28) =
                                                                    fconvert.d(float.t(1))
                                                                eax_103[2] = ecx_79
                                                                *eax_103 = 0x117
                                                            while (cond:33_1)
                                                        
                                                        goto label_47a760
                                                    
                                                    int32_t eax_100
                                                    eax_100, ecx_79 =
                                                        sub_49f4eb(arg1[1].d, 0xabff58, 0x751, 4, 4)
                                                    arg1[9].d = eax_100
                                                    
                                                    if (eax_100 != 0xffffffff)
                                                        for (int32_t i_8 = 0; i_8 u< 4; i_8 += 1)
                                                            for (int32_t j_1 = 0; j_1 u< 4; 
                                                                    j_1 += 1)
                                                                long double x87_r7_23
                                                                
                                                                if (i_8 != j_1)
                                                                    x87_r7_23 = float.t(0)
                                                                else
                                                                    x87_r7_23 = float.t(1)
                                                                
                                                                int32_t* var_7c_15 = ecx_79
                                                                int32_t* var_80_18 = ecx_79
                                                                var_80_18.q = fconvert.d(x87_r7_23)
                                                                int32_t eax_101
                                                                eax_101, ecx_79 = sub_49f544(arg1[1].d, 
                                                                    arg1[9].d, i_8, j_1, var_80_18)
                                                                
                                                                if (eax_101 == 0xffffffff)
                                                                    return 
                                                        
                                                        goto label_47a631
                    else
                        int32_t* eax_79 = sub_46cb79(arg1, ebx_1)
                        
                        if (eax_79 != 0)
                            int32_t eax_80 = 0
                            
                            if (ebx_1 u> 0)
                                do
                                    eax_79[eax_80] = *arg8
                                    eax_80 += 1
                                while (eax_80 u< ebx_1)
                            
                            sub_46cc96(arg4, ebx_1)
                            sub_470b6a(arg1, edi, arg3, arg4, edi, &edi[ebx_1], eax_79, ebx_1)
                else if (arg1[0xb].d != 0)
                    arg1[0xc].d = 1
                else
                    sub_46e3d1(arg1, arg3, 0xdb8, 
                        "sampler array index must be a literal expression")
            else if (arg1[0xb].d == 0 || *(arg1 + 0x44) == 0)
                sub_46e3d1(arg1, arg3, 0xdac, 
                    "array reference cannot be used as an l-value; not natively addressable")
        else
            __builtin_memcpy(arg4, edi, ebx_1 << 2)
    else
        __builtin_memcpy(arg4, &edi[var_8_1 * ebx_1], ebx_1 << 2)
else if (sub_4717ca(arg1, arg_18, edi, arg7) s>= 0)
    goto label_479d87
