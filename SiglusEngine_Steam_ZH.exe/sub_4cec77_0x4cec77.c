// 函数: sub_4cec77
// 地址: 0x4cec77
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax_2 = **(arg1 + 0x100) & 0xfffff
int32_t edi
int32_t var_1c = edi
int32_t var_10 = 0

if (eax_2 u> 0)
    int32_t* edx_2 = *(*(arg1 + 0x100) + 8)
    int32_t edi_1 = *(arg1 + 0x14)
    int32_t* var_8_1 = edx_2
    int32_t* var_c_1 = &edx_2[eax_2]
    
    do
        void* edx_6 = *(edi_1 + (*var_8_1 << 2))
        void* esi_3 = *(edi_1 + (*var_c_1 << 2))
        
        if (*(edx_6 + 4) != *(esi_3 + 4) || *(edx_6 + 8) != *(esi_3 + 8)
                || *(edx_6 + 0xc) != *(esi_3 + 0xc) || *(edx_6 + 0x10) != *(esi_3 + 0x10)
                || (*(esi_3 + 0x3c) ^ *(edx_6 + 0x3c)) != 0x80000)
            return 1
        
        var_10 += 1
        var_8_1 = &var_8_1[1]
        var_c_1 = &var_c_1[1]
    while (var_10 u< eax_2)

**(arg1 + 0x100) = (eax_2 & 0xfffff) | 0x70000000
*(*(arg1 + 0x100) + 4) = eax_2

if (eax_2 != 0 && (*(*(*(arg1 + 0x14) + (**(*(arg1 + 0x100) + 8) << 2)) + 0x3e) & 8) != 0)
    int32_t edi_2 = *(*(arg1 + 0x100) + 8)
    int32_t eax_3 = eax_2 << 2
    int32_t esi_9
    int32_t edi_3
    edi_3, esi_9 = __builtin_memcpy(edi_2, edi_2 + eax_3, eax_3 u>> 2 << 2)
    __builtin_memcpy(edi_3, esi_9, eax_3 & 3)

return 0
