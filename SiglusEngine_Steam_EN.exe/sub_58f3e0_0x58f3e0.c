// 函数: sub_58f3e0
// 地址: 0x58f3e0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* const __return_addr_1 = __return_addr
int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t* eax_2 = arg2
double xmm0_1 = _mm_shuffle_epi32(zx.o(arg11), 0)
uint32_t xmm3[0x4] = _mm_shuffle_epi32(zx.o(arg10), 0)
int32_t var_d8 = eax_2
uint32_t var_30[0x4] = xmm3
int32_t esi = arg12
int32_t var_d4 = esi

if (arg3 != 0 && eax_2 != 0 && arg4 != 0 && arg7 != 0 && arg8 != 0 && arg9 != 0)
    eax_2 = arg13
    
    if (eax_2 != 0)
        int32_t edi_1 = arg14
        
        if (edi_1 != 0)
            if (eax_2 s> 0x4e20)
                eax_2 = 0x4e20
            else if (eax_2 s< 0xffffb1e0)
                eax_2 = 0xffffb1e0
            
            arg13 = eax_2
            
            if (edi_1 s> 0x4e20)
                edi_1 = 0x4e20
            else if (edi_1 s< 0xffffb1e0)
                edi_1 = 0xffffb1e0
            
            bool cond:0_1 = data_1c0551f != 0
            double xmm7_3 = _mm_cvtepi32_pd(zx.q(eax_2)) / 1000.0
            double xmm2_3 = _mm_cvtepi32_pd(zx.q(edi_1)) / 1000.0
            double xmm1_1[0x2] = xmm7_3
            double var_f8_1 = xmm7_3
            double xmm6_1[0x2] = xmm2_3
            double xmm1_2[0x2] = _mm_unpacklo_pd(xmm1_1, xmm1_1)
            double xmm6_2[0x2] = _mm_unpacklo_pd(xmm6_1, xmm6_1)
            double var_110_1[0x2] = xmm1_2
            double var_100_1 = xmm2_3
            double var_40[0x2] = xmm6_2
            
            if (not(cond:0_1))
                sub_58c840()
                xmm1_2 = var_110_1
                xmm6_2 = var_40
                xmm7_3 = var_f8_1
                xmm2_3 = var_100_1
                xmm3 = var_30
            
            if (esi s>= 0xe10)
                esi += esi u/ 0xe10 * 0xfffff1f0
                var_d4 = esi
            
            bool cond:1_1 = esi != 0
            
            if (esi s< 0)
                esi = esi + 0xe10 + (0xffffffff - esi) u/ 0xe10 * 0xe10
                var_d4 = esi
                cond:1_1 = esi != 0
            
            int64_t* var_f0_1
            
            var_f0_1 = cond:1_1 ? 0xe10 - esi : nullptr
            
            int32_t edx_6 = neg.d(arg5)
            void* edi_4 = arg4 - 1 - arg6
            int32_t eax_12 = neg.d(arg6)
            int32_t ecx_5 = var_d8 - 1 - arg5
            var_30[2] = edi_4
            var_30[3] = edi_4
            var_40[0].d = edx_6
            var_30[0] = eax_12
            var_40[0]:4.d = ecx_5
            var_30[1] = eax_12
            var_40[1].d = ecx_5
            var_40[1]:4.d = edx_6
            double var_a0
            double var_80
            uint32_t edx_7
            int32_t esi_3
            double var_c0
            double var_a8
            double var_88
            double var_60
            double var_48
            
            if (esi == 0)
                double xmm1_14 = _mm_cvtepi32_pd(zx.q(eax_12))
                double xmm0_17 = _mm_cvtepi32_pd(zx.q(edx_6)) * xmm7_3
                double xmm2_7 = _mm_cvtepi32_pd(zx.q(arg10))
                double xmm3_4 = _mm_cvtepi32_pd(zx.q(arg11))
                double xmm4_4 = xmm2_7 + xmm0_17
                double xmm5_4 = xmm3_4 + xmm1_14 * xmm2_3
                double xmm0_19 = _mm_cvtepi32_pd(zx.q(ecx_5))
                var_30[2].q = xmm4_4
                var_c0 = xmm4_4
                var_60 = xmm5_4
                double xmm6_4 = xmm2_7 + xmm0_19 * xmm7_3
                double var_b8_1 = xmm6_4
                double xmm7_6 = xmm3_4 + _mm_cvtepi32_pd(zx.q(eax_12)) * var_100_1
                double var_58_1 = xmm7_6
                double xmm4_6 = xmm2_7 + _mm_cvtepi32_pd(zx.q(ecx_5)) * var_f8_1
                double xmm1_21 = _mm_cvtepi32_pd(zx.q(edi_4)) * var_100_1
                double var_b0_1 = xmm4_6
                double xmm4_7 = var_30[2].q
                double xmm0_26 = xmm3_4 + xmm1_21
                double xmm1_23 = _mm_cvtepi32_pd(zx.q(edi_4))
                var_110_1[1] = xmm0_26
                double var_50_1 = xmm0_26
                double xmm3_5 = xmm3_4 + xmm1_23 * var_100_1
                double xmm0_29 = _mm_cvtepi32_pd(zx.q(edx_6)) * var_f8_1
                var_48 = xmm3_5
                double xmm2_8 = xmm2_7 + xmm0_29
                var_a8 = xmm2_8
                double var_70
                
                if (edi_1 s< 0)
                    double xmm1_26 = var_110_1[1]
                    esi_3 = int.d(xmm2_8)
                    var_40[0]:4.d = int.d(xmm4_6)
                    var_40[0].d = esi_3
                    edx_7 = int.d(xmm3_5)
                    var_30[1] = int.d(xmm1_26)
                    var_30[0] = edx_7
                    var_a0 = xmm2_8
                    var_40[1].d = int.d(xmm6_4)
                    var_80 = xmm3_5
                    var_30[2] = int.d(xmm7_6)
                    double var_98_2 = xmm4_6
                    var_40[1]:4.d = int.d(xmm4_7)
                    double var_78_2 = xmm1_26
                    var_30[3] = int.d(xmm5_4)
                    double var_90_2 = xmm6_4
                    var_70 = xmm7_6
                    var_88 = xmm4_7
                    var_70 = xmm5_4
                else
                    int32_t i = 0
                    int32_t edx_8 = 0
                    
                    do
                        edx_8 += 4
                        *(&var_48:4 + edx_8) = int.d(fconvert.t(*(&var_c0 + i)))
                        int32_t eax_18 = int.d(fconvert.t(*(&var_60 + i)))
                        i += 8
                        *(&var_40[1]:4 + edx_8) = eax_18
                    while (i s< 0x20)
                    
                    double xmm1_25 = var_110_1[1]
                    esi_3 = var_40[0].d
                    edx_7 = var_30[0]
                    var_a0 = xmm4_7
                    var_80 = xmm5_4
                    double var_98_1 = xmm6_4
                    double var_78_1 = xmm7_6
                    double var_90_1 = xmm4_6
                    var_70 = xmm1_25
                    var_88 = xmm2_8
                    var_70 = xmm3_5
            else
                uint128_t xmm4_1 = zx.o(*((esi << 3) + &data_1ccd2a0))
                int32_t i_1 = 0
                uint128_t xmm5_1 = zx.o(*((esi << 3) + &data_1c459a0))
                int32_t eax_13 = 0
                double xmm4_2[0x2] = _mm_unpacklo_pd(xmm4_1, xmm4_1)
                double xmm5_2[0x2] = _mm_unpacklo_pd(xmm5_1, xmm5_1)
                double xmm7_4[0x2] = _mm_cvtepi32_pd(xmm3)
                
                do
                    double xmm3_1[0x2] = _mm_cvtepi32_pd(*(&var_40 + i_1))
                    int32_t xmm0_4[0x2] = *(&var_30 + i_1)
                    i_1 += 8
                    double xmm2_4[0x2] = _mm_cvtepi32_pd(xmm0_4)
                    double xmm3_2[0x2] = _mm_mul_pd(xmm3_1, xmm1_2)
                    double xmm2_5[0x2] = _mm_mul_pd(xmm2_4, xmm6_2)
                    double xmm0_6[0x2] = _mm_mul_pd(xmm5_2, xmm2_5)
                    *(&var_c0 + eax_13) = _mm_sub_pd(_mm_mul_pd(xmm4_2, xmm3_2), xmm0_6)
                    double xmm0_8[0x2] = _mm_mul_pd(xmm5_2, xmm3_2)
                    double xmm1_8[0x2] = _mm_add_pd(_mm_mul_pd(xmm4_2, xmm2_5), xmm0_8)
                    double xmm0_9[0x2] = *(&var_c0 + eax_13)
                    *(&var_60 + eax_13) = xmm1_8
                    double xmm1_9[0x2] = __cvtdq2pd_xmmpd_memq(xmm0_1)
                    *(&var_c0 + eax_13) = _mm_add_pd(xmm0_9, xmm7_4)
                    xmm1_2 = var_110_1
                    *(&var_60 + eax_13) = _mm_add_pd(*(&var_60 + eax_13), xmm1_9)
                    eax_13 += 0x10
                while (i_1 s< 0x10)
                
                double xmm0_13 = var_60
                int32_t ecx_6 = 0
                double var_58
                
                if (not(xmm0_13 <= var_58))
                    xmm0_13 = var_58
                    ecx_6 = 1
                
                double var_50
                
                if (not(xmm0_13 <= var_50))
                    xmm0_13 = var_50
                    ecx_6 = 2
                
                if (xmm0_13 > var_48)
                    ecx_6 = 3
                
                int32_t i_2 = 0
                int32_t esi_2 = 0
                
                do
                    double xmm1_12 = (&var_c0)[ecx_6]
                    esi_2 += 8
                    double xmm0_14 = (&var_60)[ecx_6]
                    ecx_6 = (ecx_6 + 1) & 3
                    *(&var_a8 + esi_2) = xmm1_12
                    *(&var_40 + i_2) = int.d(xmm1_12)
                    *(&var_88 + esi_2) = xmm0_14
                    *(&var_30 + i_2) = int.d(xmm0_14)
                    i_2 += 4
                while (i_2 s< 0x10)
                
                esi_3 = var_40[0].d
                edx_7 = var_30[0]
            int32_t i_3 = 0
            var_110_1[1]:4.d = edx_7
            int32_t i_4 = 0
            int32_t edi_8 = esi_3
            uint32_t ecx_9
            
            do
                int32_t ecx_8 = *(&var_40[0]:4 + i_3)
                uint32_t eax_25 = *(&var_30[1] + i_3)
                
                if (esi_3 s> ecx_8)
                    esi_3 = ecx_8
                
                if (edx_7 s> eax_25)
                    edx_7 = eax_25
                
                if (edi_8 s< ecx_8)
                    edi_8 = ecx_8
                
                ecx_9 = var_110_1[1]:4.d
                
                if (ecx_9 s< eax_25)
                    ecx_9 = eax_25
                
                i_3 = i_4 + 4
                var_110_1[1]:4.d = ecx_9
                i_4 = i_3
            while (i_3 s< 0xc)
            
            int32_t* edi_9 = edi_8 + 1
            int32_t* ecx_10 = ecx_9 + 1
            void* esi_4 = esi_3 - 1
            
            if (esi_3 - 1 s< 0)
                esi_4 = nullptr
            
            int32_t edx_9 = edx_7 - 1
            
            if (edx_7 - 1 s< 0)
                edx_9 = 0
            
            eax_2 = arg9 - 1
            
            if (edi_9 s> arg8 - 1)
                edi_9 = arg8 - 1
            
            if (ecx_10 s> eax_2)
                ecx_10 = eax_2
            
            if (esi_4 s<= arg8 - 1 && edx_9 s<= eax_2 && edi_9 s>= 0 && ecx_10 s>= 0)
                void* eax_27 = data_1cd4328
                data_1cd43ac = 0x3fc
                data_1cd43a8 = 0
                data_1cd43a4 = *(eax_27 + 0x3fc)
                data_1ccce88 = 0xff
                data_1ccce70 = 0
                data_1c0529f = 1
                
                if (var_d4 != 0)
                    int32_t var_128
                    var_128.q = var_100_1
                    int32_t var_130
                    var_130.q = var_f8_1
                    int32_t var_12c
                    int32_t eax_30 = sub_5edf50(arg9 - 1, var_d8, arg3, arg4, 0, 0, var_d8 - 1, 
                        arg4 - 1, arg5, arg6, arg7, arg8, ecx_10, arg10, arg11, 0, 0, arg8 - 1, 
                        arg9 - 1, var_f0_1, &var_a0, &var_80, var_12c)
                    sub_5f02dd(eax_1 ^ &__saved_ebp)
                    return eax_30
                
                uint32_t (* var_124_1)[0x4] = &var_30
                double (* var_128_1)[0x2] = &var_40
                int32_t var_12c_1 = edi_1
                int32_t* var_130_1 = arg13
                int32_t* var_134_2 = ecx_10
                int32_t* var_138_2 = arg9 - 1
                int32_t var_160
                int32_t var_15c
                void* var_150
                int32_t var_14c
                int32_t var_148
                eax_2 = sub_5ee250(arg9 - 1, var_d8, arg3, arg4, 0, 0, var_d8 - 1, arg4 - 1, 
                    var_160, var_15c, arg7, arg8, var_150, var_14c, var_148, 0, nullptr, arg8 - 1)

sub_5f02dd(eax_1 ^ &__saved_ebp)
return eax_2
