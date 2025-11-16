// 函数: sub_4cee3c
// 地址: 0x4cee3c
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax_2 = **(arg1 + 0x100) & 0xfffff
int32_t edi
int32_t var_34 = edi
void* var_20 = arg1
int32_t var_c = 0

if (eax_2 u> 0)
    int32_t edx_1 = *(arg1 + 0x14)
    int32_t ebx_1 = *(*(arg1 + 0x100) + 8)
    int32_t var_8_1 = eax_2 << 3
    int32_t* var_14_1 = ebx_1 + (eax_2 << 2)
    
    do
        int32_t esi_1 = *(ebx_1 + (var_c << 2))
        void* ecx_5 = *(edx_1 + (esi_1 << 2))
        int32_t edi_1 = *var_14_1
        void* ecx_7 = *(edx_1 + (edi_1 << 2))
        void* ecx_10 = *(edx_1 + (*(var_8_1 + ebx_1) << 2))
        
        if (esi_1 != edi_1)
            return 1
        
        arg1 = var_20
        int32_t edi_3 = *(var_8_1 + *(*(arg1 + 0x100) + 8))
        int32_t esi_5 = *(ecx_7 + 0x38)
        
        if (esi_5 != edi_3 && (esi_5 == 0xffffffff || esi_5 != *(ecx_10 + 0x38)))
            return 1
        
        int32_t esi_7 = *(ecx_10 + 0x3c)
        
        if ((*(ecx_7 + 0x3c) ^ 0x80000) != esi_7)
            return 1
        
        int32_t esi_9 = *(ecx_5 + 0x38)
        
        if ((esi_9 != edi_3 && (esi_9 == 0xffffffff || esi_9 != *(ecx_10 + 0x38)))
                || (*(ecx_5 + 0x3c) ^ 0x80000) != esi_7)
            return 1
        
        var_c += 1
        var_14_1 = &var_14_1[1]
        var_8_1 += 4
    while (var_c u< eax_2)

**(arg1 + 0x100) = (eax_2 & 0xfffff) | 0x70000000
*(*(arg1 + 0x100) + 4) = eax_2
int32_t edi_9 = *(*(arg1 + 0x100) + 8)
__builtin_memcpy(edi_9, edi_9 + (eax_2 << 3), eax_2 << 2)
return 0
