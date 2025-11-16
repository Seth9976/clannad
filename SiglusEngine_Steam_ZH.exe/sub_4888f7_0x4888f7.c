// 函数: sub_4888f7
// 地址: 0x4888f7
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

float xmm0[0x4] = arg5
float xmm0_1[0x4] = _mm_shuffle_ps(xmm0, xmm0, 0)
float xmm2_1[0x4] = *(arg2 + 8) | *arg2 << 0x40
float xmm1[0x4] = arg6
float xmm3_1[0x4] = *(arg3 + 8) | *arg3 << 0x40
float xmm1_1[0x4] = _mm_shuffle_ps(xmm1, xmm1, 0)
float xmm3_2[0x4] = _mm_sub_ps(xmm3_1, xmm2_1)
float xmm4_1[0x4] = *(arg4 + 8) | *arg4 << 0x40
float xmm3_3[0x4] = _mm_mul_ps(xmm3_2, xmm0_1)
float xmm4_2[0x4] = _mm_sub_ps(xmm4_1, xmm2_1)
int64_t xmm3_5 = _mm_add_ps(_mm_add_ps(xmm3_3, xmm2_1), _mm_mul_ps(xmm4_2, xmm1_1))
*(arg1 + 8) = xmm3_5
*arg1 = *arg1 | xmm3_5 << 0x40
return arg1
