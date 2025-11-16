// 函数: sub_40b8aa
// 地址: 0x40b8aa
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t edi
int32_t var_14 = edi

if (arg3 == 0)
    if (arg2 != 0)
        return 0x8876086c
    
    j__free(*(arg1 + 0x25c))
    *(arg1 + 0x260) = 0
else if (arg3 u>= *(arg1 + 0x260))
    j__free(*(arg1 + 0x25c))
    int32_t esi_5 = arg3 * 0x14
    int32_t eax_2 = sub_745f3f(esi_5)
    *(arg1 + 0x25c) = eax_2
    
    if (eax_2 == 0)
        return 0x8007000e
    
    int32_t esi_7
    int32_t edi_4
    edi_4, esi_7 = __builtin_memcpy(eax_2, arg2, esi_5 u>> 2 << 2)
    __builtin_memcpy(edi_4, esi_7, esi_5 & 3)
    *(arg1 + 0x260) = arg3
else
    int32_t ecx_3 = arg3 * 0x14
    int32_t esi_3
    int32_t edi_2
    edi_2, esi_3 = __builtin_memcpy(*(arg1 + 0x25c), arg2, ecx_3 u>> 2 << 2)
    __builtin_memcpy(edi_2, esi_3, ecx_3 & 3)
    *(arg1 + 0x260) = arg3

return 0
