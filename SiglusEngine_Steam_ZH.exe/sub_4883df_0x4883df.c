// 函数: sub_4883df
// 地址: 0x4883df
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
float xmm4_1[0x4] = *arg2 | arg2[1] << 0x40
float xmm0_1[0x4] = *arg3 | arg3[1] << 0x40
float xmm2_1[0x4] = *arg4 | arg4[1] << 0x40
float xmm0_2[0x4] = _mm_shuffle_ps(xmm0_1, xmm0_1, 0x39)
float xmm1_1[0x4] = _mm_mul_ps(xmm0_2, xmm2_1)
float xmm2_2[0x4] = _mm_shuffle_ps(xmm2_1, xmm2_1, 0x4e)
float xmm3_1[0x4] = _mm_mul_ps(xmm0_2, xmm2_2)
float xmm0_3[0x4] = _mm_mul_ps(xmm0_2, _mm_shuffle_ps(xmm2_2, xmm2_2, 0x39))
float xmm2_5[0x4] = _mm_shuffle_ps(xmm1_1, xmm1_1, 0x4e)
float xmm5_2[0x4] = _mm_sub_ps(_mm_shuffle_ps(xmm3_1, xmm3_1, 0x39), xmm2_5)
float xmm2_8[0x4] = __subps_xmmps_memps(_mm_shuffle_ps(xmm0_3, xmm0_3, 0x4e), xmm0_3)
float xmm6_1[0x4] = _mm_shuffle_ps(xmm1_1, xmm1_1, 0x39)
float xmm0_5[0x4] = _mm_shuffle_ps(xmm4_1, xmm4_1, 0x39)
int128_t xmm4_2 = data_b56480
float xmm1_3[0x4] = _mm_shuffle_ps(xmm0_5, xmm0_5, 0x39)
float xmm3_3[0x4] = _mm_shuffle_ps(xmm1_3, xmm1_3, 0x39)
float xmm0_6[0x4] = _mm_mul_ps(xmm0_5, xmm5_2)
float xmm7_1[0x4] = _mm_sub_ps(xmm3_1, xmm6_1)
*arg1 =
    _mm_add_ps(_mm_add_ps(xmm0_6, _mm_mul_ps(xmm1_3, xmm2_8)), _mm_mul_ps(xmm3_3, xmm7_1)) ^ xmm4_2
return arg1
