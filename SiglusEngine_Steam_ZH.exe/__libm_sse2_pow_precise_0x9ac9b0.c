// 函数: __libm_sse2_pow_precise
// 地址: 0x9ac9b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

double var_10
double var_8
double xmm1

if ((arg3 & 0x7f80) == 0x1f80)
    int16_t x87status_1
    int16_t temp0_1
    temp0_1, x87status_1 = __fnstcw_memmem16(arg4)
    var_10.w = temp0_1
    int32_t eax_1
    eax_1.w = var_10.w
    eax_1.w &= 0x7f
    
    if (eax_1.w == 0x7f)
        var_10 = arg5
        var_8 = xmm1
        uint64_t xmm7[0x2] = _mm_and_pd(0xfffffffffffff, arg5)
        int32_t xmm4[0x4] = arg5.q
        uint64_t xmm0[0x2] = _mm_srli_epi64(arg5, 0x2c)
        char eax_2 = _mm_extract_epi16(xmm0, 0)
        double xmm7_1 = _mm_or_pd(xmm7, 0x3ff0000000000000)
        uint32_t ecx = _mm_extract_epi16(xmm4, 3)
        int32_t eax_5 = (zx.d(eax_2) + 1) & 0x1fe
        uint64_t xmm7_2[0x2] = xmm7_1 f* *((eax_5 << 2) + &data_b12d20)
        double xmm5 = *((eax_5 << 2) + &data_b12d20)
        double xmm6[0x2] = *(eax_5 * 8 + &data_b13130)
        int64_t var_18
        int32_t ecx_3
        int32_t edx_1
        uint32_t edx_2
        void* const edx_17
        int32_t xmm1_14[0x4]
        uint64_t xmm2_17[0x2]
        
        if (((ecx - 0x10) | (0x7fef - ecx)) u>= 0x80000000)
            uint64_t xmm1_12[0x2] = var_8
            xmm2_17 = xmm1_12.q
            xmm1_14 = _mm_srli_epi64(_mm_and_pd(xmm1_12, 0x7fffffffffffffff), 0x20)
            int32_t ecx_7 = xmm1_14
            int32_t eax_50
            
            if (ecx_7 u>= 0x7ff00000)
                int32_t xmm7_13[0x4] = var_10
                xmm4 = xmm7_13
                edx_2 = xmm7_13
                int32_t xmm7_14 = _mm_srli_epi64(xmm7_13, 0x20)
                ecx_3 = xmm7_14
                int32_t eax_36 = xmm7_14 & 0x7fffffff
                
                if (eax_36 u>= 0x7ff00000 && (eax_36 u> 0x7ff00000 || edx_2 u> 0))
                label_9ad054:
                    var_18 = xmm4 f+ xmm4
                    return sub_75a7f9(&var_10, &var_8, &var_18, 0x3ee)
                
            label_9ad125:
                
                if (zx.d(_mm_movemask_epi8(_mm_cmpeq_epi32(_mm_xor_pd(xmm1_14, xmm1_14), 
                        _mm_and_pd(0xfffffffffffff, xmm2_17)))) != 0xff)
                    goto label_9ad198
                
                uint32_t eax_58 = _mm_extract_epi16(xmm2_17, 3)
                int32_t xmm4_17[0x4] = var_10
                
                if ((edx_2 | (ecx_3 ^ 0xbff00000)) == 0)
                label_9ad1ec:
                    var_18 = 0x3ff0000000000000
                    return sub_75a7f9(&var_10, &var_8, &var_18, 0x1c)
                
                if ((eax_58 & 0x8000) == 0)
                    eax_50 = _mm_extract_epi16(xmm4_17, 3) & 0x7ff0
                    
                    if (eax_50 u< 0x3ff0)
                        _mm_xor_pd(xmm0, xmm0)
                else
                    eax_50 = _mm_extract_epi16(xmm4_17, 3) & 0x7ff0
                    
                    if (eax_50 u>= 0x3ff0)
                        _mm_xor_pd(xmm0, xmm0)
                
                return eax_50
            
            if ((xmm1_12 | ecx_7) == 0)
                int32_t eax_62 = xmm4
                int32_t xmm4_18 = _mm_srli_epi64(xmm4, 0x20)
                edx_17 = 0x1a
                
                if ((eax_62 | (xmm4_18 & 0x7fffffff)) != 0)
                    edx_17 = 0x1d
                    int32_t eax_65 = xmm4_18 & 0x7fffffff
                    
                    if (eax_65 u<= 0x7ff00000 && (eax_65 u< 0x7ff00000 || eax_62 u<= 0))
                        return eax_65
                
                var_18 = 0x3ff0000000000000
                return sub_75a7f9(&var_10, &var_8, &var_18, edx_17)
            
            int32_t eax_37
            uint64_t xmm2_25[0x2]
            
            if (0x7fef - ecx s>= 0)
                ecx_3 = 0
            label_9ace7d:
                xmm7_2 = 0xfffffffffffff
                xmm2_25 = 0x3ff0000000000000
                xmm0 = _mm_insert_epi16(_mm_xor_pd(xmm0, xmm0), 0x43f0, 3) f* xmm4
                eax_37 = _mm_srli_epi64(xmm4, 0x20)
                
                if (xmm4 != 0 || (eax_37 & 0x7fffffff) != 0)
                label_9acea3:
                    uint64_t xmm7_15[0x2] = _mm_and_pd(xmm7_2, xmm0)
                    xmm4 = xmm0.q
                    xmm0 = _mm_srli_epi64(__andpd_xmmxuq_memxuq(xmm0, data_b165d0), 0x2c)
                    int32_t eax_41 = (zx.d(_mm_extract_epi16(xmm0, 0)) + 1) & 0x1fe
                    xmm7_2 = _mm_or_pd(xmm7_15, xmm2_25) f* *((eax_41 << 2) + &data_b12d20)
                    xmm5 = *((eax_41 << 2) + &data_b12d20)
                    xmm6 = *(eax_41 * 8 + &data_b13130)
                    edx_1 = 0x43e7f
                    goto label_9aca70
            else
                uint64_t xmm2_18[0x2] = _mm_or_pd(xmm2_17, _mm_slli_epi64(0x7fffffffffffffff, 0x34))
                uint64_t xmm1_17[0x2] =
                    _mm_max_epi16(_mm_sub_epi32(_mm_srli_epi64(xmm1_14, 0x14), 0x3f3), zx.o(0))
                char eax_31 =
                    _mm_movemask_epi8(_mm_cmpeq_epi32(_mm_sll_epi64(xmm2_18, xmm1_17), zx.o(0)))
                int32_t edx_10 = (neg.d(0x7fef - ecx) + 0x7fef) & 0x7fff
                
                if (edx_10 u>= 0x7ff0)
                    if (zx.d(_mm_movemask_epi8(_mm_cmpeq_epi32(_mm_xor_pd(xmm1_17, xmm1_17), 
                            _mm_and_pd(0xfffffffffffff, xmm4)))) != 0xff)
                        goto label_9ad054
                    
                    if ((_mm_extract_epi16(xmm4, 3) & 0x8000) == 0)
                        eax_50 = _mm_extract_epi16(var_8, 3) & 0x8000
                        
                        if (eax_50 == 0)
                            return eax_50
                        
                        _mm_xor_pd(xmm0, xmm0)
                        return eax_50
                    
                    uint32_t eax_47
                    
                    if (zx.d(eax_31) == 0xff)
                        uint64_t xmm1_25[0x2] = var_8
                        eax_47 = zx.d(_mm_movemask_epi8(_mm_cmpeq_epi32(
                            _mm_sll_epi64(xmm1_25, 
                                _mm_sub_epi32(
                                    _mm_srli_epi64(__andpd_xmmxuq_memxuq(xmm1_25, data_b165d0), 
                                        0x34), 
                                    0x3f4)), 
                            zx.o(0))))
                    
                    if (zx.d(eax_31) == 0xff && eax_47 != 0xff)
                        return _mm_extract_epi16(var_8, 3) & 0x8000
                    
                    eax_50 = _mm_extract_epi16(var_8, 3) & 0x8000
                    
                    if (eax_50 == 0)
                        return eax_50
                    
                    _mm_xor_pd(xmm0, xmm0)
                    return eax_50
                
                if (zx.d(eax_31) == 0xff)
                    uint64_t xmm1_18[0x2] = var_8
                    ecx_3 = (0x3ff01 + zx.d(_mm_movemask_epi8(_mm_cmpeq_epi32(
                        _mm_sll_epi64(xmm1_18, 
                            _mm_sub_epi32(
                                _mm_srli_epi64(__andpd_xmmxuq_memxuq(xmm1_18, data_b165d0), 0x34), 
                                0x3f4)), 
                        -0x8000000000000000)))) & 0x40000
                    
                    if (edx_10 u< 0x10)
                        goto label_9ace7d
                    
                    edx_1 = 0xbfe7f
                    goto label_9aca70
                
                uint64_t xmm2_30[0x2] = var_10
                xmm2_25 = _mm_srli_epi64(xmm2_30, 0x20)
                eax_37 = xmm2_30 | (xmm2_25 & 0x7fffffff)
                ecx_3 = 0
                
                if (eax_37 != 0)
                    var_18 = -0x8000000000000
                    return sub_75a7f9(&var_10, &var_8, &var_18, 0x1c)
                
                if ((eax_37 & 0x7fffffff) != 0)
                    goto label_9acea3
            
            if ((var_8:4.d & 0x80000000) != 0)
                var_18 = _mm_slli_epi64(0x7ff00000 | (zx.o(eax_37) & zx.o(ecx_3 << 0xd)), 0x20)
                return sub_75a7f9(&var_10, &var_8, &var_18, 0x1b)
            
            int32_t eax_44 = eax_37 & ecx_3 << 0xd
            
            if (eax_44 != 0)
                return eax_44
            
            _mm_xor_pd(xmm0, xmm0)
            return eax_44
        
        ecx_3 = 0
        edx_1 = 0x3fe7f
    label_9aca70:
        double xmm0_3 = _mm_cvtepi32_pd(_mm_srli_epi64(_mm_sub_epi64(xmm0, zx.o(edx_1)), 8))
        char eax_7 = _mm_extract_epi16(_mm_srli_epi64(xmm7_2, 0x26), 0)
        uint64_t xmm4_1[0x2] = __andpd_xmmxuq_memxuq(xmm4, data_b165b0)
        int32_t eax_10 = (zx.d(eax_7) + 1) & 0x1fe
        uint64_t xmm3_2[0x2] = xmm7_2.q f* *((eax_10 << 2) + &data_b13940)
        double xmm5_1 = xmm5 f* *((eax_10 << 2) + &data_b13940)
        double xmm6_1 = __addpd_xmmpd_mempd(xmm6, *(eax_10 * 8 + &data_b13d50))
        uint64_t xmm4_2[0x2] = __orpd_xmmxuq_memxuq(xmm4_1, data_b165c0)
        double xmm1_2 = _mm_and_pd(-0x8000000, xmm4_2)
        double xmm4_3 = xmm4_2 f- xmm1_2
        int32_t eax_15 = ((_mm_extract_epi16(_mm_srli_epi64(xmm3_2, 0x1f), 0) & 0x1ff) + 1) & 0x3fe
        uint64_t xmm5_2[0x2] = xmm5_1 f* *((eax_15 << 2) + &data_b14560)
        double xmm2_2 = xmm3_2.q f* *((eax_15 << 2) + &data_b14560)
        double xmm6_3 = __addpd_xmmpd_mempd(xmm6_1 + xmm0_3, *((eax_15 << 3) + &data_b14d70))
        double xmm0_4 = _mm_and_pd(-0x8000000, xmm5_2)
        double xmm5_3 = xmm5_2 f- xmm0_4
        double xmm7_4 = -1.4426949024200439 + xmm2_2
        int32_t xmm6_4[0x4] = xmm6_3 + xmm7_4
        int32_t xmm1_4[0x4] = var_8
        uint32_t eax_16 = _mm_extract_epi16(xmm1_4, 3)
        edx_2 = _mm_extract_epi16(xmm6_4, 3)
        double xmm2_6 =
            xmm2_2 - xmm0_4 * xmm1_2 - xmm1_2 * xmm5_3 - xmm0_4 * xmm4_3 - xmm4_3 * xmm5_3
        double xmm4_5[0x2] = xmm6_4.q
        xmm0 = xmm6_3 f- xmm6_4 + xmm7_4
        double xmm7_5[0x2] = xmm7_4 - xmm2_6
        uint64_t xmm6_5[0x2] = xmm6_4 f- xmm2_6
        double xmm7_6[0x2] = _mm_unpacklo_pd(xmm7_5, xmm7_5)
        int32_t eax_17 = eax_16 & 0x7ff0
        
        if (eax_17 u>= 0x7ff0)
            uint64_t xmm4_15[0x2] = var_10
            xmm2_17 = var_8
            xmm1_14 =
                _mm_cmpeq_epi32(_mm_xor_pd(xmm1_4, xmm1_4), _mm_and_pd(0xfffffffffffff, xmm2_17))
            
            if (zx.d(_mm_movemask_epi8(xmm1_14)) != 0xff)
            label_9ad198:
                var_18 = xmm2_17 f+ xmm2_17
                return sub_75a7f9(&var_10, &var_8, &var_18, 0x3ee)
            
            int32_t eax_55 = xmm4_15
            
            if (eax_55 != 0)
                goto label_9ad125
            
            edx_2 = _mm_srli_epi64(xmm4_15, 0x20)
            
            if (edx_2 == 0x3ff00000)
                goto label_9ad1ec
            
            if (edx_2 == 0xbff00000)
                return eax_55
            
            goto label_9ad125
        
        int32_t eax_19 = eax_17 - 0x3ff0 + (edx_2 & 0x7ff0)
        int32_t eax_79
        
        if (((0x40a0 - eax_19) | (eax_19 - 0x3c70)) u>= 0x80000000)
            xmm4_5 = _mm_mul_pd(_mm_shuffle_epi32(xmm1_4, 0x44), xmm6_5)
            eax_79 = _mm_extract_epi16(xmm4_5, 3) & 0x7ff0
        
        int32_t xmm0_25[0x4]
        
        if (((0x40a0 - eax_19) | (eax_19 - 0x3c70)) u< 0x80000000
                || ((0x40a0 - eax_79) | (eax_79 - 0x3c70)) u< 0x80000000)
            uint64_t xmm2_7[0x2] = xmm2_6 - (xmm4_5 f- xmm6_5)
            double xmm3_6 = _mm_and_pd(-0x8000000, xmm1_4)
            double xmm4_7 = _mm_and_pd(-0x8000000, xmm6_5)
            double xmm0_8 = xmm0 f- xmm2_7
            double xmm6_6 = xmm6_5 f- xmm4_7
            double xmm1_5 = xmm1_4 f- xmm3_6
            double xmm3_8 =
                xmm3_6 * xmm4_7 * _mm_insert_epi16(_mm_xor_pd(xmm2_7, xmm2_7), 0x4060, 3)
            double xmm2_10[0x2] = data_b15d80
            int32_t eax_21 = int.d(xmm3_8)
            uint32_t xmm6_7[0x4] = xmm6_6 * xmm1_5
            double xmm1_6[0x2] = data_b15d90
            double xmm4_9 = _mm_shuffle_epi32(xmm6_7, 0xee)
            double xmm5_7 = xmm3_6 * xmm6_6 + xmm4_7 * xmm1_5 f+ xmm6_7
            
            if (((0x1ff7f - eax_21) | (eax_21 + 0x1e1ff)) s> 0)
                double xmm2_11[0x2] = _mm_mul_pd(xmm2_10, xmm7_6)
                double xmm7_7[0x2] = _mm_mul_pd(xmm7_6, xmm7_6)
                void* eax_28 = (eax_21 & 0x7f) * 0x10
                double xmm3_11[0x2] = *(eax_28 + 0xb15da0)
                double xmm6_8[0x2] = data_b165e0
                double xmm2_12[0x2] = _mm_add_pd(xmm2_11, _mm_mul_pd(xmm1_6, xmm7_7))
                double xmm1_8 = _mm_shuffle_epi32(xmm2_12, 0xee)
                double xmm7_9 = _mm_insert_epi16(_mm_xor_pd(xmm7_7, xmm7_7), 0x3f80, 3)
                double xmm2_16 = (xmm2_12 f* xmm7_7 + xmm1_8 + xmm4_9 + xmm0_8) * var_8
                uint32_t xmm1_11[0x4] = _mm_shuffle_epi32(
                    _mm_slli_epi64(zx.o(((ecx_3 + eax_21) & 0xffffff80) + 0x1ff80), 0x2d), 0x44)
                double xmm7_10[0x2] = data_b165f0
                double xmm3_12[0x2] = _mm_mul_pd(xmm3_11, xmm1_11)
                double xmm0_12[0x2] =
                    (xmm3_8 - (xmm3_8 + 6755399441055744.0 - 6755399441055744.0)) * xmm7_9 + xmm5_7
                    + xmm2_16
                double xmm0_13[0x2] = _mm_unpacklo_pd(xmm0_12, xmm0_12)
                double xmm6_9[0x2] = _mm_mul_pd(xmm6_8, xmm0_13)
                double xmm0_14[0x2] = _mm_mul_pd(xmm0_13, xmm0_13)
                _mm_shuffle_epi32(_mm_mul_pd(_mm_add_pd(xmm7_10, xmm6_9), xmm0_14), 0xee)
                _mm_shuffle_epi32(xmm3_12, 0xee)
                return eax_28
            
            void* eax_67
            int32_t ecx_18
            int32_t edx_25
            uint32_t edi
            
            if (eax_21 s> 0)
                if (eax_21 u>= 0x40000)
                    goto label_9ad45d
                
                var_18:4.d = arg1
                eax_67 = eax_21 & 0x7f
                ecx_18 = ecx_3 + 0x3ff00
                edx_25 = (eax_21 - 0x80) & 0xffffff80
                var_18.d = arg2
                edi = 0x3ff0
                goto label_9ad296
            
            if (eax_21 s<= 0xfffc0200)
                xmm0_25 = _mm_or_pd(2.2250738585072014e-308 * 2.2250738585072014e-308, 
                    _mm_slli_epi64(zx.o(ecx_3), 0x2d))
                edx_17 = 0x19
            else
                var_18:4.d = arg1
                eax_67 = eax_21 & 0x7f
                ecx_18 = ecx_3 + 0x80
                edx_25 = (eax_21 & 0xffffff80) + 0x3fe80
                var_18.d = arg2
                edi = 0
            label_9ad296:
                double xmm2_32[0x2] = _mm_mul_pd(xmm2_10, xmm7_6)
                double xmm7_17[0x2] = _mm_mul_pd(xmm7_6, xmm7_6)
                double xmm3_23[0x2] = *(eax_67 * 0x10 + 0xb15da0)
                double xmm6_12[0x2] = data_b165e0
                uint32_t xmm2_33[0x4] = _mm_add_pd(xmm2_32, _mm_mul_pd(xmm1_6, xmm7_17))
                double xmm2_36 =
                    xmm2_33 f* xmm7_17 + _mm_shuffle_epi32(xmm2_33, 0xee) + xmm4_9 + xmm0_8
                double xmm7_19 = _mm_insert_epi16(_mm_xor_pd(xmm7_17, xmm7_17), 0x3f80, 3)
                double xmm2_37 = xmm2_36 * var_8
                uint32_t xmm1_40[0x4] = _mm_shuffle_epi32(_mm_slli_epi64(zx.o(edx_25), 0x2d), 0x44)
                double xmm7_20[0x2] = data_b165f0
                double xmm3_24[0x2] = _mm_mul_pd(xmm3_23, xmm1_40)
                double xmm0_39[0x2] =
                    (xmm3_8 - (xmm3_8 + 6755399441055744.0 - 6755399441055744.0)) * xmm7_19 + xmm5_7
                    + xmm2_37
                double xmm0_40[0x2] = _mm_unpacklo_pd(xmm0_39, xmm0_39)
                double xmm6_13[0x2] = _mm_mul_pd(xmm6_12, xmm0_40)
                double xmm0_41[0x2] = _mm_mul_pd(xmm0_40, xmm0_40)
                double xmm7_22[0x2] = _mm_mul_pd(_mm_add_pd(xmm7_20, xmm6_13), xmm0_41)
                double xmm6_14 = _mm_shuffle_epi32(xmm7_22, 0xee)
                double xmm5_11 = _mm_shuffle_epi32(xmm3_24, 0xee)
                uint64_t xmm6_15[0x2] = xmm6_14 f* xmm3_24
                int32_t xmm4_21[0x4] = 0.69314718055994529 f* xmm0_40 f* xmm3_24
                double xmm7_24 = _mm_slli_epi64(zx.o(ecx_18), 0x2d)
                uint64_t xmm2_38[0x2] = zx.o((neg.d(edx_25 - 0x1ff80) s>> 7) + 2
                    + (((neg.d(edx_25 - 0x1ff80) s>> 7) + 2) & 0x20))
                double xmm1_43 =
                    _mm_and_pd(_mm_sll_epi64(_mm_cmpeq_epi32(xmm1_40, xmm1_40), xmm2_38), xmm3_24)
                double xmm0_46 = xmm0_41 f* xmm3_24 f* xmm7_22 + xmm5_11 f+ xmm6_15 f+ xmm4_21
                uint64_t xmm6_16[0x2] = _mm_xor_pd(xmm6_15, xmm6_15)
                double xmm1_45 = _mm_and_pd(xmm1_43 + xmm0_46, 
                    _mm_sll_epi64(_mm_cmpeq_epi32(xmm4_21, xmm4_21), xmm2_38))
                double xmm6_17 = _mm_insert_epi16(xmm6_16, edi, 3)
                double xmm0_48 = xmm0_46 + xmm1_43 - xmm1_45 + xmm3_24 f- xmm1_43
                
                if (edx_25 - 0x1ff80 s> 0)
                    double xmm0_52 = (xmm0_48 + xmm1_45) * xmm7_24
                    xmm0_25 = xmm0_52 + xmm6_17 * xmm0_52
                    int32_t eax_77 = _mm_extract_epi16(xmm0_25, 3) & 0x7ff0
                    edx_17 = 0x18
                    
                    if (eax_77 != 0x7ff0)
                        edx_17 = 0x19
                        
                        if (eax_77 != 0)
                            return eax_77
                else
                    double xmm0_50 = xmm0_48 * xmm7_24 + xmm1_45 * xmm7_24
                    xmm0_25 = xmm0_50 + xmm6_17 * xmm0_50
                    int32_t eax_75 = _mm_extract_epi16(xmm0_25, 3) & 0x7ff0
                    edx_17 = 0x18
                    
                    if (eax_75 != 0x7ff0)
                        edx_17 = 0x19
                        
                        if (eax_75 != 0)
                            return eax_75
        else
            if (eax_79 - 0x3c70 u>= 0x80000000)
                _mm_slli_epi64(zx.o(ecx_3) | 0x1ff80, 0x2d)
                return eax_79 - 0x3c70
            
            int32_t edx_37 = (_mm_extract_epi16(var_10, 3) & 0x7ff0) - 0x3ff0
            
            if (((_mm_extract_epi16(xmm1_4, 3) ^ edx_37) & 0x8000) != 0)
                xmm0_25 = _mm_or_pd(2.2250738585072014e-308 * 2.2250738585072014e-308, 
                    _mm_slli_epi64(zx.o(ecx_3), 0x2d))
                edx_17 = 0x19
            else
            label_9ad45d:
                edx_17 = 0x18
                
                if (ecx_3 == 0)
                    xmm0_25 = 8.9884656743115795e+307 * 8.9884656743115795e+307
                else
                    xmm0_25 = -8.9884656743115795e+307 * 8.9884656743115795e+307
        
        var_18 = xmm0_25
        return sub_75a7f9(&var_10, &var_8, &var_18, edx_17)

var_10 = arg5
var_8 = xmm1
int32_t eax_84
long double st0
st0, eax_84 = sub_761694()
var_10 = fconvert.d(st0)
return eax_84
