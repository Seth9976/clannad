// 函数: sub_5371b0
// 地址: 0x5371b0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t i_1 = data_1bfdd30 - 0x3e8
int32_t edi
int32_t var_18 = edi
int32_t i_2
char** eax_10
int32_t eax_13
char** eax_36
char** ecx_29
int32_t esi_10
int32_t mxcsr

if (i_1 u> 0x11)
    data_1b8b06c = 1
else
    switch (i_1)
        case 0
            int32_t eax_1 = data_1af4e84
            
            if (eax_1 == 0)
                sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
                int32_t eax_6 = data_1b8a720
                
                if (eax_6 s< 0)
                    eax_6 = 0
                
                data_1b8a720 = eax_6 + 1
                int32_t eax_8 = sub_4d18c0(2)
                int32_t edx_5 = 0
                int32_t temp2_1 = data_1b8a720
                data_715e98 = modu.dp.d(edx_5:eax_8, temp2_1)
                return divu.dp.d(edx_5:eax_8, temp2_1)
            
            i_1 = eax_1 - 1
            
            if (eax_1 == 1)
                sub_4ef190(i_1, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                int32_t ecx_2 = data_1b8a720
                int32_t esi_1 = data_1b8a734
                
                if (ecx_2 s> esi_1)
                    int32_t eax_3 = ecx_2
                    ecx_2 = esi_1
                    esi_1 = eax_3
                    data_1b8a720 = ecx_2
                    data_1b8a734 = esi_1
                
                int32_t eax_4 = sub_4d18c0(2)
                int32_t edx_1 = 0
                data_715e98 = modu.dp.d(edx_1:eax_4, esi_1 - ecx_2 + 1) + data_1b8a720
                return divu.dp.d(edx_1:eax_4, esi_1 - ecx_2 + 1)
        case 1
            sub_4ef190(i_1, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
            eax_10 = data_1b8a720
            
            if (eax_10 s< 0)
                data_715e98 = 0
                return eax_10
            
            int32_t ecx_7 = data_1b8a734
            
            if (eax_10 s>= ecx_7)
                data_715e98 = 0x64
                return eax_10
            
            eax_13 = divs.dp.d(sx.q(eax_10 * 0x64), ecx_7)
            data_715e98 = eax_13
            return eax_13
        case 2
            sub_4ef190(i_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
            eax_13 = data_1b8a720
            
            if (eax_13 s>= 0)
                data_715e98 = eax_13
                return eax_13
            
            int32_t eax_14 = neg.d(eax_13)
            data_715e98 = eax_14
            return eax_14
        case 3
            int32_t eax_15 = data_1af4e84
            
            if (eax_15 == 0)
                sub_4ef190(eax_15, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
                int32_t eax_17 = data_1b8a720
                int32_t eax_18 = eax_17 * eax_17
                data_715e98 = eax_18
                return eax_18
            
            i_1 = eax_15 - 1
            
            if (eax_15 == 1)
                eax_10 = sub_4ef190(i_1, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                int32_t i_3 = data_1b8a734
                
                if (i_3 s< 0)
                    data_715e98 = 0
                    return eax_10
                
                int32_t edx_12 = 1
                
                if (i_3 s> 0)
                    int32_t i
                    
                    do
                        edx_12 *= data_1b8a720
                        i = i_3
                        i_3 -= 1
                    while (i != 1)
                
                data_715e98 = edx_12
                return eax_10
        case 4
            int32_t eax_19 = data_1af4e84
            
            if (eax_19 == 0)
                sub_4ef190(eax_19, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
                data_1b8a734 = 0
            else
                if (eax_19 == 1)
                    sub_4ef190(eax_19 - 1, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                
                int32_t esi_5 = data_1b8a734
                
                if (esi_5 s> 0)
                    int32_t temp0_4 = divs.dp.d(sx.q(sub_4d1650(data_1b8a720)), esi_5)
                    data_715e98 = temp0_4
                    return temp0_4
            
            uint32_t eax_25 = sub_4d1650(data_1b8a720)
            data_715e98 = eax_25
            return eax_25
        case 5
            int16_t x87control = sub_4ef190(i_1, arg2 + 0x20, *(arg2 + 0x20), "$$$$", &data_1b8a720)
            int32_t edx_19 = data_1b8a720
            int32_t eax_26 = data_1b8a748
            int32_t eax_28
            
            if (edx_19 != eax_26)
                int32_t esi_6 = data_1b8a734
                int32_t ecx_22 = data_1b8a75c
                
                if (esi_6 != ecx_22)
                    uint128_t xmm2_1 = -0x8000000000000000
                    double xmm1_2[0x2] = _mm_cvtepi32_pd(zx.q(eax_26 - edx_19))
                    
                    if (not(0 f<= xmm1_2))
                        xmm1_2 = _mm_xor_pd(xmm1_2, xmm2_1)
                    
                    double xmm4_1 = 1.0
                    double xmm1_3 = xmm1_2 f+ xmm4_1
                    uint64_t xmm0_2[0x2] = _mm_cvtepi32_pd(zx.q(ecx_22 - esi_6))
                    
                    if (not(0 f<= xmm0_2))
                        xmm0_2 = _mm_xor_pd(xmm0_2, xmm2_1)
                    
                    double xmm0_3 = xmm0_2 f+ xmm4_1
                    eax_28 = int.d(__libm_sse2_sqrt_precise(mxcsr, x87control, 
                        xmm0_3 * xmm0_3 + xmm1_3 * xmm1_3))
                else
                    eax_28 = eax_26 - edx_19
                    
                    if (eax_26 - edx_19 s< 0)
                        int32_t eax_30 = neg.d(eax_28)
                        data_715e98 = eax_30
                        return eax_30
            else
                int32_t eax_27 = data_1b8a75c
                eax_28 = eax_27 - data_1b8a734
                
                if (eax_27 - data_1b8a734 s< 0)
                    int32_t eax_29 = neg.d(eax_28)
                    data_715e98 = eax_29
                    return eax_29
            
            data_715e98 = eax_28
            return eax_28
        case 6
            int16_t x87control_1 =
                sub_4ef190(i_1, arg2 + 0x20, *(arg2 + 0x20), "$$$$", &data_1b8a720)
            int32_t ecx_26 = data_1b8a720
            int32_t edi_15 = data_1b8a748
            int32_t eax_32 = data_1b8a75c
            int32_t esi_7 = data_1b8a734
            
            if (ecx_26 == edi_15 && esi_7 == eax_32)
                data_715e98 = 0
                return 0
            
            int32_t edi_17 = edi_15 - ecx_26
            int32_t esi_8 = esi_7 - eax_32
            double xmm1_6 = _mm_cvtepi32_pd(zx.q(edi_17))
            uint64_t xmm0_10[0x2] =
                __libm_sse2_atan_precise(mxcsr, x87control_1, _mm_cvtepi32_pd(zx.q(esi_8)) / xmm1_6)
            bool cond:0 = _mm_cvtepi32_pd(zx.q(edi_17)) < 0.0
            int64_t xmm0_12 = _mm_cvtepi32_pd(zx.q(esi_8))
            double xmm0_13
            
            if (cond:0)
                if (not(xmm0_12 f< 0))
                    int32_t eax_34 = int.d(
                        __xorpd_xmmxuq_memxuq(xmm0_10, data_624a20.o) * 180.0 / 3.1400000000000001
                        + 270.0)
                    data_715e98 = eax_34
                    return eax_34
                
                xmm0_13 = 270.0
            else
                if (xmm0_12 f< 0)
                    int32_t eax_33 = int.d(
                        __xorpd_xmmxuq_memxuq(xmm0_10, data_624a20.o) * 180.0 / 3.1400000000000001
                        + 90.0)
                    data_715e98 = eax_33
                    return eax_33
                
                xmm0_13 = 90.0
            
            int32_t eax_35 = int.d(xmm0_13 - xmm0_10 f* 180.0 / 3.1400000000000001)
            data_715e98 = eax_35
            return eax_35
        case 7
            eax_36 = sub_4ef190(i_1, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
            ecx_29 = data_1b8a734
            
            if (data_1b8a720 s< ecx_29)
                ecx_29 = data_1b8a720
            
            data_715e98 = ecx_29
            return eax_36
        case 8
            char** eax_37 = sub_4ef190(i_1, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
            int32_t ecx_32 = data_1b8a734
            
            if (data_1b8a720 s> ecx_32)
                ecx_32 = data_1b8a720
            
            data_715e98 = ecx_32
            return eax_37
        case 9
            sub_4ef190(i_1, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720)
            ecx_29 = data_1b8a720
            char** edx_24 = data_1b8a748
            
            if (ecx_29 s> edx_24)
                char** eax_38 = ecx_29
                ecx_29 = edx_24
                edx_24 = eax_38
                data_1b8a720 = ecx_29
                data_1b8a748 = edx_24
            
            eax_36 = data_1b8a734
            
            if (ecx_29 s>= eax_36)
                data_715e98 = ecx_29
                return eax_36
            
            if (edx_24 s<= eax_36)
                eax_36 = edx_24
            
            data_715e98 = eax_36
            return eax_36
        case 0xa
            int32_t eax_39 = data_1af4e84
            
            if (eax_39 == 0)
                sub_4ef190(eax_39, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
                data_1b8a734 = 0
            else
                if (eax_39 == 1)
                    sub_4ef190(eax_39 - 1, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                
                int32_t esi_9 = data_1b8a734
                
                if (esi_9 s> 0)
                    int32_t temp0_5 = divs.dp.d(sx.q(sub_4d1770(data_1b8a720)), esi_9)
                    data_715e98 = temp0_5
                    return temp0_5
            
            uint32_t eax_45 = sub_4d1770(data_1b8a720)
            data_715e98 = eax_45
            return eax_45
        case 0xb
            i_1 = sub_4ef190(i_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
            int32_t ecx_43 = data_1b8a720
            
            if (ecx_43 s> 0)
                data_715e98 = 1
                return i_1
            
            int32_t eax_46
            eax_46.b = ecx_43 s>= 0
            data_715e98 = eax_46 - 1
            return eax_46 - 1
        case 0xc
            eax_10 = sub_4ef190(i_1, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
            esi_10 = data_1b8a734
            
            if (esi_10 s<= 0)
                data_715e98 = 0
                return eax_10
            
            int32_t temp0_6 = divs.dp.d(sx.q(sub_4d1650(0x5a)), esi_10)
            i_1 = sub_4d1650(data_1b8a720)
            
            if (temp0_6 s> 0)
                i_1 = divs.dp.d(sx.q(i_1), temp0_6)
            
            data_715e98 = i_1
            
            if (i_1 s> esi_10)
                data_715e98 = esi_10
                return i_1
            
        label_5377dd:
            esi_10 = neg.d(esi_10)
            
            if (i_1 s< esi_10)
                data_715e98 = esi_10
        case 0xd
            eax_10 = sub_4ef190(i_1, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
            esi_10 = data_1b8a734
            
            if (esi_10 s<= 0)
                data_715e98 = 0
                return eax_10
            
            int32_t temp0_8 = divs.dp.d(sx.q(sub_4d1650(0x5a)), esi_10)
            i_1 = sub_4d1770(data_1b8a720)
            
            if (temp0_8 s> 0)
                i_1 = divs.dp.d(sx.q(i_1), temp0_8)
            
            data_715e98 = i_1
            
            if (i_1 s<= esi_10)
                goto label_5377dd
            
            data_715e98 = esi_10
        case 0xe
            sub_4ef190(i_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
            i_1 = data_1b8a720
            
            if (i_1 s<= 0)
                data_715e98 = 0xffffffff
                return i_1
            
            int32_t ecx_52 = 0
            data_715e98 = 0
            
            if (i_1 s> 1)
                do
                    i_1 s>>= 1
                    ecx_52 += 1
                while (i_1 s> 1)
                
                data_1b8a720 = i_1
                data_715e98 = ecx_52
        case 0xf
            sub_4ef190(i_1, arg2 + 0x20, *(arg2 + 0x20), "%$", &data_1b8a720)
            i_1 = sub_4e76e0(&i_2, data_1b8a730, data_1b8a72c, &i_2, &data_704898)
            int32_t ecx_57 = data_1b8a734 - 1
            
            if (ecx_57 u<= 0x1f)
                int32_t eax_58 = i_2 | *((ecx_57 << 2) + &data_611440)
                int32_t edx_43 = data_1b8a730
                data_1b8a734 = ecx_57
                return sub_4e8000(eax_58, edx_43, data_1b8a72c, eax_58, &data_704898)
        case 0x10
            sub_4ef190(i_1, arg2 + 0x20, *(arg2 + 0x20), "%$", &data_1b8a720)
            sub_4e76e0(&i_2, data_1b8a730, data_1b8a72c, &i_2, &data_704898)
            i_1 = data_1b8a734 - 1
            
            if (i_1 u<= 0x1f)
                int32_t i_4 = i_2
                int32_t edx_46 = data_1b8a730
                data_1b8a734 = i_1
                int32_t eax_63 = not.d(*((i_1 << 2) + &data_611440))
                return sub_4e8000(eax_63, edx_46, data_1b8a72c, i_4 & eax_63, &data_704898)
        case 0x11
            sub_4ef190(i_1, arg2 + 0x20, *(arg2 + 0x20), "%$", &data_1b8a720)
            int32_t edx_48 = data_1b8a730
            int32_t ecx_66 = data_1b8a72c
            data_715e98 = 0
            i_1 = sub_4e76e0(&i_2, edx_48, ecx_66, &i_2, &data_704898)
            int32_t ecx_68 = data_1b8a734 - 1
            
            if (ecx_68 u<= 0x1f)
                i_1 = i_2
                data_1b8a734 = ecx_68
                
                if ((*((ecx_68 << 2) + &data_611440) & i_1) != 0)
                    data_715e98 = 1
return i_1
