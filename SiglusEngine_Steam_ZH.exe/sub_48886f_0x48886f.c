// 函数: sub_48886f
// 地址: 0x48886f
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

float xmm0[0x4] = arg6
float xmm1_1[0x4] = xmm0 f* xmm0
float xmm0_1[0x4] = _mm_shuffle_ps(xmm0, xmm0, 0)
float xmm2_1[0x4] = xmm0 f* xmm1_1
float xmm1_2[0x4] = _mm_shuffle_ps(xmm1_1, xmm1_1, 0)
float xmm0_2 = __mulps_xmmps_memps(xmm0_1, data_b56350)
float xmm2_2[0x4] = _mm_shuffle_ps(xmm2_1, xmm2_1, 0)
float xmm1_3[0x4] = __mulps_xmmps_memps(xmm1_2, data_b56340)
float xmm0_3[0x4] = xmm0_2 f+ data_b56360
float xmm2_3[0x4] = __mulps_xmmps_memps(xmm2_2, data_b56330)
float xmm0_5[0x4] = _mm_add_ps(_mm_add_ps(xmm0_3, xmm1_3), xmm2_3)
float xmm2_5[0x4] = _mm_shuffle_ps(xmm0_5, xmm0_5, 0xfa)
float xmm0_6[0x4] = _mm_shuffle_ps(xmm0_5, xmm0_5, 0x50)
float xmm4_3[0x4] =
    _mm_add_ps(_mm_mul_ps(*arg2 | *arg3 << 0x40, xmm0_6), _mm_mul_ps(*arg4 | *arg5 << 0x40, xmm2_5))
*arg1 = _mm_add_ps(xmm4_3, xmm4_3 u>> 0x40)
return arg1
