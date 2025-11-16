// 函数: sub_5fb380
// 地址: 0x5fb380
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

*arg2 = 1
*(arg2 + 0x18) = _mm_cvtepi32_ps(zx.o(*(arg1 + 0xb8)))
*(arg2 + 0x1c) = _mm_cvtepi32_ps(zx.o(*(arg1 + 0xe4)))
*(arg2 + 0x20) = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x110)))
arg2[0x79] = *(arg1 + 0x13c)
arg2[0x7a] = *(arg1 + 0x168)
arg2[0x7b] = *(arg1 + 0x194)
arg2[0x7c] = *(arg1 + 0x1c0)
arg2[0x7d] = *(arg1 + 0x1ec)
arg2[0x7e] = *(arg1 + 0x218)
arg2[0x7f] = *(arg1 + 0x244)
arg2[0x80] = *(arg1 + 0x270)
arg2[0x81] = *(arg1 + 0x29c)
arg2[0x82] = *(arg1 + 0x2c8)
char result = *(arg1 + 0x2f4)
arg2[0x83] = result
return result
