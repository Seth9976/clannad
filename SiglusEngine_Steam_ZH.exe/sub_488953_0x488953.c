// 函数: sub_488953
// 地址: 0x488953
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

float xmm0[0x4] = arg5
float xmm0_1[0x4] = _mm_shuffle_ps(xmm0, xmm0, 0)
float xmm2[0x4] = *arg2
float xmm1[0x4] = arg6
float xmm3[0x4] = *arg3
float xmm1_1[0x4] = _mm_shuffle_ps(xmm1, xmm1, 0)
float xmm3_1[0x4] = _mm_sub_ps(xmm3, xmm2)
float xmm4[0x4] = *arg4
float xmm3_2[0x4] = _mm_mul_ps(xmm3_1, xmm0_1)
float xmm4_1[0x4] = _mm_sub_ps(xmm4, xmm2)
*arg1 = _mm_add_ps(_mm_add_ps(xmm3_2, xmm2), _mm_mul_ps(xmm4_1, xmm1_1))
return arg1
