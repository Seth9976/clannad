// 函数: sub_41b810
// 地址: 0x41b810
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t result
int32_t edx
edx:result = sx.q(arg2)
int32_t edx_3 = ((edx & 3) + result) s>> 2
int32_t i = 0
uint32_t xmm1[0x4] = _mm_shuffle_epi32(zx.o(arg4), 0)

if (edx_3 s> 0)
    if (edx_3 u>= 8)
        result = edx_3 & 0x80000007
        
        if (result s< 0)
            result = ((result - 1) | 0xfffffff8) + 1
        
        do
            i += 8
            *arg3 ^= xmm1
            arg3[1] ^= xmm1
            arg3 = &arg3[2]
        while (i s< edx_3 - result)
    
    if (i s< edx_3)
        int32_t i_2 = edx_3 - i
        int32_t i_1
        
        do
            *arg3 ^= arg4
            arg3 += 4
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)

return result
