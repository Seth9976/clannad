// 函数: sub_487c4e
// 地址: 0x487c4e
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

float xmm0 = *arg2
float xmm1 = arg2[1]
float xmm2 = arg2[2]
float xmm3 = arg2[3]
float xmm5_1 = xmm1 * xmm1
float xmm4_3 = xmm0 * xmm0 + xmm5_1 + xmm2 * xmm2 + xmm3 * xmm3
float xmm5_2 = _mm_rsqrt_ss(xmm5_1, xmm4_3)
float xmm5_7 = (data_b56310 - xmm4_3 * xmm5_2 * xmm5_2) f* data_b56300 * xmm5_2
*arg1 = xmm0 * xmm5_7
arg1[1] = xmm1 * xmm5_7
arg1[2] = xmm2 * xmm5_7
arg1[3] = xmm3 * xmm5_7
return arg1
