// 函数: sub_488677
// 地址: 0x488677
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

float xmm0[0x4] = arg6
float xmm1_1[0x4] = xmm0 f* xmm0
float xmm0_1[0x4] = _mm_shuffle_ps(xmm0, xmm0, 0)
float xmm2_1[0x4] = xmm0 f* xmm1_1
float xmm1_2[0x4] = _mm_shuffle_ps(xmm1_1, xmm1_1, 0)
float xmm0_2[0x4] = __mulps_xmmps_memps(xmm0_1, data_b56390)
float xmm2_2[0x4] = _mm_shuffle_ps(xmm2_1, xmm2_1, 0)
float xmm1_3[0x4] = __mulps_xmmps_memps(xmm1_2, data_b56380)
float xmm0_3[0x4] = __addps_xmmps_memps(xmm0_2, data_b563a0)
float xmm2_3[0x4] = __mulps_xmmps_memps(xmm2_2, data_b56370)
float xmm0_5[0x4] = _mm_add_ps(_mm_add_ps(xmm0_3, xmm1_3), xmm2_3)
float xmm1_5[0x4] = _mm_shuffle_ps(xmm0_5, xmm0_5, 0x55)
float xmm2_5[0x4] = _mm_shuffle_ps(xmm0_5, xmm0_5, 0xaa)
float xmm3_1[0x4] = _mm_shuffle_ps(xmm0_5, xmm0_5, 0xff)
float xmm0_6[0x4] = _mm_shuffle_ps(xmm0_5, xmm0_5, 0)
*arg1 = _mm_add_ps(
    _mm_add_ps(_mm_add_ps(_mm_mul_ps(*arg2, xmm0_6), _mm_mul_ps(*arg3, xmm1_5)), 
        _mm_mul_ps(*arg4, xmm2_5)), 
    _mm_mul_ps(*arg5, xmm3_1))
return arg1
