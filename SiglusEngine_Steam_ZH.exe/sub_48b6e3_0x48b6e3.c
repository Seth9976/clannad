// 函数: sub_48b6e3
// 地址: 0x48b6e3
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebp
int32_t var_c = ebp
int32_t var_10 = ebp
void* const __return_addr_1 = __return_addr
float xmm0_1[0x4] = *(arg2 + 8) | *arg2 << 0x40
float xmm2_1[0x4] = *(arg3 + 8) | *arg3 << 0x40
float xmm0_2[0x4] = _mm_sub_ps(xmm0_1, *(arg4 + 8) | *arg4 << 0x40)
float xmm0_3[0x4] = _mm_shuffle_ps(xmm0_2, xmm0_2, 0x78)
float xmm1_3[0x4] = _mm_shuffle_ps(xmm0_2, xmm0_2, 0x63)
float xmm3_1[0x4] = _mm_sub_ps(xmm0_1, xmm2_1)
int32_t xmm2_2 = (data_ac7db0.o).d
float xmm3_2[0x4] = _mm_shuffle_ps(xmm3_1, xmm3_1, 0x63)
float xmm5_1[0x4] = _mm_shuffle_ps(xmm3_1, xmm3_1, 0x78)
float xmm0_4[0x4] = _mm_mul_ps(xmm0_3, xmm3_2)
float xmm5_2[0x4] = _mm_mul_ps(xmm5_1, xmm1_3)
int32_t xmm1_4 = (data_ac7dc0.o).d
float xmm0_5[0x4] = _mm_sub_ps(xmm0_4, xmm5_2)
float xmm4_1[0x4] = _mm_shuffle_ps(xmm0_1, xmm0_1, 0xe)
float xmm0_6[0x4] = _mm_mul_ps(xmm0_5, xmm0_5)
float xmm5_4[0x4] = _mm_add_ps(xmm0_6, xmm0_6 u>> 0x40)
float xmm0_9 = xmm5_4[0] + _mm_shuffle_ps(xmm5_4, xmm5_4, 1)
float xmm0_10 = _mm_rsqrt_ss(xmm0_9, xmm0_9)
float xmm1_6[0x4] = xmm1_4 f* xmm0_10 * (xmm2_2 f- xmm0_9 * xmm0_10 * xmm0_10)
float xmm3_4[0x4] = _mm_mul_ps(xmm0_5, _mm_shuffle_ps(xmm1_6, xmm1_6, 0))
float xmm4_2[0x4] = _mm_mul_ps(xmm4_1, xmm3_4)
*arg1 = xmm3_4
(*arg1)[3] =
    (xmm4_2[0] + (xmm4_2 u>> 0x40).d f+ _mm_shuffle_ps(xmm4_2, xmm4_2, 0x55)) ^ (data_b565e0).d
return arg1
