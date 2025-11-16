// 函数: sub_487ff2
// 地址: 0x487ff2
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

float xmm2[0x4] = *arg2
float xmm3[0x4] = *arg3
float xmm2_1[0x4] = _mm_shuffle_ps(xmm2, xmm2, 0)
float xmm1[0x4] = *(arg2 + 4)
*arg1 = _mm_add_ps(_mm_mul_ps(xmm2_1, xmm3), _mm_mul_ps(_mm_shuffle_ps(xmm1, xmm1, 0), arg3[1]))
return arg1
