// 函数: sub_48b0a8
// 地址: 0x48b0a8
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
float xmm0[0x4] = *arg2
float xmm1_1[0x4] = _mm_shuffle_ps(xmm0, xmm0, 0xff)
float xmm0_1[0x4]
float xmm1_7[0x4]
float xmm2_3[0x4]
float xmm3_2[0x4]

if ((arg3.b & 0xf) != 0)
    float xmm3_4[0x4] = arg3[2].q | *(arg3 + 0x28) << 0x40
    float xmm2_6[0x4] = _mm_mul_ps(arg3[3].q | *(arg3 + 0x38) << 0x40, xmm1_1)
    xmm3_2 = _mm_add_ps(_mm_mul_ps(xmm3_4, _mm_shuffle_ps(xmm0, xmm0, 0xaa)), xmm2_6)
    xmm2_3 = _mm_mul_ps(arg3[1].q | *(arg3 + 0x18) << 0x40, _mm_shuffle_ps(xmm0, xmm0, 0x55))
    xmm1_7 = _mm_shuffle_ps(xmm0, xmm0, 0)
    xmm0_1 = *arg3 | *(arg3 + 8) << 0x40
else
    float xmm3[0x4] = arg3[2]
    float xmm2_1[0x4] = _mm_mul_ps(arg3[3], xmm1_1)
    xmm3_2 = _mm_add_ps(_mm_mul_ps(xmm3, _mm_shuffle_ps(xmm0, xmm0, 0xaa)), xmm2_1)
    xmm2_3 = _mm_mul_ps(arg3[1], _mm_shuffle_ps(xmm0, xmm0, 0x55))
    xmm1_7 = _mm_shuffle_ps(xmm0, xmm0, 0)
    xmm0_1 = *arg3

*arg1 = _mm_add_ps(_mm_add_ps(_mm_mul_ps(xmm0_1, xmm1_7), xmm2_3), xmm3_2)
return arg1
