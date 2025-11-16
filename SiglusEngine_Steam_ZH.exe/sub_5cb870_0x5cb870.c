// 函数: sub_5cb870
// 地址: 0x5cb870
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

*arg2 = *(arg1 + 8)
int32_t eax_1 = *(arg1 + 0xc)
float xmm0_1 = _mm_cvtepi32_ps(zx.o(*arg2))
arg2[1] = eax_1
int32_t ecx = int.d(xmm0_1 f* *(arg1 + 0x10))
float xmm0_4 = _mm_cvtepi32_ps(zx.o(arg2[1]))
*arg2 = ecx
arg2[1] = int.d(xmm0_4 f* *(arg1 + 0x14))
return arg2
