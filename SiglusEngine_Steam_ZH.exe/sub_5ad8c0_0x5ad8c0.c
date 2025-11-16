// 函数: sub_5ad8c0
// 地址: 0x5ad8c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg2 == arg5)
    return arg6

double xmm0_1 = _mm_cvtepi32_pd(zx.q(arg2))
double xmm2_1 = _mm_cvtepi32_pd(zx.q(arg5))
double xmm3_1 = xmm0_1 - xmm2_1
double xmm1_1 = _mm_cvtepi32_pd(zx.q(arg3))
double xmm6_1 = _mm_cvtepi32_pd(zx.q(arg4))
double xmm4_1 = _mm_cvtepi32_pd(zx.q(arg6))

if (not(0.0 <= xmm3_1))
    if (not(xmm0_1 <= xmm1_1))
        xmm1_1 = xmm0_1
    else if (not(xmm1_1 <= xmm2_1))
        xmm1_1 = xmm2_1

if (not(xmm3_1 f<= 0))
    if (not(xmm2_1 <= xmm1_1))
        xmm1_1 = xmm2_1
    else if (not(xmm1_1 <= xmm0_1))
        xmm1_1 = xmm0_1

double xmm1_2 = xmm1_1 - xmm2_1
double xmm2_2 = xmm2_1 - xmm0_1
return int.d(xmm4_1 - (xmm4_1 - xmm6_1) * xmm1_2 * xmm1_2 / xmm2_2 / xmm2_2)
