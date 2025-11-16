// 函数: sub_487f99
// 地址: 0x487f99
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

float xmm3[0x4] = *arg3
float xmm2[0x4] = *arg2
float xmm2_1[0x4] = _mm_shuffle_ps(xmm2, xmm2, 0)
float xmm4[0x4] = arg3[1]
float xmm2_2[0x4] = _mm_mul_ps(xmm2_1, xmm3)
float xmm1[0x4] = *(arg2 + 4)
float xmm1_1[0x4] = _mm_shuffle_ps(xmm1, xmm1, 0)
float xmm3_1[0x4] = arg3[3]
float xmm1_2[0x4] = _mm_mul_ps(xmm1_1, xmm4)
float xmm2_4[0x4] = _mm_add_ps(_mm_add_ps(xmm2_2, xmm3_1), xmm1_2)
float xmm0[0x4] = _mm_rcp_ps(xmm2_4)
float xmm1_4[0x4] = _mm_mul_ps(xmm0, xmm0)
float xmm0_2[0x4] = _mm_sub_ps(_mm_add_ps(xmm0, xmm0), _mm_mul_ps(xmm1_4, xmm2_4))
*arg1 = _mm_mul_ps(xmm2_4, _mm_shuffle_ps(xmm0_2, xmm0_2, 0xff))
return arg1
