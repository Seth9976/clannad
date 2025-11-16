// 函数: sub_4b0560
// 地址: 0x4b0560
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t esi = data_1bffa44
int32_t edi = data_1bffa10
int32_t edx = data_1bffa0c
int32_t ecx = data_1bffa40

if (arg6 != 1)
    *arg3 = data_1bff9e8
    *arg2 = data_1bffa1c
    edi = data_1bffa10
else
    int32_t eax = data_1bff814
    double xmm3_1 = 0.5
    double xmm4_1 = -0.5
    int32_t eax_1
    
    if (edx == edi)
        eax_1 = edi
    else if (data_1bff810 s<= 0)
        eax_1 = edi
    else if (eax s< 0)
        eax_1 = edi
    else if (eax s< data_1bff810)
        int32_t eax_2 = eax - data_1bff810
        double xmm1_2 = _mm_cvtepi32_pd(zx.q(data_1bff810))
        double xmm0_2 = _mm_cvtepi32_pd(zx.q(eax_2))
        double xmm2_7 = xmm0_2 * xmm0_2 * xmm0_2 * xmm0_2 * _mm_cvtepi32_pd(zx.q(edx - edi))
            / (xmm1_2 * xmm1_2 * xmm1_2 * xmm1_2) + _mm_cvtepi32_pd(zx.q(edi))
        double xmm0_11
        
        xmm0_11 = xmm2_7 f< 0 ? xmm4_1 : xmm3_1
        
        eax_1 = int.d(xmm0_11 + xmm2_7)
    else
        eax_1 = edi
    
    *arg3 = eax_1
    
    if (ecx == esi)
        *arg2 = esi
        edx = data_1bffa0c
    else if (data_1bff810 s> 0)
        int32_t eax_7 = data_1bff814
        
        if (eax_7 s< 0)
            *arg2 = esi
            edx = data_1bffa0c
        else if (eax_7 s< data_1bff810)
            int32_t eax_10 = eax_7 - data_1bff810
            double xmm1_4 = _mm_cvtepi32_pd(zx.q(data_1bff810))
            double xmm0_14 = _mm_cvtepi32_pd(zx.q(eax_10))
            double xmm2_14 = xmm0_14 * xmm0_14 * xmm0_14 * xmm0_14
                * _mm_cvtepi32_pd(zx.q(ecx - esi)) / (xmm1_4 * xmm1_4 * xmm1_4 * xmm1_4)
                + _mm_cvtepi32_pd(zx.q(esi))
            
            if (not(xmm2_14 f>= 0))
                xmm3_1 = xmm4_1
            
            *arg2 = int.d(xmm3_1 + xmm2_14)
            edx = data_1bffa0c
        else
            *arg2 = esi
            edx = data_1bffa0c
    else
        *arg2 = esi
        edx = data_1bffa0c

if (edx s< edi)
    *arg4 = edi - edx + 1
else
    *arg4 = edx - edi + 1

if (ecx s< esi)
    *arg5 = esi - ecx + 1
    return arg5

*arg5 = ecx - esi + 1
return arg5
