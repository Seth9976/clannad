// 函数: sub_48f000
// 地址: 0x48f000
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t i_1 = arg6
float (* eax)[0x4] = arg1
int128_t* ebx = arg3

if (i_1 s> 0)
    float xmm4_1[0x4] = *arg5
    float xmm5_1[0x4] = arg5[1]
    float xmm6_1[0x4] = arg5[2]
    float xmm7_1[0x4] = arg5[3]
    int32_t i
    
    do
        float xmm0_1[0x4] = *ebx
        float xmm0_2[0x4] = _mm_shuffle_ps(xmm0_1, xmm0_1, 0)
        float xmm1_1[0x4] = *(ebx + 4)
        float xmm1_2[0x4] = _mm_shuffle_ps(xmm1_1, xmm1_1, 0)
        float xmm2_1[0x4] = *(ebx + 8)
        float xmm2_2[0x4] = _mm_shuffle_ps(xmm2_1, xmm2_1, 0)
        ebx += arg4
        float xmm0_3[0x4] = _mm_mul_ps(xmm0_2, xmm4_1)
        float xmm1_3[0x4] = _mm_mul_ps(xmm1_2, xmm5_1)
        float xmm2_3[0x4] = _mm_mul_ps(xmm2_2, xmm6_1)
        *eax = _mm_add_ps(_mm_add_ps(xmm0_3, xmm1_3), _mm_add_ps(xmm2_3, xmm7_1))
        eax += arg2
        i = i_1
        i_1 -= 1
    while (i s> 1)

return arg1
