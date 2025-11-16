// 函数: sub_427685
// 地址: 0x427685
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax_2
int16_t x87control
int80_t result
result, eax_2, x87control = sub_41e24f(arg1, arg2 + *(arg1 + 0x40), arg3 + *(arg1 + 0x4c), 1)

if (eax_2 s>= 0)
    int32_t ecx_4 = *(arg1 + 0x68) << 4
    int32_t edi
    int32_t var_10_1 = edi
    int32_t esi_5
    int32_t edi_2
    edi_2, esi_5 = __builtin_memcpy(arg4, 
        ((*(arg1 + 0x3c) - *(arg1 + 0x84)) << 4) + *(arg1 + 0x80), ecx_4 u>> 2 << 2)
    __builtin_memcpy(edi_2, esi_5, ecx_4 & 3)
    
    if (*(arg1 + 0x18) != 0)
        sub_41eede(arg1, arg4)
    
    if (*(arg1 + 0x10) != 0)
        return sub_41f14b(arg1, x87control, arg4)

return result
