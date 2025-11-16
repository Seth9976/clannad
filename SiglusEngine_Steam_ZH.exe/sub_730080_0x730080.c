// 函数: sub_730080
// 地址: 0x730080
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* ebx = arg1
int32_t i = 0
int32_t (* edi)(void* arg1, void* arg2, int16_t* arg3, int32_t* arg4, char* arg5) = nullptr
int32_t i_1 = 0
void* result = ebx[0x6d]
int32_t esi = 0
int32_t (* var_8)(void* arg1, void* arg2, int16_t* arg3, int32_t* arg4, char* arg5) = nullptr

if (ebx[9] s> 0)
    double xmm3_1 = 1.3870398450000001
    int32_t* ecx_1 = ebx[0x31] + 0x28
    double xmm4_1 = 1.3065629649999999
    double xmm5_1 = 1.1758756020000001
    double xmm6_1 = 0.785694958
    double xmm7_1 = 0.54119609999999996
    double xmm2_1 = 0.125
    int32_t* var_10_1 = ecx_1
    void* result_1 = result + 0x2c
    
    do
        int32_t eax_3 = (ecx_1[-1] << 8) + *ecx_1
        
        if (eax_3 s> 0x70e)
            if (eax_3 s> 0xc06)
                if (eax_3 s> 0xe0e)
                    if (eax_3 == 0xf0f)
                        edi = sub_73b2c0
                        esi = 0
                        var_8 = edi
                    else if (eax_3 == 0x1008)
                        edi = sub_73c2a0
                        esi = 0
                        var_8 = edi
                    else if (eax_3 == 0x1010)
                        edi = sub_73ba40
                        esi = 0
                        var_8 = edi
                    else
                    label_73036b:
                        *(*ebx + 0x14) = 7
                        *(*ebx + 0x18) = var_10_1[-1]
                        *(*ebx + 0x1c) = *var_10_1
                    label_730386:
                        (**ebx)(ebx)
                        xmm2_1 = 0.125
                        xmm3_1 = 1.3870398450000001
                        xmm4_1 = 1.3065629649999999
                        xmm5_1 = 1.1758756020000001
                        xmm6_1 = 0.785694958
                        xmm7_1 = 0.54119609999999996
                        ecx_1 = var_10_1
                        i = i_1
                else if (eax_3 == 0xe0e)
                    edi = sub_73abd0
                    esi = 0
                    var_8 = edi
                else if (eax_3 == 0xc0c)
                    edi = sub_739eb0
                    esi = 0
                    var_8 = edi
                else if (eax_3 == 0xd0d)
                    edi = sub_73a480
                    esi = 0
                    var_8 = edi
                else
                    if (eax_3 != 0xe07)
                        goto label_73036b
                    
                    edi = sub_73c970
                    esi = 0
                    var_8 = edi
            else if (eax_3 == 0xc06)
                edi = sub_73da40
                esi = 0
                var_8 = edi
            else if (eax_3 s> 0x909)
                if (eax_3 == 0xa05)
                    edi = sub_73e520
                    esi = 0
                    var_8 = edi
                else if (eax_3 == 0xa0a)
                    edi = sub_739330
                    esi = 0
                    var_8 = edi
                else
                    if (eax_3 != 0xb0b)
                        goto label_73036b
                    
                    edi = sub_739850
                    esi = 0
                    var_8 = edi
            else if (eax_3 == 0x909)
                edi = sub_738ee0
                esi = 0
                var_8 = edi
            else if (eax_3 == 0x804)
                edi = sub_73ee20
                esi = 0
                var_8 = edi
            else if (eax_3 == 0x808)
                int32_t eax_18 = ebx[0x11]
                
                if (eax_18 == 0)
                    edi = sub_735e00
                    esi = 0
                    var_8 = edi
                else if (eax_18 == 1)
                    edi = sub_742930
                    esi = 1
                    var_8 = edi
                else
                    if (eax_18 != 2)
                        *(*ebx + 0x14) = 0x31
                        goto label_730386
                    
                    edi = sub_7424a0
                    esi = 2
                    var_8 = edi
            else
                if (eax_3 != 0x810)
                    goto label_73036b
                
                edi = sub_73fab0
                esi = 0
                var_8 = edi
        else if (eax_3 == 0x70e)
            edi = sub_7400e0
            esi = 0
            var_8 = edi
        else if (eax_3 s> 0x404)
            if (eax_3 s> 0x603)
                if (eax_3 == 0x606)
                    edi = sub_7375f0
                    esi = 0
                    var_8 = edi
                else if (eax_3 == 0x60c)
                    edi = sub_740660
                    esi = 0
                    var_8 = edi
                else
                    if (eax_3 != 0x707)
                        goto label_73036b
                    
                    edi = sub_736300
                    esi = 0
                    var_8 = edi
            else if (eax_3 == 0x603)
                edi = sub_73f3f0
                esi = 0
                var_8 = edi
            else if (eax_3 == 0x408)
                edi = sub_741610
                esi = 0
                var_8 = edi
            else if (eax_3 == 0x505)
                edi = sub_738020
                esi = 0
                var_8 = edi
            else
                if (eax_3 != 0x50a)
                    goto label_73036b
                
                edi = sub_740ab0
                esi = 0
                var_8 = edi
        else if (eax_3 == 0x404)
            edi = sub_738770
            esi = 0
            var_8 = edi
        else if (eax_3 s> 0x204)
            if (eax_3 == 0x303)
                edi = sub_738bb0
                esi = 0
                var_8 = edi
            else if (eax_3 == 0x306)
                edi = sub_741db0
                esi = 0
                var_8 = edi
            else
                if (eax_3 != 0x402)
                    goto label_73036b
                
                edi = sub_73f890
                esi = 0
                var_8 = edi
        else if (eax_3 == 0x204)
            edi = sub_742250
            esi = 0
            var_8 = edi
        else if (eax_3 s> 0x201)
            if (eax_3 != 0x202)
                goto label_73036b
            
            edi = sub_738de0
            esi = 0
            var_8 = edi
        else if (eax_3 == 0x201)
            edi = sub_73fa40
            esi = 0
            var_8 = edi
        else if (eax_3 == 0x101)
            edi = sub_738ea0
            esi = 0
            var_8 = edi
        else
            if (eax_3 != 0x102)
                goto label_73036b
            
            edi = sub_742430
            esi = 0
            var_8 = edi
        
        int32_t* result_2 = result_1
        result_2[-0xa] = edi
        
        if (ecx_1[3].b != 0 && *result_2 != esi)
            void* edx_1 = ecx_1[0xa]
            
            if (edx_1 != 0)
                *result_2 = esi
                
                if (esi == 0)
                    int32_t ebx_2 = ecx_1[0xb]
                    
                    for (int32_t j = 0; j s< 0x40; j += 1)
                        *(ebx_2 + (j << 2)) = zx.d(*(edx_1 + (j << 1)))
                    
                    ebx = arg1
                else if (esi == 1)
                    void* ebx_1 = ecx_1[0xb]
                    
                    if (data_b94f20 s< 2 || (ebx_1 u<= 0xb0d6ae && ebx_1 + 0xfc u>= &data_b0d630)
                            || (ebx_1 u<= edx_1 + 0x7e && ebx_1 + 0xfc u>= edx_1))
                        for (void* const j_1 = &data_b0d630; j_1 s< &data_b0d6b0; )
                            uint32_t ecx_7 = zx.d(*(edx_1 - &data_b0d630 + j_1))
                            ebx_1 += 4
                            int32_t eax_52 = sx.d(*j_1)
                            j_1 += 2
                            *(ebx_1 - 4) = (ecx_7 * eax_52 + 0x800) s>> 0xc
                        
                        edi = var_8
                    else
                        int32_t xmm2_2[0x4] = data_b0daa0
                        int32_t j_4 = 8
                        uint128_t xmm3_2 = 0xc
                        int32_t eax_51 = neg.d(edx_1)
                        int32_t j_2
                        
                        do
                            int16_t xmm0_47[0x4] = *(eax_51 + edx_1 + &data_b0d630)
                            ebx_1 += 0x20
                            edx_1 += 0x10
                            int32_t xmm1_2[0x4] = _mm_cvtepi16_epi32(xmm0_47)
                            *(ebx_1 - 0x20) = _mm_sra_epi32(
                                _mm_add_epi32(
                                    _mm_mullo_epi32(_mm_cvtepu16_epi32(*(edx_1 - 0x10)), xmm1_2), 
                                    xmm2_2), 
                                xmm3_2)
                            int32_t xmm1_3[0x4] = _mm_cvtepi16_epi32(*(eax_51 + edx_1 + 0xb0d628))
                            *(ebx_1 - 0x10) = _mm_sra_epi32(
                                _mm_add_epi32(
                                    _mm_mullo_epi32(_mm_cvtepu16_epi32(*(edx_1 - 8)), xmm1_3), 
                                    xmm2_2), 
                                xmm3_2)
                            j_2 = j_4
                            j_4 -= 1
                        while (j_2 != 1)
                    
                    ebx = arg1
                else if (esi == 2)
                    void* const j_3 = &data_b0d5f0
                    void* ecx_5 = ecx_1[0xb] + 8
                    void* edx_2 = edx_1 + 4
                    
                    do
                        uint32_t eax_41 = zx.d(*(edx_2 - 4))
                        edx_2 += 0x10
                        double xmm1_1 = *j_3
                        ecx_5 += 0x20
                        j_3 += 8
                        *(ecx_5 - 0x28) =
                            _mm_cvtpd_ps(_mm_cvtepi32_pd(zx.q(eax_41)) * xmm1_1 * xmm2_1)
                        *(ecx_5 - 0x24) = _mm_cvtpd_ps(_mm_cvtepi32_pd(zx.q(*(edx_2 - 0x12)))
                            * xmm1_1 * xmm3_1 * xmm2_1)
                        *(ecx_5 - 0x20) = _mm_cvtpd_ps(_mm_cvtepi32_pd(zx.q(*(edx_2 - 0x10)))
                            * xmm1_1 * xmm4_1 * xmm2_1)
                        *(ecx_5 - 0x1c) = _mm_cvtpd_ps(_mm_cvtepi32_pd(zx.q(*(edx_2 - 0xe)))
                            * xmm1_1 * xmm5_1 * xmm2_1)
                        *(ecx_5 - 0x18) =
                            _mm_cvtpd_ps(_mm_cvtepi32_pd(zx.q(*(edx_2 - 0xc))) * xmm1_1 * xmm2_1)
                        *(ecx_5 - 0x14) = _mm_cvtpd_ps(_mm_cvtepi32_pd(zx.q(*(edx_2 - 0xa)))
                            * xmm1_1 * xmm6_1 * xmm2_1)
                        *(ecx_5 - 0x10) = _mm_cvtpd_ps(_mm_cvtepi32_pd(zx.q(*(edx_2 - 8))) * xmm1_1
                            * xmm7_1 * xmm2_1)
                        *(ecx_5 - 0xc) = _mm_cvtpd_ps(_mm_cvtepi32_pd(zx.q(*(edx_2 - 6))) * xmm1_1
                            * 0.275899379 * xmm2_1)
                    while (j_3 s< &data_b0d630)
                    
                    edi = var_8
                else
                    *(*ebx + 0x14) = 0x31
                    (**ebx)(ebx)
                
                ecx_1 = var_10_1
                result_2 = result_1
            
            i = i_1
        
        xmm2_1 = 0.125
        i += 1
        xmm3_1 = 1.3870398450000001
        result = &result_2[1]
        xmm4_1 = 1.3065629649999999
        ecx_1 = &ecx_1[0x16]
        xmm5_1 = 1.1758756020000001
        xmm6_1 = 0.785694958
        xmm7_1 = 0.54119609999999996
        i_1 = i
        result_1 = result
        var_10_1 = ecx_1
    while (i s< ebx[9])

return result
