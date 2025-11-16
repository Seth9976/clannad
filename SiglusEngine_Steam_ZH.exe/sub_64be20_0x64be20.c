// 函数: sub_64be20
// 地址: 0x64be20
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* const __return_addr_1 = __return_addr
int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
uint128_t xmm1 = zx.o(arg13)
xmm1 f- 0
uint32_t xmm0_1[0x4] = _mm_shuffle_epi32(zx.o(arg11), 0)
int32_t eax_2
eax_2:1.b =
    (xmm1 f== 0.0 ? 1 : 0) << 6 | (is_unordered.q(xmm1, 0.0) ? 1 : 0) << 2 | (xmm1 f< 0.0 ? 1 : 0)
uint32_t xmm0_3[0x4] = _mm_shuffle_epi32(zx.o(arg10), 0)
bool p_1 = unimplemented  {test ah, 0x44}

if (p_1)
    uint128_t xmm5_1 = zx.o(arg14)
    xmm5_1 f- 0
    eax_2:1.b = (xmm5_1 f== 0.0 ? 1 : 0) << 6 | (is_unordered.q(xmm5_1, 0.0) ? 1 : 0) << 2
        | (xmm5_1 f< 0.0 ? 1 : 0)
    bool p_3 = unimplemented  {test ah, 0x44}
    
    if (p_3)
        int16_t x87control
        
        if (data_bac4f4 == 0)
            x87control = sub_64b7d0()
            xmm5_1 = zx.o(arg14)
            xmm1 = zx.o(arg13)
        
        int32_t edi_1
        
        if (arg12 s< 0)
            edi_1 = mods.dp.d(sx.q((1 - arg12 s/ 0xe10) * 0xe10 + arg12), 0xe10)
        else
            int32_t eax_3
            int32_t edx
            edx:eax_3 = muls.dp.d(0x6e5d4c3b, arg12)
            int32_t edx_2 = (edx - arg12) s>> 0xb
            edi_1 = arg12 + ((edx_2 u>> 0x1f) + edx_2) * 0xe10
        
        int32_t var_d0_1
        
        if (edi_1 != 0)
            var_d0_1 = 0xe10 - edi_1
        else
            var_d0_1 = edi_1
        
        eax_2 = arg4 - 1
        int32_t var_c4_1 = eax_2
        
        if (arg6 != 0)
            eax_2 = arg7
            
            if (eax_2 != 0)
                uint64_t xmm4_1[0x2] = -0x8000000000000000
                double xmm0_5 = _mm_cvtepi32_pd(zx.q(arg6))
                double xmm1_1
                double xmm2_4
                
                if (xmm1 f< 0.0)
                    xmm1_1 = 1.0
                    xmm2_4 =
                        _mm_xor_pd((_mm_xor_pd(xmm1, xmm4_1) * xmm0_5 - xmm1_1) / xmm0_5, xmm4_1)
                else
                    xmm1_1 = 1.0
                    xmm2_4 = (xmm0_5 f* xmm1 - xmm1_1) / xmm0_5
                
                double xmm6_1[0x2] = xmm2_4
                double xmm6_2[0x2] = _mm_unpacklo_pd(xmm6_1, xmm6_1)
                double xmm0_7 = _mm_cvtepi32_pd(zx.q(eax_2))
                double xmm3_4
                
                if (xmm5_1 f< 0.0)
                    xmm3_4 =
                        _mm_xor_pd((_mm_xor_pd(xmm5_1, xmm4_1) * xmm0_7 - xmm1_1) / xmm0_7, xmm4_1)
                else
                    xmm3_4 = (xmm0_7 f* xmm5_1 - xmm1_1) / xmm0_7
                
                double xmm7_1[0x2] = xmm3_4
                int32_t esi_3 = neg.d(arg8)
                int32_t ecx_4 = arg6 - arg8
                int32_t edx_9 = neg.d(arg9)
                int32_t eax_17 = eax_2 - arg9
                double xmm7_2[0x2] = _mm_unpacklo_pd(xmm7_1, xmm7_1)
                int32_t var_38 = esi_3
                int32_t var_28 = edx_9
                int32_t var_34_1 = ecx_4
                int32_t var_24_1 = edx_9
                int32_t var_30_1 = ecx_4
                int32_t var_20_1 = eax_17
                int32_t var_2c_1 = esi_3
                int32_t var_1c_1 = eax_17
                double var_70
                double var_50
                double xmm4_4
                double xmm5_4
                int64_t var_60_2
                
                if (edi_1 == 0)
                    double xmm0_25 = _mm_cvtepi32_pd(zx.q(esi_3)) * xmm2_4
                    double xmm1_10 = _mm_cvtepi32_pd(zx.q(edx_9))
                    double xmm6_4 = _mm_cvtepi32_pd(zx.q(arg10))
                    double xmm7_4 = _mm_cvtepi32_pd(zx.q(arg11))
                    xmm5_4 = xmm7_4 + xmm1_10 * xmm3_4
                    double xmm0_28 = _mm_cvtepi32_pd(zx.q(ecx_4)) * xmm2_4
                    var_20_1.q = xmm6_4 + xmm0_25
                    var_30_1.q = xmm5_4
                    double xmm0_30 = xmm7_4 + _mm_cvtepi32_pd(zx.q(edx_9)) * xmm3_4
                    xmm0_1[2].q = xmm6_4 + xmm0_28
                    double xmm1_16 = _mm_cvtepi32_pd(zx.q(eax_17))
                    xmm0_3[2].q = xmm0_30
                    double xmm4_10 = xmm6_4 + _mm_cvtepi32_pd(zx.q(ecx_4)) * xmm2_4
                    double xmm0_35 = xmm7_4 + xmm1_16 * xmm3_4
                    xmm4_4 = var_20_1.q
                    double xmm7_5 = xmm7_4 + _mm_cvtepi32_pd(zx.q(eax_17)) * xmm3_4
                    double xmm6_5 = xmm6_4 + _mm_cvtepi32_pd(zx.q(esi_3)) * xmm2_4
                    
                    if (xmm3_4 f< 0)
                        xmm4_4 = xmm6_5
                        var_50 = xmm4_10
                        xmm5_4 = xmm7_5
                        var_70 = xmm0_35
                        int64_t var_48_3 = xmm0_1[2].q
                        int64_t var_68_3 = xmm0_3[2].q
                        int64_t var_40_3 = var_20_1.q
                        var_60_2 = var_30_1.q
                    else
                        var_50 = xmm0_1[2].q
                        var_70 = xmm0_3[2].q
                        double var_48_2 = xmm4_10
                        double var_68_2 = xmm0_35
                        double var_40_2 = xmm6_5
                        double var_60_1 = xmm7_5
                else
                    uint128_t xmm4_2 = zx.o(*((edi_1 << 3) + &data_4ec5ef0))
                    int32_t i = 0
                    uint128_t xmm5_2 = zx.o(*((edi_1 << 3) + &data_4ebee70))
                    int32_t eax_18 = 0
                    double xmm4_3[0x2] = _mm_unpacklo_pd(xmm4_2, xmm4_2)
                    double xmm5_3[0x2] = _mm_unpacklo_pd(xmm5_2, xmm5_2)
                    int64_t var_b8[0x4]
                    double var_98
                    
                    do
                        double xmm3_10[0x2] = _mm_cvtepi32_pd(*(&var_38 + i))
                        int32_t xmm0_9[0x2] = *(&var_28 + i)
                        i += 8
                        double xmm2_10[0x2] = _mm_cvtepi32_pd(xmm0_9)
                        double xmm3_11[0x2] = _mm_mul_pd(xmm3_10, xmm6_2)
                        double xmm2_11[0x2] = _mm_mul_pd(xmm2_10, xmm7_2)
                        double xmm0_11[0x2] = _mm_mul_pd(xmm2_11, xmm5_3)
                        double xmm1_3[0x2] = _mm_mul_pd(xmm3_11, xmm4_3)
                        double xmm2_12[0x2] = _mm_mul_pd(xmm2_11, xmm4_3)
                        double xmm1_4[0x2] = _mm_sub_pd(xmm1_3, xmm0_11)
                        double xmm3_12[0x2] = _mm_mul_pd(xmm3_11, xmm5_3)
                        *(&var_b8 + eax_18) = xmm1_4
                        double xmm1_5[0x2] = __cvtdq2pd_xmmpd_memq(xmm0_3[0].q)
                        double xmm0_12[0x2] = *(&var_b8 + eax_18)
                        double xmm2_13[0x2] = _mm_add_pd(xmm2_12, xmm3_12)
                        double xmm0_13[0x2] = _mm_add_pd(xmm0_12, xmm1_5)
                        *(&var_98 + eax_18) = xmm2_13
                        double xmm1_6[0x2] = _mm_cvtepi32_pd(xmm0_1[0].q)
                        *(&var_b8 + eax_18) = xmm0_13
                        *(&var_98 + eax_18) = _mm_add_pd(*(&var_98 + eax_18), xmm1_6)
                        eax_18 += 0x10
                    while (i s< 0x10)
                    
                    double xmm0_16 = var_98
                    int32_t eax_19 = 0
                    double var_90
                    
                    if (not(xmm0_16 <= var_90))
                        xmm0_16 = var_90
                        eax_19 = 1
                    
                    double var_88
                    
                    if (not(xmm0_16 <= var_88))
                        xmm0_16 = var_88
                        eax_19 = 2
                    
                    double var_80
                    
                    if (xmm0_16 > var_80)
                        eax_19 = 3
                    
                    xmm4_4 = var_b8[eax_19]
                    xmm5_4 = (&var_98)[eax_19]
                    int32_t eax_21 = (eax_19 + 1) & 3
                    var_50 = var_b8[eax_21]
                    int32_t eax_23 = (eax_21 + 1) & 3
                    var_70 = (&var_98)[eax_21]
                    int64_t var_48_1 = var_b8[eax_23]
                    int32_t eax_25 = (eax_23 + 1) & 3
                    int64_t var_68_1 = (&var_98)[eax_23]
                    int64_t var_40_1 = var_b8[eax_25]
                    var_60_2 = (&var_98)[eax_25]
                double xmm3_13 = xmm4_4
                double var_58 = xmm4_4
                double xmm2_15 = xmm5_4
                double var_78 = xmm5_4
                var_20_1.q = xmm3_13
                int32_t i_1 = 0
                xmm0_3[2].q = xmm2_15
                
                do
                    double xmm0_48 = *(&var_50 + i_1)
                    
                    if (not(xmm4_4 <= xmm0_48))
                        xmm4_4 = xmm0_48
                    
                    double xmm1_21 = *(&var_70 + i_1)
                    
                    if (not(xmm5_4 <= xmm1_21))
                        xmm5_4 = xmm1_21
                    
                    if (not(xmm0_48 <= xmm3_13))
                        xmm3_13 = xmm0_48
                    
                    if (not(xmm1_21 <= xmm2_15))
                        xmm2_15 = xmm1_21
                    
                    i_1 += 8
                while (i_1 s< 0x18)
                
                var_20_1.q = xmm3_13
                xmm0_3[2].q = xmm2_15
                int32_t esi_4 = int.d(xmm4_4)
                double var_d8
                var_d8:4.d = int.d(xmm5_4)
                int32_t mxcsr
                int16_t x87control_1
                int80_t st0_1
                st0_1, x87control_1 =
                    sub_762040(mxcsr, x87control, fconvert.d(fconvert.t(var_20_1.q)))
                var_20_1.q = fconvert.d(st0_1)
                var_30_1.q =
                    fconvert.d(sub_762040(mxcsr, x87control_1, fconvert.d(fconvert.t(xmm0_3[2].q))))
                int32_t edx_10 = int.d(fconvert.t(var_30_1.q))
                
                if (esi_4 s< 0)
                    esi_4 = 0
                
                eax_2 = var_d8:4.d
                
                if (eax_2 s< 0)
                    eax_2 = 0
                
                int32_t ecx_5 = int.d(fconvert.t(var_20_1.q))
                
                if (ecx_5 s> arg2 - 1)
                    ecx_5 = arg2 - 1
                
                if (edx_10 s> var_c4_1)
                    edx_10 = var_c4_1
                
                if (esi_4 s<= arg2 - 1 && eax_2 s<= var_c4_1 && ecx_5 s>= 0 && edx_10 s>= 0)
                    double var_128_3 = xmm3_4
                    double var_130_1 = xmm2_4
                    int64_t* var_138_1 = &var_78
                    double* var_13c_1 = &var_58
                    
                    if (edi_1 != 0)
                        int32_t var_140_1 = var_d0_1
                        int32_t var_144_1 = arg11
                        int32_t var_148_1 = arg10
                        int32_t var_14c_1 = arg9
                        int32_t var_150_1 = arg8
                        int32_t var_154_1 = arg7
                        int32_t var_158 = arg6
                        int32_t var_164_1 = arg7
                        int32_t var_168_1 = arg6
                        int32_t var_16c_1 = arg5
                        int32_t var_170_1 = var_c4_1
                        int32_t var_174 = arg2 - 1
                        int64_t* eax_28 = sub_64b910(arg7, arg2, arg3)
                        sub_745f2b(eax_1 ^ &__saved_ebp)
                        return eax_28
                    
                    int32_t var_140_2 = arg11
                    int32_t var_144_2 = arg10
                    int32_t var_148_2 = arg9
                    int32_t var_14c_2 = arg8
                    int32_t var_150_2 = arg7
                    int32_t var_154_2 = arg6
                    int32_t var_160_1 = arg7
                    int32_t var_164_2 = arg6
                    int32_t var_168_2 = arg5
                    int32_t var_16c_2 = var_c4_1
                    int32_t var_170_2 = arg2 - 1
                    eax_2 = sub_64bc40(arg7, arg2, arg3)

sub_745f2b(eax_1 ^ &__saved_ebp)
return eax_2
