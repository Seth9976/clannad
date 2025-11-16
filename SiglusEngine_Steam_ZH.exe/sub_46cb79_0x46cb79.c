// 函数: sub_46cb79
// 地址: 0x46cb79
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = *(arg1 + 0x94)

if (arg2 u> eax)
    int32_t i
    
    if (eax == 0)
        i = 0x10
    else
        i = eax * 2
    
    for (; i u< arg2; i *= 2)
    
    int32_t result = sub_745f3f(i << 2)
    
    if (result == 0)
        return result
    
    int32_t edi
    int32_t var_10_2 = edi
    j__free(*(arg1 + 0x90))
    *(arg1 + 0x90) = result
    *(arg1 + 0x94) = i

return *(arg1 + 0x90)
