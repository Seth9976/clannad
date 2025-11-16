// 函数: sub_4b71e4
// 地址: 0x4b71e4
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = *(arg1 + 0x1c)

if ((eax.b & 7) == 0)
    int32_t eax_2 = sub_49ec06(eax + 8)
    
    if (eax_2 == 0)
        return 0x8007000e
    
    int32_t ecx_2 = *(arg1 + 0x1c) << 2
    int32_t edi
    int32_t var_10_1 = edi
    int32_t esi_2
    int32_t edi_2
    edi_2, esi_2 = __builtin_memcpy(eax_2, *(arg1 + 0x20), ecx_2 u>> 2 << 2)
    __builtin_memcpy(edi_2, esi_2, ecx_2 & 3)
    *(arg1 + 0x20) = eax_2

*(*(arg1 + 0x20) + (*(arg1 + 0x1c) << 2)) = arg2
*(arg1 + 0x1c) += 1
return 0
