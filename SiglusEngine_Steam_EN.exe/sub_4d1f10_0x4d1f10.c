// 函数: sub_4d1f10
// 地址: 0x4d1f10
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t edx_1 = arg1[7]
int32_t eax = *arg1
int32_t esi = arg1[8]

if (edx_1 u< esi)
    int32_t edi_1 = arg1[3]
    
    if (edi_1 != eax && esi s> 0 && edx_1 s>= 0 && edx_1 s< esi)
        double xmm1_2 = _mm_cvtepi32_pd(zx.q(esi))
        double xmm0_2 = _mm_cvtepi32_pd(zx.q(edx_1 - esi))
        double xmm2_7 = xmm0_2 * xmm0_2 * xmm0_2 * xmm0_2 * _mm_cvtepi32_pd(zx.q(edi_1 - eax))
            / (xmm1_2 * xmm1_2 * xmm1_2 * xmm1_2) + _mm_cvtepi32_pd(zx.q(eax))
        
        if (not(xmm2_7 < 0.0))
            int32_t eax_1 = int.d(0.5 + xmm2_7)
            arg1[1] = eax_1
            return eax_1
        
        eax = int.d(-0.5 + xmm2_7)

arg1[1] = eax
return eax
