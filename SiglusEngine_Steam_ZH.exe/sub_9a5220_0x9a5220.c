// 函数: sub_9a5220
// 地址: 0x9a5220
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi = arg2
int32_t var_20 = edi
int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(edi)
int32_t eax_3 = (eax_1 + (edx & 3)) s>> 2
int32_t eax_4 = _malloc(eax_3 << 2)
int32_t eax_5 = _malloc((eax_3 + edi) << 2)
float xmm0_1[0x2] = _mm_cvtepi32_ps(zx.o(edi))
float var_18 = xmm0_1
int32_t mxcsr
int16_t x87control
int16_t x87control_1
double xmm0_3
x87control_1, xmm0_3 = __libm_sse2_log_precise(mxcsr, x87control, _mm_cvtps_pd(xmm0_1))
int16_t x87control_2
double xmm0_5
x87control_2, xmm0_5 = __libm_sse2_log_precise(mxcsr, x87control_1, 0x4000000000000000)
int32_t var_54
var_54.q = fconvert.d(fconvert.t(xmm0_3 / xmm0_5 + 0.5))
int16_t x87control_3
long double st0
st0, x87control_3 = sub_74c3d0(mxcsr, x87control_2, var_54)
int32_t eax_8 = sub_9ab1b0(st0)
double var_3c_1
var_3c_1:4.d = eax_8
int32_t var_8 = 0
arg1[1] = eax_8
*arg1 = edi
arg1[2] = eax_5
arg1[3] = eax_4
int32_t esi_2

if (eax_3 s<= 0)
    esi_2 = eax_5
else
    esi_2 = eax_5
    float xmm2_1 = 3.14159274f / var_18
    int32_t ecx_4 = 0
    int32_t var_1c_1 = 0
    int32_t var_c_1 = 1
    float* edi_1 = esi_2 + (edi s>> 1 << 2)
    float var_30_1 = xmm2_1
    float xmm1_3 = 3.14159274f / _mm_cvtepi32_ps(zx.o(edi * 2))
    int32_t eax_15
    
    do
        float xmm0_10[0x2] = _mm_cvtepi32_ps(zx.o(ecx_4)) * xmm2_1
        int16_t x87control_4
        double xmm0_12
        x87control_4, xmm0_12 = __libm_sse2_cos_precise(mxcsr, x87control_3, _mm_cvtps_pd(xmm0_10))
        *(esi_2 + (var_8 << 3)) = fconvert.s(xmm0_12)
        int16_t x87control_5
        uint64_t xmm0_16[0x2]
        x87control_5, xmm0_16 = __libm_sse2_sin_precise(mxcsr, x87control_4, _mm_cvtps_pd(xmm0_10))
        *(esi_2 + (var_8 << 3) + 4) = fconvert.s(__xorpd_xmmxuq_memxuq(xmm0_16, data_b0dbd0.o))
        float xmm0_21[0x2] = _mm_cvtepi32_ps(zx.o(var_c_1)) * xmm1_3
        int16_t x87control_6
        double xmm0_23
        x87control_6, xmm0_23 = __libm_sse2_cos_precise(mxcsr, x87control_5, _mm_cvtps_pd(xmm0_21))
        *edi_1 = fconvert.s(xmm0_23)
        double xmm0_27
        x87control_3, xmm0_27 = __libm_sse2_sin_precise(mxcsr, x87control_6, _mm_cvtps_pd(xmm0_21))
        edi_1 = &edi_1[2]
        eax_15 = var_8 + 1
        var_c_1 += 2
        ecx_4 = var_1c_1 + 4
        xmm2_1 = var_30_1
        var_8 = eax_15
        var_1c_1 = ecx_4
        edi_1[-1] = fconvert.s(xmm0_27)
    while (eax_15 s< eax_3)
    edi = var_20

int32_t eax_17
int32_t edx_2
edx_2:eax_17 = sx.q(edi)
int32_t result = (eax_17 + (edx_2 & 7)) s>> 3
int32_t result_1 = result

if (result s> 0)
    float xmm1_4 = 3.14159274f / var_18
    int32_t edi_2 = 2
    int32_t var_20_1 = result
    float* esi_3 = esi_2 + (var_20 << 2)
    float var_2c_2 = xmm1_4
    int32_t i
    
    do
        float xmm0_31[0x2] = _mm_cvtepi32_ps(zx.o(edi_2)) * xmm1_4
        int16_t x87control_7
        double xmm0_33
        x87control_7, xmm0_33 = __libm_sse2_cos_precise(mxcsr, x87control_3, _mm_cvtps_pd(xmm0_31))
        *esi_3 = fconvert.s(xmm0_33 * 0.5)
        double xmm0_38
        x87control_3, xmm0_38 = __libm_sse2_sin_precise(mxcsr, x87control_7, _mm_cvtps_pd(xmm0_31))
        esi_3 = &esi_3[2]
        edi_2 += 4
        i = var_20_1
        var_20_1 -= 1
        xmm1_4 = var_2c_2
        esi_3[-1] = fconvert.s(xmm0_38 * -0.5)
    while (i != 1)
    result = result_1

char esi_4 = var_3c_1:4.b
int32_t i_2 = 1 << (esi_4 - 2)
int32_t esi_5 = 0
var_3c_1:4.d = (1 << (esi_4 - 1)) - 1

if (result s> 0)
    do
        int32_t edx_6 = 0
        int32_t ecx_9 = 0
        
        if (i_2 != 0)
            int32_t i_1 = i_2
            
            do
                if ((esi_5 & i_1) != 0)
                    edx_6 |= 1 << ecx_9.b
                
                ecx_9 += 1
                i_1 = i_2 s>> ecx_9.b
            while (i_1 != 0)
        
        result = (not.d(edx_6) & var_3c_1:4.d) - 1
        *(eax_4 + (esi_5 << 3)) = result
        *(eax_4 + (esi_5 << 3) + 4) = edx_6
        esi_5 += 1
    while (esi_5 s< result_1)

arg1[4] = 4f / var_18
return result
