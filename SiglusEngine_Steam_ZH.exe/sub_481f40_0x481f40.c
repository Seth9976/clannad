// 函数: sub_481f40
// 地址: 0x481f40
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

*arg4 = 0
int32_t edi
int32_t var_10 = edi

if (*arg1 == 0 || *(arg1 + 4) == 0)
    return 0x80004005

while (arg3 u> 0)
    int32_t edx_1 = *(arg1 + 8)
    int32_t eax_1 = 0x10000 - edx_1
    
    if (arg3 u< eax_1)
        eax_1 = arg3
    
    int32_t esi_1 = arg2
    arg2 += eax_1
    arg3 -= eax_1
    int32_t esi_2
    int32_t edi_3
    edi_3, esi_2 = __builtin_memcpy(*(arg1 + 4) + edx_1, esi_1, eax_1 u>> 2 << 2)
    __builtin_memcpy(edi_3, esi_2, eax_1 & 3)
    *(arg1 + 8) += eax_1
    *arg4 += eax_1
    
    if (*(arg1 + 8) == 0x10000)
        int32_t result = sub_481ef5(arg1)
        
        if (result s< 0)
            return result

return 0
