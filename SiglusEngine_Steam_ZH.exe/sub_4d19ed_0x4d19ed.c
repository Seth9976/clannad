// 函数: sub_4d19ed
// 地址: 0x4d19ed
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
int32_t i_2 = *(arg1 + 0x114)
int32_t edi
int32_t var_10 = edi
int32_t i_1 = i_2

if (i_2 == 0)
    i_1 = 0x400

if (*(arg1 + 0x110) + arg2 u> i_1)
    int32_t i
    
    do
        i = i_1 * 2
        i_1 = i
    while (arg2 + *(arg1 + 0x110) u> i)

if (i_1 != i_2)
    int32_t eax_4 = sub_745f3f(i_1 << 2)
    
    if (eax_4 == 0)
        return 0x8007000e
    
    int32_t ecx_2 = *(arg1 + 0x110) << 2
    int32_t esi_2
    int32_t edi_2
    edi_2, esi_2 = __builtin_memcpy(eax_4, *(arg1 + 0x10c), ecx_2 u>> 2 << 2)
    __builtin_memcpy(edi_2, esi_2, ecx_2 & 3)
    j__free(*(arg1 + 0x10c))
    *(arg1 + 0x10c) = eax_4
    *(arg1 + 0x114) = i_1

return 0
