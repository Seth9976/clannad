// 函数: sub_9aaba0
// 地址: 0x9aaba0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp_1
int32_t __saved_ebp = __saved_ebp_1
int32_t __saved_ebx_1
int32_t __saved_ebx = __saved_ebx_1
int32_t ebx = *(arg3 + 0x1c)
int32_t __saved_esi_1
int32_t __saved_esi = __saved_esi_1
int32_t __saved_edi_1
int32_t __saved_edi = __saved_edi_1
int32_t* edi = arg4
int32_t result = edi[2]

if (*(result + (ebx << 2)) == 0)
    int32_t eax_4
    int32_t edx
    edx:eax_4 = sx.q(*(*(*(*(arg3 + 0x40) + 4) + 0x1c) + (ebx << 2)))
    int32_t result_1 = (eax_4 - edx) s>> 1
    float xmm1_3 = _mm_cvtepi32_ps(zx.o(*(arg2 + 4))) * 0.5f
    int32_t mxcsr
    int16_t x87control
    int16_t x87control_1
    double xmm0_5
    x87control_1, xmm0_5 =
        __libm_sse2_atan_precise(mxcsr, x87control, fconvert.d(xmm1_3 * xmm1_3 * 1.84999998e-08f))
    int16_t x87control_2
    double xmm0_8
    x87control_2, xmm0_8 =
        __libm_sse2_atan_precise(mxcsr, x87control_1, _mm_cvtps_pd(xmm1_3 * 0.000739999989f))
    void* var_3c_1 = (result_1 << 2) + 4
    double xmm1_8 = xmm0_5 * 2.2400000095367432 + xmm0_8 * 13.100000381469727
        + _mm_cvtps_pd(xmm1_3 * 9.99999975e-05f)
    double var_20_1
    var_20_1:4.d = _mm_cvtpd_ps(_mm_cvtepi32_pd(zx.q(*edi)) / xmm1_8)
    int32_t esi_1 = 0
    *(edi[2] + (ebx << 2)) = _malloc()
    
    if (result_1 s> 0)
        float xmm0_18 = _mm_cvtepi32_ps(zx.o(result_1))
        float var_14_1 = xmm0_18
        
        do
            float xmm1_13 =
                _mm_cvtepi32_ps(zx.o(*(arg2 + 4))) * 0.5f / xmm0_18 * _mm_cvtepi32_ps(zx.o(esi_1))
            int16_t x87control_3
            double xmm0_25
            x87control_3, xmm0_25 = __libm_sse2_atan_precise(mxcsr, x87control_2, 
                _mm_cvtps_pd(xmm1_13 * xmm1_13 * 1.84999998e-08f))
            int16_t x87control_4
            double xmm0_28
            x87control_4, xmm0_28 = __libm_sse2_atan_precise(mxcsr, x87control_3, 
                _mm_cvtps_pd(xmm1_13 * 0.000739999989f))
            long double st0_1
            st0_1, x87control_2 = sub_74c3d0(mxcsr, x87control_4, 
                fconvert.d(fconvert.t((xmm0_25 * 2.2400000095367432 + xmm0_28 * 13.100000381469727
                    + _mm_cvtps_pd(xmm1_13 * 9.99999975e-05f)) * _mm_cvtps_pd(var_20_1:4.d))))
            int32_t eax_11 = *edi
            int32_t ecx_1 = int.d(fconvert.t(fconvert.d(st0_1)))
            
            if (ecx_1 s>= eax_11)
                ecx_1 = eax_11 - 1
            
            xmm0_18 = var_14_1
            *(*(edi[2] + (ebx << 2)) + (esi_1 << 2)) = ecx_1
            esi_1 += 1
        while (esi_1 s< result_1)
    
    *(*(edi[2] + (ebx << 2)) + (esi_1 << 2)) = 0xffffffff
    result = result_1
    edi[ebx + 3] = result

return result
