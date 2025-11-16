// 函数: sub_4b1d20
// 地址: 0x4b1d20
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

double xmm3 = 0.5
int32_t ecx = data_1bffc14
double xmm4 = -0.5
int32_t esi = data_1bff810
int32_t edi = data_1bffc18
int32_t edx = data_1bff814

if (ecx != edi && esi s> 0 && edx s>= 0 && edx s< esi)
    double xmm1_2 = _mm_cvtepi32_pd(zx.q(esi))
    double xmm0_2 = _mm_cvtepi32_pd(zx.q(edx - esi))
    double xmm2_7 = xmm0_2 * xmm0_2 * xmm0_2 * xmm0_2 * _mm_cvtepi32_pd(zx.q(ecx - edi))
        / (xmm1_2 * xmm1_2 * xmm1_2 * xmm1_2) + _mm_cvtepi32_pd(zx.q(edi))
    double xmm0_11
    
    xmm0_11 = xmm2_7 f< 0 ? xmm4 : xmm3
    
    edi = int.d(xmm0_11 + xmm2_7)

int32_t ecx_2 = data_1bffc4c
*arg3 = edi
int32_t edi_1 = data_1bffc48

if (edi_1 != ecx_2 && esi s> 0 && edx s>= 0 && edx s< esi)
    double xmm1_4 = _mm_cvtepi32_pd(zx.q(esi))
    double xmm0_14 = _mm_cvtepi32_pd(zx.q(edx - esi))
    double xmm2_14 = xmm0_14 * xmm0_14 * xmm0_14 * xmm0_14 * _mm_cvtepi32_pd(zx.q(edi_1 - ecx_2))
        / (xmm1_4 * xmm1_4 * xmm1_4 * xmm1_4) + _mm_cvtepi32_pd(zx.q(ecx_2))
    double xmm0_23
    
    xmm0_23 = xmm2_14 f< 0 ? xmm4 : xmm3
    
    ecx_2 = int.d(xmm0_23 + xmm2_14)

int32_t edi_3 = data_1bffc7c
*arg2 = ecx_2
int32_t ecx_3 = data_1bffc80

if (edi_3 != ecx_3 && esi s> 0 && edx s>= 0 && edx s< esi)
    double xmm1_6 = _mm_cvtepi32_pd(zx.q(esi))
    double xmm0_26 = _mm_cvtepi32_pd(zx.q(edx - esi))
    double xmm2_21 = xmm0_26 * xmm0_26 * xmm0_26 * xmm0_26 * _mm_cvtepi32_pd(zx.q(edi_3 - ecx_3))
        / (xmm1_6 * xmm1_6 * xmm1_6 * xmm1_6) + _mm_cvtepi32_pd(zx.q(ecx_3))
    double xmm0_35
    
    xmm0_35 = xmm2_21 f< 0 ? xmm4 : xmm3
    
    ecx_3 = int.d(xmm0_35 + xmm2_21)

*arg4 = ecx_3
int32_t ecx_4 = data_1bffcb4
int32_t eax_9 = data_1bffcb0

if (eax_9 != ecx_4 && esi s> 0 && edx s>= 0 && edx s< esi)
    double xmm1_8 = _mm_cvtepi32_pd(zx.q(esi))
    double xmm0_38 = _mm_cvtepi32_pd(zx.q(edx - esi))
    double xmm2_28 = xmm0_38 * xmm0_38 * xmm0_38 * xmm0_38 * _mm_cvtepi32_pd(zx.q(eax_9 - ecx_4))
        / (xmm1_8 * xmm1_8 * xmm1_8 * xmm1_8) + _mm_cvtepi32_pd(zx.q(ecx_4))
    
    if (not(xmm2_28 f>= 0))
        xmm3 = xmm4
    
    ecx_4 = int.d(xmm3 + xmm2_28)

*arg5 = ecx_4
return arg5
