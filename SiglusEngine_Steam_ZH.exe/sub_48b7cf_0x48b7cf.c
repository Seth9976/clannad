// 函数: sub_48b7cf
// 地址: 0x48b7cf
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

float xmm1[0x4] = *arg3
uint32_t xmm2_1[0x4] = __andps_xmmxud_memxud(xmm1, data_b566a0)
float xmm2_2[0x4] = _mm_mul_ps(xmm2_1, xmm2_1)
float xmm3_1[0x4] = _mm_add_ps(xmm2_2 u>> 0x40, xmm2_2)
float xmm2_5[0x4] = _mm_shuffle_ps(xmm3_1, xmm3_1, 1) f+ xmm3_1

if (not(xmm2_5 f== 0))
    float xmm6_1 = xmm2_5[0]
    float xmm2_6 = _mm_rsqrt_ss(xmm2_5, xmm6_1)
    float xmm2_8[0x4] = xmm2_6 * 0.5f * (3f - xmm6_1 * xmm2_6 * xmm2_6)
    xmm2_5 = _mm_mul_ps(_mm_shuffle_ps(xmm2_8, xmm2_8, 0), xmm1)

float xmm4[0x4] = *arg2
float xmm5_1[0x4] = _mm_mul_ps(xmm4, xmm2_5)
float xmm5_2[0x4] = _mm_add_ps(xmm5_1, xmm5_1 u>> 0x40)
float xmm5_3[0x4] = xmm5_2 f+ _mm_shuffle_ps(xmm5_2, xmm5_2, 1)
float xmm5_4[0x4] = _mm_shuffle_ps(xmm5_3, xmm5_3, 0)
float xmm2_10[0x4] = xmm2_5 ^ data_b56660
float xmm0_1[0x4] = _mm_shuffle_ps(xmm2_10, xmm2_10, 0)
float xmm1_2[0x4] = _mm_shuffle_ps(xmm2_10, xmm2_10, 0x55)
float xmm2_11[0x4] = _mm_shuffle_ps(xmm2_10, xmm2_10, 0xaa)
float xmm3_7[0x4] = _mm_shuffle_ps(xmm2_10, xmm2_10, 0xff)
float xmm0_2 = _mm_mul_ps(xmm0_1, xmm4)
float xmm1_3[0x4] = _mm_mul_ps(xmm1_2, xmm4)
float xmm2_12[0x4] = _mm_mul_ps(xmm2_11, xmm4)
float xmm3_8[0x4] = _mm_mul_ps(xmm3_7, xmm4)
int64_t xmm0_3 = xmm0_2 f+ xmm5_4
uint32_t xmm5_5[0x4] = __andps_xmmxud_memxud(xmm5_4, data_b56670)
float xmm6_5[0x4] = __andps_xmmxud_memxud(xmm5_4, data_b56680)
float xmm7_1[0x4] = __andps_xmmxud_memxud(xmm5_4, data_b56690)
int64_t xmm1_4 = _mm_add_ps(xmm1_3, xmm5_5)
int64_t xmm2_13 = _mm_add_ps(xmm2_12, xmm6_5)
int64_t xmm3_9 = _mm_add_ps(xmm3_8, xmm7_1)
*arg1 = xmm0_3
*(arg1 + 8) = arg1[1] | xmm0_3 << 0x40
arg1[2] = xmm1_4
*(arg1 + 0x18) = arg1[3] | xmm1_4 << 0x40
arg1[4] = xmm2_13
*(arg1 + 0x28) = arg1[5] | xmm2_13 << 0x40
arg1[6] = xmm3_9
*(arg1 + 0x38) = arg1[7] | xmm3_9 << 0x40
return arg1
