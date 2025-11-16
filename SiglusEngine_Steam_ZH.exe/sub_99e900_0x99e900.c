// 函数: sub_99e900
// 地址: 0x99e900
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t i_1 = *(arg1 + 0x28)
int32_t i_2 = i_1
int32_t eax = sub_742e90(arg2, *(arg1 + 0x24))
int32_t eax_3
int32_t result

if (eax s< 0)
    result = 0
    eax_3 = *(arg1 + 8)
else
    int32_t ecx_2 = *(*(arg1 + 0x20) + (eax << 2))
    
    if (ecx_2 s>= 0)
        sub_742f50(arg2, sx.d(*(*(arg1 + 0x1c) + ecx_2 - 1)))
        return ecx_2 - 1
    
    result = ecx_2 s>> 0xf & 0x7fff
    eax_3 = *(arg1 + 8) - (ecx_2 & 0x7fff)

int32_t eax_8 = sub_742e90(arg2, i_1)

if (eax_8 s>= 0)
label_99e9a7:
    int32_t ecx_8 = sub_99ea20(eax_8)
    int32_t i = eax_3 - result
    int32_t var_14_1 = ecx_8
    
    if (i s> 1)
        int32_t ebx_1 = eax_3
        
        do
            int32_t edx_5 = i s>> 1
            int32_t ecx_10 =
                neg.d(sbb.d(ecx_8, ecx_8, ecx_8 u< *(*(arg1 + 0x14) + ((edx_5 + result) << 2))))
            ebx_1 -= neg.d(ecx_10) & edx_5
            result += (ecx_10 - 1) & edx_5
            ecx_8 = var_14_1
            i = ebx_1 - result
        while (i s> 1)
        
        i_1 = i_2
    
    int32_t edx_7 = sx.d(*(*(arg1 + 0x1c) + result))
    
    if (edx_7 s<= i_1)
        sub_742f50(arg2, edx_7)
        return result
    
    sub_742f50(arg2, i_1)
else
    while (i_1 s> 1)
        i_1 -= 1
        i_2 = i_1
        eax_8 = sub_742e90(arg2, i_1)
        
        if (eax_8 s>= 0)
            goto label_99e9a7
    
    if (eax_8 s>= 0)
        goto label_99e9a7

return 0xffffffff
