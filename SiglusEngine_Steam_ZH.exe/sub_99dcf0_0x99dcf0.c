// 函数: sub_99dcf0
// 地址: 0x99dcf0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

_memset(arg1, 0, 0x38)
arg1[3] = arg2
arg1[1] = arg2[1]
arg1[2] = arg2[1]
int32_t eax_2 = *arg2
*arg1 = eax_2
arg1[5] = sub_99d570(eax_2, arg2[1], arg2[2], 0)
int32_t eax_4
int16_t x87control
eax_4, x87control = sub_99d4d0(arg2)
arg1[0xb] = eax_4
int32_t ecx_2 = arg2[4]
double xmm0_1[0x2] = _mm_cvtepi32_pd(zx.q(ecx_2) & 0x1fffff)

if (ecx_2 s< 0)
    xmm0_1 = __xorpd_xmmxuq_memxuq(xmm0_1, data_b0dbd0.o)

char* var_20
var_20.q = xmm0_1.q
sub_76097a(arg1, var_20, (ecx_2 s>> 0x15 & 0x3ff) - 0x314)
double var_c_1 = _mm_cvtps_pd(_mm_cvtpd_ps(zx.o(fconvert.d(arg3))) + 0.5f)
int32_t mxcsr
int16_t x87control_1
long double st0
st0, x87control_1 = sub_74c3d0(mxcsr, x87control, 0f)
arg1[0xc] = sub_9ab1b0(st0)
int32_t ecx_3 = arg2[5]
double xmm0_7[0x2] = _mm_cvtepi32_pd(zx.q(ecx_3) & 0x1fffff)

if (ecx_3 s< 0)
    xmm0_7 = __xorpd_xmmxuq_memxuq(xmm0_7, data_b0dbd0.o)

var_20.q = xmm0_7.q
sub_76097a(arg1, var_20, (ecx_3 s>> 0x15 & 0x3ff) - 0x314)
double var_c_3 = _mm_cvtps_pd(_mm_cvtpd_ps(zx.o(fconvert.d(st0))) + 0.5f)
arg1[0xd] = sub_9ab1b0(sub_74c3d0(mxcsr, x87control_1, 0f))
return 0
