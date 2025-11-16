// 函数: sub_442686
// 地址: 0x442686
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
int32_t eax_1 = *(arg1 + 0x110) << 1
*(arg1 + 0x110) = eax_1
int32_t edi
int32_t var_10 = edi
int32_t eax_3 = sub_745f3f(eax_1 << 2)

if (eax_3 == 0)
    return 0x8007000e

int32_t ecx_3 = *(arg1 + 0x10c) << 2
int32_t esi_2
int32_t edi_2
edi_2, esi_2 = __builtin_memcpy(eax_3, *(arg1 + 0x108), ecx_3 u>> 2 << 2)
__builtin_memcpy(edi_2, esi_2, ecx_3 & 3)
j__free(*(arg1 + 0x108))
*(arg1 + 0x108) = eax_3
return 0
