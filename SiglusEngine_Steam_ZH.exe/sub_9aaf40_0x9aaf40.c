// 函数: sub_9aaf40
// 地址: 0x9aaf40
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int64_t* ebx = arg6
int32_t edi = arg7
int32_t i = 0
float xmm1 = 3.14159274f / _mm_cvtepi32_ps(zx.o(arg5))
int32_t mxcsr
int16_t x87control

if (edi s> 0)
    if (edi u>= 2)
        int32_t eax_1 = edi & 0x80000001
        
        if (eax_1 s< 0)
            eax_1 = ((eax_1 - 1) | 0xfffffffe) + 1
        
        int32_t ecx_1 = edi - eax_1
        int32_t var_20_1 = ecx_1
        
        do
            double xmm0_4[0x2]
            arg1, x87control, xmm0_4 = j____sse2_cos2(_mm_cvtps_pd(*ebx))
            i += 2
            ebx = &ebx[1]
            ebx[-1] = _mm_cvtpd_ps(__mulpd_xmmpd_mempd(xmm0_4, data_b0db70))
        while (i s< ecx_1)
        
        ebx = arg6
        edi = arg7
    
    for (; i s< edi; i += 1)
        double xmm0_9
        arg1, x87control, xmm0_9 =
            __libm_sse2_cos_precise(mxcsr, x87control, _mm_cvtps_pd(*(ebx + (i << 2))))
        *(ebx + (i << 2)) = fconvert.s(xmm0_9 * 2.0)

int32_t edi_2 = 0

if (arg4 s<= 0)
    return 

uint32_t* esi = nullptr
arg1 = *arg2

do
    float var_20_2 = 0.5f
    int16_t x87control_1
    double xmm0_16
    x87control_1, xmm0_16 =
        __libm_sse2_cos_precise(mxcsr, x87control, _mm_cvtps_pd(_mm_cvtepi32_ps(zx.o(arg1)) * xmm1))
    int32_t eax_5 = 1
    float xmm2_1 = fconvert.s(xmm0_16 * 2.0)
    float xmm0_22
    float xmm4_1
    
    if (arg7 s<= 1)
        xmm0_22 = 0.5f
        xmm4_1 = 0.5f
    else
        xmm4_1 = 0.5f
        
        do
            xmm4_1 = xmm4_1 * (xmm2_1 f- *(ebx + (eax_5 << 2) - 4))
            float xmm0_21 = xmm2_1 f- *(ebx + (eax_5 << 2))
            eax_5 += 2
            xmm0_22 = xmm0_21 * var_20_2
            var_20_2 = xmm0_22
        while (eax_5 s< arg7)
    
    float xmm1_4
    float xmm3_1
    
    if (eax_5 != arg7)
        xmm3_1 = 2f
        xmm1_4 = (xmm2_1 + 2f) * xmm4_1 * xmm4_1
    else
        float xmm1_2 = xmm2_1 f- *(ebx + (eax_5 << 2) - 4)
        xmm3_1 = 4f
        xmm2_1 = xmm2_1 * xmm2_1
        float xmm1_3 = xmm1_2 * xmm4_1
        xmm1_4 = xmm1_3 * xmm1_3
    
    int16_t x87control_2
    double xmm0_24
    x87control_2, xmm0_24 = __libm_sse2_sqrt_precise(mxcsr, x87control_1, 
        fconvert.d(xmm1_4 + (xmm3_1 - xmm2_1) * xmm0_22 * xmm0_22))
    double xmm0_26
    x87control, xmm0_26 = __libm_sse2_exp_precise(mxcsr, x87control_2, 
        (_mm_cvtps_pd(arg8) / xmm0_24 - _mm_cvtps_pd(arg9)) * 0.1151292473077774)
    edi_2 += 1
    uint32_t edx = arg1
    float xmm1_10 = fconvert.s(xmm0_26)
    *(esi + arg3) = xmm1_10 f* *(esi + arg3)
    esi = edi_2 << 2
    arg1 = *(esi + arg2)
    
    if (arg1 == edx)
        do
            edi_2 += 1
            *(esi + arg3) = xmm1_10 f* *(esi + arg3)
            esi = edi_2 << 2
            arg1 = *(esi + arg2)
        while (arg1 == edx)
        
        ebx = arg6
while (edi_2 s< arg4)
