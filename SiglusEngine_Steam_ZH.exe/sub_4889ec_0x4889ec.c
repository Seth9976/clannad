// 函数: sub_4889ec
// 地址: 0x4889ec
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

float xmm0[0x4] = *arg2
float xmm1_1[0x4] = *(arg3 + 8) | *arg3 << 0x40
int64_t xmm2 = *(arg4 + 8)
float xmm0_1[0x4] = _mm_shuffle_ps(xmm0, xmm0, 0x4e)
float xmm4_1 = _mm_shuffle_ps(xmm0, xmm0, 0xff)
float xmm2_1[0x4] = xmm2 | *arg4 << 0x40
float xmm3_1[0x4] = _mm_mul_ps(xmm1_1, xmm0_1)
float xmm0_2[0x4] = _mm_mul_ps(xmm0_1, xmm2_1)
uint128_t xmm5 = xmm3_1 u>> 0x40
uint128_t xmm6 = xmm0_2 u>> 0x40
float xmm3_2[0x4] = _mm_add_ps(xmm3_1, xmm5)
float xmm0_3[0x4] = _mm_add_ps(xmm0_2, xmm6)
float xmm3_3 = xmm3_2 f+ _mm_shuffle_ps(xmm5, xmm3_2, 0x55)
float xmm0_4 = xmm0_3 f+ _mm_shuffle_ps(xmm6, xmm0_3, 0x55)
float xmm5_3 = xmm3_3 - xmm0_4

if (xmm5_3 f== data_b9a5f4)
    return nullptr

float xmm0_5 = _mm_rcp_ss(xmm0_4, xmm5_3)
float xmm3_5[0x4] = (xmm3_3 + xmm4_1) * (xmm0_5 + xmm0_5 - xmm5_3 * xmm0_5 * xmm0_5)
int64_t xmm1_2 =
    _mm_add_ps(xmm1_1, _mm_mul_ps(_mm_shuffle_ps(xmm3_5, xmm3_5, 0), _mm_sub_ps(xmm2_1, xmm1_1)))
*arg1 = *arg1 | xmm1_2 << 0x40
*(arg1 + 8) = xmm1_2
return arg1
