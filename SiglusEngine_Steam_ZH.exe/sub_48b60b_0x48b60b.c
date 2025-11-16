// 函数: sub_48b60b
// 地址: 0x48b60b
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebp
int32_t var_c = ebp
int32_t var_10 = ebp
void* const __return_addr_1 = __return_addr
float xmm0[0x4]
float xmm1[0x4]
float xmm2[0x4]
float xmm7[0x4]

if ((arg1.b & 0xf) != 0)
    xmm1 = arg1[1].q | *(arg1 + 0x18) << 0x40
    xmm7 = *arg1 | *(arg1 + 8) << 0x40
    xmm2 = arg1[2].q | *(arg1 + 0x28) << 0x40
    xmm0 = arg1[3].q | *(arg1 + 0x38) << 0x40
else
    xmm7 = *arg1
    xmm1 = arg1[1]
    xmm2 = arg1[2]
    xmm0 = arg1[3]

float xmm2_2[0x4] = _mm_shuffle_ps(xmm2, xmm2, 0x39)
float xmm1_2[0x4] = _mm_shuffle_ps(xmm1, xmm1, 0x39)
float xmm0_2[0x4] = _mm_shuffle_ps(xmm0, xmm0, 0x4e)
float xmm3_1[0x4] = _mm_mul_ps(xmm0, xmm2_2)
float xmm0_3[0x4] = _mm_shuffle_ps(xmm0_2, xmm0_2, 0x39)
float xmm4_1[0x4] = _mm_mul_ps(xmm0_2, xmm2_2)
float xmm2_3[0x4] = _mm_mul_ps(xmm2_2, xmm0_3)
float xmm2_5[0x4] = _mm_sub_ps(_mm_shuffle_ps(xmm2_3, xmm2_3, 0x4e), xmm2_3)
float xmm1_3[0x4] = _mm_shuffle_ps(xmm1_2, xmm1_2, 0x39)
float xmm2_6[0x4] = _mm_mul_ps(xmm2_5, xmm1_3)
float xmm1_4[0x4] = _mm_shuffle_ps(xmm1_3, xmm1_3, 0x39)
float xmm4_2[0x4] = _mm_shuffle_ps(xmm4_1, xmm4_1, 0x39)
float xmm3_2[0x4] = _mm_shuffle_ps(xmm3_1, xmm3_1, 0x4e)
float xmm6_1[0x4] = _mm_shuffle_ps(xmm3_1, xmm3_1, 0x39)
float xmm4_3[0x4] = _mm_sub_ps(xmm4_2, xmm3_2)
float xmm5_1[0x4] = _mm_sub_ps(xmm4_1, xmm6_1)
float xmm0_6[0x4] = _mm_mul_ps(xmm1_2, xmm4_3)
float xmm1_5[0x4] = _mm_mul_ps(xmm1_4, xmm5_1)
float xmm0_9[0x4] = _mm_mul_ps(_mm_add_ps(_mm_add_ps(xmm0_6, xmm2_6), xmm1_5), xmm7)
float xmm1_7[0x4] = _mm_add_ps(xmm0_9, xmm0_9 u>> 0x40)
return fconvert.t(xmm1_7[0] - _mm_shuffle_ps(xmm1_7, xmm1_7, 1))
