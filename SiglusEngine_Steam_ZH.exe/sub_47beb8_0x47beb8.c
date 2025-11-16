// 函数: sub_47beb8
// 地址: 0x47beb8
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* entry_ebx

if (arg1 == 0)
    return sub_47c194(sub_47d3ec(entry_ebx, *(arg2[2] + 0x20), arg2[3], arg3), arg2, arg3, arg4, 
        arg5) __tailcall

int32_t result

if (arg2[3] == 0)
    result = 0
else if (arg2[-6] != 1)
    if (arg3 == arg2[-6])
        arg2[-1]
        return sub_47caed(arg2, arg4, arg5) __tailcall
    
    void* edx_2 = arg2[2]
    int32_t eax_2 = *(edx_2 + 0x14)
    
    if (eax_2 == 1 && arg3 u< arg2[-6])
        arg2[-1]
        return sub_47caed(arg2, arg4, arg5) __tailcall
    
    void* ecx_3 = arg2[-4]
    
    if (eax_2 u<= *(ecx_3 + 0x14) && *(edx_2 + 0x18) u<= *(ecx_3 + 0x18))
        int32_t i = 0
        
        if (eax_2 u> 0)
            void* eax_6
            
            do
                int32_t eax_4 = *(arg2[2] + 0x18)
                int32_t esi_4 = arg2[-1] + ((*(arg2[-4] + 0x18) * i) << 2)
                int32_t edi_2 = arg2[3] + ((eax_4 * i) << 2)
                eax_6 = arg2[2]
                i += 1
                __builtin_memcpy(edi_2, esi_4, eax_4 << 2)
            while (i u< *(eax_6 + 0x14))
            arg3 = arg2[-3]
        
        goto label_47bee6
    
label_47d357:
    result = 0x80004005
else
    int32_t eax = 0
    
    if (arg3 u> 0)
        do
            *(arg2[3] + (eax << 2)) = *arg2[-1]
            eax += 1
        while (eax u< arg3)
    
