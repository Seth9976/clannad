// 函数: sub_455ba0
// 地址: 0x455ba0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t esi_1 = arg7 - arg5
void* edi_1 = arg8 - arg6
double xmm3_2 = arg9 * 3.1415000000000002 / 180.0
double xmm2_3 = arg10 * 3.1415000000000002 / 180.0 - xmm3_2
double xmm0_3 = xmm2_3 * 0.0 / 255.0 + xmm3_2
int32_t mxcsr
int16_t x87control
int16_t x87control_1
double xmm0_4
x87control_1, xmm0_4 = __libm_sse2_sin_precise(mxcsr, x87control, xmm0_3)
int16_t x87control_2
double xmm0_6
x87control_2, xmm0_6 = __libm_sse2_cos_precise(mxcsr, x87control_1, xmm0_3)
double xmm4_1 = _mm_cvtepi32_pd(zx.q(esi_1))
double xmm5_1 = _mm_cvtepi32_pd(zx.q(edi_1))
arg7 = int.d(xmm0_6 * xmm4_1 - xmm0_4 * xmm5_1 + 0.5) + arg5
int32_t i = 0
arg8 = int.d(xmm0_6 * xmm5_1 + xmm0_4 * xmm4_1 + 0.5) + arg6
double* result

do
    int32_t i_1
    
    if (i s>= 0)
        i_1 = i
        
        if (i s> 0xff)
            i_1 = 0xff
    else
        i_1 = 0
    
    double xmm0_14 = _mm_cvtepi32_pd(zx.q(i_1)) * xmm2_3 / 255.0 + xmm3_2
    int16_t x87control_3
    double xmm0_15
    x87control_3, xmm0_15 = __libm_sse2_sin_precise(mxcsr, x87control_2, xmm0_14)
    double xmm0_17
    result, x87control_2, xmm0_17 = __libm_sse2_cos_precise(mxcsr, x87control_3, xmm0_14)
    double xmm4_3 = _mm_cvtepi32_pd(zx.q(esi_1))
    double xmm5_3 = _mm_cvtepi32_pd(zx.q(edi_1))
    int32_t edx_1 = int.d(xmm0_17 * xmm4_3 - xmm0_15 * xmm5_3 + 0.5) + arg5
    double var_18_1
    var_18_1:4.d = edx_1
    int32_t ecx_3 = int.d(xmm0_17 * xmm5_3 + xmm0_15 * xmm4_3 + 0.5) + arg6
    double var_20_1
    var_20_1:4.d = ecx_3
    
    if (arg7 != edx_1 || arg8 != ecx_3)
        result.b = 0xff
        result.b = 0xff - i.b
        uint32_t eax_2 = zx.d(result.b)
        sub_4558e0(eax_2, arg2, arg3, arg4, arg5, arg6, arg7, arg8, edx_1, ecx_3, eax_2.b)
        arg7 = var_18_1:4.d
        result = var_20_1:4.d
        arg8 = result
    
    i += 1
while (i s<= 0xff)

return result
