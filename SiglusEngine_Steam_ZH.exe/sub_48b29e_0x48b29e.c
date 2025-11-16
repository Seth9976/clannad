// 函数: sub_48b29e
// 地址: 0x48b29e
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebp
int32_t var_c = ebp
int32_t var_10 = ebp
void* const __return_addr_1 = __return_addr
float xmm2_1[0x4] = arg3[1] | arg3[3] << 0x40
float xmm4_1[0x4] = arg3[5] | arg3[7] << 0x40
float xmm3_1[0x4] = arg3[4] | arg3[6] << 0x40
float xmm1_1[0x4] = *arg3 | arg3[2] << 0x40
float xmm5_1[0x4] = _mm_shuffle_ps(xmm2_1, xmm4_1, 0x88)
float xmm4_2[0x4] = _mm_shuffle_ps(xmm4_1, xmm2_1, 0xdd)
float xmm2_3[0x4] = _mm_mul_ps(xmm4_2, xmm5_1)
float xmm2_4[0x4] = _mm_shuffle_ps(xmm2_3, xmm2_3, 0xb1)
float xmm6_1[0x4] = _mm_shuffle_ps(xmm2_4, xmm2_4, 0x4e)
float xmm3_2[0x4] = _mm_shuffle_ps(xmm3_1, xmm1_1, 0xdd)
float xmm1_2[0x4] = _mm_shuffle_ps(xmm1_1, xmm3_1, 0x88)
float xmm3_3[0x4] = _mm_mul_ps(xmm3_2, xmm6_1)
float xmm6_2[0x4] = _mm_mul_ps(xmm6_1, xmm1_2)
float xmm7_2[0x4] = _mm_mul_ps(xmm3_2, xmm2_4)
float xmm2_5[0x4] = _mm_mul_ps(xmm2_4, xmm1_2)
float xmm3_4[0x4] = _mm_sub_ps(xmm3_3, xmm7_2)
float xmm7_4[0x4] = _mm_mul_ps(xmm3_2, xmm5_1)
float xmm5_2[0x4] = _mm_shuffle_ps(xmm5_1, xmm5_1, 0x4e)
float xmm7_5[0x4] = _mm_shuffle_ps(xmm7_4, xmm7_4, 0xb1)
float xmm2_8[0x4] = _mm_add_ps(_mm_mul_ps(xmm4_2, xmm7_5), xmm3_4)
float xmm7_6[0x4] = _mm_shuffle_ps(xmm7_5, xmm7_5, 0x4e)
float xmm3_6[0x4] = _mm_mul_ps(xmm7_5, xmm1_2)
float xmm3_8[0x4] = _mm_mul_ps(xmm4_2, xmm7_6)
float xmm7_7[0x4] = _mm_mul_ps(xmm7_6, xmm1_2)
float xmm2_9[0x4] = _mm_sub_ps(xmm2_8, xmm3_8)
float xmm3_11[0x4] = _mm_mul_ps(_mm_shuffle_ps(xmm3_2, xmm3_2, 0x4e), xmm4_2)
float xmm3_12[0x4] = _mm_shuffle_ps(xmm3_11, xmm3_11, 0xb1)
float xmm5_4[0x4] = _mm_add_ps(_mm_mul_ps(xmm5_2, xmm3_12), xmm2_9)
float xmm3_13[0x4] = _mm_shuffle_ps(xmm3_12, xmm3_12, 0x4e)
float xmm2_11[0x4] = _mm_mul_ps(xmm3_12, xmm1_2)
float xmm7_9[0x4] = _mm_mul_ps(xmm5_2, xmm3_13)
float xmm3_14[0x4] = _mm_mul_ps(xmm3_13, xmm1_2)
float xmm5_5[0x4] = _mm_sub_ps(xmm5_4, xmm7_9)
float xmm3_15[0x4] = _mm_sub_ps(xmm3_14, xmm2_11)
float xmm1_3[0x4] = _mm_mul_ps(xmm1_2, xmm5_5)
float xmm3_16[0x4] = _mm_shuffle_ps(xmm3_15, xmm3_15, 0x4e)
float xmm1_5[0x4] = _mm_add_ps(_mm_shuffle_ps(xmm1_3, xmm1_3, 0x4e), xmm1_3)
int128_t xmm1_7 = _mm_shuffle_ps(xmm1_5, xmm1_5, 0xb1) + xmm1_5[0]
int128_t var_100 = xmm1_7
float xmm5_8[0x4] = _mm_mul_ps(xmm3_2, xmm1_2)
float xmm5_9[0x4] = _mm_shuffle_ps(xmm5_8, xmm5_8, 0xb1)
float xmm5_10[0x4] = _mm_shuffle_ps(xmm5_9, xmm5_9, 0x4e)
float xmm6_6[0x4] = _mm_add_ps(_mm_mul_ps(xmm4_2, xmm5_9), xmm3_16)
float xmm3_19[0x4] = _mm_sub_ps(_mm_mul_ps(xmm4_2, xmm5_10), xmm6_6)
float xmm6_8[0x4] = _mm_mul_ps(xmm4_2, xmm1_2)
float xmm6_9[0x4] = _mm_shuffle_ps(xmm6_8, xmm6_8, 0xb1)
float xmm7_14[0x4] = _mm_add_ps(_mm_mul_ps(xmm6_9, xmm3_2), xmm3_19)
float xmm3_21[0x4] = _mm_shuffle_ps(xmm6_9, xmm6_9, 0x4e)
float xmm6_11[0x4] = _mm_sub_ps(xmm7_14, _mm_mul_ps(xmm3_2, xmm3_21))
float xmm5_14[0x4] = _mm_sub_ps(xmm6_2, xmm2_5)
float xmm5_15[0x4] = _mm_shuffle_ps(xmm5_14, xmm5_14, 0x4e)
float xmm4_7[0x4] = _mm_mul_ps(xmm6_9, xmm5_2)
float xmm3_22[0x4] = _mm_mul_ps(xmm3_21, xmm5_2)
float xmm5_16[0x4] = _mm_sub_ps(xmm5_15, xmm4_7)
float xmm2_13[0x4] = _mm_mul_ps(xmm1_2, xmm5_2)
float xmm3_23[0x4] = _mm_add_ps(xmm3_22, xmm5_16)
float xmm2_14[0x4] = _mm_shuffle_ps(xmm2_13, xmm2_13, 0xb1)
float xmm4_9[0x4] = _mm_shuffle_ps(xmm2_14, xmm2_14, 0x4e)
float xmm5_18[0x4] = _mm_mul_ps(xmm4_2, xmm2_14)
float xmm6_13[0x4] = _mm_mul_ps(xmm4_2, xmm4_9)
float xmm4_11[0x4] = _mm_sub_ps(_mm_add_ps(xmm5_18, xmm3_23), xmm6_13)
float xmm5_21[0x4] = _mm_sub_ps(xmm7_7, xmm3_6)
float xmm5_22[0x4] = _mm_shuffle_ps(xmm5_21, xmm5_21, 0x4e)
float xmm6_18[0x4] =
    _mm_sub_ps(_mm_sub_ps(_mm_mul_ps(xmm5_9, xmm5_2), xmm5_22), _mm_mul_ps(xmm5_2, xmm5_10))
