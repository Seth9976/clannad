// 函数: sub_60b290
// 地址: 0x60b290
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t esi_1 = *(arg1 + 0x23c) - *(arg1 + 0x244)
int32_t eax = *(arg1 + 0x248)
int32_t ecx = *(arg1 + 0x240)

if (eax == 0)
    if (esi_1 - ecx s>= 0)
        *(arg1 + 0x248) = 0xffffffff
        return esi_1 - ecx
    
    eax = *(arg1 + 0x248)

if (esi_1 s<= 0)
    *(arg1 + 0xc0) = *(arg1 + 0xbc)
    int32_t eax_4 = *(arg1 + 0x114)
    *(arg1 + 0x118) = eax_4
    return eax_4

if (eax == 1)
    eax = *(arg1 + 0x248)
    esi_1 = mods.dp.d(sx.q(esi_1), ecx)

if (eax == 2)
    int32_t eax_7 = ecx * 2
    esi_1 = mods.dp.d(sx.q(esi_1), eax_7)
    
    if (esi_1 - ecx s> 0)
        esi_1 = eax_7 - esi_1

int32_t eax_14 = *(arg1 + 0x24c)

if (eax_14 != 0)
    if (eax_14 == 1)
        double xmm1_2 = _mm_cvtepi32_pd(zx.q(esi_1))
        esi_1 = int.d(xmm1_2 * xmm1_2 / _mm_cvtepi32_pd(zx.q(ecx)))
    else if (eax_14 == 2)
        double xmm0_4 = _mm_cvtepi32_pd(zx.q(ecx))
        double xmm1_6 = _mm_cvtepi32_pd(zx.q(esi_1 - ecx))
        esi_1 = int.d(xmm0_4 - xmm1_6 * xmm1_6 / xmm0_4)

uint64_t xmm3 = zx.q(*(arg1 + 0x144))
uint64_t xmm4 = zx.q(*(arg1 + 0x19c))
uint64_t xmm2 = zx.q(*(arg1 + 0xbc))
uint64_t xmm0_6 = zx.q(*(arg1 + 0x114))
double xmm1_10 = _mm_cvtepi32_pd(zx.q(*(arg1 + 0xc4)))
double xmm3_1 = _mm_cvtepi32_pd(xmm3)
double xmm0_7 = _mm_cvtepi32_pd(xmm0_6)
double xmm4_1 = _mm_cvtepi32_pd(xmm4)
double xmm1_11 = xmm1_10 - xmm3_1
double xmm0_8 = xmm0_7 - xmm4_1
double xmm2_2 = _mm_cvtepi32_pd(xmm2) - xmm3_1
int32_t var_48
var_48.q = xmm1_11
double var_20 = xmm0_8
double xmm1_14 = _mm_cvtepi32_pd(zx.q(*(arg1 + 0x11c))) - xmm4_1
double var_10 = xmm1_14
int32_t mxcsr
int16_t x87control
int16_t x87control_1
double xmm0_11
x87control_1, xmm0_11 =
    __libm_sse2_sqrt_precise(mxcsr, x87control, xmm0_8 * xmm0_8 + xmm2_2 * xmm2_2)
double xmm1_15 = var_48.q
double xmm0_15 =
    __libm_sse2_sqrt_precise(mxcsr, x87control_1, xmm1_14 * xmm1_14 + xmm1_15 * xmm1_15)
double var_38_1 = xmm0_15

if (ecx != 0)
    var_38_1 =
        (xmm0_15 - xmm0_11) * _mm_cvtepi32_pd(zx.q(esi_1)) / _mm_cvtepi32_pd(zx.q(ecx)) + xmm0_11

sub_9ab18a()
double var_20_1 = fconvert.d(fconvert.t(xmm2_2))
int16_t x87control_2 = sub_9ab18a()
double xmm1_22 = fconvert.d(fconvert.t(xmm1_11))
var_48.q = xmm1_22

if (not(__andpd_xmmxuq_memxuq(var_20_1 - xmm1_22, data_b0dbc0) f<= 3.1415927410125732))
    if (0 f<= xmm1_22)
        xmm1_22 = xmm1_22 - 6.2831854820251465
    else
        xmm1_22 = xmm1_22 + 6.2831854820251465
    
    var_48.q = xmm1_22

if (ecx != 0)
    xmm1_22 =
        (xmm1_22 - var_20_1) * _mm_cvtepi32_pd(zx.q(esi_1)) / _mm_cvtepi32_pd(zx.q(ecx)) + var_20_1
    var_48.q = xmm1_22

int16_t x87control_3
double xmm0_28
x87control_3, xmm0_28 = __libm_sse2_cos_precise(mxcsr, x87control_2, xmm1_22)
*(arg1 + 0xc0) = int.d(xmm0_28 * var_38_1 + _mm_cvtepi32_pd(zx.q(*(arg1 + 0x144))))
int32_t eax_18 = int.d(__libm_sse2_sin_precise(mxcsr, x87control_3, var_48.q) * var_38_1
    + _mm_cvtepi32_pd(zx.q(*(arg1 + 0x19c))))
*(arg1 + 0x118) = eax_18
return eax_18
