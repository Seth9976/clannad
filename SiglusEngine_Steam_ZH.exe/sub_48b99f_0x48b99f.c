// 函数: sub_48b99f
// 地址: 0x48b99f
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
float xmm0_5[0x4]
float xmm2_1[0x4]
float xmm3_2[0x4]

if ((arg3.b & 0xf) != 0)
    float xmm0_6[0x4] = *arg2
    float xmm3_4[0x4] = arg3[1].q | *(arg3 + 0x18) << 0x40
    float xmm1_1[0x4] = *(arg2 + 8)
    xmm2_1 = _mm_mul_ps(arg3[2].q | *(arg3 + 0x28) << 0x40, _mm_shuffle_ps(xmm1_1, xmm1_1, 0))
    xmm3_2 = _mm_mul_ps(xmm3_4, _mm_shuffle_ps(xmm0_6, xmm0_6, 0x55))
    float xmm1_6[0x4] = _mm_shuffle_ps(xmm0_6, xmm0_6, 0)
    xmm0_5 = _mm_mul_ps(*arg3 | *(arg3 + 8) << 0x40, xmm1_6)
else
    float xmm1[0x4] = *arg2
    float xmm0[0x4] = *(arg2 + 8)
    xmm2_1 = _mm_mul_ps(_mm_shuffle_ps(xmm0, xmm0, 0), arg3[2])
    xmm3_2 = _mm_mul_ps(_mm_shuffle_ps(xmm1, xmm1, 0x55), arg3[1])
    xmm0_5 = _mm_mul_ps(_mm_shuffle_ps(xmm1, xmm1, 0), *arg3)

float xmm0_10[0x4] = _mm_add_ps(_mm_add_ps(xmm0_5, xmm3_2), xmm2_1)
*arg1 = xmm0_10
(*arg1)[2] = (xmm0_10 u>> 0x40).d
return arg1
