// 函数: sub_645430
// 地址: 0x645430
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = *arg3
double xmm2_2 = arg11 * 3.1415000000000002 / 180.0

if (eax == arg3[1])
    eax = 0

int32_t esi_1 = arg6 - arg4
void* edi_1 = arg7 - arg5
double xmm3_2 = arg10 * 3.1415000000000002 / 180.0
double xmm0 = xmm2_2

if (arg8 != arg9)
    xmm0 = (xmm0 - xmm3_2) * 0.0 / _mm_cvtepi32_pd(zx.q(arg9 - arg8)) + xmm3_2

int32_t mxcsr
int16_t x87control
int16_t x87control_1
double xmm0_4
x87control_1, xmm0_4 = __libm_sse2_sin_precise(mxcsr, x87control, xmm0)
int16_t x87control_2
double xmm0_6
x87control_2, xmm0_6 = __libm_sse2_cos_precise(mxcsr, x87control_1, xmm0)
double xmm4_1 = _mm_cvtepi32_pd(zx.q(esi_1))
int32_t ecx_1 = arg8
int32_t edx = arg9
double xmm5_1 = _mm_cvtepi32_pd(zx.q(edi_1))
arg6 = int.d(xmm0_6 * xmm4_1 - xmm0_4 * xmm5_1 + 0.5) + arg4
double* result = int.d(xmm0_6 * xmm5_1 + xmm0_4 * xmm4_1 + 0.5) + arg5
arg7 = result

if (ecx_1 s<= edx)
    int32_t ebx_2 = ecx_1
    
    do
        int32_t eax_6 = ebx_2
        double xmm2_7
        
        if (ecx_1 != edx)
            if (ecx_1 s< edx)
                if (ebx_2 s< ecx_1)
                    eax_6 = ecx_1
                else if (ebx_2 s> edx)
                    eax_6 = edx
            
            xmm2_7 = _mm_cvtepi32_pd(zx.q(eax_6 - ecx_1)) * (xmm2_2 - xmm3_2)
                / _mm_cvtepi32_pd(zx.q(edx - ecx_1)) + xmm3_2
        else
            xmm2_7 = xmm2_2
        
        int16_t x87control_3
        double xmm0_13
        x87control_3, xmm0_13 = __libm_sse2_sin_precise(mxcsr, x87control_2, xmm2_7)
        double xmm0_15
        result, x87control_2, xmm0_15 = __libm_sse2_cos_precise(mxcsr, x87control_3, xmm2_7)
        double xmm4_3 = _mm_cvtepi32_pd(zx.q(esi_1))
        double xmm5_3 = _mm_cvtepi32_pd(zx.q(edi_1))
        int32_t edx_2 = int.d(xmm0_15 * xmm4_3 - xmm0_13 * xmm5_3 + 0.5) + arg4
        double var_1c_1
        var_1c_1:4.d = edx_2
        int32_t ecx_3 = int.d(xmm0_15 * xmm5_3 + xmm0_13 * xmm4_3 + 0.5) + arg5
        double var_24_1
        var_24_1:4.d = ecx_3
        
        if (arg6 != edx_2 || arg7 != ecx_3)
            result.b = 0xff
            result.b = 0xff - ebx_2.b
            sub_64d430(arg3, arg3[3], eax, arg3[4], arg4, arg5, arg6, arg7, edx_2, ecx_3, result.b, 
                arg2)
            arg6 = var_1c_1:4.d
            result = var_24_1:4.d
            arg7 = result
        
        edx = arg9
        ebx_2 += 1
        ecx_1 = arg8
    while (ebx_2 s<= edx)

return result