float xmm2_15[0x4] = _mm_mul_ps(xmm2_14, xmm3_2)
float xmm2_17[0x4] = _mm_add_ps(_mm_mul_ps(xmm3_2, xmm4_9), _mm_sub_ps(xmm6_18, xmm2_15))

if (xmm1_7 f== 0f)
    return 0

if (arg2 != 0)
    *arg2 = xmm1_7.d

float xmm0_2 = xmm1_7.d
float xmm0_3 = _mm_rcp_ss(xmm0_2, xmm0_2)
float xmm5_28[0x4] = xmm0_3 + xmm0_3 - xmm0_2 * xmm0_3 * xmm0_3
float xmm5_29[0x4] = _mm_shuffle_ps(xmm5_28, xmm5_28, 0)
int64_t xmm1_9 = _mm_mul_ps(xmm5_5, xmm5_29)
*arg1 = xmm1_9
*(arg1 + 8) = arg1[1] | xmm1_9 << 0x40
int64_t xmm4_12 = _mm_mul_ps(xmm4_11, xmm5_29)
arg1[2] = xmm4_12
*(arg1 + 0x18) = arg1[3] | xmm4_12 << 0x40
int64_t xmm6_21 = _mm_mul_ps(xmm6_11, xmm5_29)
arg1[4] = xmm6_21
*(arg1 + 0x28) = arg1[5] | xmm6_21 << 0x40
int64_t xmm5_30 = _mm_mul_ps(xmm5_29, xmm2_17)
arg1[6] = xmm5_30
*(arg1 + 0x38) = arg1[7] | xmm5_30 << 0x40
return arg1
