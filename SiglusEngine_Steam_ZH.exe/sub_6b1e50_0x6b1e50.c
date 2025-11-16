// 函数: sub_6b1e50
// 地址: 0x6b1e50
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

bool cond:0 = arg1[2] != 0
*arg1 = 0

if (not(cond:0))
    arg1[2] = 1

if (arg1[3] == 1)
    arg1[3] = 2

int32_t edx = arg1[7]

if (edx == 0)
    return 

int32_t eax_2 = arg1[6] - edx
int32_t esi_2 = arg1[8] - arg1[9]
int32_t edi_2 = arg1[0xa] - arg1[0xb]
HDC eax_3 = GetDC(nullptr)
int32_t eax_4 = GetDeviceCaps(eax_3, 0x58)
int32_t eax_5 = GetDeviceCaps(eax_3, 0x5a)
ReleaseDC(nullptr, eax_3)
double xmm0_2 = _mm_cvtepi32_pd(zx.q(eax_4))
double xmm3_5 = _mm_cvtepi32_pd(zx.q(esi_2)) / xmm0_2 * 0.025399999693036079 * 1000.0
HDC var_28_1
var_28_1.q = xmm3_5
double xmm2_5 =
    _mm_cvtepi32_pd(zx.q(edi_2)) / _mm_cvtepi32_pd(zx.q(eax_5)) * 0.025399999693036079 * 1000.0
int32_t var_18_1
var_18_1.q = xmm2_5
int32_t var_10_1
int32_t mxcsr
int16_t x87control
var_10_1.q = __libm_sse2_sqrt_precise(mxcsr, x87control, xmm2_5 * xmm2_5 + xmm3_5 * xmm3_5) * 1000.0
    / _mm_cvtepi32_pd(zx.q(eax_2))
int16_t x87control_1 = sub_9ab18a()
double xmm0_10 = _mm_cvtepi32_pd(zx.q(edi_2))
double xmm1_4 = _mm_cvtepi32_pd(zx.q(esi_2))
*(arg1 + 0x38) = fconvert.d(fconvert.t(var_18_1.q))
*(arg1 + 0x40) = __libm_sse2_sqrt_precise(mxcsr, x87control_1, xmm0_10 * xmm0_10 + xmm1_4 * xmm1_4)
    * 1000.0 / _mm_cvtepi32_pd(zx.q(eax_2))
double xmm0_16 = var_10_1.q
*(arg1 + 0x48) = xmm0_16

if (not(xmm0_16 < 180.0))
    arg1[0xc] = 1
