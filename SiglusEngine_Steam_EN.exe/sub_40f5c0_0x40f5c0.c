// 函数: sub_40f5c0
// 地址: 0x40f5c0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* esi = arg3
void* ebx = *(arg2 + 0x510)
int32_t eax_4
int32_t edx_1
edx_1:eax_4 = sx.q(*(*(*(*(arg1 + 0x40) + 4) + 0x1c) + (*(arg1 + 0x1c) << 2)))
int32_t eax_6 = (eax_4 - edx_1) s>> 1

if (esi == 0)
    __builtin_memset(arg4, 0, eax_6 << 2)
    return 0

int32_t ecx_3 = *(ebx + 0x340) * *esi
int32_t edi = 0
int32_t ebp = 0
int32_t var_8 = 1

if (*(arg2 + 0x504) s> 1)
    arg1 = arg2 + 0x108
    
    while (true)
        int32_t edx_5 = *arg1
        int32_t esi_1 = esi[edx_5]
        int32_t eax_8 = esi_1 & 0x7fff
        
        if (eax_8 == esi_1)
            edi = *(ebx + (edx_5 << 2) + 0x344)
            int32_t esi_3 = *(ebx + 0x340) * eax_8
            sub_40f6d0(ebp, edi, ecx_3, esi_3, arg4)
            ebp = edi
            ecx_3 = esi_3
        
        int32_t eax_11 = var_8 + 1
        arg1 += 4
        var_8 = eax_11
        
        if (eax_11 s>= *(arg2 + 0x504))
            break
        
        esi = arg3

if (edi s< eax_6)
    int32_t i_1 = eax_6 - edi
    float* edx_10 = arg4 + (edi << 2)
    int32_t i
    
    do
        long double x87_r7_2 = fconvert.t(*((ecx_3 << 2) + &data_63b020)) * fconvert.t(*edx_10)
        edx_10 = &edx_10[1]
        i = i_1
        i_1 -= 1
        edx_10[-1] = fconvert.s(x87_r7_2)
    while (i != 1)

return 1
