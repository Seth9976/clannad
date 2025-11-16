// 函数: sub_490b80
// 地址: 0x490b80
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg6 u<= 0x1f)
    void* ebx_1 = arg6 * 0x184
    
    if (*(ebx_1 + &data_12c41b4) s> 0)
        int32_t ecx = arg4
        
        if (ecx s< 0)
            ecx = 0
        
        *arg3 = 3
        int32_t eax = arg5
        arg3[2] = 0
        arg3[3] = 0
        
        if (eax s< 0)
            eax = 0
        
        arg3[4] = 0
        arg3[5] = ecx
        arg3[6] = eax
        arg3[0xe] = arg6
        
        if (arg6 == 0xffffffff)
            arg3[7] = arg3[0xf] * 2
            return 0
        
        int32_t ecx_1 = *(ebx_1 + &data_12c41b4)
        int32_t esi_3 = 0
        int32_t i = 0
        
        if (ecx_1 s> 0 && ecx_1 u>= 8)
            int32_t eax_4 = ecx_1 & 0x80000007
            
            if (eax_4 s< 0)
                eax_4 = ((eax_4 - 1) | 0xfffffff8) + 1
            
            int32_t xmm5_1[0x4] = zx.o(0)
            int32_t xmm4_1[0x4] = zx.o(0)
            void* eax_7 = ebx_1 + 0x12c41d8
            
            do
                uint64_t xmm2_1 = zx.q(*(eax_7 + 0xc))
                eax_7 += 0x60
                i += 8
                uint128_t xmm1_1 = zx.o(*(eax_7 - 0x6c))
                int32_t xmm3_2[0x4] =
                    _mm_unpacklo_epi32(zx.o(*(eax_7 - 0x78)), zx.q(*(eax_7 - 0x60)))
                uint64_t xmm0_2 = zx.q(*(eax_7 - 0x30))
                int64_t xmm1_2 = _mm_unpacklo_epi32(xmm1_1, xmm2_1)
                uint64_t xmm2_2 = zx.q(*(eax_7 - 0x24))
                int32_t xmm3_3[0x4] = _mm_unpacklo_epi32(xmm3_2, xmm1_2)
                int32_t xmm1_3[0x4] = zx.o(*(eax_7 - 0x3c))
                xmm5_1 = _mm_add_epi32(xmm5_1, xmm3_3)
                xmm4_1 = _mm_add_epi32(xmm4_1, 
                    _mm_unpacklo_epi32(_mm_unpacklo_epi32(zx.o(*(eax_7 - 0x48)), xmm0_2), 
                        _mm_unpacklo_epi32(xmm1_3, xmm2_2)))
            while (i s< ecx_1 - eax_4)
            
            int32_t xmm4_2[0x4] = _mm_add_epi32(xmm4_1, xmm5_1)
            int32_t xmm4_3[0x4] = _mm_add_epi32(xmm4_2, _mm_bsrli_si128(xmm4_2, 8))
            esi_3 = _mm_add_epi32(xmm4_3, _mm_bsrli_si128(xmm4_3, 4))
        
        int32_t edi_1 = 0
        int32_t ebx_2 = 0
        
        if (i s< ecx_1)
            if (ecx_1 - i s>= 2)
                void* eax_12 = i * 0xc + &data_12c41cc + ebx_1
                int32_t i_2 = ((ecx_1 - i - 2) u>> 1) + 1
                i += i_2 << 1
                edi_1 = 0
                int32_t i_1
                
                do
                    edi_1 += *(eax_12 - 0xc)
                    eax_12 += 0x18
                    ebx_2 += *(eax_12 - 0x18)
                    i_1 = i_2
                    i_2 -= 1
                while (i_1 != 1)
            
            if (i s< ecx_1)
                esi_3 += *(ebx_1 + i * 0xc + 0x12c41c0)
            
            esi_3 += ebx_2 + edi_1
        
        arg3[7] = esi_3

return 0
