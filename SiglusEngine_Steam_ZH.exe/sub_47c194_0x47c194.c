// 函数: sub_47c194
// 地址: 0x47c194
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result = arg1
int32_t* entry_ebx

if (result s>= 0)
    if (arg2[3] == 0)
        result = 0
    else
        int32_t eax_70 = entry_ebx[0x27]
        
        if (arg3 u<= eax_70)
            goto label_47cd8f
        
        int32_t i
        
        if (eax_70 == 0)
            i = 0x10
        else
            i = eax_70 * 2
        
        for (; i u< arg3; i *= 2)
        
        int32_t eax_2 = sub_745f3f(i << 3)
        arg2[4] = eax_2
        
        if (eax_2 == 0)
            sub_46e3d1(entry_ebx, arg2[2], 0, "internal error: out of memory")
            result = 0x8007000e
        else
            j__free(entry_ebx[0x26])
            entry_ebx[0x26] = arg2[4]
            entry_ebx[0x27] = i
        label_47cd8f:
            int32_t eax_4 = entry_ebx[0x26]
            arg2[-3] = eax_4
            int32_t eax_5 = eax_4 + (arg3 << 2)
            arg2[-9] = eax_5
            sub_46e543(entry_ebx, *(arg2[2] + 0x10), eax_5)
            arg2[4] = 0
            arg2[-4] = 0
            arg2[-6] = 0
            
            if (arg3 u<= 0)
            label_47d2dc:
                
                if (arg3 u<= 0)
                    result = 0
                else
                    int32_t* esi_14 = arg2[-9]
                    arg2[-8] = arg2[3] - esi_14
                    arg2[3] = arg3
                    int32_t i_1
                    
                    do
                        int32_t* ecx_46 = *(*(entry_ebx[2] + 0x14) + (*(arg2[-8] + esi_14) << 2))
                        int32_t eax_66 = (*esi_14 & 0xf1ffffff) | *ecx_46
                        *ecx_46 = eax_66
                        int32_t edi_1 = eax_66 & 0xe000000
                        int32_t edx_13 = *esi_14 & 0xe000000
                        
                        if (edi_1 == 0)
                            edi_1 = edx_13
                        
                        if (ecx_46[0x17] != 0)
                            if (edi_1 u> edx_13)
                                edx_13 = edi_1
                        else if (edi_1 u< edx_13)
                            edx_13 = edi_1
                        
                        esi_14 = &esi_14[1]
                        i_1 = arg2[3]
                        arg2[3] -= 1
                        *ecx_46 = (eax_66 & 0xf1ffffff) | edx_13
                    while (i_1 != 1)
                    result = 0
            else
                int32_t ecx_4 = arg2[-9]
                int32_t edx_1 = arg2[-3]
                int32_t eax_8 = arg2[3] - ecx_4
                arg2[-7] = ecx_4
                arg2[-7] -= edx_1
                arg2[-5] = edx_1
                arg2[-8] = eax_8
                
                while (true)
                    int32_t* edx_3 = arg2[-5] + arg2[-7]
                    int32_t ecx_6 = *(edx_3 + eax_8)
                    void* eax_9 = entry_ebx[2]
                    char* ecx_7
                    
                    if (ecx_6 u>= *(eax_9 + 8))
                        ecx_7 = nullptr
                    else
                        ecx_7 = *(*(eax_9 + 0x14) + (ecx_6 << 2))
                    
                    if (ecx_7 == 0)
                        sub_46e3d1(entry_ebx, nullptr, 0, "internal error: result register invalid")
                        result = 0x80004005
                        goto label_47d361
                    
                    int32_t eax_10 = *(eax_9 + 0x74)
                    int32_t esi_1 = *(ecx_7 + 4)
                    
                    if (eax_10 == esi_1)
                        *arg2[-5] = 0
                    else if ((*edx_3 & 1) != 0 && (*ecx_7 & 1) == 0)
                        int32_t* eax_11 = arg2[-5]
                        arg2[4] += 1
                        *eax_11 = 1
                    else if (eax_10 == esi_1 || (*edx_3 & 2) == 0 || (*ecx_7 & 2) != 0)
                        *arg2[-5] = 0
                    else
                        int32_t* eax_12 = arg2[-5]
                        arg2[-4] += 1
                        *eax_12 = 2
                    
                    arg2[-6] += 1
                    arg2[-5] += 4
                    
                    if (arg2[-6] u>= arg3)
                        break
                    
                    eax_8 = arg2[-8]
                
                if (arg2[4] == 0)
                label_47cf68:
                    
                    if (arg2[-4] == 0)
                        goto label_47d2dc
                    
                    int32_t esi_9 = arg2[-4]
                    int32_t eax_24 = sub_46cb79(entry_ebx, esi_9 * 0xb)
                    
                    if (eax_24 != 0)
                        for (int32_t i_2 = 0; i_2 u< 0xb; )
                            arg2[i_2 - 0x19] = eax_24
                            i_2 += 1
                            eax_24 += esi_9 << 2
                        
                        int32_t* eax_25 = arg2[3]
                        int32_t* edx_7 = arg2[-0xf]
                        int32_t* ecx_21 = arg2[-3] - eax_25
                        void* esi_11 = arg2[-0x19] - edx_7
                        arg2[-6] = ecx_21
                        arg2[-5] = esi_11
                        arg2[4] = arg3
                        int32_t i_3
                        
                        do
                            if (*(ecx_21 + eax_25) == 2)
                                *(arg2[-5] + edx_7) = *eax_25
                                int32_t ecx_24
                                
                                if (*(arg2[2] + 0x1c) == 0)
                                    ecx_24 = 0xffffffff
                                else
                                    ecx_24 = *eax_25
                                
                                *edx_7 = ecx_24
                                ecx_21 = arg2[-6]
                                edx_7 = &edx_7[1]
                            
                            eax_25 = &eax_25[1]
                            i_3 = arg2[4]
                            arg2[4] -= 1
                        while (i_3 != 1)
                        
                        for (int32_t i_4 = 1; i_4 u< 0xa; i_4 += 1)
                            sub_46cc96(arg2[i_4 - 0x19], arg2[-4])
                        
                        int32_t* var_c_4 = arg2[-0x19]
                        int32_t eax_27 = arg2[-4] & 0xfffff
                        int32_t var_10_4 = arg2[-0x18]
                        arg2[4] = eax_27
                        result = sub_46ea58(entry_ebx, arg2[2], eax_27 | 0x10200000, var_10_4, 
                            var_c_4, nullptr, 0, __return_addr.b)
                        
                        if (result s>= 0)
                            result = sub_46ea58(entry_ebx, arg2[2], arg2[4] | 0x10400000, 
                                arg2[-0x17], arg2[-0x18], nullptr, 0x14)
                            
                            if (result s>= 0)
                                int32_t* var_c_6 = arg2[-0x17]
                                void* eax_34 = arg2[4] | 0x10100000
                                int32_t var_10_6 = arg2[-0x16]
                                int32_t var_18_4 = arg2[2]
                                arg2[-8] = eax_34
                                result = sub_46ea58(entry_ebx, var_18_4, eax_34, var_10_6, var_c_6, 
                                    nullptr, 0x18)
                                
                                if (result s>= 0)
                                    int32_t* var_8_7 = arg2[-0x18]
                                    void* eax_37 = arg2[4] | 0x20400000
                                    int32_t* var_c_7 = arg2[-0x16]
                                    int32_t var_10_7 = arg2[-0x15]
                                    arg2[-4] = eax_37
                                    result = sub_46ea58(entry_ebx, arg2[2], eax_37, var_10_7, 
                                        var_c_7, var_8_7, 2)
                                    
                                    if (result s>= 0)
                                        result = sub_46ea58(entry_ebx, arg2[2], arg2[-8], 
                                            arg2[-0x14], arg2[-0x19], nullptr, 0)
                                        
                                        if (result s>= 0)
                                            int32_t* var_8_8 = arg2[-0x14]
                                            void* eax_41 = arg2[4] | 0x20200000
                                            int32_t* var_c_9 = arg2[-0x19]
                                            int32_t var_10_9 = arg2[-0x13]
                                            arg2[-7] = eax_41
                                            result = sub_46ea58(entry_ebx, arg2[2], eax_41, 
                                                var_10_9, var_c_9, var_8_8, 0x17)
                                            
                                            if (result s>= 0)
                                                result = sub_46ea58(entry_ebx, arg2[2], arg2[-8], 
                                                    arg2[-0x12], arg2[-0x17], nullptr, 0)
                                                
                                                if (result s>= 0)
                                                    result = sub_46ea58(entry_ebx, arg2[2], 
                                                        arg2[-7], arg2[-0x11], arg2[-0x12], 
                                                        arg2[-0x17], 0x17)
                                                    
                                                    if (result s>= 0)
                                                        result = sub_46ea58(entry_ebx, arg2[2], 
                                                            arg2[4] | 0x20500000, arg2[-0x10], 
                                                            arg2[-0x13], arg2[-0x11], 0x17)
                                                        
                                                        if (result s>= 0)
                                                            int32_t result_1
                                                            int16_t x87control_1
                                                            result_1, x87control_1 = sub_46ea58(
                                                                entry_ebx, arg2[2], arg2[-4], 
                                                                arg2[-0xf], arg2[-0x15], arg2[-0x10], 2)
                                                            result = result_1
                                                            
                                                            if (result s>= 0)
                                                                int32_t* ecx_36 = arg2[-0xf]
                                                                arg2[-7] = arg2[3]
                                                                arg2[4] = ecx_36
                                                                arg2[-8] = arg3
                                                                int32_t i_5
                                                                
                                                                do
                                                                    if (*(arg2[-6] + arg2[-7]) == 2)
                                                                        int32_t eax_51 = *(entry_ebx[2] + 0x14)
                                                                        int32_t* esi_13 =
                                                                            *(eax_51 + (*(ecx_36 + arg2[-5]) << 2))
                                                                        int32_t ecx_37 = *ecx_36
                                                                        arg2[2] = *(eax_51 + (ecx_37 << 2))
                                                                        int32_t eax_53 = *esi_13
                                                                        
                                                                        if (eax_53.b s< 0)
                                                                            *(esi_13 + 0x28) =
                                                                                fconvert.d(fconvert.t(*(esi_13 + 0x20)))
                                                                            *esi_13 = eax_53 | 0x100
                                                                        
                                                                        if ((*(esi_13 + 1) & 1) != 0)
                                                                            int16_t var_8_12 = ecx_37.w
                                                                            bool cond:3_1 = sub_75ed12((fconvert.d(
                                                                                fconvert.t(*(esi_13 + 0x20)))).w) == 0
                                                                            long double x87_r7_3 =
                                                                                fconvert.t(*(esi_13 + 0x20))
                                                                            int32_t mxcsr
                                                                            
                                                                            if (not(cond:3_1))
                                                                                long double temp6_1 = fconvert.t(0.0)
                                                                                x87_r7_3 - temp6_1
                                                                                long double x87_r7_4 =
                                                                                    fconvert.t(*(entry_ebx + 0xb0))
                                                                                int32_t var_8_13 = ecx_37
                                                                                int32_t eax_55
                                                                                eax_55.w =
                                                                                    (x87_r7_3 < temp6_1 ? 1 : 0) << 8 | (
                                                                                    is_unordered.t(x87_r7_3, temp6_1) ? 1
                                                                                    : 0) << 0xa
                                                                                    | (x87_r7_3 == temp6_1 ? 1 : 0) << 0xe
                                                                                    | 0x3800
                                                                                
                                                                                if ((eax_55:1.b & 1) != 0)
                                                                                    var_8_13.q = fconvert.d(x87_r7_4
                                                                                        - fconvert.t(*(esi_13 + 0x20)))
                                                                                    long double st0_2
                                                                                    st0_2, x87control_1 = sub_74c3d0(mxcsr, 
                                                                                        x87control_1, var_8_13)
                                                                                    x87_r7_3 = fneg(st0_2)
                                                                                else
                                                                                    var_8_13.q = fconvert.d(x87_r7_4
                                                                                        + fconvert.t(*(esi_13 + 0x20)))
                                                                                    long double st0_1
                                                                                    st0_1, x87control_1 = sub_74c3d0(mxcsr, 
                                                                                        x87control_1, var_8_13)
                                                                                    x87_r7_3 = st0_1
                                                                            
                                                                            *(arg2[2] + 0x20) = fconvert.d(x87_r7_3)
                                                                            int16_t var_8_14 = ecx_37.w
                                                                            bool cond:4_1 = sub_75ed12((fconvert.d(
                                                                                fconvert.t(*(esi_13 + 0x28)))).w) == 0
                                                                            long double x87_r7_9 =
                                                                                fconvert.t(*(esi_13 + 0x28))
                                                                            int32_t* eax_57
                                                                            int32_t* edx_11
                                                                            
                                                                            if (cond:4_1)
                                                                                edx_11 = arg2[2]
                                                                                *(edx_11 + 0x28) = fconvert.d(x87_r7_9)
                                                                            else
                                                                                long double temp7_1 = fconvert.t(0.0)
                                                                                x87_r7_9 - temp7_1
                                                                                int32_t var_4_13 = ecx_37
                                                                                long double x87_r7_10 =
                                                                                    fconvert.t(*(entry_ebx + 0xb0))
                                                                                int32_t var_8_15 = ecx_37
                                                                                eax_57.w =
                                                                                    (x87_r7_9 < temp7_1 ? 1 : 0) << 8 | (
                                                                                    is_unordered.t(x87_r7_9, temp7_1) ? 1
                                                                                    : 0) << 0xa
                                                                                    | (x87_r7_9 == temp7_1 ? 1 : 0) << 0xe
                                                                                    | 0x3800
                                                                                long double x87_r7_12
                                                                                
                                                                                if ((eax_57:1.b & 1) != 0)
                                                                                    var_8_15.q = fconvert.d(x87_r7_10
                                                                                        - fconvert.t(*(esi_13 + 0x28)))
                                                                                    long double st0_4
                                                                                    st0_4, x87control_1 = sub_74c3d0(mxcsr, 
                                                                                        x87control_1, var_8_15)
                                                                                    x87_r7_12 = fneg(st0_4)
                                                                                else
                                                                                    var_8_15.q = fconvert.d(x87_r7_10
                                                                                        + fconvert.t(*(esi_13 + 0x28)))
                                                                                    long double st0_3
                                                                                    st0_3, x87control_1 = sub_74c3d0(mxcsr, 
                                                                                        x87control_1, var_8_15)
                                                                                    x87_r7_12 = st0_3
                                                                                
                                                                                eax_57 = arg2[2]
                                                                                *(eax_57 + 0x28) = fconvert.d(x87_r7_12)
                                                                                edx_11 = eax_57
                                                                            
                                                                            long double x87_r7_15 =
                                                                                fconvert.t(*(edx_11 + 0x28))
                                                                            *(edx_11 + 1) |= 1
                                                                            long double x87_r6_1 =
                                                                                fconvert.t(*(edx_11 + 0x20))
                                                                            int32_t ecx_41 = *edx_11
                                                                            x87_r6_1 - x87_r7_15
                                                                            eax_57.w =
                                                                                (x87_r6_1 < x87_r7_15 ? 1 : 0) << 8 | (
                                                                                is_unordered.t(x87_r6_1, x87_r7_15) ? 1
                                                                                : 0) << 0xa
                                                                                | (x87_r6_1 == x87_r7_15 ? 1 : 0)
                                                                                << 0xe
                                                                            bool p_1 =
                                                                                unimplemented  {test ah, 0x44}
                                                                            int32_t ecx_42
                                                                            
                                                                            if (p_1)
                                                                                ecx_42 = ecx_41 & 0xffffff7f
                                                                            else
                                                                                ecx_42 = ecx_41 | 0x80
                                                                            
                                                                            *edx_11 = ecx_42
                                                                        
                                                                        int32_t* ecx_43 = arg2[-7]
                                                                        int32_t eax_59 = *arg2[4]
                                                                        arg2[4] += 4
                                                                        *ecx_43 = eax_59
                                                                        ecx_36 = arg2[4]
                                                                    
                                                                    arg2[-7] += 4
                                                                    i_5 = arg2[-8]
                                                                    arg2[-8] -= 1
                                                                while (i_5 != 1)
                                                                goto label_47d2dc
                    else
                        sub_46e3d1(entry_ebx, arg2[2], 0, "internal error: out of memory")
                        result = 0x8007000e
                else
                    int32_t esi_3 = arg2[4] << 2
                    int32_t eax_14 = sub_46cb79(entry_ebx, esi_3)
                    
                    if (eax_14 == 0)
                        sub_46e3d1(entry_ebx, arg2[2], 0, "internal error: out of memory")
                        result = 0x8007000e
                    else
                        for (int32_t i_6 = 0; i_6 u< 4; )
                            arg2[i_6 - 0xe] = eax_14
                            i_6 += 1
                            eax_14 += esi_3
                        
                        sub_46cc96(arg2[-0xd], arg2[4])
                        sub_46cc96(arg2[-0xc], arg2[4])
                        int32_t* eax_15 = arg2[3]
                        int32_t* edx_4 = arg2[-0xb]
                        int32_t* ecx_12 = arg2[-3] - eax_15
                        void* esi_5 = arg2[-0xe] - edx_4
                        arg2[-6] = ecx_12
                        arg2[-7] = esi_5
                        arg2[-8] = arg3
                        int32_t i_7
                        
                        do
                            if (*(ecx_12 + eax_15) == 1)
                                *(arg2[-7] + edx_4) = *eax_15
                                int32_t ecx_15
                                
                                if (*(arg2[2] + 0x1c) == 0)
                                    ecx_15 = 0xffffffff
                                else
                                    ecx_15 = *eax_15
                                
                                *edx_4 = ecx_15
                                ecx_12 = arg2[-6]
                                edx_4 = &edx_4[1]
                            
                            eax_15 = &eax_15[1]
                            i_7 = arg2[-8]
                            arg2[-8] -= 1
                        while (i_7 != 1)
                        result = sub_471474(entry_ebx, arg3, arg2[2], arg2[-0xd], arg2[-0xc], 
                            arg2[-0xe], arg2[4])
                        
                        if (result s>= 0)
                            result = sub_46ea58(entry_ebx, arg2[2], 
                                (arg2[4] & 0xfffff) | 0x20200000, arg2[-0xb], arg2[-0xc], 
                                arg2[-0xd], 0x17, __return_addr.b)
                            
                            if (result s>= 0)
                                int32_t* eax_21 = arg2[3]
                                int32_t* ecx_18 = arg2[-0xb]
                                int32_t i_9 = arg3
                                int32_t i_8
                                
                                do
                                    if (*(eax_21 + arg2[-6]) == 1)
                                        *eax_21 = *ecx_18
                                        ecx_18 = &ecx_18[1]
                                    
                                    eax_21 = &eax_21[1]
                                    i_8 = i_9
                                    i_9 -= 1
                                while (i_8 != 1)
                                goto label_47cf68

label_47d361:
sub_46cc5d(entry_ebx, arg2[-2])
sub_46cc5d(entry_ebx, arg2[-1])
*arg2
return result
