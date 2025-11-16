// 函数: sub_487cea
// 地址: 0x487cea
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
float xmm1_1[0x4] = *arg2 | arg2[1] << 0x40
float xmm0_1[0x4] = _mm_mul_ps(xmm1_1, xmm1_1)
float xmm0_2[0x4] = _mm_add_ps(xmm0_1, xmm0_1 u>> 0x40)
float xmm2_2 = _mm_shuffle_ps(xmm0_2, xmm0_2, 0x55)
float xmm0_3 = xmm0_2 f+ xmm2_2
float var_20 = xmm0_3
float xmm2_3 = _mm_rcp_ss(xmm2_2, xmm0_3)
float xmm0_6[0x4] = xmm2_3 + xmm2_3 - xmm2_3 * xmm0_3 * xmm2_3
float xmm2_6[0x4] = _mm_shuffle_ps(xmm0_6, xmm0_6, 0)
*arg1 = _mm_mul_ps(_mm_mul_ps(xmm1_1, data_b56320), xmm2_6)
return arg1
