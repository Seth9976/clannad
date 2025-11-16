// 函数: sub_47caed
// 地址: 0x47caed
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t esi
__builtin_memcpy(arg1[3], esi, arg1[-3] << 2)
int32_t i_10 = arg1[-3]
int32_t* entry_ebx
int32_t result

if (arg1[3] == 0)
    result = 0
else
    int32_t eax_71 = entry_ebx[0x27]
    
    if (i_10 u<= eax_71)
        goto label_47cd8f
    
    int32_t i
    
    if (eax_71 == 0)
        i = 0x10
    else
        i = eax_71 * 2
    
    for (; i u< i_10; i *= 2)
    
    int32_t eax_3 = sub_745f3f(i << 3)
    arg1[4] = eax_3
    
    if (eax_3 == 0)
        sub_46e3d1(entry_ebx, arg1[2], 0, "internal error: out of memory")
        result = 0x8007000e
    else
        j__free(entry_ebx[0x26])
        entry_ebx[0x26] = arg1[4]
        entry_ebx[0x27] = i
    label_47cd8f:
        int32_t eax_5 = entry_ebx[0x26]
        arg1[-3] = eax_5
        int32_t eax_6 = eax_5 + (i_10 << 2)
        arg1[-9] = eax_6
        sub_46e543(entry_ebx, *(arg1[2] + 0x10), eax_6)
        arg1[4] = 0
        arg1[-4] = 0
        arg1[-6] = 0
        
        if (i_10 u<= 0)
        label_47d2dc:
            
            if (i_10 u<= 0)
                result = 0
            else
                int32_t* esi_15 = arg1[-9]
                arg1[-8] = arg1[3] - esi_15
                arg1[3] = i_10
                int32_t i_1
                
                do
                    int32_t* ecx_45 = *(*(entry_ebx[2] + 0x14) + (*(arg1[-8] + esi_15) << 2))
                    int32_t eax_67 = (*esi_15 & 0xf1ffffff) | *ecx_45
                    *ecx_45 = eax_67
                    int32_t edi_2 = eax_67 & 0xe000000
                    int32_t edx_13 = *esi_15 & 0xe000000
                    
                    if (edi_2 == 0)
                        edi_2 = edx_13
                    
                    if (ecx_45[0x17] != 0)
                        if (edi_2 u> edx_13)
                            edx_13 = edi_2
                    else if (edi_2 u< edx_13)
                        edx_13 = edi_2
                    
                    esi_15 = &esi_15[1]
                    i_1 = arg1[3]
                    arg1[3] -= 1
                    *ecx_45 = (eax_67 & 0xf1ffffff) | edx_13
                while (i_1 != 1)
                result = 0
        else
            int32_t ecx_3 = arg1[-9]
            int32_t edx_1 = arg1[-3]
            int32_t eax_9 = arg1[3] - ecx_3
            arg1[-7] = ecx_3
            arg1[-7] -= edx_1
            arg1[-5] = edx_1
            arg1[-8] = eax_9
            
            while (true)
                int32_t* edx_3 = arg1[-5] + arg1[-7]
                int32_t ecx_5 = *(edx_3 + eax_9)
                void* eax_10 = entry_ebx[2]
                char* ecx_6
                
                if (ecx_5 u>= *(eax_10 + 8))
                    ecx_6 = nullptr
                else
                    ecx_6 = *(*(eax_10 + 0x14) + (ecx_5 << 2))
                
                if (ecx_6 == 0)
                    sub_46e3d1(entry_ebx, nullptr, 0, "internal error: result register invalid")
                    result = 0x80004005
                    goto label_47d361
                
                int32_t eax_11 = *(eax_10 + 0x74)
                int32_t esi_2 = *(ecx_6 + 4)
                
                if (eax_11 == esi_2)
                    *arg1[-5] = 0
                else if ((*edx_3 & 1) != 0 && (*ecx_6 & 1) == 0)
                    int32_t* eax_12 = arg1[-5]
                    arg1[4] += 1
                    *eax_12 = 1
                else if (eax_11 == esi_2 || (*edx_3 & 2) == 0 || (*ecx_6 & 2) != 0)
                    *arg1[-5] = 0
                else
                    int32_t* eax_13 = arg1[-5]
                    arg1[-4] += 1
                    *eax_13 = 2
                
                arg1[-6] += 1
                arg1[-5] += 4
                
                if (arg1[-6] u>= i_10)
                    break
                
                eax_9 = arg1[-8]
            
            if (arg1[4] == 0)
            label_47cf68:
                
                if (arg1[-4] == 0)
                    goto label_47d2dc
                
                int32_t esi_10 = arg1[-4]
                int32_t eax_25 = sub_46cb79(entry_ebx, esi_10 * 0xb)
                
                if (eax_25 != 0)
                    for (int32_t i_2 = 0; i_2 u< 0xb; )
                        arg1[i_2 - 0x19] = eax_25
                        i_2 += 1
                        eax_25 += esi_10 << 2
                    
                    int32_t* eax_26 = arg1[3]
                    int32_t* edx_7 = arg1[-0xf]
                    int32_t* ecx_20 = arg1[-3] - eax_26
                    void* esi_12 = arg1[-0x19] - edx_7
                    arg1[-6] = ecx_20
                    arg1[-5] = esi_12
                    arg1[4] = i_10
                    int32_t i_3
                    
                    do
                        if (*(ecx_20 + eax_26) == 2)
                            *(arg1[-5] + edx_7) = *eax_26
                            int32_t ecx_23
                            
                            if (*(arg1[2] + 0x1c) == 0)
                                ecx_23 = 0xffffffff
                            else
                                ecx_23 = *eax_26
                            
                            *edx_7 = ecx_23
                            ecx_20 = arg1[-6]
                            edx_7 = &edx_7[1]
                        
                        eax_26 = &eax_26[1]
                        i_3 = arg1[4]
                        arg1[4] -= 1
                    while (i_3 != 1)
                    
                    for (int32_t i_4 = 1; i_4 u< 0xa; i_4 += 1)
                        sub_46cc96(arg1[i_4 - 0x19], arg1[-4])
                    
                    int32_t* var_c_4 = arg1[-0x19]
                    int32_t eax_28 = arg1[-4] & 0xfffff
                    int32_t var_10_4 = arg1[-0x18]
                    arg1[4] = eax_28
                    result = sub_46ea58(entry_ebx, arg1[2], eax_28 | 0x10200000, var_10_4, var_c_4, 
                        nullptr, 0, __return_addr.b)
                    
                    if (result s>= 0)
                        result = sub_46ea58(entry_ebx, arg1[2], arg1[4] | 0x10400000, arg1[-0x17], 
                            arg1[-0x18], nullptr, 0x14)
                        
                        if (result s>= 0)
                            int32_t* var_c_6 = arg1[-0x17]
                            void* eax_35 = arg1[4] | 0x10100000
                            int32_t var_10_6 = arg1[-0x16]
                            int32_t var_18_4 = arg1[2]
                            arg1[-8] = eax_35
                            result = sub_46ea58(entry_ebx, var_18_4, eax_35, var_10_6, var_c_6, 
                                nullptr, 0x18)
                            
                            if (result s>= 0)
                                int32_t* var_8_7 = arg1[-0x18]
                                void* eax_38 = arg1[4] | 0x20400000
                                int32_t* var_c_7 = arg1[-0x16]
                                int32_t var_10_7 = arg1[-0x15]
                                arg1[-4] = eax_38
                                result = sub_46ea58(entry_ebx, arg1[2], eax_38, var_10_7, var_c_7, 
                                    var_8_7, 2)
                                
                                if (result s>= 0)
                                    result = sub_46ea58(entry_ebx, arg1[2], arg1[-8], arg1[-0x14], 
                                        arg1[-0x19], nullptr, 0)
                                    
                                    if (result s>= 0)
                                        int32_t* var_8_8 = arg1[-0x14]
                                        void* eax_42 = arg1[4] | 0x20200000
                                        int32_t* var_c_9 = arg1[-0x19]
                                        int32_t var_10_9 = arg1[-0x13]
                                        arg1[-7] = eax_42
                                        result = sub_46ea58(entry_ebx, arg1[2], eax_42, var_10_9, 
                                            var_c_9, var_8_8, 0x17)
                                        
                                        if (result s>= 0)
                                            result = sub_46ea58(entry_ebx, arg1[2], arg1[-8], 
                                                arg1[-0x12], arg1[-0x17], nullptr, 0)
                                            
                                            if (result s>= 0)
                                                result = sub_46ea58(entry_ebx, arg1[2], arg1[-7], 
                                                    arg1[-0x11], arg1[-0x12], arg1[-0x17], 0x17)
                                                
                                                if (result s>= 0)
                                                    result = sub_46ea58(entry_ebx, arg1[2], 
                                                        arg1[4] | 0x20500000, arg1[-0x10], 
                                                        arg1[-0x13], arg1[-0x11], 0x17)
                                                    
                                                    if (result s>= 0)
                                                        int32_t result_1
                                                        int16_t x87control_1
                                                        result_1, x87control_1 = sub_46ea58(
                                                            entry_ebx, arg1[2], arg1[-4], 
                                                            arg1[-0xf], arg1[-0x15], arg1[-0x10], 2)
                                                        result = result_1
                                                        
                                                        if (result s>= 0)
                                                            int32_t* ecx_35 = arg1[-0xf]
                                                            arg1[-7] = arg1[3]
                                                            arg1[4] = ecx_35
                                                            arg1[-8] = i_10
                                                            int32_t i_5
                                                            
                                                            do
                                                                if (*(arg1[-6] + arg1[-7]) == 2)
                                                                    int32_t eax_52 = *(entry_ebx[2] + 0x14)
                                                                    int32_t* esi_14 =
                                                                        *(eax_52 + (*(ecx_35 + arg1[-5]) << 2))
                                                                    int32_t ecx_36 = *ecx_35
                                                                    arg1[2] = *(eax_52 + (ecx_36 << 2))
                                                                    int32_t eax_54 = *esi_14
                                                                    
                                                                    if (eax_54.b s< 0)
                                                                        *(esi_14 + 0x28) =
                                                                            fconvert.d(fconvert.t(*(esi_14 + 0x20)))
                                                                        *esi_14 = eax_54 | 0x100
                                                                    
                                                                    if ((*(esi_14 + 1) & 1) != 0)
                                                                        int16_t var_8_12 = ecx_36.w
                                                                        bool cond:3_1 = sub_75ed12((fconvert.d(
                                                                            fconvert.t(*(esi_14 + 0x20)))).w) == 0
                                                                        long double x87_r7_3 =
                                                                            fconvert.t(*(esi_14 + 0x20))
                                                                        int32_t mxcsr
                                                                        
                                                                        if (not(cond:3_1))
                                                                            long double temp6_1 = fconvert.t(0.0)
                                                                            x87_r7_3 - temp6_1
                                                                            long double x87_r7_4 =
                                                                                fconvert.t(*(entry_ebx + 0xb0))
                                                                            int32_t var_8_13 = ecx_36
                                                                            int32_t eax_56
                                                                            eax_56.w =
                                                                                (x87_r7_3 < temp6_1 ? 1 : 0) << 8 | (
                                                                                is_unordered.t(x87_r7_3, temp6_1) ? 1
                                                                                : 0) << 0xa
                                                                                | (x87_r7_3 == temp6_1 ? 1 : 0) << 0xe
                                                                                | 0x3800
                                                                            
                                                                            if ((eax_56:1.b & 1) != 0)
                                                                                var_8_13.q = fconvert.d(x87_r7_4
                                                                                    - fconvert.t(*(esi_14 + 0x20)))
                                                                                long double st0_2
                                                                                st0_2, x87control_1 = sub_74c3d0(mxcsr, 
                                                                                    x87control_1, var_8_13)
                                                                                x87_r7_3 = fneg(st0_2)
                                                                            else
                                                                                var_8_13.q = fconvert.d(x87_r7_4
                                                                                    + fconvert.t(*(esi_14 + 0x20)))
                                                                                long double st0_1
                                                                                st0_1, x87control_1 = sub_74c3d0(mxcsr, 
                                                                                    x87control_1, var_8_13)
                                                                                x87_r7_3 = st0_1
                                                                        
                                                                        *(arg1[2] + 0x20) = fconvert.d(x87_r7_3)
                                                                        int16_t var_8_14 = ecx_36.w
                                                                        bool cond:4_1 = sub_75ed12((fconvert.d(
                                                                            fconvert.t(*(esi_14 + 0x28)))).w) == 0
                                                                        long double x87_r7_9 =
                                                                            fconvert.t(*(esi_14 + 0x28))
                                                                        int32_t* eax_58
                                                                        int32_t* edx_11
                                                                        
                                                                        if (cond:4_1)
                                                                            edx_11 = arg1[2]
                                                                            *(edx_11 + 0x28) = fconvert.d(x87_r7_9)
                                                                        else
                                                                            long double temp7_1 = fconvert.t(0.0)
                                                                            x87_r7_9 - temp7_1
                                                                            int32_t var_4_13 = ecx_36
                                                                            long double x87_r7_10 =
                                                                                fconvert.t(*(entry_ebx + 0xb0))
                                                                            int32_t var_8_15 = ecx_36
                                                                            eax_58.w =
                                                                                (x87_r7_9 < temp7_1 ? 1 : 0) << 8 | (
                                                                                is_unordered.t(x87_r7_9, temp7_1) ? 1
                                                                                : 0) << 0xa
                                                                                | (x87_r7_9 == temp7_1 ? 1 : 0) << 0xe
                                                                                | 0x3800
                                                                            long double x87_r7_12
                                                                            
                                                                            if ((eax_58:1.b & 1) != 0)
                                                                                var_8_15.q = fconvert.d(x87_r7_10
                                                                                    - fconvert.t(*(esi_14 + 0x28)))
                                                                                long double st0_4
                                                                                st0_4, x87control_1 = sub_74c3d0(mxcsr, 
                                                                                    x87control_1, var_8_15)
                                                                                x87_r7_12 = fneg(st0_4)
                                                                            else
                                                                                var_8_15.q = fconvert.d(x87_r7_10
                                                                                    + fconvert.t(*(esi_14 + 0x28)))
                                                                                long double st0_3
                                                                                st0_3, x87control_1 = sub_74c3d0(mxcsr, 
                                                                                    x87control_1, var_8_15)
                                                                                x87_r7_12 = st0_3
                                                                            
                                                                            eax_58 = arg1[2]
                                                                            *(eax_58 + 0x28) = fconvert.d(x87_r7_12)
                                                                            edx_11 = eax_58
                                                                        
                                                                        long double x87_r7_15 =
                                                                            fconvert.t(*(edx_11 + 0x28))
                                                                        *(edx_11 + 1) |= 1
                                                                        long double x87_r6_1 =
                                                                            fconvert.t(*(edx_11 + 0x20))
                                                                        int32_t ecx_40 = *edx_11
                                                                        x87_r6_1 - x87_r7_15
                                                                        eax_58.w =
                                                                            (x87_r6_1 < x87_r7_15 ? 1 : 0) << 8 | (
                                                                            is_unordered.t(x87_r6_1, x87_r7_15) ? 1
                                                                            : 0) << 0xa
                                                                            | (x87_r6_1 == x87_r7_15 ? 1 : 0)
                                                                            << 0xe
                                                                        bool p_1 =
                                                                            unimplemented  {test ah, 0x44}
                                                                        int32_t ecx_41
                                                                        
                                                                        if (p_1)
                                                                            ecx_41 = ecx_40 & 0xffffff7f
                                                                        else
                                                                            ecx_41 = ecx_40 | 0x80
                                                                        
                                                                        *edx_11 = ecx_41
                                                                    
                                                                    int32_t* ecx_42 = arg1[-7]
                                                                    int32_t eax_60 = *arg1[4]
                                                                    arg1[4] += 4
                                                                    *ecx_42 = eax_60
                                                                    ecx_35 = arg1[4]
                                                                
                                                                arg1[-7] += 4
                                                                i_5 = arg1[-8]
                                                                arg1[-8] -= 1
                                                            while (i_5 != 1)
                                                            goto label_47d2dc
                else
                    sub_46e3d1(entry_ebx, arg1[2], 0, "internal error: out of memory")
                    result = 0x8007000e
            else
                int32_t esi_4 = arg1[4] << 2
                int32_t eax_15 = sub_46cb79(entry_ebx, esi_4)
                
                if (eax_15 == 0)
                    sub_46e3d1(entry_ebx, arg1[2], 0, "internal error: out of memory")
                    result = 0x8007000e
                else
                    for (int32_t i_6 = 0; i_6 u< 4; )
                        arg1[i_6 - 0xe] = eax_15
                        i_6 += 1
                        eax_15 += esi_4
                    
                    sub_46cc96(arg1[-0xd], arg1[4])
                    sub_46cc96(arg1[-0xc], arg1[4])
                    int32_t* eax_16 = arg1[3]
                    int32_t* edx_4 = arg1[-0xb]
                    int32_t* ecx_11 = arg1[-3] - eax_16
                    void* esi_6 = arg1[-0xe] - edx_4
                    arg1[-6] = ecx_11
                    arg1[-7] = esi_6
                    arg1[-8] = i_10
                    int32_t i_7
                    
                    do
                        if (*(ecx_11 + eax_16) == 1)
                            *(arg1[-7] + edx_4) = *eax_16
                            int32_t ecx_14
                            
                            if (*(arg1[2] + 0x1c) == 0)
                                ecx_14 = 0xffffffff
                            else
                                ecx_14 = *eax_16
                            
                            *edx_4 = ecx_14
                            ecx_11 = arg1[-6]
                            edx_4 = &edx_4[1]
                        
                        eax_16 = &eax_16[1]
                        i_7 = arg1[-8]
                        arg1[-8] -= 1
                    while (i_7 != 1)
                    result = sub_471474(entry_ebx, i_10, arg1[2], arg1[-0xd], arg1[-0xc], 
                        arg1[-0xe], arg1[4])
                    
                    if (result s>= 0)
                        result = sub_46ea58(entry_ebx, arg1[2], (arg1[4] & 0xfffff) | 0x20200000, 
                            arg1[-0xb], arg1[-0xc], arg1[-0xd], 0x17, __return_addr.b)
                        
                        if (result s>= 0)
                            int32_t* eax_22 = arg1[3]
                            int32_t* ecx_17 = arg1[-0xb]
                            int32_t i_9 = i_10
                            int32_t i_8
                            
                            do
                                if (*(eax_22 + arg1[-6]) == 1)
                                    *eax_22 = *ecx_17
                                    ecx_17 = &ecx_17[1]
                                
                                eax_22 = &eax_22[1]
                                i_8 = i_9
                                i_9 -= 1
                            while (i_8 != 1)
                            goto label_47cf68

label_47d361:
sub_46cc5d(entry_ebx, arg1[-2])
sub_46cc5d(entry_ebx, arg1[-1])
*arg1
return result
