// 函数: sub_48948b
// 地址: 0x48948b
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

float (* var_8)[0x4] = arg1
float xmm0[0x4] = *arg2
*arg1 = _mm_shuffle_ps(xmm0, xmm0, 0)
float xmm0_2[0x4] = arg2[4]
arg1[4] = _mm_shuffle_ps(xmm0_2, xmm0_2, 0)
float xmm0_4[0x4] = arg2[8]
arg1[8] = _mm_shuffle_ps(xmm0_4, xmm0_4, 0)
float xmm0_6[0x4] = arg2[0xc]
arg1[0xc] = _mm_shuffle_ps(xmm0_6, xmm0_6, 0)
float xmm0_8[0x4] = arg2[1]
arg1[1] = _mm_shuffle_ps(xmm0_8, xmm0_8, 0)
float xmm0_10[0x4] = arg2[5]
arg1[5] = _mm_shuffle_ps(xmm0_10, xmm0_10, 0)
float xmm0_12[0x4] = arg2[9]
arg1[9] = _mm_shuffle_ps(xmm0_12, xmm0_12, 0)
float xmm0_14[0x4] = arg2[0xd]
arg1[0xd] = _mm_shuffle_ps(xmm0_14, xmm0_14, 0)
float xmm0_16[0x4] = arg2[2]
arg1[2] = _mm_shuffle_ps(xmm0_16, xmm0_16, 0)
float xmm0_18[0x4] = arg2[6]
arg1[6] = _mm_shuffle_ps(xmm0_18, xmm0_18, 0)
float xmm0_20[0x4] = arg2[0xa]
arg1[0xa] = _mm_shuffle_ps(xmm0_20, xmm0_20, 0)
float xmm0_22[0x4] = arg2[0xe]
arg1[0xe] = _mm_shuffle_ps(xmm0_22, xmm0_22, 0)
float xmm0_24[0x4] = arg2[3]
arg1[3] = _mm_shuffle_ps(xmm0_24, xmm0_24, 0)
float xmm0_26[0x4] = arg2[7]
arg1[7] = _mm_shuffle_ps(xmm0_26, xmm0_26, 0)
float xmm0_28[0x4] = arg2[0xb]
arg1[0xb] = _mm_shuffle_ps(xmm0_28, xmm0_28, 0)
float xmm0_30[0x4] = arg2[0xf]
arg1[0xf] = _mm_shuffle_ps(xmm0_30, xmm0_30, 0)
return arg1
