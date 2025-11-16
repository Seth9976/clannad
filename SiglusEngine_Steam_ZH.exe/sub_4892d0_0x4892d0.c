// 函数: sub_4892d0
// 地址: 0x4892d0
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

*arg1 = _mm_add_ps(_mm_add_ps(_mm_mul_ps(xmm0_1, xmm1_5), xmm2_2), xmm3_2)
return arg1
