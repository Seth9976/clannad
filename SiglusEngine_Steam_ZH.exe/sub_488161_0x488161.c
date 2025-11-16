// 函数: sub_488161
// 地址: 0x488161
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

float xmm0 = *arg3
float xmm1 = arg3[1]
float xmm2 = arg3[2]
float xmm0_3 = xmm0 * xmm0 + xmm1 * xmm1 + xmm2 * xmm2

if (xmm0_3 >= 1.42108547e-14f)
    float xmm6 = _mm_rsqrt_ss(arg1, xmm0_3)
    float xmm1_3 = (3f - xmm6 * xmm0_3 * xmm6) * xmm6 * 0.5f
    *arg2 = xmm0 * xmm1_3
    arg2[1] = xmm1 * xmm1_3
    arg2[2] = xmm2 * xmm1_3
else
    *arg2 = 0
    arg2[1] = 0
    arg2[2] = 0

return arg2
