// 函数: sub_9a6650
// 地址: 0x9a6650
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* ecx = *arg2
int32_t eax_1 = ecx[3]
int32_t edi = ecx[2]
int32_t temp0 = divs.dp.d(sx.q(ecx[1] - *ecx), edi)
int32_t var_10 = edi
int32_t result = sub_99cca0(arg3, arg5 << 2)
int32_t ebx = 0
float xmm5 = _mm_cvtpd_ps(100.0 / _mm_cvtepi32_pd(zx.q(edi)))

if (arg5 s> 0)
    uint32_t edi_4 = ((temp0 << 2) + 7) & 0xfffffff8
    
    do
        if (*(arg3 + 0x48) + edi_4 s> *(arg3 + 0x4c))
            if (*(arg3 + 0x44) != 0)
                int32_t* eax_8 = _malloc(8)
                *(arg3 + 0x50) += *(arg3 + 0x48)
                eax_8[1] = *(arg3 + 0x54)
                *eax_8 = *(arg3 + 0x44)
                *(arg3 + 0x54) = eax_8
            
            *(arg3 + 0x4c) = edi_4
            *(arg3 + 0x44) = _malloc(edi_4)
            *(arg3 + 0x48) = 0
        
        int32_t eax_10 = *(arg3 + 0x48)
        char* ecx_6 = *(arg3 + 0x44) + eax_10
        *(arg3 + 0x48) = eax_10 + edi_4
        *(result + (ebx << 2)) = ecx_6
        _memset(ecx_6, 0, temp0 << 2)
        ebx += 1
    while (ebx s< arg5)
    
    edi = var_10

int32_t ecx_7 = 0
int32_t var_24 = 0

if (temp0 s> 0)
    int32_t* edx_4 = ecx
    int32_t ebx_1 = 0
    int32_t var_28_1 = 0
    
    do
        int32_t eax_15 = *edx_4 + ebx_1
        
        if (arg5 s> 0)
            int32_t* esi_1 = arg4
            int32_t* eax_17 = result - esi_1
            int32_t* var_c_1 = esi_1
            int32_t i_1 = arg5
            int32_t i
            
            do
                int32_t ecx_10 = 0
                int32_t ebx_2 = 0
                int32_t j = 0
                
                if (edi s> 0)
                    if (edi u>= 8 && data_b94f20 s>= 2)
                        int32_t esi_2 = *esi_1
                        int32_t eax_20 = edi & 0x80000007
                        
                        if (eax_20 s< 0)
                            eax_20 = ((eax_20 - 1) | 0xfffffff8) + 1
                        
                        int32_t xmm1_2[0x4] = zx.o(0)
                        int32_t xmm4_1[0x4] = zx.o(0)
                        int32_t xmm2_1[0x4] = zx.o(0)
                        int32_t xmm3_1[0x4] = zx.o(0)
                        void* eax_24 = (eax_15 << 2) + 0x10
                        
                        do
                            int32_t xmm0_2[0x4] = *(eax_24 + esi_2 - 0x10)
                            j += 8
                            eax_24 += 0x20
                            int32_t xmm0_3[0x4] = _mm_abs_epi32(xmm0_2)
                            xmm4_1 = _mm_add_epi32(xmm4_1, xmm0_3)
                            xmm1_2 = _mm_max_epi32(xmm1_2, xmm0_3)
                            int32_t xmm0_5[0x4] = _mm_abs_epi32(*(eax_24 + esi_2 - 0x20))
                            xmm3_1 = _mm_add_epi32(xmm3_1, xmm0_5)
                            xmm2_1 = _mm_max_epi32(xmm2_1, xmm0_5)
                        while (j s< edi - eax_20)
                        
                        esi_1 = var_c_1
                        int32_t xmm3_2[0x4] = _mm_add_epi32(xmm3_1, xmm4_1)
                        int32_t xmm3_3[0x4] = _mm_add_epi32(xmm3_2, _mm_bsrli_si128(xmm3_2, 8))
                        int32_t xmm3_4 = _mm_add_epi32(xmm3_3, _mm_bsrli_si128(xmm3_3, 4))
                        int32_t xmm1_3[0x4] = _mm_max_epi32(xmm1_2, xmm2_1)
                        ebx_2 = xmm3_4
                        int32_t xmm1_4[0x4] = _mm_max_epi32(xmm1_3, _mm_bsrli_si128(xmm1_3, 8))
                        ecx_10 = _mm_max_epi32(xmm1_4, _mm_bsrli_si128(xmm1_4, 4))
                    
                    if (j s< edi)
                        int32_t eax_25 = *esi_1
                        int32_t var_2c_1 = eax_25
                        int32_t esi_5 = (eax_15 + j) << 2
                        int32_t j_3 = edi - j
                        int32_t j_1
                        
                        do
                            int32_t eax_26 = *(esi_5 + eax_25)
                            esi_5 += 4
                            int32_t eax_27
                            int32_t edx_5
                            edx_5:eax_27 = sx.q(eax_26)
                            int32_t eax_29 = (eax_27 ^ edx_5) - edx_5
                            
                            if (eax_29 s> ecx_10)
                                ecx_10 = eax_29
                            
                            ebx_2 += eax_29
                            eax_25 = var_2c_1
                            j_1 = j_3
                            j_3 -= 1
                        while (j_1 != 1)
                
                int32_t j_2 = 0
                int32_t edi_5 = int.d(_mm_cvtepi32_ps(zx.o(ebx_2)) * xmm5)
                
                if (eax_1 - 1 s> 0)
                    void* eax_31 = &ecx[0x286]
                    
                    do
                        if (ecx_10 s<= *(eax_31 - 0x100))
                            int32_t esi_6 = *eax_31
                            
                            if (esi_6 s< 0)
                                break
                            
                            if (edi_5 s< esi_6)
                                break
                        
                        j_2 += 1
                        eax_31 += 4
                    while (j_2 s< eax_1 - 1)
                
                ecx_7 = var_24
                edi = var_10
                int32_t eax_33 = *(eax_17 + var_c_1)
                esi_1 = &var_c_1[1]
                i = i_1
                i_1 -= 1
                var_c_1 = esi_1
                *(eax_33 + (ecx_7 << 2)) = j_2
            while (i != 1)
            edx_4 = ecx
            ebx_1 = var_28_1
        
        ecx_7 += 1
        ebx_1 += edi
        var_24 = ecx_7
        var_28_1 = ebx_1
    while (ecx_7 s< temp0)

arg2[0xa] += 1
return result
