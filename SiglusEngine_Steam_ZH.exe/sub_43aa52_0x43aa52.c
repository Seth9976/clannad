// 函数: sub_43aa52
// 地址: 0x43aa52
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* ebx = arg4

if (ebx != 0)
    if (*(ebx + 4) == 0xd)
        void* i_95 = *(ebx + 0x14) * *(ebx + 0x18)
        void* i_93 = i_95
        
        if (*(ebx + 0x1c) == 0x1a)
            void* const var_58_1 = nullptr
            void* var_54
            int32_t* edi = &var_54
            *edi = 0
            void* edi_1 = &edi[1]
            *edi_1 = 0
            *(edi_1 + 4) = 0
            void* ecx = *(ebx + 0x24)
            int32_t var_68_1 = 0
            void var_64
            void* edi_4 = &var_64
            *edi_4 = 0
            void* edi_5 = edi_4 + 4
            *edi_5 = 0
            *(edi_5 + 4) = 0
            double* i_90 = nullptr
            double* i_91
            int32_t* edi_8 = &i_91
            *edi_8 = 0
            void* edi_9 = &edi_8[1]
            double* i_64 = *(ecx + 8)
            *edi_9 = 0
            *(edi_9 + 4) = 0
            double* i_92 = i_64
            int32_t result
            int64_t var_34
            int16_t x87control
            long double st0
            
            if (i_64 == 0)
            label_43ab89:
                int32_t eax_14 = *(*(*(ebx + 0x20) + 8) + 0x18)
                
                if (eax_14 u> 0x59)
                labelid_13:
                    result = 0x80004005
                else
                    void* esi_2 = arg5
                    void* var_40
                    uint32_t eax_15
                    int32_t mxcsr
                    long double st1
                    long double x87_r7_9
                    long double x87_r7_44
                    long double x87_r7_52
                    int16_t top
                    
                    switch (eax_14)
                        case 0
                            if (i_95 u> 0)
                                void* eax_16 = esi_2 + 8
                                i_64 = i_90 - esi_2
                                void* i_68 = i_95
                                void* i
                                
                                do
                                    *eax_16 = fconvert.d(fabs(fconvert.t(*(i_64 + eax_16))))
                                    eax_16 += 0x10
                                    i = i_68
                                    i_68 -= 1
                                while (i != 1)
                            
                            goto label_43b015
                        case 1
                            if (i_95 u<= 0)
                                goto label_43b015
                            
                            double* i_98 = i_90
                            void* edi_13 = &i_98[1]
                            double* ebx_3 = esi_2 - i_98
                            arg5 = i_95
                            void* i_1
                            
                            do
                                long double x87_r7_3 = fconvert.t(*edi_13)
                                long double temp7_1 = fconvert.t(-1.0)
                                x87_r7_3 - temp7_1
                                i_98.w = (x87_r7_3 < temp7_1 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r7_3, temp7_1) ? 1 : 0) << 0xa
                                    | (x87_r7_3 == temp7_1 ? 1 : 0) << 0xe
                                bool p_1 = unimplemented  {test ah, 0x5}
                                
                                if (p_1)
                                    long double x87_r7_4 = fconvert.t(*edi_13)
                                    long double temp51_1 = fconvert.t(1.0)
                                    x87_r7_4 - temp51_1
                                    i_98.w = (x87_r7_4 < temp51_1 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r7_4, temp51_1) ? 1 : 0) << 0xa
                                        | (x87_r7_4 == temp51_1 ? 1 : 0) << 0xe
                                
                                if (not(p_1) || (i_98:1.b & 0x41) == 0)
                                    sub_43713d(arg1, arg4 + 0x30, 0xbfe, "indefinite acos")
                                
                                long double st0_1
                                st0_1, i_98, i_64, x87control =
                                    sub_7614c0(mxcsr, x87control, fconvert.t(*edi_13))
                                *(ebx_3 + edi_13) = fconvert.d(st0_1)
                                edi_13 += 0x10
                                i_1 = arg5
                                arg5 -= 1
                            while (i_1 != 1)
                            goto label_43bbf6
                        case 2
                            int32_t edi_14 = 0
                            *(esi_2 + 8) = fconvert.d(float.t(1))
                            
                            if (i_95 u<= 0)
                                goto label_43b015
                            
                            i_64 = &i_90[1]
                            
                            while (true)
                                long double x87_r7_8 = fconvert.t(0.0)
                                long double x87_r6_1 = fconvert.t(*i_64)
                                x87_r6_1 - x87_r7_8
                                eax_15.w = (x87_r6_1 < x87_r7_8 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r6_1, x87_r7_8) ? 1 : 0) << 0xa
                                    | (x87_r6_1 == x87_r7_8 ? 1 : 0) << 0xe
                                bool p_2 = unimplemented  {test ah, 0x44}
                                
                                if (not(p_2))
                                    x87_r7_9 = float.t(0)
                                    break
                                
                                edi_14 += 1
                                i_64 = &i_64[2]
                                
                                if (edi_14 u>= i_95)
                                    goto label_43b015
                            
                            goto label_43b06e
                        case 3
                            int32_t edi_15 = 0
                            *(esi_2 + 8) = fconvert.d(float.t(0))
                            
                            if (i_95 u<= 0)
                                goto label_43b015
                            
                            i_64 = &i_90[1]
                            
                            while (true)
                                long double x87_r7_11 = fconvert.t(0.0)
                                long double x87_r6_2 = fconvert.t(*i_64)
                                x87_r6_2 - x87_r7_11
                                eax_15.w = (x87_r6_2 < x87_r7_11 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r6_2, x87_r7_11) ? 1 : 0) << 0xa
                                    | (x87_r6_2 == x87_r7_11 ? 1 : 0) << 0xe
                                bool p_3 = unimplemented  {test ah, 0x44}
                                
                                if (p_3)
                                    x87_r7_9 = float.t(1)
                                    break
                                
                                edi_15 += 1
                                i_64 = &i_64[2]
                                
                                if (edi_15 u>= i_95)
                                    goto label_43b015
                            
                            goto label_43b06e
                        case 4
                            if (i_95 u<= 0)
                                goto label_43b015
                            
                            double* i_99 = i_90
                            void* edi_16 = &i_99[1]
                            int32_t ebx_5 = esi_2 - i_99
                            arg5 = i_95
                            void* i_2
                            
                            do
                                long double x87_r7_12 = fconvert.t(*edi_16)
                                long double temp8_1 = fconvert.t(-1.0)
                                x87_r7_12 - temp8_1
                                i_99.w = (x87_r7_12 < temp8_1 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r7_12, temp8_1) ? 1 : 0) << 0xa
                                    | (x87_r7_12 == temp8_1 ? 1 : 0) << 0xe
                                bool p_4 = unimplemented  {test ah, 0x5}
                                
                                if (p_4)
                                    long double x87_r7_13 = fconvert.t(*edi_16)
                                    long double temp52_1 = fconvert.t(1.0)
                                    x87_r7_13 - temp52_1
                                    i_99.w = (x87_r7_13 < temp52_1 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r7_13, temp52_1) ? 1 : 0) << 0xa
                                        | (x87_r7_13 == temp52_1 ? 1 : 0) << 0xe
                                
                                if (not(p_4) || (i_99:1.b & 0x41) == 0)
                                    sub_43713d(arg1, arg4 + 0x30, 0xbff, "indefinite asin")
                                
                                long double st0_2
                                st0_2, i_99, i_64, x87control =
                                    sub_7622d0(mxcsr, x87control, fconvert.t(*edi_16))
                                *(edi_16 + ebx_5) = fconvert.d(st0_2)
                                edi_16 += 0x10
                                i_2 = arg5
                                arg5 -= 1
                            while (i_2 != 1)
                            goto label_43bbf6
                        case 5
                            if (i_95 u> 0)
                                void* eax_21 = esi_2 + 8
                                i_64 = i_90 - esi_2
                                void* i_69 = i_95
                                void* i_3
                                
                                do
                                    *eax_21 = fconvert.d(__fpatan(float.t(1), 
                                        fconvert.t(*(eax_21 + i_64))))
                                    eax_21 += 0x10
                                    i_3 = i_69
                                    i_69 -= 1
                                while (i_3 != 1)
                            
                            goto label_43b015
                        case 6
                            if (i_95 u> 0)
                                double* i_120 = i_91
                                i_64 = i_90 - i_120
                                double* eax_22 = &i_120[1]
                                void* i_70 = i_95
                                void* i_4
                                
                                do
                                    *(esi_2 - i_120 + eax_22) = fconvert.d(__fpatan(
                                        fconvert.t(*eax_22), fconvert.t(*(i_64 + eax_22))))
                                    eax_22 = &eax_22[2]
                                    i_4 = i_70
                                    i_70 -= 1
                                while (i_4 != 1)
                            
                            goto label_43b015
                        case 7
                            if (i_95 u<= 0)
                                goto label_43b015
                            
                            void* edi_17 = esi_2 + 8
                            int32_t ebx_9 = i_90 - esi_2
                            arg5 = i_95
                            void* i_5
                            
                            do
                                double* i_84 = i_64
                                i_84.q = fconvert.d(fconvert.t(*(edi_17 + ebx_9)))
                                long double st0_3
                                st0_3, x87control = sub_762040(mxcsr, x87control, i_84)
                                *edi_17 = fconvert.d(st0_3)
                                edi_17 += 0x10
                                i_5 = arg5
                                arg5 -= 1
                            while (i_5 != 1)
                            goto label_43bbf6
                        case 8
                            if (i_95 u> 0)
                                void* ebx_11 = i_90 - var_40
                                void* edi_19 = i_91 - var_40
                                arg5 = esi_2 - var_40
                                i_64 = var_40 + 8
                                void* i_58 = i_95
                                void* i_6
                                
                                do
                                    double* ebx_12 = ebx_11 + i_64
                                    long double x87_r7_22 = fconvert.t(*ebx_12)
                                    long double temp12_1 = fconvert.t(*(edi_19 + i_64))
                                    x87_r7_22 - temp12_1
                                    void* eax_24
                                    eax_24.w = (x87_r7_22 < temp12_1 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r7_22, temp12_1) ? 1 : 0) << 0xa
                                        | (x87_r7_22 == temp12_1 ? 1 : 0) << 0xe
                                    bool p_5 = unimplemented  {test ah, 0x5}
                                    long double x87_r7_23
                                    
                                    if (p_5)
                                        long double x87_r7_24 = fconvert.t(*ebx_12)
                                        long double temp53_1 = fconvert.t(*i_64)
                                        x87_r7_24 - temp53_1
                                        eax_24.w = (x87_r7_24 < temp53_1 ? 1 : 0) << 8
                                            | (is_unordered.t(x87_r7_24, temp53_1) ? 1 : 0) << 0xa
                                            | (x87_r7_24 == temp53_1 ? 1 : 0) << 0xe
                                        
                                        if ((eax_24:1.b & 0x41) != 0)
                                            x87_r7_23 = fconvert.t(*ebx_12)
                                        else
                                            x87_r7_23 = fconvert.t(*i_64)
                                    else
                                        x87_r7_23 = fconvert.t(*(edi_19 + i_64))
                                    
                                    *(arg5 + i_64) = fconvert.d(x87_r7_23)
                                    i_64 = &i_64[2]
                                    i_6 = i_58
                                    i_58 -= 1
                                while (i_6 != 1)
                            
                            goto label_43b015
                        case 9, 0x1a, 0x28, 0x32, 0x3d, 0x44, 0x45, 0x46, 0x47, 0x48, 0x49, 0x4a, 
                            0x4b, 0x4c, 0x4d, 0x4e, 0x4f, 0x50, 0x51, 0x52, 0x53, 0x54, 0x55, 0x56, 
                            0x57
                        label_43bcd1:
                            result = 0x80004005
                        case 0xa
                            if (i_95 u> 0)
                                void* eax_26 = esi_2 + 8
                                i_64 = i_90 - esi_2
                                void* i_71 = i_95
                                void* i_7
                                
                                do
                                    long double st0_4
                                    bool c2_9
                                    st0_4, c2_9 = __fcos(fconvert.t(*(eax_26 + i_64)))
                                    *eax_26 = fconvert.d(st0_4)
                                    eax_26 += 0x10
                                    i_7 = i_71
                                    i_71 -= 1
                                while (i_7 != 1)
                            
                            goto label_43b015
                        case 0xb
                            if (i_95 u<= 0)
                                goto label_43b015
                            
                            void* edi_20 = esi_2 + 8
                            int32_t ebx_14 = i_90 - esi_2
                            arg5 = i_95
                            void* i_8
                            
                            do
                                long double x87_r7_27 = fconvert.t(*(edi_20 + ebx_14))
                                i_64 = sub_762512()
                                *edi_20 = fconvert.d(x87_r7_27)
                                edi_20 += 0x10
                                i_8 = arg5
                                arg5 -= 1
                            while (i_8 != 1)
                            goto label_43bbf6
                        case 0xc
                            i_64 = i_90
                            double* i_100 = i_91
                            *(esi_2 + 8) = fconvert.d(fconvert.t(i_64[3]) * fconvert.t(i_100[5])
                                - fconvert.t(i_64[5]) * fconvert.t(i_100[3]))
                            *(esi_2 + 0x18) = fconvert.d(fconvert.t(i_64[5]) * fconvert.t(i_100[1])
                                - fconvert.t(i_100[5]) * fconvert.t(i_64[1]))
                            *(esi_2 + 0x28) = fconvert.d(fconvert.t(i_100[3]) * fconvert.t(i_64[1])
                                - fconvert.t(i_64[3]) * fconvert.t(i_100[1]))
                        label_43b015:
                            void* eax_36 = ecx
                            
                            while (true)
                                eax_36 = *(eax_36 + 0xc)
                                
                                if (eax_36 == 0)
                                    arg5 &= eax_36
                                    
                                    if (i_95 u> 0)
                                        void* edi_71 = esi_2
                                        
                                        do
                                            unimplemented  {fld st0, qword [edi+0x8]}
                                            void* var_78_13 = arg4 + 0x30
                                            double* i_89 = i_64
                                            double* i_83 = i_64
                                            i_64 = arg1
                                            i_83.q =
                                                fconvert.d(unimplemented  {fstp qword [esp], st0})
                                            unimplemented  {fstp qword [esp], st0}
                                            result = sub_43a798(edi_71, i_83)
                                            
                                            if (result s< 0)
                                                goto label_43bcd6
                                            
                                            arg5 += 1
                                            edi_71 += 0x10
                                        while (arg5 u< i_93)
                                    
                                    result = 0
                                    break
                                
                                if (*(eax_36 + 8) != 0)
                                    goto label_43bcd1_2
                        case 0xd
                            if (i_95 u> 0)
                                void* eax_27 = esi_2 + 8
                                i_64 = i_95
                                double* i_9
                                
                                do
                                    *eax_27 = fconvert.d(float.t(0))
                                    eax_27 += 0x10
                                    i_9 = i_64
                                    i_64 -= 1
                                while (i_9 != 1)
                            
                            goto label_43b015
                        case 0xe
                            if (i_95 u> 0)
                                void* eax_28 = esi_2 + 8
                                i_64 = i_95
                                double* i_10
                                
                                do
                                    *eax_28 = fconvert.d(float.t(0))
                                    eax_28 += 0x10
                                    i_10 = i_64
                                    i_64 -= 1
                                while (i_10 != 1)
                            
                            goto label_43b015
                        case 0xf
                            if (i_95 u> 0)
                                void* eax_29 = esi_2 + 8
                                i_64 = i_90 - esi_2
                                void* i_72 = i_95
                                void* i_11
                                
                                do
                                    *eax_29 = fconvert.d(fconvert.t(*(eax_29 + i_64))
                                        * fconvert.t(57.295777918682049))
                                    eax_29 += 0x10
                                    i_11 = i_72
                                    i_72 -= 1
                                while (i_11 != 1)
                            
                            goto label_43b015
                        case 0x10
                            int32_t eax_31 = *(var_58_1 + 0x14)
                            
                            if (eax_31 == 1)
                                x87_r7_9 = fconvert.t(i_90[1])
                            label_43b06e:
                                *(esi_2 + 8) = fconvert.d(x87_r7_9)
                                goto label_43b015
                            
                            if (eax_31 == 2)
                                double* i_103 = i_90
                                x87_r7_9 = fconvert.t(i_103[7]) * fconvert.t(i_103[1])
                                    - fconvert.t(i_103[5]) * fconvert.t(i_103[3])
                                goto label_43b06e
                            
                            if (eax_31 == 3)
                                double* i_102 = i_90
                                i_64 = &i_102[0x11]
                                long double x87_r7_49 = (fconvert.t(*i_64) * fconvert.t(i_102[9])
                                    - fconvert.t(i_102[0xb]) * fconvert.t(i_102[0xf]))
                                    * fconvert.t(i_102[1]) - (fconvert.t(*i_64) * fconvert.t(i_102[7])
                                    - fconvert.t(i_102[0xb]) * fconvert.t(i_102[0xd]))
                                    * fconvert.t(i_102[3])
                                x87_r7_9 = x87_r7_49 + (
                                    fconvert.t(i_102[0xf]) * fconvert.t(i_102[7])
                                    - fconvert.t(i_102[9]) * fconvert.t(i_102[0xd]))
                                    * fconvert.t(i_102[5])
                                goto label_43b06e
                            
                            if (eax_31 == 4)
                                double* i_101 = i_90
                                long double x87_r7_43 =
                                    fconvert.t(i_101[0x15]) * fconvert.t(i_101[0x1f])
                                    - fconvert.t(i_101[0x17]) * fconvert.t(i_101[0x1d])
                                long double x87_r6_15 =
                                    fconvert.t(i_101[0x1f]) * fconvert.t(i_101[0x13])
                                    - fconvert.t(i_101[0x1b]) * fconvert.t(i_101[0x17])
                                long double x87_r5_5 =
                                    fconvert.t(i_101[0x13]) * fconvert.t(i_101[0x1d])
                                    - fconvert.t(i_101[0x15]) * fconvert.t(i_101[0x1b])
                                long double x87_r4_5 =
                                    fconvert.t(i_101[0x11]) * fconvert.t(i_101[0x1f])
                                    - fconvert.t(i_101[0x19]) * fconvert.t(i_101[0x17])
                                long double x87_r3_5 =
                                    fconvert.t(i_101[0x11]) * fconvert.t(i_101[0x1d])
                                    - fconvert.t(i_101[0x19]) * fconvert.t(i_101[0x15])
                                double var_34_1 = fconvert.d(
                                    fconvert.t(i_101[0x11]) * fconvert.t(i_101[0x1b])
                                    - fconvert.t(i_101[0x19]) * fconvert.t(i_101[0x13]))
                                long double x87_r2_11 = (x87_r7_43 * fconvert.t(i_101[0xb])
                                    - x87_r6_15 * fconvert.t(i_101[0xd])
                                    + x87_r5_5 * fconvert.t(i_101[0xf])) * fconvert.t(i_101[1]) - (
                                    x87_r7_43 * fconvert.t(i_101[9])
                                    - x87_r4_5 * fconvert.t(i_101[0xd])
                                    + x87_r3_5 * fconvert.t(i_101[0xf])) * fconvert.t(i_101[3])
                                long double x87_r2_13 = x87_r2_11 + (
                                    x87_r6_15 * fconvert.t(i_101[9])
                                    - x87_r4_5 * fconvert.t(i_101[0xb])
                                    + fconvert.t(var_34_1) * fconvert.t(i_101[0xf]))
                                    * fconvert.t(i_101[5]) - (x87_r5_5 * fconvert.t(i_101[9])
                                    - x87_r3_5 * fconvert.t(i_101[0xb])
                                    + fconvert.t(var_34_1) * fconvert.t(i_101[0xd]))
                                    * fconvert.t(i_101[7])
                                *(esi_2 + 8) = fconvert.d(x87_r2_13)
                                goto label_43b013
                            
                        label_43bcd1_1:
                            result = 0x80004005
                        case 0x11
                            x87_r7_52 = float.t(0)
                            
                            if (i_95 u> 0)
                                double* i_121 = i_91
                                double* eax_38 = &i_121[1]
                                i_64 = i_90 - i_121
                                void* i_73 = i_95
                                void* i_12
                                
                                do
                                    long double x87_r6_30 =
                                        fconvert.t(*(eax_38 + i_64)) - fconvert.t(*eax_38)
                                    eax_38 = &eax_38[2]
                                    i_12 = i_73
                                    i_73 -= 1
                                    x87_r7_52 = x87_r6_30
                                while (i_12 != 1)
                            
                            x87_r7_9 = sqrt(x87_r7_52)
                            goto label_43b06e
                        case 0x12
                            *(esi_2 + 8) = fconvert.d(float.t(0))
                            
                            if (i_95 u> 0)
                                double* i_122 = i_90
                                void* eax_39 = &i_122[1]
                                i_64 = i_91 - i_122
                                void* i_74 = i_95
                                void* i_13
                                
                                do
                                    long double x87_r7_56 =
                                        fconvert.t(*(i_64 + eax_39)) * fconvert.t(*eax_39)
                                    eax_39 += 0x10
                                    i_13 = i_74
                                    i_74 -= 1
                                    *(esi_2 + 8) = fconvert.d(x87_r7_56 + fconvert.t(*(esi_2 + 8)))
                                while (i_13 != 1)
                            
                            goto label_43b015
                        case 0x13
                            double* i_104 = i_91
                            i_64 = i_90
                            *(esi_2 + 8) = fconvert.d(float.t(1))
                            *(esi_2 + 0x18) = fconvert.d(fconvert.t(i_104[3]) * fconvert.t(i_64[3]))
                            *(esi_2 + 0x28) = fconvert.d(fconvert.t(i_64[5]))
                            *(esi_2 + 0x38) = fconvert.d(fconvert.t(i_104[7]))
                            goto label_43b015
                        case 0x14
                            if (i_95 u<= 0)
                                goto label_43b015
                            
                            void* edi_21 = esi_2 + 8
                            double* ebx_16 = i_90 - esi_2
                            arg5 = i_95
                            void* i_14
                            
                            do
                                long double x87_r7_63 = fconvert.t(*(ebx_16 + edi_21))
                                i_64, x87control = sub_76258c(mxcsr, x87control)
                                *edi_21 = fconvert.d(x87_r7_63)
                                edi_21 += 0x10
                                i_14 = arg5
                                arg5 -= 1
                            while (i_14 != 1)
                            goto label_43bbf6
                        case 0x15
                            if (i_95 u<= 0)
                                goto label_43b015
                            
                            void* edi_22 = esi_2 + 8
                            arg5 = i_95
                            void* i_15
                            
                            do
                                unimplemented  {fld st0, qword [0xb0d8a8]}
                                unimplemented  {fld st0, qword [ebx+edi]}
                                i_64, x87control = sub_761640(mxcsr, x87control, st0, st1)
                                *edi_22 = fconvert.d(unimplemented  {fstp qword [edi], st0})
                                unimplemented  {fstp qword [edi], st0}
                                top += 1
                                edi_22 += 0x10
                                i_15 = arg5
                                arg5 -= 1
                            while (i_15 != 1)
                            goto label_43bbf6
                        case 0x16
                            x87_r7_44 = float.t(0)
                            
                            if (i_95 u> 0)
                                double* i_123 = i_91
                                double* eax_40 = &i_123[1]
                                i_64 = var_40 - i_123
                                void* i_75 = i_95
                                void* i_16
                                
                                do
                                    long double x87_r6_32 =
                                        fconvert.t(*(i_64 + eax_40)) * fconvert.t(*eax_40)
                                    eax_40 = &eax_40[2]
                                    i_16 = i_75
                                    i_75 -= 1
                                    x87_r7_44 = x87_r7_44 + x87_r6_32
                                while (i_16 != 1)
                                
                                if (i_95 u> 0)
                                    double* i_105 = i_90
                                    i_64 = &i_105[1]
                                    void* edi_24 = esi_2 - i_105
                                    void* i_65 = i_95
                                    void* i_17
                                    
                                    do
                                        long double temp80_1 = fconvert.t(0.0)
                                        x87_r7_44 - temp80_1
                                        long double x87_r6_33 = fconvert.t(*i_64)
                                        i_105.w = (x87_r7_44 < temp80_1 ? 1 : 0) << 8
                                            | (is_unordered.t(x87_r7_44, temp80_1) ? 1 : 0) << 0xa
                                            | (x87_r7_44 == temp80_1 ? 1 : 0) << 0xe | 0x3000
                                        bool p_6 = unimplemented  {test ah, 0x5}
                                        
                                        if (p_6)
                                            x87_r6_33 = fneg(x87_r6_33)
                                        
                                        *(i_64 + edi_24) = fconvert.d(x87_r6_33)
                                        i_64 = &i_64[2]
                                        i_17 = i_65
                                        i_65 -= 1
                                    while (i_17 != 1)
                            
                            goto label_43b013
                        case 0x17
                            if (i_95 u<= 0)
                                goto label_43b015
                            
                            void* edi_25 = esi_2 + 8
                            int32_t ebx_18 = i_90 - esi_2
                            arg5 = i_95
                            void* i_18
                            
                            do
                                double* i_85 = i_64
                                i_85.q = fconvert.d(fconvert.t(*(edi_25 + ebx_18)))
                                long double st0_5
                                st0_5, x87control = sub_74c3d0(mxcsr, x87control, i_85)
                                *edi_25 = fconvert.d(st0_5)
                                edi_25 += 0x10
                                i_18 = arg5
                                arg5 -= 1
                            while (i_18 != 1)
                            goto label_43bbf6
                        case 0x18
                            if (i_95 u<= 0)
                                goto label_43b015
                            
                            double* i_106 = i_91
                            arg5 = esi_2 - i_106
                            void* edi_26 = &i_106[1]
                            void* i_59 = i_93
                            void* i_19
                            
                            do
                                unimplemented  {fld st0, qword [ebx+edi]}
                                unimplemented  {fld st0, qword [edi]}
                                i_64 = sub_76252a()
                                *(arg5 + edi_26) =
                                    fconvert.d(unimplemented  {fstp qword [eax+edi], st0})
                                unimplemented  {fstp qword [eax+edi], st0}
                                top -= 1
                                edi_26 += 0x10
                                i_19 = i_59
                                i_59 -= 1
                            while (i_19 != 1)
                            goto label_43bbf6
                        case 0x19
                            if (i_95 u<= 0)
                                goto label_43b015
                            
                            double* i_107 = i_90
                            void* edi_27 = &i_107[1]
                            arg5 = i_95
                            void* i_20
                            
                            do
                                int16_t var_7c_3 = i_64.w
                                long double x87_r7_69
                                
                                if (sub_75ed12((fconvert.d(fconvert.t(*edi_27))).w) == 0)
                                    x87_r7_69 = float.t(0)
                                else
                                    double* i_86 = i_64
                                    i_86.q = fconvert.d(fconvert.t(*edi_27))
                                    long double st0_6
                                    st0_6, x87control = sub_74c3d0(mxcsr, x87control, i_86)
                                    x87_r7_69 = fconvert.t(*edi_27) - st0_6
                                
                                *(edi_27 + esi_2 - i_107) = fconvert.d(x87_r7_69)
                                edi_27 += 0x10
                                i_20 = arg5
                                arg5 -= 1
                            while (i_20 != 1)
                            goto label_43bbf6
                        case 0x1b
                            if (i_95 u> 0)
                                void* eax_44 = esi_2 + 8
                                i_64 = i_95
                                double* i_21
                                
                                do
                                    *eax_44 = fconvert.d(float.t(0))
                                    eax_44 += 0x10
                                    i_21 = i_64
                                    i_64 -= 1
                                while (i_21 != 1)
                            
                            goto label_43b015
                        case 0x1c
                            if (i_95 u<= 0)
                                goto label_43b015
                            
                            void* edi_28 = esi_2 + 8
                            int32_t ebx_22 = i_90 - esi_2
                            arg5 = i_95
                            void* i_22
                            
                            do
                                int16_t var_7c_4 = i_64.w
                                long double x87_r7_72
                                
                                if (sub_75ed12((fconvert.d(fconvert.t(*(edi_28 + ebx_22)))).w) == 0)
                                    x87_r7_72 = float.t(0)
                                else
                                    x87_r7_72 = float.t(1)
                                
                                *edi_28 = fconvert.d(x87_r7_72)
                                edi_28 += 0x10
                                i_22 = arg5
                                arg5 -= 1
                            while (i_22 != 1)
                            goto label_43bbf6
                        case 0x1d
                            if (i_95 u<= 0)
                                goto label_43b015
                            
                            void* edi_29 = esi_2 + 8
                            int32_t ebx_24 = i_90 - esi_2
                            arg5 = i_95
                            void* i_23
                            
                            do
                                int16_t var_7c_5 = i_64.w
                                long double x87_r7_74
                                
                                if (sub_75ed12((fconvert.d(fconvert.t(*(edi_29 + ebx_24)))).w) == 0)
                                    x87_r7_74 = float.t(1)
                                else
                                    x87_r7_74 = float.t(0)
                                
                                *edi_29 = fconvert.d(x87_r7_74)
                                edi_29 += 0x10
                                i_23 = arg5
                                arg5 -= 1
                            while (i_23 != 1)
                            goto label_43bbf6
                        case 0x1e
                            if (i_95 u<= 0)
                                goto label_43b015
                            
                            void* edi_30 = esi_2 + 8
                            int32_t ebx_26 = i_90 - esi_2
                            arg5 = i_95
                            void* i_24
                            
                            do
                                double* i_87 = i_64
                                i_87.q = fconvert.d(fconvert.t(*(edi_30 + ebx_26)))
                                long double x87_r7_76
                                
                                if (sub_75edc6(i_87, i_64, arg2.w) == 0)
                                    x87_r7_76 = float.t(0)
                                else
                                    x87_r7_76 = float.t(1)
                                
                                *edi_30 = fconvert.d(x87_r7_76)
                                edi_30 += 0x10
                                i_24 = arg5
                                arg5 -= 1
                            while (i_24 != 1)
                            goto label_43bbf6
                        case 0x1f
                            if (i_95 u<= 0)
                                goto label_43b015
                            
                            double* i_108 = i_90
                            arg5 = esi_2 - i_108
                            void* edi_31 = &i_108[1]
                            void* i_60 = i_93
                            void* i_25
                            
                            do
                                unimplemented  {fld st0, qword [0xb0d8a8]}
                                unimplemented  {fld st0, qword [edi+ebx]}
                                i_64, x87control = sub_761640(mxcsr, x87control, st0, st1)
                                unimplemented  {fmul st0, qword [edi]}
                                *(edi_31 + arg5) =
                                    fconvert.d(unimplemented  {fstp qword [edi+eax], st0})
                                unimplemented  {fstp qword [edi+eax], st0}
                                top += 1
                                edi_31 += 0x10
                                i_25 = i_60
                                i_60 -= 1
                            while (i_25 != 1)
                            goto label_43bbf6
                        case 0x20
                            x87_r7_52 = float.t(0)
                            
                            if (i_95 u> 0)
                                void* eax_51 = &i_90[1]
                                i_64 = i_95
                                double* i_26
                                
                                do
                                    long double x87_r6_34 = fconvert.t(*eax_51)
                                    eax_51 += 0x10
                                    i_26 = i_64
                                    i_64 -= 1
                                    x87_r7_52 = x87_r6_34
                                while (i_26 != 1)
                            
                            x87_r7_9 = sqrt(x87_r7_52)
                            goto label_43b06e
                        case 0x21
                            if (i_95 u<= 0)
                                goto label_43b015
                            
                            double* i_119 = i_90
                            void* edx_5 = i_91 - var_40
                            double* eax_52 = &i_119[1]
                            arg5 = i_93
                            void* i_27
                            
                            do
                                i_64 = var_40 - i_119 + eax_52
                                *(eax_52 + esi_2 - i_119) = fconvert.d((fconvert.t(*(i_64 + edx_5))
                                    - fconvert.t(*eax_52)) * fconvert.t(*i_64) + fconvert.t(*eax_52))
                                eax_52 = &eax_52[2]
                                i_27 = arg5
                                arg5 -= 1
                            while (i_27 != 1)
                            goto label_43bbf6
                        case 0x22
                            i_64 = i_90
                            *(esi_2 + 8) = fconvert.d(float.t(1))
                            *(esi_2 + 0x18) = fconvert.d(float.t(0))
                            *(esi_2 + 0x28) = fconvert.d(float.t(0))
                            *(esi_2 + 0x38) = fconvert.d(float.t(1))
                            long double x87_r7_86 = fconvert.t(i_64[1])
                            long double temp2_1 = fconvert.t(0.0)
                            x87_r7_86 - temp2_1
                            eax_15.w = (x87_r7_86 < temp2_1 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r7_86, temp2_1) ? 1 : 0) << 0xa
                                | (x87_r7_86 == temp2_1 ? 1 : 0) << 0xe
                            
                            if ((eax_15:1.b & 0x41) != 0)
                                goto label_43b015
                            
                            long double x87_r7_87 = fconvert.t(i_64[1])
                            i_64 = i_91
                            *(esi_2 + 0x18) = fconvert.d(x87_r7_87)
                            long double x87_r7_88 = fconvert.t(i_64[1])
                            long double temp4_1 = fconvert.t(0.0)
                            x87_r7_88 - temp4_1
                            eax_15.w = (x87_r7_88 < temp4_1 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r7_88, temp4_1) ? 1 : 0) << 0xa
                                | (x87_r7_88 == temp4_1 ? 1 : 0) << 0xe
                            
                            if ((eax_15:1.b & 0x41) != 0)
                                goto label_43b015
                            
                            i_64 = sub_761640(mxcsr, x87control, fconvert.t(*(var_40 + 8)), 
                                fconvert.t(i_64[1]))
                            *(esi_2 + 0x28) = fconvert.d(arg3)
                        label_43bbf6:
                            i_95 = i_93
                            goto label_43b015
                        case 0x23
                            if (i_95 u> 0)
                                double* i_109 = i_90
                                arg5 = esi_2 - i_109
                                void* edi_34 = &i_109[1]
                                void* i_61 = i_95
                                void* i_28
                                
                                do
                                    long double x87_r7_90 = fconvert.t(*edi_34)
                                    long double temp30_1 = fconvert.t(0.0)
                                    x87_r7_90 - temp30_1
                                    i_109.w = (x87_r7_90 < temp30_1 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r7_90, temp30_1) ? 1 : 0) << 0xa
                                        | (x87_r7_90 == temp30_1 ? 1 : 0) << 0xe
                                    bool p_7 = unimplemented  {test ah, 0x41}
                                    
                                    if (not(p_7))
                                        i_64 = sub_43713d(arg1, ebx + 0x30, 0xbd8, 
                                            "infinite/indefinite log")
                                        i_95 = i_93
                                    
                                    *(arg5 + edi_34) = fconvert.d(__fyl2x(fconvert.t(*edi_34), 
                                        fconvert.t(0.69314718048553914)
                                            + fconvert.t(7.4406171098029793e-11)))
                                    edi_34 += 0x10
                                    i_28 = i_61
                                    i_61 -= 1
                                while (i_28 != 1)
                            
                            goto label_43b015
                        case 0x24
                            if (i_95 u> 0)
                                double* i_110 = i_90
                                arg5 = esi_2 - i_110
                                void* edi_35 = &i_110[1]
                                void* i_62 = i_95
                                double var_34_2 = fconvert.d(__fyl2x(fconvert.t(10.0), 
                                    fconvert.t(0.69314718048553914)
                                        + fconvert.t(7.4406171098029793e-11)))
                                void* i_29
                                
                                do
                                    long double x87_r7_97 = fconvert.t(*edi_35)
                                    long double temp31_1 = fconvert.t(0.0)
                                    x87_r7_97 - temp31_1
                                    i_110.w = (x87_r7_97 < temp31_1 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r7_97, temp31_1) ? 1 : 0) << 0xa
                                        | (x87_r7_97 == temp31_1 ? 1 : 0) << 0xe
                                    bool p_8 = unimplemented  {test ah, 0x41}
                                    
                                    if (not(p_8))
                                        i_64 = sub_43713d(arg1, ebx + 0x30, 0xbd8, 
                                            "infinite/indefinite log")
                                        i_95 = i_93
                                    
                                    *(arg5 + edi_35) = fconvert.d(__fyl2x(fconvert.t(*edi_35), 
                                        fconvert.t(0.69314718048553914)
                                            + fconvert.t(7.4406171098029793e-11)) / fconvert.t(var_34_2))
                                    edi_35 += 0x10
                                    i_29 = i_62
                                    i_62 -= 1
                                while (i_29 != 1)
                            
                            goto label_43b015
                        case 0x25
                            if (i_95 u> 0)
                                double* i_111 = i_90
                                arg5 = esi_2 - i_111
                                void* edi_36 = &i_111[1]
                                void* i_63 = i_95
                                double var_34_3 = fconvert.d(__fyl2x(fconvert.t(2.0), 
                                    fconvert.t(0.69314718048553914)
                                        + fconvert.t(7.4406171098029793e-11)))
                                void* i_30
                                
                                do
                                    long double x87_r7_105 = fconvert.t(*edi_36)
                                    long double temp32_1 = fconvert.t(0.0)
                                    x87_r7_105 - temp32_1
                                    i_111.w = (x87_r7_105 < temp32_1 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r7_105, temp32_1) ? 1 : 0) << 0xa
                                        | (x87_r7_105 == temp32_1 ? 1 : 0) << 0xe
                                    bool p_9 = unimplemented  {test ah, 0x41}
                                    
                                    if (not(p_9))
                                        i_64 = sub_43713d(arg1, ebx + 0x30, 0xbd8, 
                                            "infinite/indefinite log")
                                        i_95 = i_93
                                    
                                    *(arg5 + edi_36) = fconvert.d(__fyl2x(fconvert.t(*edi_36), 
                                        fconvert.t(0.69314718048553914)
                                            + fconvert.t(7.4406171098029793e-11)) / fconvert.t(var_34_3))
                                    edi_36 += 0x10
                                    i_30 = i_63
                                    i_63 -= 1
                                while (i_30 != 1)
                            
                            goto label_43b015
                        case 0x26
                            if (i_95 u> 0)
                                double* i_112 = i_91
                                double* edi_38 = i_90 - i_112
                                i_64 = &i_112[1]
                                void* ebx_30 = esi_2 - i_112
                                arg5 = i_95
                                void* i_31
                                
                                do
                                    long double x87_r7_110 = fconvert.t(*(edi_38 + i_64))
                                    long double temp33_1 = fconvert.t(*i_64)
                                    x87_r7_110 - temp33_1
                                    i_112.w = (x87_r7_110 < temp33_1 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r7_110, temp33_1) ? 1 : 0) << 0xa
                                        | (x87_r7_110 == temp33_1 ? 1 : 0) << 0xe
                                    long double x87_r7_111
                                    
                                    if ((i_112:1.b & 0x41) != 0)
                                        x87_r7_111 = fconvert.t(*i_64)
                                    else
                                        x87_r7_111 = fconvert.t(*(edi_38 + i_64))
                                    
                                    *(ebx_30 + i_64) = fconvert.d(x87_r7_111)
                                    i_64 = &i_64[2]
                                    i_31 = arg5
                                    arg5 -= 1
                                while (i_31 != 1)
                            
                            goto label_43b015
                        case 0x27
                            if (i_95 u> 0)
                                double* i_113 = i_91
                                double* edi_40 = i_90 - i_113
                                i_64 = &i_113[1]
                                void* ebx_32 = esi_2 - i_113
                                arg5 = i_95
                                void* i_32
                                
                                do
                                    long double x87_r7_112 = fconvert.t(*(edi_40 + i_64))
                                    long double temp34_1 = fconvert.t(*i_64)
                                    x87_r7_112 - temp34_1
                                    i_113.w = (x87_r7_112 < temp34_1 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r7_112, temp34_1) ? 1 : 0) << 0xa
                                        | (x87_r7_112 == temp34_1 ? 1 : 0) << 0xe
                                    bool p_10 = unimplemented  {test ah, 0x5}
                                    long double x87_r7_113
                                    
                                    if (p_10)
                                        x87_r7_113 = fconvert.t(*i_64)
                                    else
                                        x87_r7_113 = fconvert.t(*(edi_40 + i_64))
                                    
                                    *(ebx_32 + i_64) = fconvert.d(x87_r7_113)
                                    i_64 = &i_64[2]
                                    i_32 = arg5
                                    arg5 -= 1
                                while (i_32 != 1)
                            
                            goto label_43b015
                        case 0x29, 0x2a, 0x2b
                            if (i_95 u> 0)
                                void* eax_57 = esi_2 + 8
                                i_64 = i_91 - esi_2
                                void* i_76 = i_95
                                void* i_33
                                
                                do
                                    *eax_57 = fconvert.d(fconvert.t(*(i_64 + eax_57))
                                        * fconvert.t(i_90[1]))
                                    eax_57 += 0x10
                                    i_33 = i_76
                                    i_76 -= 1
                                while (i_33 != 1)
                            
                            goto label_43b015
                        case 0x2c, 0x2f
                            if (i_95 u> 0)
                                double* eax_58 = esi_2 + 8
                                i_64 = i_90 - esi_2
                                void* i_77 = i_95
                                void* i_34
                                
                                do
                                    *eax_58 = fconvert.d(fconvert.t(*(eax_58 + i_64))
                                        * fconvert.t(i_91[1]))
                                    eax_58 = &eax_58[2]
                                    i_34 = i_77
                                    i_77 -= 1
                                while (i_34 != 1)
                            
                            goto label_43b015
                        case 0x2d, 0x2e, 0x30, 0x31
                            void* eax_59 = var_54
                            int32_t ebx_35 = *(var_58_1 + 0x14)
                            i_64 = *(var_58_1 + 0x18)
                            double* var_24_1 = i_64
                            int32_t j_2
                            int32_t edi_42
                            
                            if (*(*(eax_59 + 0x10) + 0x10) != 1)
                                edi_42 = *(eax_59 + 0x14)
                                j_2 = *(eax_59 + 0x18)
                            else
                                edi_42 = *(eax_59 + 0x18)
                                j_2 = *(eax_59 + 0x14)
                            
                            if (i_64 == edi_42 && j_2 * ebx_35 == i_95)
                                if (ebx_35 u> 0)
                                    i_64 <<= 4
                                    int32_t eax_60 = j_2 << 4
                                    double* var_1c_1 = &i_90[1]
                                    void* var_10_3 = esi_2 + 8
                                    var_34:4.d = ebx_35
                                    int32_t i_35
                                    
                                    do
                                        if (j_2 u> 0)
                                            void* var_18_1 = &i_91[1]
                                            void* var_14_2 = var_10_3
                                            int32_t j_1 = j_2
                                            int32_t j
                                            
                                            do
                                                long double x87_r7_118 = float.t(0)
                                                
                                                if (var_24_1 u> 0)
                                                    double* edi_49 = var_1c_1
                                                    arg5 = var_18_1
                                                    double* k_1 = var_24_1
                                                    double* k
                                                    
                                                    do
                                                        long double x87_r6_47 =
                                                            fconvert.t(*edi_49) * fconvert.t(*arg5)
                                                        arg5 += eax_60
                                                        edi_49 = &edi_49[2]
                                                        k = k_1
                                                        k_1 -= 1
                                                        x87_r7_118 = x87_r7_118 + x87_r6_47
                                                    while (k != 1)
                                                
                                                var_18_1 += 0x10
                                                *var_14_2 = fconvert.d(x87_r7_118)
                                                var_14_2 += 0x10
                                                j = j_1
                                                j_1 -= 1
                                            while (j != 1)
                                        
                                        var_10_3 += eax_60
                                        var_1c_1 += i_64
                                        i_35 = var_34:4.d
                                        var_34:4.d -= 1
                                    while (i_35 != 1)
                                
                                goto label_43b015
                            
                        label_43bcd1_2:
                            result = 0x80004005
                        case 0x33
                            i_64 = i_90
                            long double x87_r6_48
                            bool p_11
                            
                            if (i_95 u> 0)
                                void* eax_61 = &i_64[1]
                                void* i_78 = i_95
                                void* i_36
                                
                                do
                                    x87_r6_48 = fconvert.t(*eax_61)
                                    eax_61 += 0x10
                                    i_36 = i_78
                                    i_78 -= 1
                                while (i_36 != 1)
                                long double x87_r6_49 = fconvert.t(0.0)
                                x87_r6_48 - x87_r6_49
                                eax_61.w = (x87_r6_48 < x87_r6_49 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r6_48, x87_r6_49) ? 1 : 0) << 0xa
                                    | (x87_r6_48 == x87_r6_49 ? 1 : 0) << 0xe | 0x3800
                                p_11 = unimplemented  {test ah, 0x44}
                            
                            if (i_95 u> 0 && p_11)
                                x87_r7_44 = fconvert.t(1.0) / sqrt(x87_r6_48)
                            else
                                x87_r7_44 = float.t(0)
                            
                            if (i_95 u> 0)
                                double* eax_62 = esi_2 + 8
                                i_64 -= esi_2
                                void* i_79 = i_95
                                void* i_37
                                
                                do
                                    *eax_62 = fconvert.d(x87_r7_44 * fconvert.t(*(eax_62 + i_64)))
                                    eax_62 = &eax_62[2]
                                    i_37 = i_79
                                    i_79 -= 1
                                while (i_37 != 1)
                            
                            goto label_43b013
                        case 0x34
                            if (i_95 u<= 0)
                                goto label_43b015
                            
                            double* i_114 = i_91
                            arg5 = esi_2 - i_114
                            void* edi_51 = &i_114[1]
                            var_34:4.d = i_93
                            int32_t i_38
                            
                            do
                                unimplemented  {fld st0, qword [edi+ebx]}
                                unimplemented  {fld st0, qword [edi]}
                                double* i_94
                                i_94, x87control = sub_761640(mxcsr, x87control, st0, st1)
                                unimplemented  {fld st0, st0}
                                *(edi_51 + arg5) =
                                    fconvert.d(unimplemented  {fstp qword [edi+eax], st0})
                                unimplemented  {fstp qword [edi+eax], st0}
                                double* i_96 = i_94
                                i_96.q = fconvert.d(unimplemented  {fstp qword [esp], st0})
                                unimplemented  {fstp qword [esp], st0}
                                top += 1
                                int32_t eax_65 = __fpclass(i_96, arg2.w)
                                i_64 = i_94
                                
                                if (eax_65 s> 0 && eax_65 s<= 2)
                                    i_64 = sub_43713d(arg1, arg4 + 0x30, 0xbd8, "indefinite power")
                                
                                edi_51 += 0x10
                                i_38 = var_34:4.d
                                var_34:4.d -= 1
                            while (i_38 != 1)
                            goto label_43bbf6
                        case 0x35
                            if (i_95 u> 0)
                                void* eax_68 = esi_2 + 8
                                i_64 = i_90 - esi_2
                                void* i_80 = i_95
                                void* i_39
                                
                                do
                                    *eax_68 = fconvert.d(fconvert.t(*(eax_68 + i_64))
                                        * fconvert.t(0.017453293005625408))
                                    eax_68 += 0x10
                                    i_39 = i_80
                                    i_80 -= 1
                                while (i_39 != 1)
                            
                            goto label_43b015
                        case 0x36
                            x87_r7_44 = float.t(0)
                            i_64 = i_91
                            double* i_124 = i_90
                            
                            if (i_95 u> 0)
                                arg5 = i_64 - i_124
                                double* eax_69 = &i_124[1]
                                var_34:4.d = i_95
                                int32_t i_40
                                
                                do
                                    long double x87_r6_53 =
                                        fconvert.t(*(eax_69 + arg5)) * fconvert.t(*eax_69)
                                    eax_69 = &eax_69[2]
                                    i_40 = var_34:4.d
                                    var_34:4.d -= 1
                                    x87_r7_44 = x87_r7_44 + x87_r6_53
                                while (i_40 != 1)
                                
                                if (i_95 u> 0)
                                    double* edi_52 = i_124 - i_64
                                    double* eax_70 = &i_64[1]
                                    double* ebx_44 = esi_2 - i_64
                                    i_64 = i_95
                                    double* i_41
                                    
                                    do
                                        long double x87_r6_55 = x87_r7_44 * fconvert.t(*eax_70)
                                        *(ebx_44 + eax_70) = fconvert.d(
                                            fconvert.t(*(edi_52 + eax_70))
                                            - (x87_r6_55 + x87_r6_55))
                                        eax_70 = &eax_70[2]
                                        i_41 = i_64
                                        i_64 -= 1
                                    while (i_41 != 1)
                            
                            goto label_43b013
                        case 0x37
                            long double x87_r7_124 = fconvert.t(*(var_40 + 8))
                            i_64 = i_91
                            double* i_125 = i_90
                            long double x87_r6_16 = float.t(0)
                            void* eax_71
                            
                            if (i_95 u> 0)
                                arg5 = i_64 - i_125
                                eax_71 = &i_125[1]
                                var_34:4.d = i_95
                                int32_t i_42
                                
                                do
                                    long double x87_r5_19 =
                                        fconvert.t(*(eax_71 + arg5)) * fconvert.t(*eax_71)
                                    eax_71 += 0x10
                                    i_42 = var_34:4.d
                                    var_34:4.d -= 1
                                    x87_r6_16 = x87_r6_16 + x87_r5_19
                                while (i_42 != 1)
                            
                            long double x87_r5_20 = fconvert.t(1.0)
                            long double x87_r5_21 = x87_r5_20
                                - (x87_r5_20 - x87_r6_16 * x87_r6_16) * x87_r7_124 * x87_r7_124
                            long double temp5_1 = fconvert.t(0.0)
                            x87_r5_21 - temp5_1
                            eax_71.w = (x87_r5_21 < temp5_1 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r5_21, temp5_1) ? 1 : 0) << 0xa
                                | (x87_r5_21 == temp5_1 ? 1 : 0) << 0xe | 0x2800
                            bool p_12 = unimplemented  {test ah, 0x5}
                            
                            if (p_12)
                                if (i_95 u> 0)
                                    double* edi_53 = i_125 - i_64
                                    double* eax_73 = &i_64[1]
                                    double* ebx_47 = esi_2 - i_64
                                    i_64 = i_95
                                    double* i_43
                                    
                                    do
                                        *(ebx_47 + eax_73) = fconvert.d((sqrt(x87_r5_21)
                                            + x87_r6_16 * x87_r7_124) * fconvert.t(*(edi_53 + eax_73))
                                            - x87_r6_16 * fconvert.t(*eax_73))
                                        eax_73 = &eax_73[2]
                                        i_43 = i_64
                                        i_64 -= 1
                                    while (i_43 != 1)
                                
                                goto label_43b013
                            
                            if (i_95 u> 0)
                                void* eax_72 = esi_2 + 8
                                i_64 = i_95
                                double* i_44
                                
                                do
                                    *eax_72 = fconvert.d(float.t(0))
                                    eax_72 += 0x10
                                    i_44 = i_64
                                    i_64 -= 1
                                while (i_44 != 1)
                            
                            goto label_43b015
                        case 0x38
                            if (i_95 u<= 0)
                                goto label_43b015
                            
                            void* edi_54 = esi_2 + 8
                            int32_t ebx_49 = i_90 - esi_2
                            arg5 = i_95
                            void* i_45
                            
                            do
                                double* i_88 = i_64
                                i_88.q =
                                    fconvert.d(fconvert.t(*(edi_54 + ebx_49)) + fconvert.t(0.5))
                                long double st0_7
                                st0_7, x87control = sub_74c3d0(mxcsr, x87control, i_88)
                                *edi_54 = fconvert.d(st0_7)
                                edi_54 += 0x10
                                i_45 = arg5
                                arg5 -= 1
                            while (i_45 != 1)
                            goto label_43bbf6
                        case 0x39
                            if (i_95 u> 0)
                                double* i_115 = i_90
                                arg5 = esi_2 - i_115
                                double* edi_55 = &i_115[1]
                                var_34:4.d = i_95
                                int32_t i_46
                                
                                do
                                    long double x87_r7_131 = fconvert.t(*edi_55)
                                    long double temp42_1 = fconvert.t(0.0)
                                    x87_r7_131 - temp42_1
                                    i_115.w = (x87_r7_131 < temp42_1 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r7_131, temp42_1) ? 1 : 0) << 0xa
                                        | (x87_r7_131 == temp42_1 ? 1 : 0) << 0xe
                                    bool p_13 = unimplemented  {test ah, 0x5}
                                    
                                    if (not(p_13))
                                        i_115, i_64 = sub_43713d(arg1, ebx + 0x30, 0xbd7, 
                                            "imaginary square root")
                                        i_95 = i_93
                                    
                                    long double x87_r7_132 = fconvert.t(*edi_55)
                                    long double x87_r6_59 = fconvert.t(0.0)
                                    x87_r6_59 - x87_r7_132
                                    i_115.w = (x87_r6_59 < x87_r7_132 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r6_59, x87_r7_132) ? 1 : 0) << 0xa
                                        | (x87_r6_59 == x87_r7_132 ? 1 : 0) << 0xe
                                    bool p_14 = unimplemented  {test ah, 0x44}
                                    
                                    if (not(p_14))
                                        i_64 =
                                            sub_43713d(arg1, ebx + 0x30, 0xbd9, "division by zero")
                                        i_95 = i_93
                                    
                                    *(edi_55 + arg5) =
                                        fconvert.d(fconvert.t(1.0) / sqrt(fconvert.t(*edi_55)))
                                    edi_55 = &edi_55[2]
                                    i_46 = var_34:4.d
                                    var_34:4.d -= 1
                                while (i_46 != 1)
                            
                            goto label_43b015
                        case 0x3a
                            if (i_95 u> 0)
                                i_64 = esi_2 + 8
                                int32_t edi_57 = i_90 - esi_2
                                void* i_66 = i_95
                                void* i_47
                                
                                do
                                    long double x87_r7_136 = fconvert.t(*(i_64 + edi_57))
                                    long double temp43_1 = fconvert.t(0.0)
                                    x87_r7_136 - temp43_1
                                    eax_15.w = (x87_r7_136 < temp43_1 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r7_136, temp43_1) ? 1 : 0) << 0xa
                                        | (x87_r7_136 == temp43_1 ? 1 : 0) << 0xe
                                    bool p_15 = unimplemented  {test ah, 0x5}
                                    long double x87_r7_137
                                    
                                    if (p_15)
                                        long double x87_r7_138 = fconvert.t(*(i_64 + edi_57))
                                        long double temp59_1 = fconvert.t(1.0)
                                        x87_r7_138 - temp59_1
                                        eax_15.w = (x87_r7_138 < temp59_1 ? 1 : 0) << 8
                                            | (is_unordered.t(x87_r7_138, temp59_1) ? 1 : 0) << 0xa
                                            | (x87_r7_138 == temp59_1 ? 1 : 0) << 0xe
                                        
                                        if ((eax_15:1.b & 0x41) != 0)
                                            x87_r7_137 = fconvert.t(*(i_64 + edi_57))
                                        else
                                            x87_r7_137 = float.t(1)
                                    else
                                        x87_r7_137 = float.t(0)
                                    
                                    *i_64 = fconvert.d(x87_r7_137)
                                    i_64 = &i_64[2]
                                    i_47 = i_66
                                    i_66 -= 1
                                while (i_47 != 1)
                            
                            goto label_43b015
                        case 0x3b
                            if (i_95 u<= 0)
                                goto label_43b015
                            
                            x87_r7_44 = fconvert.t(0.0)
                            i_64 = esi_2 + 8
                            int32_t edi_59 = i_90 - esi_2
                            void* i_67 = i_95
                            void* i_48
                            
                            do
                                long double temp44_1 = fconvert.t(*(i_64 + edi_59))
                                x87_r7_44 - temp44_1
                                eax_15.w = (x87_r7_44 < temp44_1 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r7_44, temp44_1) ? 1 : 0) << 0xa
                                    | (x87_r7_44 == temp44_1 ? 1 : 0) << 0xe | 0x3800
                                long double x87_r6_60
                                
                                if ((eax_15:1.b & 0x41) != 0)
                                    long double temp60_1 = fconvert.t(*(i_64 + edi_59))
                                    x87_r7_44 - temp60_1
                                    eax_15.w = (x87_r7_44 < temp60_1 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r7_44, temp60_1) ? 1 : 0) << 0xa
                                        | (x87_r7_44 == temp60_1 ? 1 : 0) << 0xe | 0x3800
                                    bool p_16 = unimplemented  {test ah, 0x5}
                                    
                                    if (p_16)
                                        x87_r6_60 = float.t(0)
                                    else
                                        x87_r6_60 = float.t(1)
                                else
                                    x87_r6_60 = fconvert.t(-1.0)
                                
                                *i_64 = fconvert.d(x87_r6_60)
                                i_64 = &i_64[2]
                                i_48 = i_67
                                i_67 -= 1
                            while (i_48 != 1)
                            goto label_43b013
                        case 0x3c
                            if (i_95 u> 0)
                                void* eax_76 = esi_2 + 8
                                i_64 = i_90 - esi_2
                                void* i_81 = i_95
                                void* i_49
                                
                                do
                                    long double st0_8
                                    bool c2_26
                                    st0_8, c2_26 = __fsin(fconvert.t(*(eax_76 + i_64)))
                                    *eax_76 = fconvert.d(st0_8)
                                    eax_76 += 0x10
                                    i_49 = i_81
                                    i_81 -= 1
                                while (i_49 != 1)
                            
                            goto label_43b015
                        case 0x3e
                            if (i_95 u<= 0)
                                goto label_43b015
                            
                            void* edi_60 = esi_2 + 8
                            int32_t ebx_51 = i_90 - esi_2
                            arg5 = i_95
                            void* i_50
                            
                            do
                                long double x87_r7_141 = fconvert.t(*(edi_60 + ebx_51))
                                i_64 = sub_762508()
                                *edi_60 = fconvert.d(x87_r7_141)
                                edi_60 += 0x10
                                i_50 = arg5
                                arg5 -= 1
                            while (i_50 != 1)
                            goto label_43bbf6
                        case 0x3f
                            if (i_95 u> 0)
                                void* edi_62 = i_90 - var_40
                                void* ebx_53 = i_91 - var_40
                                i_64 = var_40 + 8
                                void* edi_64 = esi_2 - var_40
                                arg5 = i_95
                                void* i_51
                                
                                do
                                    long double x87_r7_142 = fconvert.t(*i_64)
                                    long double temp47_1 = fconvert.t(*(i_64 + edi_62))
                                    x87_r7_142 - temp47_1
                                    void* eax_78
                                    eax_78.w = (x87_r7_142 < temp47_1 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r7_142, temp47_1) ? 1 : 0) << 0xa
                                        | (x87_r7_142 == temp47_1 ? 1 : 0) << 0xe
                                    bool p_17 = unimplemented  {test ah, 0x5}
                                    
                                    if (p_17)
                                        long double x87_r7_144 = fconvert.t(*i_64)
                                        long double temp61_1 = fconvert.t(*(i_64 + ebx_53))
                                        x87_r7_144 - temp61_1
                                        eax_78.w = (x87_r7_144 < temp61_1 ? 1 : 0) << 8
                                            | (is_unordered.t(x87_r7_144, temp61_1) ? 1 : 0) << 0xa
                                            | (x87_r7_144 == temp61_1 ? 1 : 0) << 0xe
                                        
                                        if ((eax_78:1.b & 1) != 0)
                                            long double x87_r7_147 = (fconvert.t(*i_64)
                                                - fconvert.t(*(i_64 + edi_62))) / (
                                                fconvert.t(*(i_64 + ebx_53))
                                                - fconvert.t(*(i_64 + edi_62)))
                                            long double x87_r6_64 = x87_r7_147 * x87_r7_147
                                            long double x87_r4_17 = x87_r6_64 * x87_r7_147
                                            *(i_64 + edi_64) = fconvert.d(
                                                fconvert.t(3.0) * x87_r6_64
                                                - (x87_r4_17 + x87_r4_17))
                                        else
                                            *(i_64 + edi_64) = fconvert.d(float.t(1))
                                    else
                                        *(i_64 + edi_64) = fconvert.d(float.t(0))
                                    
                                    i_64 = &i_64[2]
                                    i_51 = arg5
                                    arg5 -= 1
                                while (i_51 != 1)
                            
                            goto label_43b015
                        case 0x40
                            if (i_95 u> 0)
                                double* i_116 = i_90
                                arg5 = esi_2 - i_116
                                void* edi_65 = &i_116[1]
                                var_34:4.d = i_95
                                int32_t i_52
                                
                                do
                                    long double x87_r7_149 = fconvert.t(*edi_65)
                                    long double temp48_1 = fconvert.t(0.0)
                                    x87_r7_149 - temp48_1
                                    i_116.w = (x87_r7_149 < temp48_1 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r7_149, temp48_1) ? 1 : 0) << 0xa
                                        | (x87_r7_149 == temp48_1 ? 1 : 0) << 0xe
                                    bool p_18 = unimplemented  {test ah, 0x5}
                                    
                                    if (not(p_18))
                                        i_64 = sub_43713d(arg1, ebx + 0x30, 0xbd7, 
                                            "imaginary square root")
                                        i_95 = i_93
                                    
                                    *(arg5 + edi_65) = fconvert.d(sqrt(fconvert.t(*edi_65)))
                                    edi_65 += 0x10
                                    i_52 = var_34:4.d
                                    var_34:4.d -= 1
                                while (i_52 != 1)
                            
                            goto label_43b015
                        case 0x41
                            if (i_95 u> 0)
                                double* i_117 = i_90
                                void* edi_67 = i_91 - i_117
                                i_64 = &i_117[1]
                                double* ebx_55 = esi_2 - i_117
                                arg5 = i_95
                                void* i_53
                                
                                do
                                    long double x87_r7_152 = fconvert.t(*(i_64 + edi_67))
                                    long double temp49_1 = fconvert.t(*i_64)
                                    x87_r7_152 - temp49_1
                                    i_117.w = (x87_r7_152 < temp49_1 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r7_152, temp49_1) ? 1 : 0) << 0xa
                                        | (x87_r7_152 == temp49_1 ? 1 : 0) << 0xe
                                    long double x87_r7_153
                                    
                                    if ((i_117:1.b & 1) != 0)
                                        x87_r7_153 = float.t(0)
                                    else
                                        x87_r7_153 = float.t(1)
                                    
                                    *(ebx_55 + i_64) = fconvert.d(x87_r7_153)
                                    i_64 = &i_64[2]
                                    i_53 = arg5
                                    arg5 -= 1
                                while (i_53 != 1)
                            
                            goto label_43b015
                        case 0x42
                            if (i_95 u> 0)
                                void* eax_81 = esi_2 + 8
                                i_64 = i_90 - esi_2
                                void* i_82 = i_95
                                void* i_54
                                
                                do
                                    int16_t top_14 = top - 1
                                    unimplemented  {fld st0, qword [eax+ecx]}
                                    long double st0_9
                                    bool c2_31
                                    st0_9, c2_31 = __fptan(unimplemented  {fptan })
                                    unimplemented  {fptan }
                                    
                                    if (not(c2_31))
                                        top_14 -= 1
                                        unimplemented  {fptan }
                                    
                                    unimplemented  {fstp st0, st0}
                                    unimplemented  {fstp st0, st0}
                                    *eax_81 = fconvert.d(unimplemented  {fstp qword [eax], st0})
                                    unimplemented  {fstp qword [eax], st0}
                                    top = top_14 + 2
                                    eax_81 += 0x10
                                    i_54 = i_82
                                    i_82 -= 1
                                while (i_54 != 1)
                            
                            goto label_43b015
                        case 0x43
                            if (i_95 u<= 0)
                                goto label_43b015
                            
                            void* edi_68 = esi_2 + 8
                            int32_t ebx_57 = i_90 - esi_2
                            arg5 = i_95
                            void* i_55
                            
                            do
                                long double x87_r7_154 = fconvert.t(*(edi_68 + ebx_57))
                                i_64 = sub_762519()
                                *edi_68 = fconvert.d(x87_r7_154)
                                edi_68 += 0x10
                                i_55 = arg5
                                arg5 -= 1
                            while (i_55 != 1)
                            goto label_43bbf6
                        case 0x58
                            int32_t i_56 = 0
                            
                            if (*(var_58_1 + 0x18) u> 0)
                                i_64 = *(var_58_1 + 0x14)
                                
                                do
                                    arg5 = nullptr
                                    
                                    if (i_64 u> 0)
                                        do
                                            *(var_58_1 + 0x18)
                                            int32_t edx_9 = (*(ebx + 0x18) * i_56 + arg5) << 4
                                            arg5 += 1
                                            *(edx_9 + esi_2 + 8) = fconvert.d(fconvert.t(i_90[
                                                (*(var_58_1 + 0x18) * arg5 + i_56) * 2 + 1]))
                                            i_64 = *(var_58_1 + 0x14)
                                        while (arg5 u< i_64)
                                        
                                        i_95 = i_93
                                    
                                    i_56 += 1
                                while (i_56 u< *(var_58_1 + 0x18))
                            
                            goto label_43b015
                        case 0x59
                            double* i_118 = i_90
                            x87_r7_44 = fconvert.t(255.001953125)
                            *(esi_2 + 8) = fconvert.d(fconvert.t(i_118[5]) * x87_r7_44)
                            *(esi_2 + 0x18) = fconvert.d(fconvert.t(i_118[3]) * x87_r7_44)
                            *(esi_2 + 0x28) = fconvert.d(fconvert.t(i_118[1]) * x87_r7_44)
                            *(esi_2 + 0x38) = fconvert.d(fconvert.t(i_118[7]) * x87_r7_44)
                        label_43b013:
                            goto label_43b015
            else
                int32_t var_10_1 = 0
                
                while (true)
                    i_64 = i_92[1].d
                    
                    if (i_64 != 0 && *(i_64 + 4) == 0xd)
                        int32_t eax_4 = i_64[3].d i* *(i_64 + 0x14)
                        int32_t __saved_ebp
                        *(&__saved_ebp + var_10_1 - 0x64) = eax_4
                        *(&__saved_ebp + var_10_1 - 0x54) = i_64
                        int32_t* edi_12 = sub_745f3f(eax_4 << 4)
                        *(&i_90 + var_10_1) = edi_12
                        
                        if (edi_12 == 0)
                            result = 0x8007000e
                            break
                        
                        int32_t result_1
                        result_1, i_64, x87control =
                            sub_43cb9f(arg1, *(&__saved_ebp + var_10_1 - 0x54), edi_12)
                        result = result_1
                        
                        if (result s< 0)
                            break
                        
                        int32_t var_14_1 = 0
                        
                        if (*(&__saved_ebp + var_10_1 - 0x64) u> 0)
                            var_34:4.d = arg4 + 0x30
                            void* edx_3 = &edi_12[2]
                            
                            while (true)
                                int32_t var_78_3 = var_34:4.d
                                int32_t result_2
                                st0, result_2, i_64 = sub_437fe4(edx_3, edi_12)
                                arg3 = st0
                                result = result_2
                                
                                if (result s< 0)
                                    break
                                
                                var_14_1 += 1
                                *edi_12 = 3
                                edi_12 = &edi_12[4]
                                edx_3 += 0x10
                                
                                if (var_14_1 u>= *(&__saved_ebp + var_10_1 - 0x64))
                                    goto label_43ab6b
                            
                            break
                    
                label_43ab6b:
                    double* i_97 = *(i_92 + 0xc)
                    var_10_1 += 4
                    i_92 = i_97
                    
                    if (i_97 == 0)
                        ebx = arg4
                        i_95 = i_93
                        goto label_43ab89
        label_43bcd6:
            
            for (int32_t i_57 = 0; i_57 u< 4; i_57 += 1)
                j__free((&i_90)[i_57])
            
            return result
else if (arg5 == ebx)
    return 0

return 0x80004005
