// 函数: sub_4720f0
// 地址: 0x4720f0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

double xmm3 = 1000.0
char* esi = arg3 + 0x28

for (int32_t i = 0; i s< 5; )
    int32_t var_c
    int32_t var_8
    
    if (*(esi + 4) u> 0 && i u<= 4)
        switch (i)
            case 0, 1, 2
                sub_471fc0(&var_c, &var_8, esi, &var_c)
                *arg4 += var_8
                *arg5 += var_c
            case 3
                int16_t eax_2 = *(esi + 0x12)
                int16_t ecx_4 = *(esi + 0x14)
                int32_t eax_12
                int32_t ecx_10
                
                if (esi[0x19] != 0)
                    if (eax_2 s< 0)
                        *(esi + 0x12) = 0
                    else if (eax_2 s> 0x2710)
                        *(esi + 0x12) = 0x2710
                    
                    if (ecx_4 s< 0)
                        *(esi + 0x14) = 0
                    else if (ecx_4 s> 0x2710)
                        *(esi + 0x14) = 0x2710
                    
                    *(esi + 0x12) -= 0x3e8
                    *(esi + 0x14) -= 0x3e8
                    sub_471fc0(&var_c, &var_8, esi, &var_c)
                    eax_12 = var_8
                    ecx_10 = var_c
                else
                    if (eax_2 s< 0x64)
                        *(esi + 0x12) = 0x64
                    else if (eax_2 s> 0x2710)
                        *(esi + 0x12) = 0x2710
                    
                    if (ecx_4 s< 0x64)
                        *(esi + 0x14) = 0x64
                    else if (ecx_4 s> 0x2710)
                        *(esi + 0x14) = 0x2710
                    
                    uint32_t ecx_5 = zx.d(*(esi + 0x12))
                    int32_t eax_3 = sx.d(ecx_5.w)
                    int16_t eax_4
                    uint64_t xmm2_1
                    
                    if (ecx_5.w s< 0x3e8)
                        int16_t ecx_6 = (int.d(xmm3 / _mm_cvtepi32_pd(zx.q(eax_3)) * xmm3)).w
                        xmm2_1 = zx.q(sx.d(ecx_6))
                        eax_4 = (0x3e8 - ecx_6) * 2
                    else
                        xmm2_1 = zx.q(eax_3)
                        eax_4 = (ecx_5 << 1).w - 0x7d0
                    
                    uint32_t ecx_7 = zx.d(*(esi + 0x14))
                    *(esi + 0x12) = eax_4
                    int32_t eax_7 = sx.d(ecx_7.w)
                    double xmm2_3 = _mm_cvtepi32_pd(xmm2_1) / xmm3
                    int16_t eax_8
                    uint64_t xmm1_4
                    
                    if (ecx_7.w s< 0x3e8)
                        int16_t ecx_8 = (int.d(xmm3 / _mm_cvtepi32_pd(zx.q(eax_7)) * xmm3)).w
                        xmm1_4 = zx.q(sx.d(ecx_8))
                        eax_8 = (0x3e8 - ecx_8) * 2
                    else
                        xmm1_4 = zx.q(eax_7)
                        eax_8 = (ecx_7 << 1).w - 0x7d0
                    
                    double xmm1_8 = _mm_cvtepi32_pd(xmm1_4)
                    *(esi + 0x14) = eax_8
                    sub_471fc0(&var_c, &var_8, esi, &var_c)
                    eax_12 = var_8
                    
                    if (eax_12 s< 0)
                        eax_12 = int.d(_mm_cvtepi32_pd(zx.q(eax_12)) / xmm2_3)
                    
                    ecx_10 = var_c
                    
                    if (ecx_10 s< 0)
                        ecx_10 = int.d(_mm_cvtepi32_pd(zx.q(ecx_10)) / (xmm1_8 / xmm3))
                
                int32_t eax_14 = eax_12 + 0x3e8
                *(esi + 0x12) = eax_2
                int32_t ecx_12 = ecx_10 + 0x3e8
                *(esi + 0x14) = ecx_4
                double xmm0_12 = _mm_cvtepi32_pd(zx.q(*(arg2 + 0x58)))
                
                if (eax_14 s< 0)
                    eax_14 = 0
                
                var_8 = eax_14
                
                if (ecx_12 s< 0)
                    ecx_12 = 0
                
                var_c = ecx_12
                double xmm1_13 = _mm_cvtepi32_pd(zx.q(eax_14)) / xmm3 * xmm0_12
                double xmm0_14 = _mm_cvtepi32_pd(zx.q(*(arg2 + 0x5c)))
                double xmm1_15 = _mm_cvtepi32_pd(zx.q(ecx_12))
                *(arg2 + 0x58) = int.d(xmm1_13)
                *(arg2 + 0x5c) = int.d(xmm1_15 / xmm3 * xmm0_14)
            case 4
                sub_471fc0(&var_c, &var_8, esi, &var_c)
                *(arg2 + 0x60) += var_8
    i += 1
    esi = &esi[0x1c]
