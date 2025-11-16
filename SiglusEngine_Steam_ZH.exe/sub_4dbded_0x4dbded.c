// 函数: sub_4dbded
// 地址: 0x4dbded
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int128_t xmm0 = *arg1
float xmm0_1[0x4] = xmm0 & data_b5a0c0
int128_t xmm1_1 = xmm0 & data_b5a0b0
float xmm0_2[0x4] = __mulps_xmmps_memps(xmm0_1, data_b5a0a0)
float xmm4[0x4] = data_b5a090
float xmm5[0x4] = data_b5a080
float xmm6[0x4] = data_b5a070
float xmm7[0x4] = data_b5a060
float xmm0_3[0x4] = __addps_xmmps_memps(xmm0_2, data_b5a050)
float xmm0_4[0x4] = __subps_xmmps_memps(xmm0_3, data_b5a050)
float xmm4_1[0x4] = _mm_mul_ps(xmm4, xmm0_4)
float xmm5_1[0x4] = _mm_mul_ps(xmm5, xmm0_4)
float xmm6_1[0x4] = _mm_mul_ps(xmm6, xmm0_4)
float xmm7_1[0x4] = _mm_mul_ps(xmm7, xmm0_4)
float xmm2_2[0x4] = _mm_sub_ps(_mm_sub_ps(xmm0_1, xmm4_1), xmm5_1)
float xmm5_2[0x4] = data_b5a040
float xmm2_3[0x4] = _mm_sub_ps(xmm2_2, xmm6_1)
float xmm6_2[0x4] = data_b5a030
float xmm2_4[0x4] = _mm_sub_ps(xmm2_3, xmm7_1)
float xmm4_3[0x4] = _mm_mul_ps(xmm2_4, xmm2_4)
uint32_t xmm3_1[0x4] = __andps_xmmxud_memxud(xmm0_3, data_b5a020)
int32_t xmm0_6[0x4] = __andps_xmmxud_memxud(xmm3_1, data_b5a010)
int32_t xmm3_2[0x4] = _mm_sub_epi32(xmm3_1, xmm0_6)
uint32_t xmm7_4[0x4] = _mm_add_epi32(xmm3_1, xmm0_6) & data_b5a000
uint32_t xmm3_4[0x4] = _mm_slli_epi32(xmm3_2 & data_b5a000, 0x1e)
uint32_t xmm7_5[0x4] = _mm_slli_epi32(xmm7_4, 0x1e)
float xmm0_8[0x4] = _mm_cmpeq_ps(_mm_slli_epi32(xmm0_6, 0x1e), zx.o(0), 4)
float xmm5_3[0x4] = _mm_mul_ps(xmm5_2, xmm4_3)
float xmm6_3[0x4] = _mm_mul_ps(xmm6_2, xmm4_3)
float xmm5_4[0x4] = __addps_xmmps_memps(xmm5_3, data_b59ff0)
float xmm6_4[0x4] = __addps_xmmps_memps(xmm6_3, data_b59fe0)
float xmm5_5[0x4] = _mm_mul_ps(xmm5_4, xmm4_3)
float xmm6_5[0x4] = _mm_mul_ps(xmm6_4, xmm4_3)
float xmm5_6[0x4] = __addps_xmmps_memps(xmm5_5, data_b59fd0)
float xmm6_6[0x4] = __addps_xmmps_memps(xmm6_5, data_b59fc0)
float xmm5_7[0x4] = _mm_mul_ps(xmm5_6, xmm4_3)
float xmm6_7[0x4] = _mm_mul_ps(xmm6_6, xmm4_3)
float xmm5_8[0x4] = __addps_xmmps_memps(xmm5_7, data_b59fb0)
float xmm6_8[0x4] = __addps_xmmps_memps(xmm6_7, data_b59fa0)
float xmm5_9[0x4] = _mm_mul_ps(xmm5_8, xmm2_4)
float xmm6_10[0x4] = __addps_xmmps_memps(_mm_mul_ps(xmm6_8, xmm4_3), data_b59f90)
uint32_t xmm1_4[0x4] = _mm_or_ps(_mm_andnot_ps(xmm0_8, xmm5_9), _mm_and_ps(xmm0_8, xmm6_10))
int128_t xmm0_11 = _mm_or_ps(_mm_and_ps(xmm0_8, xmm5_9), _mm_andnot_ps(xmm0_8, xmm6_10)) ^ xmm7_5
*arg2 = xmm1_4 ^ xmm3_4 ^ xmm1_1
*arg3 = xmm0_11
return arg2
