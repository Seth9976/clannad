// 函数: sub_40b410
// 地址: 0x40b410
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* esi

if (*arg2 s<= 1)
    esi = arg3
    sub_410990(esi, 0, 1)
else
    esi = arg3
    sub_410990(esi, 1, 1)
    sub_410990(esi, *arg2 - 1, 4)

if (arg2[0x121] s<= 0)
    sub_410990(esi, 0, 1)
else
    sub_410990(esi, 1, 1)
    sub_410990(esi, arg2[0x121] - 1, 8)
    int32_t i = 0
    
    if (arg2[0x121] s> 0)
        void* ebx_1 = &arg2[0x222]
        
        do
            int32_t eax_6 = sub_40b560(*(arg1 + 4))
            sub_410990(esi, *(ebx_1 - 0x400), eax_6)
            int32_t eax_8 = sub_40b560(*(arg1 + 4))
            sub_410990(esi, *ebx_1, eax_8)
            i += 1
            ebx_1 += 4
        while (i s< arg2[0x121])

sub_410990(esi, 0, 2)

if (*arg2 s> 1)
    int32_t i_1 = 0
    
    if (*(arg1 + 4) s> 0)
        void* ebp_1 = &arg2[1]
        
        do
            sub_410990(esi, *ebp_1, 4)
            i_1 += 1
            ebp_1 += 4
        while (i_1 s< *(arg1 + 4))

int32_t result = *arg2
int32_t ebp_2 = 0

if (result s> 0)
    void* ebx_2 = &arg2[0x111]
    
    do
        sub_410990(esi, 0, 8)
        sub_410990(esi, *(ebx_2 - 0x40), 8)
        sub_410990(esi, *ebx_2, 8)
        result = *arg2
        ebp_2 += 1
        ebx_2 += 4
    while (ebp_2 s< result)

return result
