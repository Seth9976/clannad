// 函数: sub_48871e
// 地址: 0x48871e
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
float xmm1_5[0x4] = _mm_shuffle_ps(xmm0_5, xmm0_5, 0x55)
float xmm2_5[0x4] = _mm_shuffle_ps(xmm0_5, xmm0_5, 0xaa)
float xmm3_1[0x4] = _mm_shuffle_ps(xmm0_5, xmm0_5, 0xff)
float xmm0_6[0x4] = _mm_shuffle_ps(xmm0_5, xmm0_5, 0)
int64_t xmm4_5 = _mm_add_ps(
    _mm_add_ps(
        _mm_add_ps(_mm_mul_ps(*(arg2 + 8) | *arg2 << 0x40, xmm0_6), 
            _mm_mul_ps(*(arg3 + 8) | *arg3 << 0x40, xmm1_5)), 
        _mm_mul_ps(*(arg4 + 8) | *arg4 << 0x40, xmm2_5)), 
    _mm_mul_ps(*(arg5 + 8) | *arg5 << 0x40, xmm3_1))
*arg1 = *arg1 | xmm4_5 << 0x40
*(arg1 + 8) = xmm4_5
return arg1
