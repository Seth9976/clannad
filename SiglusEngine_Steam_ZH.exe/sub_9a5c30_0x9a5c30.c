// 函数: sub_9a5c30
// 地址: 0x9a5c30
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t i_3 = arg5
int32_t i_5 = 0

if (i_3 s> 0)
    int32_t* ecx_1 = arg3
    int32_t i
    
    do
        if (*(arg4 - arg3 + ecx_1) != 0)
            arg3[i_5] = *ecx_1
            i_5 += 1
        
        ecx_1 = &ecx_1[1]
        i = i_3
        i_3 -= 1
    while (i != 1)
    
    if (i_5 != 0)
        void* ebx_1 = ((i_5 << 2) + 7) & 0xfffffff8
        int32_t* ecx_3 = *arg2
        int32_t eax_2 = ecx_3[3]
        int32_t edi_2 = ecx_3[2]
        int32_t var_10 = edi_2
        int32_t edx_1 = divs.dp.d(sx.q(ecx_3[1] - *ecx_3), edi_2)
        arg5 = edx_1
        
        if (*(arg1 + 0x48) + ebx_1 s> *(arg1 + 0x4c))
            if (*(arg1 + 0x44) != 0)
                int32_t* eax_7 = _malloc(8)
                *(arg1 + 0x50) += *(arg1 + 0x48)
                eax_7[1] = *(arg1 + 0x54)
                *eax_7 = *(arg1 + 0x44)
                *(arg1 + 0x54) = eax_7
            
            *(arg1 + 0x4c) = ebx_1
            edx_1 = arg5
            *(arg1 + 0x44) = _malloc(ebx_1)
            *(arg1 + 0x48) = 0
        
        double xmm0_1 = _mm_cvtepi32_pd(zx.q(edi_2))
        void* eax_9 = *(arg1 + 0x48)
        void* result = *(arg1 + 0x44) + eax_9
        int32_t ebx_2 = 0
        int32_t i_4 = i_5
        *(arg1 + 0x48) = eax_9 + ebx_1
        float xmm5 = _mm_cvtpd_ps(100.0 / xmm0_1)
        
        if (i_4 s> 0)
            uint32_t edi_5 = ((edx_1 << 2) + 7) & 0xfffffff8
            
            do
                if (*(arg1 + 0x48) + edi_5 s> *(arg1 + 0x4c))
                    if (*(arg1 + 0x44) != 0)
                        int32_t* eax_13 = _malloc(8)
                        *(arg1 + 0x50) += *(arg1 + 0x48)
                        eax_13[1] = *(arg1 + 0x54)
                        *eax_13 = *(arg1 + 0x44)
                        *(arg1 + 0x54) = eax_13
                    
                    *(arg1 + 0x4c) = edi_5
                    edx_1 = arg5
                    *(arg1 + 0x44) = _malloc(edi_5)
                    *(arg1 + 0x48) = 0
                
                int32_t eax_15 = *(arg1 + 0x48)
                char* ecx_14 = *(arg1 + 0x44) + eax_15
                *(arg1 + 0x48) = eax_15 + edi_5
                *(result + (ebx_2 << 2)) = ecx_14
                _memset(ecx_14, 0, edx_1 << 2)
                i_4 = i_5
                ebx_2 += 1
                edx_1 = arg5
            while (ebx_2 s< i_4)
            
            edi_2 = var_10
        
        int32_t edx_2 = 0
        int32_t var_18 = 0
        
        if (arg5 s> 0)
            int32_t* esi_4 = ecx_3
            int32_t ebx_3 = 0
            int32_t var_28_1 = 0
            
            do
                int32_t eax_20 = *esi_4 + ebx_3
                
                if (i_4 s> 0)
                    int32_t* esi_5 = arg3
                    int32_t* eax_22 = result - esi_5
                    int32_t* var_c_1 = esi_5
                    int32_t i_2 = i_4
                    int32_t i_1
                    
                    do
                        int32_t ecx_17 = 0
                        int32_t ebx_4 = 0
                        int32_t j = 0
                        
                        if (edi_2 s> 0)
                            if (edi_2 u>= 8 && data_b94f20 s>= 2)
                                int32_t esi_6 = *esi_5
                                int32_t eax_24 = edi_2 & 0x80000007
                                
                                if (eax_24 s< 0)
                                    eax_24 = ((eax_24 - 1) | 0xfffffff8) + 1
                                
                                int32_t xmm1_2[0x4] = zx.o(0)
                                int32_t xmm4_1[0x4] = zx.o(0)
                                int32_t xmm2_1[0x4] = zx.o(0)
                                int32_t xmm3_1[0x4] = zx.o(0)
                                void* eax_28 = (eax_20 << 2) + 0x10
                                
                                do
                                    int32_t xmm0_2[0x4] = *(eax_28 + esi_6 - 0x10)
                                    j += 8
                                    eax_28 += 0x20
                                    int32_t xmm0_3[0x4] = _mm_abs_epi32(xmm0_2)
                                    xmm4_1 = _mm_add_epi32(xmm4_1, xmm0_3)
                                    xmm1_2 = _mm_max_epi32(xmm1_2, xmm0_3)
                                    int32_t xmm0_5[0x4] = _mm_abs_epi32(*(eax_28 + esi_6 - 0x20))
                                    xmm3_1 = _mm_add_epi32(xmm3_1, xmm0_5)
                                    xmm2_1 = _mm_max_epi32(xmm2_1, xmm0_5)
                                while (j s< edi_2 - eax_24)
                                
                                esi_5 = var_c_1
                                int32_t xmm3_2[0x4] = _mm_add_epi32(xmm3_1, xmm4_1)
                                int32_t xmm3_3[0x4] =
                                    _mm_add_epi32(xmm3_2, _mm_bsrli_si128(xmm3_2, 8))
                                int32_t xmm3_4 = _mm_add_epi32(xmm3_3, _mm_bsrli_si128(xmm3_3, 4))
                                int32_t xmm1_3[0x4] = _mm_max_epi32(xmm1_2, xmm2_1)
                                ebx_4 = xmm3_4
                                int32_t xmm1_4[0x4] =
                                    _mm_max_epi32(xmm1_3, _mm_bsrli_si128(xmm1_3, 8))
                                ecx_17 = _mm_max_epi32(xmm1_4, _mm_bsrli_si128(xmm1_4, 4))
                            
                            if (j s< edi_2)
                                int32_t eax_29 = *esi_5
                                int32_t var_2c_1 = eax_29
                                int32_t esi_9 = (eax_20 + j) << 2
                                int32_t j_3 = edi_2 - j
                                int32_t j_1
                                
                                do
                                    int32_t eax_30 = *(esi_9 + eax_29)
                                    esi_9 += 4
                                    int32_t eax_31
                                    int32_t edx_3
                                    edx_3:eax_31 = sx.q(eax_30)
                                    int32_t eax_33 = (eax_31 ^ edx_3) - edx_3
                                    
                                    if (eax_33 s> ecx_17)
                                        ecx_17 = eax_33
                                    
                                    ebx_4 += eax_33
                                    eax_29 = var_2c_1
                                    j_1 = j_3
                                    j_3 -= 1
                                while (j_1 != 1)
                        
                        int32_t j_2 = 0
                        int32_t edi_6 = int.d(_mm_cvtepi32_ps(zx.o(ebx_4)) * xmm5)
                        
                        if (eax_2 - 1 s> 0)
                            void* eax_35 = &ecx_3[0x286]
                            
                            do
                                if (ecx_17 s<= *(eax_35 - 0x100))
                                    int32_t esi_10 = *eax_35
                                    
                                    if (esi_10 s< 0)
                                        break
                                    
                                    if (edi_6 s< esi_10)
                                        break
                                
                                j_2 += 1
                                eax_35 += 4
                            while (j_2 s< eax_2 - 1)
                        
                        edi_2 = var_10
                        int32_t eax_37 = *(eax_22 + var_c_1)
                        esi_5 = &var_c_1[1]
                        i_1 = i_2
                        i_2 -= 1
                        var_c_1 = esi_5
                        *(eax_37 + (var_18 << 2)) = j_2
                    while (i_1 != 1)
                    i_4 = i_5
                    edx_2 = var_18
                    esi_4 = ecx_3
                    ebx_3 = var_28_1
                
                edx_2 += 1
                ebx_3 += edi_2
                var_18 = edx_2
                var_28_1 = ebx_3
            while (edx_2 s< arg5)
        
        arg2[0xa] += 1
        return result

return 0