label_47bee6:
    
    if (arg2[3] == 0)
        result = 0
    else
        int32_t eax_1 = entry_ebx[0x27]
        
        if (arg3 u<= eax_1)
            goto label_47cd8f
        
        int32_t i_1
        
        if (eax_1 == 0)
            i_1 = 0x10
        else
            i_1 = eax_1 * 2
        
        for (; i_1 u< arg3; i_1 *= 2)
        
        int32_t eax_13 = sub_745f3f(i_1 << 3)
        arg2[4] = eax_13
        
        if (eax_13 == 0)
            sub_46e3d1(entry_ebx, arg2[2], 0, "internal error: out of memory")
            result = 0x8007000e
        else
            j__free(entry_ebx[0x26])
            entry_ebx[0x26] = arg2[4]
            entry_ebx[0x27] = i_1
        label_47cd8f:
            int32_t eax_15 = entry_ebx[0x26]
            arg2[-3] = eax_15
            int32_t eax_16 = eax_15 + (arg3 << 2)
            arg2[-9] = eax_16
            sub_46e543(entry_ebx, *(arg2[2] + 0x10), eax_16)
            arg2[4] = 0
            arg2[-4] = 0
            arg2[-6] = 0
            
            if (arg3 u<= 0)
            label_47d2dc:
                
                if (arg3 u<= 0)
                    result = 0
                else
                    int32_t* esi_20 = arg2[-9]
                    arg2[-8] = arg2[3] - esi_20
                    arg2[3] = arg3
                    int32_t i_2
                    
                    do
                        int32_t* ecx_53 = *(*(entry_ebx[2] + 0x14) + (*(arg2[-8] + esi_20) << 2))
                        int32_t eax_77 = (*esi_20 & 0xf1ffffff) | *ecx_53
                        *ecx_53 = eax_77
                        int32_t edi_6 = eax_77 & 0xe000000
                        int32_t edx_18 = *esi_20 & 0xe000000
                        
                        if (edi_6 == 0)
                            edi_6 = edx_18
                        
                        if (ecx_53[0x17] != 0)
                            if (edi_6 u> edx_18)
                                edx_18 = edi_6
                        else if (edi_6 u< edx_18)
                            edx_18 = edi_6
                        
                        esi_20 = &esi_20[1]
                        i_2 = arg2[3]
                        arg2[3] -= 1
                        *ecx_53 = (eax_77 & 0xf1ffffff) | edx_18
                    while (i_2 != 1)
                    result = 0
            else
                int32_t ecx_11 = arg2[-9]
                int32_t edx_6 = arg2[-3]
                int32_t eax_19 = arg2[3] - ecx_11
                arg2[-7] = ecx_11
                arg2[-7] -= edx_6
                arg2[-5] = edx_6
                arg2[-8] = eax_19
                
                while (true)
                    int32_t* edx_8 = arg2[-5] + arg2[-7]
                    int32_t ecx_13 = *(edx_8 + eax_19)
                    void* eax_20 = entry_ebx[2]
                    char* ecx_14
                    
                    if (ecx_13 u>= *(eax_20 + 8))
                        ecx_14 = nullptr
                    else
                        ecx_14 = *(*(eax_20 + 0x14) + (ecx_13 << 2))
                    
                    if (ecx_14 == 0)
                        sub_46e3d1(entry_ebx, nullptr, 0, "internal error: result register invalid")
                        goto label_47d357
                    
                    int32_t eax_21 = *(eax_20 + 0x74)
                    int32_t esi_7 = *(ecx_14 + 4)
                    
                    if (eax_21 == esi_7)
                        *arg2[-5] = 0
                    else if ((*edx_8 & 1) != 0 && (*ecx_14 & 1) == 0)
                        int32_t* eax_22 = arg2[-5]
                        arg2[4] += 1
                        *eax_22 = 1
                    else if (eax_21 == esi_7 || (*edx_8 & 2) == 0 || (*ecx_14 & 2) != 0)
                        *arg2[-5] = 0
                    else
                        int32_t* eax_23 = arg2[-5]
                        arg2[-4] += 1
                        *eax_23 = 2
                    
                    arg2[-6] += 1
                    arg2[-5] += 4
                    
                    if (arg2[-6] u>= arg3)
                        break
                    
                    eax_19 = arg2[-8]
                
                if (arg2[4] == 0)
                label_47cf68:
                    
                    if (arg2[-4] == 0)
                        goto label_47d2dc
                    
                    int32_t esi_15 = arg2[-4]
                    int32_t eax_35 = sub_46cb79(entry_ebx, esi_15 * 0xb)
                    
                    if (eax_35 != 0)
                        for (int32_t i_3 = 0; i_3 u< 0xb; )
                            arg2[i_3 - 0x19] = eax_35
                            i_3 += 1
                            eax_35 += esi_15 << 2
                        
                        int32_t* eax_36 = arg2[3]
                        int32_t* edx_12 = arg2[-0xf]
                        int32_t* ecx_28 = arg2[-3] - eax_36
                        void* esi_17 = arg2[-0x19] - edx_12
                        arg2[-6] = ecx_28
                        arg2[-5] = esi_17
                        arg2[4] = arg3
                        int32_t i_4
                        
                        do
                            if (*(ecx_28 + eax_36) == 2)
                                *(arg2[-5] + edx_12) = *eax_36
                                int32_t ecx_31
                                
                                if (*(arg2[2] + 0x1c) == 0)
                                    ecx_31 = 0xffffffff
                                else
                                    ecx_31 = *eax_36
                                
                                *edx_12 = ecx_31
                                ecx_28 = arg2[-6]
                                edx_12 = &edx_12[1]
                            
                            eax_36 = &eax_36[1]
                            i_4 = arg2[4]
                            arg2[4] -= 1
                        while (i_4 != 1)
                        
                        for (int32_t i_5 = 1; i_5 u< 0xa; i_5 += 1)
                            sub_46cc96(arg2[i_5 - 0x19], arg2[-4])
                        
                        int32_t* var_c_5 = arg2[-0x19]
                        int32_t eax_38 = arg2[-4] & 0xfffff
                        int32_t var_10_4 = arg2[-0x18]
                        arg2[4] = eax_38
                        result = sub_46ea58(entry_ebx, arg2[2], eax_38 | 0x10200000, var_10_4, 
                            var_c_5, nullptr, 0, __return_addr.b)
                        
                        if (result s>= 0)
                            result = sub_46ea58(entry_ebx, arg2[2], arg2[4] | 0x10400000, 
                                arg2[-0x17], arg2[-0x18], nullptr, 0x14)
                            
                            if (result s>= 0)
                                int32_t* var_c_7 = arg2[-0x17]
                                void* eax_45 = arg2[4] | 0x10100000
                                int32_t var_10_6 = arg2[-0x16]
                                int32_t var_18_4 = arg2[2]
                                arg2[-8] = eax_45
                                result = sub_46ea58(entry_ebx, var_18_4, eax_45, var_10_6, var_c_7, 
                                    nullptr, 0x18)
                                
                                if (result s>= 0)
                                    int32_t* var_8_8 = arg2[-0x18]
                                    void* eax_48 = arg2[4] | 0x20400000
                                    int32_t* var_c_8 = arg2[-0x16]
                                    int32_t var_10_7 = arg2[-0x15]
                                    arg2[-4] = eax_48
                                    result = sub_46ea58(entry_ebx, arg2[2], eax_48, var_10_7, 
                                        var_c_8, var_8_8, 2)
                                    
                                    if (result s>= 0)
                                        result = sub_46ea58(entry_ebx, arg2[2], arg2[-8], 
                                            arg2[-0x14], arg2[-0x19], nullptr, 0)
                                        
                                        if (result s>= 0)
                                            int32_t* var_8_9 = arg2[-0x14]
                                            void* eax_52 = arg2[4] | 0x20200000
                                            int32_t* var_c_10 = arg2[-0x19]
                                            int32_t var_10_9 = arg2[-0x13]
                                            arg2[-7] = eax_52
                                            result = sub_46ea58(entry_ebx, arg2[2], eax_52, 
                                                var_10_9, var_c_10, var_8_9, 0x17)
                                            
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
                                                            int16_t x87control_3
                                                            result_1, x87control_3 = sub_46ea58(
                                                                entry_ebx, arg2[2], arg2[-4], 
                                                                arg2[-0xf], arg2[-0x15], arg2[-0x10], 2)
                                                            result = result_1
                                                            
                                                            if (result s>= 0)
                                                                int32_t* ecx_43 = arg2[-0xf]
                                                                arg2[-7] = arg2[3]
                                                                arg2[4] = ecx_43
                                                                arg2[-8] = arg3
                                                                int32_t i_6
                                                                
                                                                do
                                                                    if (*(arg2[-6] + arg2[-7]) == 2)
                                                                        int32_t eax_62 = *(entry_ebx[2] + 0x14)
                                                                        int32_t* esi_19 =
                                                                            *(eax_62 + (*(ecx_43 + arg2[-5]) << 2))
                                                                        int32_t ecx_44 = *ecx_43
                                                                        arg2[2] = *(eax_62 + (ecx_44 << 2))
                                                                        int32_t eax_64 = *esi_19
                                                                        
                                                                        if (eax_64.b s< 0)
                                                                            *(esi_19 + 0x28) =
                                                                                fconvert.d(fconvert.t(*(esi_19 + 0x20)))
                                                                            *esi_19 = eax_64 | 0x100
                                                                        
                                                                        if ((*(esi_19 + 1) & 1) != 0)
                                                                            int16_t var_8_13 = ecx_44.w
                                                                            bool cond:3_1 = sub_75ed12((fconvert.d(
                                                                                fconvert.t(*(esi_19 + 0x20)))).w) == 0
                                                                            long double x87_r7_3 =
                                                                                fconvert.t(*(esi_19 + 0x20))
                                                                            int32_t mxcsr
                                                                            
                                                                            if (not(cond:3_1))
                                                                                long double temp6_1 = fconvert.t(0.0)
                                                                                x87_r7_3 - temp6_1
                                                                                long double x87_r7_4 =
                                                                                    fconvert.t(*(entry_ebx + 0xb0))
                                                                                int32_t var_8_14 = ecx_44
                                                                                int32_t eax_66
                                                                                eax_66.w =
                                                                                    (x87_r7_3 < temp6_1 ? 1 : 0) << 8 | (
                                                                                    is_unordered.t(x87_r7_3, temp6_1) ? 1
                                                                                    : 0) << 0xa
                                                                                    | (x87_r7_3 == temp6_1 ? 1 : 0) << 0xe
                                                                                    | 0x3800
                                                                                
                                                                                if ((eax_66:1.b & 1) != 0)
                                                                                    var_8_14.q = fconvert.d(x87_r7_4
                                                                                        - fconvert.t(*(esi_19 + 0x20)))
                                                                                    long double st0_2
                                                                                    st0_2, x87control_3 = sub_74c3d0(mxcsr, 
                                                                                        x87control_3, var_8_14)
                                                                                    x87_r7_3 = fneg(st0_2)
                                                                                else
                                                                                    var_8_14.q = fconvert.d(x87_r7_4
                                                                                        + fconvert.t(*(esi_19 + 0x20)))
                                                                                    long double st0_1
                                                                                    st0_1, x87control_3 = sub_74c3d0(mxcsr, 
                                                                                        x87control_3, var_8_14)
                                                                                    x87_r7_3 = st0_1
                                                                            
                                                                            *(arg2[2] + 0x20) = fconvert.d(x87_r7_3)
                                                                            int16_t var_8_15 = ecx_44.w
                                                                            bool cond:4_1 = sub_75ed12((fconvert.d(
                                                                                fconvert.t(*(esi_19 + 0x28)))).w) == 0
                                                                            long double x87_r7_9 =
                                                                                fconvert.t(*(esi_19 + 0x28))
                                                                            int32_t* eax_68
                                                                            int32_t* edx_16
                                                                            
                                                                            if (cond:4_1)
                                                                                edx_16 = arg2[2]
                                                                                *(edx_16 + 0x28) = fconvert.d(x87_r7_9)
                                                                            else
                                                                                long double temp7_1 = fconvert.t(0.0)
                                                                                x87_r7_9 - temp7_1
                                                                                int32_t var_4_14 = ecx_44
                                                                                long double x87_r7_10 =
                                                                                    fconvert.t(*(entry_ebx + 0xb0))
                                                                                int32_t var_8_16 = ecx_44
                                                                                eax_68.w =
                                                                                    (x87_r7_9 < temp7_1 ? 1 : 0) << 8 | (
                                                                                    is_unordered.t(x87_r7_9, temp7_1) ? 1
                                                                                    : 0) << 0xa
                                                                                    | (x87_r7_9 == temp7_1 ? 1 : 0) << 0xe
                                                                                    | 0x3800
                                                                                long double x87_r7_12
                                                                                
                                                                                if ((eax_68:1.b & 1) != 0)
                                                                                    var_8_16.q = fconvert.d(x87_r7_10
                                                                                        - fconvert.t(*(esi_19 + 0x28)))
                                                                                    long double st0_4
                                                                                    st0_4, x87control_3 = sub_74c3d0(mxcsr, 
                                                                                        x87control_3, var_8_16)
                                                                                    x87_r7_12 = fneg(st0_4)
                                                                                else
                                                                                    var_8_16.q = fconvert.d(x87_r7_10
                                                                                        + fconvert.t(*(esi_19 + 0x28)))
                                                                                    long double st0_3
                                                                                    st0_3, x87control_3 = sub_74c3d0(mxcsr, 
                                                                                        x87control_3, var_8_16)
                                                                                    x87_r7_12 = st0_3
                                                                                
                                                                                eax_68 = arg2[2]
                                                                                *(eax_68 + 0x28) = fconvert.d(x87_r7_12)
                                                                                edx_16 = eax_68
                                                                            
                                                                            long double x87_r7_15 =
                                                                                fconvert.t(*(edx_16 + 0x28))
                                                                            *(edx_16 + 1) |= 1
                                                                            long double x87_r6_1 =
                                                                                fconvert.t(*(edx_16 + 0x20))
                                                                            int32_t ecx_48 = *edx_16
                                                                            x87_r6_1 - x87_r7_15
                                                                            eax_68.w =
                                                                                (x87_r6_1 < x87_r7_15 ? 1 : 0) << 8 | (
                                                                                is_unordered.t(x87_r6_1, x87_r7_15) ? 1
                                                                                : 0) << 0xa
                                                                                | (x87_r6_1 == x87_r7_15 ? 1 : 0)
                                                                                << 0xe
                                                                            bool p_1 =
                                                                                unimplemented  {test ah, 0x44}
                                                                            int32_t ecx_49
                                                                            
                                                                            if (p_1)
                                                                                ecx_49 = ecx_48 & 0xffffff7f
                                                                            else
                                                                                ecx_49 = ecx_48 | 0x80
                                                                            
                                                                            *edx_16 = ecx_49
                                                                        
                                                                        int32_t* ecx_50 = arg2[-7]
                                                                        int32_t eax_70 = *arg2[4]
                                                                        arg2[4] += 4
                                                                        *ecx_50 = eax_70
                                                                        ecx_43 = arg2[4]
                                                                    
                                                                    arg2[-7] += 4
                                                                    i_6 = arg2[-8]
                                                                    arg2[-8] -= 1
                                                                while (i_6 != 1)
                                                                goto label_47d2dc
                    else
                        sub_46e3d1(entry_ebx, arg2[2], 0, "internal error: out of memory")
                        result = 0x8007000e
                else
                    int32_t esi_9 = arg2[4] << 2
                    int32_t eax_25 = sub_46cb79(entry_ebx, esi_9)
                    
                    if (eax_25 == 0)
                        sub_46e3d1(entry_ebx, arg2[2], 0, "internal error: out of memory")
                        result = 0x8007000e
                    else
                        for (int32_t i_7 = 0; i_7 u< 4; )
                            arg2[i_7 - 0xe] = eax_25
                            i_7 += 1
                            eax_25 += esi_9
                        
                        sub_46cc96(arg2[-0xd], arg2[4])
                        sub_46cc96(arg2[-0xc], arg2[4])
                        int32_t* eax_26 = arg2[3]
                        int32_t* edx_9 = arg2[-0xb]
                        int32_t* ecx_19 = arg2[-3] - eax_26
                        void* esi_11 = arg2[-0xe] - edx_9
                        arg2[-6] = ecx_19
                        arg2[-7] = esi_11
                        arg2[-8] = arg3
                        int32_t i_8
                        
                        do
                            if (*(ecx_19 + eax_26) == 1)
                                *(arg2[-7] + edx_9) = *eax_26
                                int32_t ecx_22
                                
                                if (*(arg2[2] + 0x1c) == 0)
                                    ecx_22 = 0xffffffff
                                else
                                    ecx_22 = *eax_26
                                
                                *edx_9 = ecx_22
                                ecx_19 = arg2[-6]
                                edx_9 = &edx_9[1]
                            
                            eax_26 = &eax_26[1]
                            i_8 = arg2[-8]
                            arg2[-8] -= 1
                        while (i_8 != 1)
                        result = sub_471474(entry_ebx, arg3, arg2[2], arg2[-0xd], arg2[-0xc], 
                            arg2[-0xe], arg2[4])
                        
                        if (result s>= 0)
                            result = sub_46ea58(entry_ebx, arg2[2], 
                                (arg2[4] & 0xfffff) | 0x20200000, arg2[-0xb], arg2[-0xc], 
                                arg2[-0xd], 0x17, __return_addr.b)
                            
                            if (result s>= 0)
                                int32_t* eax_32 = arg2[3]
                                int32_t* ecx_25 = arg2[-0xb]
                                int32_t i_10 = arg3
                                int32_t i_9
                                
                                do
                                    if (*(eax_32 + arg2[-6]) == 1)
                                        *eax_32 = *ecx_25
                                        ecx_25 = &ecx_25[1]
                                    
                                    eax_32 = &eax_32[1]
                                    i_9 = i_10
                                    i_10 -= 1
                                while (i_9 != 1)
                                goto label_47cf68

sub_46cc5d(entry_ebx, arg2[-2])
sub_46cc5d(entry_ebx, arg2[-1])
*arg2
return result
