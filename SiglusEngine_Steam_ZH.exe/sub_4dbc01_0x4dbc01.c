// 函数: sub_4dbc01
// 地址: 0x4dbc01
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t xmm0[0x4] = *arg1
uint32_t xmm0_1[0x4] = __andps_xmmxud_memxud(xmm0, data_b59f80)
uint32_t xmm1_1[0x4] = __andps_xmmxud_memxud(xmm0, data_b59f70)
float xmm0_2[0x4] = __mulps_xmmps_memps(xmm0_1, data_b59f60)
float xmm4[0x4] = data_b59f50
float xmm5[0x4] = data_b59f40
float xmm6[0x4] = data_b59f30
float xmm7[0x4] = data_b59f20
float xmm0_3[0x4] = __addps_xmmps_memps(xmm0_2, data_b59f10)
float xmm0_4[0x4] = __subps_xmmps_memps(xmm0_3, data_b59f10)
float xmm4_1[0x4] = _mm_mul_ps(xmm4, xmm0_4)
float xmm5_1[0x4] = _mm_mul_ps(xmm5, xmm0_4)
float xmm6_1[0x4] = _mm_mul_ps(xmm6, xmm0_4)
float xmm7_1[0x4] = _mm_mul_ps(xmm7, xmm0_4)
float xmm2_2[0x4] = _mm_sub_ps(_mm_sub_ps(xmm0_1, xmm4_1), xmm5_1)
float xmm5_2[0x4] = data_b59f00
float xmm2_3[0x4] = _mm_sub_ps(xmm2_2, xmm6_1)
float xmm6_2[0x4] = data_b59ef0
float xmm2_4[0x4] = _mm_sub_ps(xmm2_3, xmm7_1)
float xmm4_3[0x4] = _mm_mul_ps(xmm2_4, xmm2_4)
uint32_t xmm3_1[0x4] = __andps_xmmxud_memxud(xmm0_3, data_b59ee0)
uint32_t xmm0_6[0x4] = __andps_xmmxud_memxud(xmm3_1, data_b59ed0)
xmm3_1[0] = ((xmm3_1[0] - xmm0_6[0]) & data_b59ec0) << 0x1e
xmm3_1[1] = ((xmm3_1[1] - xmm0_6[1]) & data_b59ec0) << 0x1e
xmm3_1[2] = ((xmm3_1[2] - xmm0_6[2]) & data_b59ec0) << 0x1e
int32_t var_44
xmm3_1[3] = ((xmm3_1[3] - var_44) & data_b59ec0) << 0x1e
xmm3_1[0] = ((xmm3_1[0] + xmm0_6[0]) & data_b59ec0) << 0x1e
xmm3_1[1] = ((xmm3_1[1] + xmm0_6[1]) & data_b59ec0) << 0x1e
xmm3_1[2] = ((xmm3_1[2] + xmm0_6[2]) & data_b59ec0) << 0x1e
xmm3_1[3] = ((xmm3_1[3] + var_44) & data_b59ec0) << 0x1e
xmm0_6[0] <<= 0x1e
xmm0_6[1] <<= 0x1e
xmm0_6[2] <<= 0x1e
int32_t var_44_1 = var_44 << 0x1e
float xmm0_8[0x4] = _mm_cmpeq_ps(xmm0_6, zx.o(0), 4)
float xmm5_3[0x4] = _mm_mul_ps(xmm5_2, xmm4_3)
float xmm6_3[0x4] = _mm_mul_ps(xmm6_2, xmm4_3)
float xmm5_4[0x4] = __addps_xmmps_memps(xmm5_3, data_b59eb0)
float xmm6_4[0x4] = __addps_xmmps_memps(xmm6_3, data_b59ea0)
float xmm5_5[0x4] = _mm_mul_ps(xmm5_4, xmm4_3)
float xmm6_5[0x4] = _mm_mul_ps(xmm6_4, xmm4_3)
float xmm5_6[0x4] = __addps_xmmps_memps(xmm5_5, data_b59e90)
float xmm6_6[0x4] = __addps_xmmps_memps(xmm6_5, data_b59e80)
float xmm5_7[0x4] = _mm_mul_ps(xmm5_6, xmm4_3)
float xmm6_7[0x4] = _mm_mul_ps(xmm6_6, xmm4_3)
float xmm5_8[0x4] = __addps_xmmps_memps(xmm5_7, data_b59e70)
float xmm6_8[0x4] = __addps_xmmps_memps(xmm6_7, data_b59e60)
uint32_t xmm5_9[0x4] = _mm_mul_ps(xmm5_8, xmm2_4)
float xmm6_10[0x4] = __addps_xmmps_memps(_mm_mul_ps(xmm6_8, xmm4_3), data_b59e50)
uint32_t xmm1_4[0x4] = _mm_or_ps(_mm_andnot_ps(xmm0_8, xmm5_9), _mm_and_ps(xmm0_8, xmm6_10))
int128_t xmm0_11 = _mm_or_ps(_mm_and_ps(xmm0_8, xmm5_9), _mm_andnot_ps(xmm0_8, xmm6_10)) ^ xmm3_1
*arg2 = xmm1_4 ^ xmm3_1 ^ xmm1_1
*arg3 = xmm0_11
return arg2
