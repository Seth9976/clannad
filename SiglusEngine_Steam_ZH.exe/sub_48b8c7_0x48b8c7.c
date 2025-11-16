// 函数: sub_48b8c7
// 地址: 0x48b8c7
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebp
int32_t var_8 = ebp
int32_t var_c = ebp
void* const __return_addr_1 = __return_addr
uint32_t xmm0[0x4] = *arg2
uint32_t xmm1_1[0x4] = _mm_and_ps(data_b565f0, xmm0)
float xmm1_2[0x4] = _mm_mul_ps(xmm1_1, xmm1_1)
float xmm4_1[0x4] = _mm_add_ps(xmm1_2, xmm1_2 u>> 0x40)
float xmm1_5 = xmm4_1[0] + _mm_shuffle_ps(xmm4_1, xmm4_1, 1)
float xmm4_3[0x4] = data_b56600
float xmm1_6 = _mm_rsqrt_ss(xmm1_5, xmm1_5)
float xmm3_1[0x4] = 0.5f * xmm1_6 * (3f - xmm1_5 * xmm1_6 * xmm1_6)
float xmm0_1[0x4] = _mm_mul_ps(xmm0, _mm_shuffle_ps(xmm3_1, xmm3_1, 0))
float xmm4_4[0x4] = _mm_mul_ps(xmm4_3, xmm0_1)
float xmm0_4[0x4] =
    __addps_xmmps_memps(_mm_mul_ps(_mm_shuffle_ps(xmm0_1, xmm0_1, 0), xmm4_4), data_b56640)
float xmm1_10[0x4] =
    __addps_xmmps_memps(_mm_mul_ps(_mm_shuffle_ps(xmm0_1, xmm0_1, 0xff), xmm4_4), data_b56610)
float xmm2_4[0x4] =
    __addps_xmmps_memps(_mm_mul_ps(_mm_shuffle_ps(xmm0_1, xmm0_1, 0xaa), xmm4_4), data_b56620)
float xmm4_6[0x4] =
    __addps_xmmps_memps(_mm_mul_ps(xmm4_4, _mm_shuffle_ps(xmm0_1, xmm0_1, 0x55)), data_b56630)
*arg1 = xmm0_4
arg1[1] = xmm4_6
arg1[2] = xmm2_4
arg1[3] = xmm1_10
return arg1
