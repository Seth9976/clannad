// 函数: sub_99d4d0
// 地址: 0x99d4d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

float xmm1_1 = _mm_cvtepi32_ps(zx.o(*arg1))
int32_t i_3 = *arg1
int32_t ebx = arg1[1]
int32_t esi
int32_t var_7c = esi
int32_t edi
int32_t var_80 = edi
int32_t var_4c = ebx
float xmm0_1[0x2] = _mm_cvtepi32_ps(zx.o(ebx))
_mm_cvtps_pd(1f / xmm1_1)
int32_t mxcsr
int16_t x87control
int16_t x87control_1
double xmm0_3
x87control_1, xmm0_3 = __libm_sse2_pow_precise(esi, edi, mxcsr, x87control, _mm_cvtps_pd(xmm0_1))
int32_t i_2 = i_3
int32_t result =
    int.d(fconvert.t(fconvert.d(sub_74c3d0(mxcsr, x87control_1, fconvert.d(fconvert.t(xmm0_3))))))
int32_t edi_1 = result + 1

while (true)
    int32_t ecx = 1
    int32_t edx_1 = 1
    
    if (i_2 s> 0)
        int32_t i_1 = i_2
        int32_t i
        
        do
            ecx *= result
            edx_1 *= edi_1
            i = i_1
            i_1 -= 1
        while (i != 1)
        ebx = var_4c
        i_2 = i_3
    
    if (ecx s> ebx)
        result -= 1
        edi_1 -= 1
    else
        if (edx_1 s> ebx)
            break
        
        result += 1
        edi_1 += 1

return result
