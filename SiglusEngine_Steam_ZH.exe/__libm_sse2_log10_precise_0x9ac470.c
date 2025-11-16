// 函数: __libm_sse2_log10_precise
// 地址: 0x9ac470
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

double var_8

if ((arg1 & 0x7f80) == 0x1f80)
    int16_t x87status_1
    int16_t temp0_1
    temp0_1, x87status_1 = __fnstcw_memmem16(arg2)
    var_8.w = temp0_1
    int32_t eax_1
    eax_1.w = var_8.w
    eax_1.w &= 0x7f
    
    if (eax_1.w == 0x7f)
        var_8 = arg3
        int32_t edx = 0
        void* eax_3
        uint32_t ecx_1
        double xmm0_4[0x2]
        double xmm0_5[0x2]
        double xmm6_4[0x2]
        int64_t xmm7_1
        
        while (true)
            double xmm0[0x2] = _mm_unpacklo_pd(arg3, arg3)
            ecx_1 = _mm_extract_epi16(_mm_srli_epi64(arg3, 0x34), 0)
            uint64_t xmm1_1[0x2] = data_b11b00
            double xmm2_1[0x2] = data_b11b10
            double xmm4_1[0x2] = data_b11b20
            uint64_t xmm6_1[0x2] = data_b11b30
            uint64_t xmm0_2[0x2] = _mm_or_pd(_mm_and_pd(xmm0, xmm1_1), data_b11b70)
            eax_3 = _mm_extract_epi16(_mm_add_pd(xmm4_1, xmm0_2), 0) & 0x7f0
            double xmm4_3[0x2] = *(eax_3 + 0xb12010)
            xmm7_1 = (*(eax_3 + 0xb11c00)).q
            uint64_t xmm6_2[0x2] = _mm_and_pd(xmm6_1, xmm0_2)
            double xmm0_3[0x2] = _mm_sub_pd(xmm0_2, xmm6_2)
            xmm6_4 = _mm_sub_pd(_mm_mul_pd(xmm6_2, xmm4_3), xmm2_1)
            xmm0_4 = _mm_mul_pd(xmm0_3, xmm4_3)
            xmm0_5 = _mm_add_pd(xmm0_4, xmm6_4)
            
            if ((ecx_1 & 0xfff) - 1 u<= 0x7fd)
                break
            
            double xmm0_11 = var_8
            double xmm1_10[0x2] = _mm_cmpeq_sd(_mm_xor_pd(xmm1_1, xmm1_1), xmm0_11, 0)
            int64_t var_10
            
            if (_mm_extract_epi16(xmm1_10, 0) u> 0)
                var_10 = -0x10000000000000
                return sub_75a7f9(&var_8, &var_8, &var_10, 8)
            
            if ((ecx_1 & 0xfff) != 0)
                void* const edx_2
                
                if ((ecx_1 & 0xfff) - 1 u> 0x7fe)
                    int32_t eax_9
                    
                    if ((ecx_1 & 0x7ff) u>= 0x7ff)
                        uint64_t xmm2_9[0x2] = var_8
                        eax_9 = xmm2_9 | (_mm_srli_epi64(xmm2_9, 0x20) & 0xfffff)
                    
                    if ((ecx_1 & 0x7ff) u< 0x7ff || eax_9 == 0)
                        double xmm1_11 = _mm_xor_pd(xmm1_10, xmm1_10)
                        xmm1_10 = xmm1_11 / xmm1_11
                        edx_2 = 9
                    else
                        edx_2 = 0x3e9
                else
                    xmm1_10 = data_b11b00
                    uint64_t xmm2_6[0x2] = data_b11b70
                    uint32_t eax_6 = _mm_extract_epi16(
                        _mm_cmpeq_sd(xmm2_6, _mm_or_pd(_mm_and_pd(var_8, xmm1_10), xmm2_6), 0), 0)
                    
                    if (eax_6 != 0)
                        return eax_6
                    
                    edx_2 = 0x3e9
                
                var_10 = xmm1_10
                return sub_75a7f9(&var_8, &var_8, &var_10, edx_2)
            
            arg3 = xmm0_11 * 4503599627370496.0
            edx = 0xffffffcc
        
        int32_t ecx_5 = (ecx_1 & 0xfff) - 0x3ff + edx
        double xmm6_5[0x2] = float.d(ecx_5)
        double xmm6_6[0x2] = _mm_unpacklo_pd(xmm6_5, xmm6_5)
        void* eax_4 = eax_3 + (ecx_5 << 0xa)
        void* const edx_1 = nullptr
        
        if (eax_4 == 0)
            edx_1 = 0x10
        
        double xmm2_2[0x2] = data_b11bd0
        double xmm1_3[0x2] = _mm_mul_pd(data_b11bc0, xmm0_5)
        double xmm3_3 = _mm_mul_pd(xmm0_5, xmm0_5)
        double xmm1_4[0x2] = _mm_add_pd(xmm1_3, xmm2_2)
        double xmm2_3[0x2] = data_b11be0
        double xmm6_7[0x2] = _mm_mul_pd(xmm6_6, data_b11b40)
        uint64_t xmm4_5[0x2] = _mm_and_pd(xmm0_4, *(edx_1 + 0xb11b50))
        double xmm7_4[0x2] = _mm_add_pd(_mm_add_pd(xmm7_1 f+ xmm6_4, xmm6_7), xmm4_5)
        double xmm1_6[0x2] = _mm_add_pd(_mm_mul_pd(xmm1_4, xmm0_5), xmm2_3)
        double xmm2_5[0x2] = _mm_mul_pd(data_b11bf0, xmm0_5)
        _mm_unpackhi_pd(xmm7_4, xmm7_4)
        double xmm1_7[0x2] = _mm_mul_pd(xmm1_6, xmm3_3 * xmm3_3 f* xmm0_5)
        _mm_add_pd(xmm1_7, xmm2_5)
        _mm_unpackhi_pd(xmm1_7, xmm1_7)
        return eax_4

var_8 = arg3
int32_t eax_10
long double st0
st0, eax_10 = sub_9adf8f()
var_8 = fconvert.d(st0)
return eax_10
