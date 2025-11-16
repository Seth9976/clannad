// 函数: sub_9a8e60
// 地址: 0x9a8e60
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

double xmm1 = 1.0
int32_t i_1 = arg2
int64_t xmm4 = (zx.o(0)).q
int32_t edx = *arg3
int64_t xmm6 = (zx.o(0)).q
int64_t xmm5 = (zx.o(0)).q
double xmm7 = (zx.o(0)).q
double xmm3 = (zx.o(0)).q
int32_t esi = arg3[i_1 * 0xe - 0xd]
int32_t var_c = esi

if (i_1 s> 0)
    void* edi_1 = &arg3[8]
    int32_t i
    
    do
        int32_t edx_1 = *(edi_1 - 4)
        int32_t esi_1 = *(edi_1 + 0x14)
        float xmm1_4[0x2] = _mm_cvtepi32_ps(zx.o(esi_1 + edx_1)) f* *(arg6 + 0x454)
            / _mm_cvtepi32_ps(zx.o(edx_1 + 1))
        uint64_t xmm0_3 = zx.q(*edi_1)
        double xmm2_2 = _mm_cvtps_pd(xmm1_4) + 1.0
        double xmm1_8 = _mm_cvtepi32_pd(zx.q(*(edi_1 - 0x18))) * xmm2_2 + _mm_cvtepi32_pd(xmm0_3)
        double xmm0_6 = _mm_cvtepi32_pd(zx.q(*(edi_1 + 4)))
        xmm4 = xmm4 f+ xmm1_8
        double xmm1_12 = _mm_cvtepi32_pd(zx.q(*(edi_1 - 0x14))) * xmm2_2 + xmm0_6
        double xmm0_8 = _mm_cvtepi32_pd(zx.q(*(edi_1 + 8)))
        xmm6 = xmm6 f+ xmm1_12
        double xmm1_16 = _mm_cvtepi32_pd(zx.q(*(edi_1 - 0x10))) * xmm2_2 + xmm0_8
        double xmm0_10 = _mm_cvtepi32_pd(zx.q(*(edi_1 + 0x10)))
        xmm5 = xmm5 f+ xmm1_16
        double xmm1_18 = _mm_cvtepi32_pd(zx.q(*(edi_1 - 8)))
        edi_1 += 0x38
        double xmm0_12 = _mm_cvtepi32_pd(zx.q(esi_1))
        xmm7 = xmm7 + xmm1_18 * xmm2_2 + xmm0_10
        xmm3 = xmm3 + _mm_cvtepi32_pd(zx.q(edx_1)) * xmm2_2 + xmm0_12
        i = i_1
        i_1 -= 1
    while (i != 1)
    xmm1 = 1.0
    esi = var_c

int32_t ecx_3 = *arg4

if (ecx_3 s>= 0)
    xmm3 = xmm3 + xmm1
    xmm4 = xmm4 f+ _mm_cvtepi32_pd(zx.q(edx))
    xmm6 = xmm6 f+ _mm_cvtepi32_pd(zx.q(ecx_3))
    xmm5 = xmm5 f+ _mm_cvtepi32_pd(zx.q(edx * edx))
    xmm7 = xmm7 + _mm_cvtepi32_pd(zx.q(ecx_3 * edx))

int32_t ecx_5 = *arg5

if (ecx_5 s>= 0)
    xmm3 = xmm3 + xmm1
    xmm4 = xmm4 f+ _mm_cvtepi32_pd(zx.q(esi))
    xmm6 = xmm6 f+ _mm_cvtepi32_pd(zx.q(ecx_5))
    xmm5 = xmm5 f+ _mm_cvtepi32_pd(zx.q(esi * esi))
    xmm7 = xmm7 + _mm_cvtepi32_pd(zx.q(ecx_5 * esi))

double xmm1_27 = xmm3 f* xmm5 - xmm4 f* xmm4

if (xmm1_27 f<= 0)
    *arg5 = 0
    *arg4 = 0
    return 1

double xmm3_3 = (xmm3 * xmm7 - xmm6 f* xmm4) / xmm1_27
double xmm5_3 = (xmm5 f* xmm6 - xmm7 f* xmm4) / xmm1_27
int32_t mxcsr
int16_t x87control
int16_t x87control_1
long double st0
st0, x87control_1 = sub_74c3d0(mxcsr, x87control, 
    fconvert.d(fconvert.t(_mm_cvtepi32_pd(zx.q(edx)) * xmm3_3 + xmm5_3 + 0.5)))
int32_t esi_2 = int.d(fconvert.t(fconvert.d(st0)))
int32_t eax_7 = sub_9ab1b0(sub_74c3d0(mxcsr, x87control_1, 
    fconvert.d(fconvert.t(_mm_cvtepi32_pd(zx.q(var_c)) * xmm3_3 + xmm5_3 + 0.5))))
*arg5 = eax_7

if (esi_2 s> 0x3ff)
    esi_2 = 0x3ff

*arg4 = esi_2

if (eax_7 s> 0x3ff)
    *arg5 = 0x3ff

if (esi_2 s< 0)
    *arg4 = 0

if (*arg5 s< 0)
    *arg5 = 0

return 0
