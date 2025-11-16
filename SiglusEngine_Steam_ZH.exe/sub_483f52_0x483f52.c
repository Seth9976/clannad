// 函数: sub_483f52
// 地址: 0x483f52
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax_2 = _realloc(*(arg1 + 0x40), *(arg1 + 0x3c) + arg3)

if (eax_2 == 0)
    return 0x8007000e

int32_t edi
int32_t var_10_1 = edi
int32_t edi_2 = *(arg1 + 0x3c) + eax_2
*(arg1 + 0x40) = eax_2
int32_t esi_2
int32_t edi_3
edi_3, esi_2 = __builtin_memcpy(edi_2, arg2, arg3 u>> 2 << 2)
__builtin_memcpy(edi_3, esi_2, arg3 & 3)
*(arg1 + 0x3c) += arg3
return 0
