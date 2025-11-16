// 函数: sub_6cd750
// 地址: 0x6cd750
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx = arg2

if (*(arg3 + 0x150) != 8)
    return sub_6cd6d0(ebx, arg4)

if (ebx - 1 u<= 0xfd)
    double xmm0_3 = _mm_cvtepi32_pd(zx.q(ebx)) / 255.0
    _mm_cvtepi32_pd(zx.q(arg4))
    int32_t esi
    int32_t edi
    int32_t mxcsr
    int16_t x87control
    int16_t x87control_1
    double xmm0_4
    x87control_1, xmm0_4 = __libm_sse2_pow_precise(esi, edi, mxcsr, x87control, xmm0_3)
    ebx = int.d(fconvert.t(fconvert.d(sub_74c3d0(mxcsr, x87control_1, 
        fconvert.d(fconvert.t(xmm0_4 * 255.0 + 0.5))))))

return zx.d(ebx.b)
