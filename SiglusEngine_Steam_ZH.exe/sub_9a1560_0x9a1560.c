// 函数: sub_9a1560
// 地址: 0x9a1560
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

float xmm1[0x4] = _mm_shuffle_ps(arg2, arg2, 0)
int32_t result = 7
int32_t i

do
    *arg1 = _mm_add_ps(*arg1, xmm1)
    *(arg1 + 0x10) = _mm_add_ps(*(arg1 + 0x10), xmm1)
    arg1 += 0x20
    i = result
    result -= 1
while (i != 1)
return result
