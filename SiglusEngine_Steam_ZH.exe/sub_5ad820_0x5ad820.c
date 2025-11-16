// 函数: sub_5ad820
// 地址: 0x5ad820
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg5 == 0)
    return arg6

double xmm2_1 = _mm_cvtepi32_pd(zx.q(arg5))
double xmm4 = 0.0 - xmm2_1
double xmm0_1 = _mm_cvtepi32_pd(zx.q(arg3))
double xmm5_1 = _mm_cvtepi32_pd(zx.q(arg4))
double xmm3_1 = _mm_cvtepi32_pd(zx.q(arg6))

if (not(0.0 <= xmm4))
    if (not(0 f<= xmm0_1))
        xmm0_1 = (zx.o(0)).q
    else if (not(xmm0_1 <= xmm2_1))
        xmm0_1 = xmm2_1

if (not(xmm4 f<= 0))
    if (not(xmm2_1 <= xmm0_1))
        xmm0_1 = xmm2_1
    else if (not(xmm0_1 f<= 0))
        xmm0_1 = (zx.o(0)).q

double xmm0_2 = xmm0_1 - 0.0
double xmm2_2 = xmm2_1 - 0.0
return int.d((xmm3_1 - xmm5_1) * xmm0_2 * xmm0_2 / xmm2_2 / xmm2_2 + xmm5_1)
