// 函数: sub_5c1b40
// 地址: 0x5c1b40
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
int32_t edx_1 = *(arg1 + 8) - *(arg1 + 0x10)
int32_t eax = *(arg1 + 0x20)
int32_t ebx = *(arg1 + 0x14)
int32_t esi = *(arg1 + 0x1c)
int32_t edi = *(arg1 + 0xc)

if (eax == 0)
    if (edx_1 - edi s>= 0)
        *(arg1 + 0x20) = 0xffffffff
        return edx_1 - edi
    
    eax = *(arg1 + 0x20)

if (edx_1 s<= 0)
    *(arg1 + 0x18) = ebx
    return eax

if (eax == 1)
    edx_1 = mods.dp.d(sx.q(edx_1), edi)
    eax = *(arg1 + 0x20)

if (eax == 2)
    edx_1 = mods.dp.d(sx.q(edx_1), edi * 2)
    
    if (edx_1 - edi s> 0)
        edx_1 = edi * 2 - edx_1

int32_t eax_13 = *(arg1 + 0x24)
double xmm1_4

if (eax_13 != 0)
    if (eax_13 != 1)
        if (eax_13 == 2)
            double xmm2_4 = _mm_cvtepi32_pd(zx.q(edi))
            double xmm0_10 = _mm_cvtepi32_pd(zx.q(esi - ebx))
            double xmm1_12 = _mm_cvtepi32_pd(zx.q(edx_1 - edi))
            eax_13 =
                int.d(_mm_cvtepi32_pd(zx.q(esi)) - xmm0_10 * xmm1_12 * xmm1_12 / xmm2_4 / xmm2_4)
            *(arg1 + 0x18) = eax_13
        
        return eax_13
    
    double xmm0_8 = _mm_cvtepi32_pd(zx.q(edx_1))
    double xmm1_8 = _mm_cvtepi32_pd(zx.q(esi - ebx)) * xmm0_8
    double xmm2_2 = _mm_cvtepi32_pd(zx.q(edi))
    xmm1_4 = xmm1_8 * xmm0_8 / xmm2_2 / xmm2_2
else
    double xmm0_2 = _mm_cvtepi32_pd(zx.q(edx_1))
    xmm1_4 = _mm_cvtepi32_pd(zx.q(esi - ebx)) * xmm0_2 / _mm_cvtepi32_pd(zx.q(edi))

int32_t eax_12 = int.d(xmm1_4 + _mm_cvtepi32_pd(zx.q(ebx)))
*(arg1 + 0x18) = eax_12
return eax_12
