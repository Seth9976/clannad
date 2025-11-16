// 函数: sub_5f01f0
// 地址: 0x5f01f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

*(arg1 + 0x380) = 0xffffffff
*(arg1 + 0x3bc) = 0xffffffff
*(arg1 + 0x3e8) = 0xffffffff
*(arg1 + 0x414) = 0xffffffff
*(arg1 + 0x440) = 0xffffffff
*(arg1 + 0x46c) = 0xffffffff
*(arg1 + 0x498) = 0xffffffff
*(arg1 + 0x4c4) = 0xffffffff
*(arg1 + 0x4f0) = 0xffffffff
*(arg1 + 0x51c) = 0xffffffff
*(arg1 + 0x548) = 0xffffffff
*(arg1 + 0x574) = 0xffffffff
*(arg1 + 0x5a0) = 0xffffffff
*(arg1 + 0x5cc) = 0xffffffff
*(arg1 + 0x5f8) = 0xffffffff
*(arg1 + 0x624) = 0xffffffff
*(arg1 + 0x654) = 0xffffffff
*(arg1 + 0x680) = 0xffffffff
*(arg1 + 0x6ac) = 0xffffffff
*(arg1 + 0x6d8) = 0xffffffff
*(arg1 + 0x708) = 0xffffffff
*(arg1 + 0x734) = 0xffffffff
*(arg1 + 0x760) = 0xffffffff
*(arg1 + 0x78c) = 0xffffffff
*(arg1 + 0x7b8) = 0xffffffff
*(arg1 + 0x7e4) = 0xffffffff
*(arg1 + 0x810) = 0xffffffff
*(arg1 + 0x83c) = 0xffffffff
*(arg1 + 0x868) = 0xffffffff
*(arg1 + 0x894) = 0xffffffff
*(arg1 + 0x8c0) = 0xffffffff
*(arg1 + 0x8ec) = 0xffffffff
*(arg1 + 0x918) = 0xffffffff
*(arg1 + 0x944) = 0xffffffff
*(arg1 + 0x970) = 0xffffffff
*(arg1 + 0x99c) = 0xffffffff
int32_t eax
int32_t edx_2
edx_2:eax = muls.dp.d(0x2e8ba2e9, *(arg1 + 0xa74) - *(arg1 + 0xa70))
int32_t edx_3 = edx_2 s>> 3
int32_t i_8 = (edx_3 u>> 0x1f) + edx_3
int32_t eax_3
int32_t edx_6
edx_6:eax_3 = muls.dp.d(0x2e8ba2e9, *(arg1 + 0xb30) - *(arg1 + 0xb2c))
int32_t edx_7 = edx_6 s>> 3
int32_t i_4 = (edx_7 u>> 0x1f) + edx_7
int32_t eax_4
int32_t edx_10
edx_10:eax_4 = muls.dp.d(0x2e8ba2e9, *(arg1 + 0xbec) - *(arg1 + 0xbe8))
int32_t edx_11 = edx_10 s>> 3
int32_t i_7 = (edx_11 u>> 0x1f) + edx_11
int32_t result
int32_t edx_14
edx_14:result = muls.dp.d(0x2e8ba2e9, *(arg1 + 0xca8) - *(arg1 + 0xca4))
int32_t edx_15 = edx_14 s>> 3
int32_t i_5 = (edx_15 u>> 0x1f) + edx_15

if (i_8 s> 0)
    int32_t i_6 = i_8
    int32_t edx_16 = 0
    int32_t i
    
    do
        result = *(arg1 + 0xa70)
        edx_16 += 0x2c
        *(edx_16 + result - 0xc) = 0xffffffff
        i = i_6
        i_6 -= 1
    while (i != 1)

if (i_4 s> 0)
    int32_t edx_17 = 0
    int32_t i_1
    
    do
        result = *(arg1 + 0xb2c)
        edx_17 += 0x2c
        *(edx_17 + result - 0xc) = 0xffffffff
        i_1 = i_4
        i_4 -= 1
    while (i_1 != 1)

if (i_7 s> 0)
    int32_t edx_18 = 0
    int32_t i_2
    
    do
        result = *(arg1 + 0xbe8)
        edx_18 += 0x2c
        *(edx_18 + result - 0xc) = 0xffffffff
        i_2 = i_7
        i_7 -= 1
    while (i_2 != 1)

if (i_5 s> 0)
    int32_t edx_19 = 0
    int32_t i_3
    
    do
        result = *(arg1 + 0xca4)
        edx_19 += 0x2c
        *(edx_19 + result - 0xc) = 0xffffffff
        i_3 = i_5
        i_5 -= 1
    while (i_3 != 1)

return result
