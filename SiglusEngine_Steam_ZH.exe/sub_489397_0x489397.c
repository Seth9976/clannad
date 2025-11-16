// 函数: sub_489397
// 地址: 0x489397
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
float xmm0[0x4] = *arg2
int32_t ecx_2 = *(arg2 + 8)
float xmm0_1[0x4]
float xmm1_5[0x4]
float xmm2_2[0x4]
float xmm3_2[0x4]

if ((arg3.b & 0xf) != 0)
    float xmm1_8[0x4] = ecx_2
    xmm3_2 = _mm_add_ps(
        _mm_mul_ps(arg3[2].q | *(arg3 + 0x28) << 0x40, _mm_shuffle_ps(xmm1_8, xmm1_8, 0)), 
        arg3[3].q | *(arg3 + 0x38) << 0x40)
    xmm2_2 = _mm_mul_ps(arg3[1].q | *(arg3 + 0x18) << 0x40, _mm_shuffle_ps(xmm0, xmm0, 0x55))
    xmm1_5 = _mm_shuffle_ps(xmm0, xmm0, 0)
    xmm0_1 = *arg3 | *(arg3 + 8) << 0x40
else
    float xmm1[0x4] = ecx_2
    xmm3_2 = _mm_add_ps(_mm_mul_ps(arg3[2], _mm_shuffle_ps(xmm1, xmm1, 0)), arg3[3])
    xmm2_2 = _mm_mul_ps(arg3[1], _mm_shuffle_ps(xmm0, xmm0, 0x55))
    xmm1_5 = _mm_shuffle_ps(xmm0, xmm0, 0)
    xmm0_1 = *arg3

float xmm0_5[0x4] = _mm_add_ps(_mm_add_ps(_mm_mul_ps(xmm0_1, xmm1_5), xmm2_2), xmm3_2)
float xmm1_13[0x4] = _mm_rcp_ps(xmm0_5)
float xmm2_8[0x4] = _mm_mul_ps(_mm_mul_ps(xmm1_13, xmm0_5), xmm1_13)
float xmm1_15[0x4] = _mm_sub_ps(_mm_add_ps(xmm1_13, xmm1_13), xmm2_8)
float xmm0_6[0x4] = _mm_mul_ps(xmm0_5, _mm_shuffle_ps(xmm1_15, xmm1_15, 0xff))
*arg1 = xmm0_6
(*arg1)[2] = (xmm0_6 u>> 0x40).d
return arg1
