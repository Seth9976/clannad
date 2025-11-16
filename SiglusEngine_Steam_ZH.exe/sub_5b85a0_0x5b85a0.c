// 函数: sub_5b85a0
// 地址: 0x5b85a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t i = 0
uint32_t edx = arg2 u>> 2
uint32_t xmm1[0x4] = _mm_shuffle_epi32(zx.o(arg4), 0)

if (edx s<= 0)
    return 

if (edx u>= 8)
    arg1 = edx & 0x80000007
    
    if (arg1 s< 0)
        arg1 = ((arg1 - 1) | 0xfffffff8) + 1
    
    do
        i += 8
        *arg3 ^= xmm1
        arg3[1] ^= xmm1
        arg3 = &arg3[2]
    while (i s< edx - arg1)

if (i s>= edx)
    return 

int32_t i_2 = edx - i
int128_t* ecx = arg3
int32_t i_1

do
    *ecx ^= arg4
    ecx += 4
    i_1 = i_2
    i_2 -= 1
while (i_1 != 1)
