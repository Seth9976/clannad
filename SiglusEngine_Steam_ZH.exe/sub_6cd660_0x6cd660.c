// 函数: sub_6cd660
// 地址: 0x6cd660
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg1 - 1 u> 0xfd)
    int32_t result
    result.b = arg1.b
    return result

double xmm0_2 = _mm_cvtepi32_pd(zx.q(arg1)) / 255.0
_mm_cvtepi32_pd(zx.q(arg2))
int32_t esi
int32_t edi
int32_t mxcsr
int16_t x87control
int16_t x87control_1
double xmm0_3
x87control_1, xmm0_3 = __libm_sse2_pow_precise(esi, edi, mxcsr, x87control, xmm0_2)
return int.d(fconvert.t(fconvert.d(sub_74c3d0(mxcsr, x87control_1, 
    fconvert.d(fconvert.t(xmm0_3 * 255.0 + 0.5))))))
