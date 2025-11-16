// 函数: sub_4d1e20
// 地址: 0x4d1e20
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = arg1[7]
int32_t esi = arg1[8]

if (eax u>= esi)
    int32_t eax_1 = *arg1
    arg1[1] = eax_1
    return eax_1

int32_t ecx = *arg1
int32_t edi = arg1[3]

if (edi != ecx && esi s> 0 && eax s>= 0 && eax s< esi)
    double xmm1_2 = _mm_cvtepi32_pd(zx.q(esi))
    double xmm0_2 = _mm_cvtepi32_pd(zx.q(eax + esi))
    eax = ecx - edi
    double xmm3_7 = xmm0_2 * xmm0_2 * xmm0_2 * xmm0_2 * _mm_cvtepi32_pd(zx.q(eax))
        / (xmm1_2 * 15.0 * xmm1_2 * xmm1_2 * xmm1_2)
        + (_mm_cvtepi32_pd(zx.q(edi)) * 16.0 - _mm_cvtepi32_pd(zx.q(ecx))) / 15.0
    
    if (not(xmm3_7 < 0.0))
        arg1[1] = int.d(0.5 + xmm3_7)
        return eax
    
    ecx = int.d(-0.5 + xmm3_7)

arg1[1] = ecx
return eax
