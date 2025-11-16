// 函数: sub_5cb820
// 地址: 0x5cb820
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

*arg2 = *arg1
int32_t eax_1 = arg1[1]
float xmm0_1 = _mm_cvtepi32_ps(zx.o(*arg2))
arg2[1] = eax_1
int32_t ecx_1 = int.d(xmm0_1 f* arg1[4]) + arg1[6]
float xmm0_4 = _mm_cvtepi32_ps(zx.o(arg2[1]))
*arg2 = ecx_1
arg2[1] = int.d(xmm0_4 f* arg1[5]) + arg1[7]
return arg2
