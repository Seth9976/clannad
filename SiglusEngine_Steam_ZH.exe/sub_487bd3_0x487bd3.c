// 函数: sub_487bd3
// 地址: 0x487bd3
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

float xmm1_1[0x4] = *arg3 | arg3[1] << 0x40
float xmm0_1[0x4] = *arg2 | arg2[1] << 0x40
float xmm1_3[0x4] = _mm_mul_ps(_mm_shuffle_ps(xmm1_1, xmm1_1, 0xff), xmm0_1)
float xmm2_1[0x4] = _mm_shuffle_ps(xmm1_1, xmm1_1, 0)
float xmm0_2[0x4] = _mm_shuffle_ps(xmm0_1, xmm0_1, 0x1b)
float xmm1_4[0x4] = _mm_add_ps(xmm1_3, _mm_mul_ps(xmm2_1 ^ data_ac7d40, xmm0_2))
float xmm3_1[0x4] = _mm_shuffle_ps(xmm1_1, xmm1_1, 0x55)
float xmm0_3[0x4] = _mm_shuffle_ps(xmm0_2, xmm0_2, 0xb1)
float xmm1_5[0x4] = _mm_add_ps(xmm1_4, _mm_mul_ps(xmm3_1 ^ data_ac7d30, xmm0_3))
float xmm2_5[0x4] = _mm_shuffle_ps(xmm1_1, xmm1_1, 0xaa)
float xmm0_4[0x4] = _mm_shuffle_ps(xmm0_3, xmm0_3, 0x1b)
int64_t xmm1_6 = _mm_add_ps(xmm1_5, _mm_mul_ps(xmm2_5 ^ data_ac7d20, xmm0_4))
*arg1 = xmm1_6
*(arg1 + 8) = arg1[1] | xmm1_6 << 0x40
return arg1
