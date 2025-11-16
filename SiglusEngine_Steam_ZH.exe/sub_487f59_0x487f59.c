// 函数: sub_487f59
// 地址: 0x487f59
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
*arg1 = _mm_add_ps(_mm_add_ps(xmm2_2, xmm3_1), xmm1_2)
return arg1
