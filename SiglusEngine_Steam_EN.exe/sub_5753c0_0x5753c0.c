// 函数: sub_5753c0
// 地址: 0x5753c0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (data_1af0a7c == 0)
    return 

LRESULT eax

if (arg1 != 0)
    sub_4d1ba0(eax, 0x1028, &data_20f2350, 0xa5)

int32_t edx_1 = data_703844
int32_t eax_1 = data_703848

if (data_20f2350 != edx_1 || data_20f2354 != eax_1)
    data_20f2350 = edx_1
    data_20f2354 = eax_1
    sub_5752d0(eax_1, edx_1, 0, eax_1)

int32_t edx_2 = data_70384c
int32_t eax_2 = data_703850.d

if (data_20f2358 != edx_2 || data_20f235c != eax_2)
    data_20f2358 = edx_2
    data_20f235c = eax_2
    sub_5752d0(eax_2, edx_2, 1, eax_2)

int32_t edx_3 = data_703850:4
int32_t eax_3 = data_703850:8

if (data_20f2360 != edx_3 || data_20f2364 != eax_3)
    data_20f2360 = edx_3
    data_20f2364 = eax_3
    sub_5752d0(eax_3, edx_3, 2, eax_3)

int32_t edx_4 = data_703850:0xc
int32_t eax_4 = data_703860

if (data_20f2368 != edx_4 || data_20f236c != eax_4)
    data_20f2368 = edx_4
    data_20f236c = eax_4
    sub_5752d0(eax_4, edx_4, 3, eax_4)

int32_t edx_5 = data_703864
eax = data_703868

if (data_20f2370 != edx_5 || data_20f2374 != eax)
    data_20f2370 = edx_5
    data_20f2374 = eax
    sub_5752d0(eax, edx_5, 4, eax)

int32_t ecx = data_7031bc
int32_t esi_1 = 0

if (ecx s<= 0)
    return 

do
    int32_t edx_6 = *((esi_1 << 2) + &data_70386c)
    
    if (*((esi_1 << 2) + &data_20f2378) != edx_6
            || *((esi_1 << 2) + &data_20f2b78) != *((esi_1 << 2) + &data_70406c))
        int32_t eax_5 = *((esi_1 << 2) + &data_70406c)
        *((esi_1 << 2) + &data_20f2378) = edx_6
        *((esi_1 << 2) + &data_20f2b78) = eax_5
        sub_5752d0(eax_5, *((esi_1 << 2) + &data_20f2378), esi_1 + 5, eax_5)
        ecx = data_7031bc
    
    esi_1 += 1
while (esi_1 s< ecx)
