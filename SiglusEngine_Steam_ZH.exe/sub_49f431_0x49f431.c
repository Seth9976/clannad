// 函数: sub_49f431
// 地址: 0x49f431
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
void* var_c = arg1
int32_t eax = *(arg1 + 0x24)

if (*(arg1 + 0xc) == eax)
    int32_t var_8_1
    
    if (eax == 0)
        var_8_1 = 0x100
    else
        var_8_1 = eax * 2
    
    int32_t eax_4 = sub_745f3f(var_8_1 << 2)
    
    if (eax_4 == 0)
        if (arg2 != 0)
            sub_46cb59(arg2, 1)
        
        return 0xffffffff
    
    int32_t ecx_3 = *(arg1 + 0xc) << 2
    int32_t edi
    int32_t var_18_1 = edi
    int32_t esi_2
    int32_t edi_2
    edi_2, esi_2 = __builtin_memcpy(eax_4, *(arg1 + 0x18), ecx_3 u>> 2 << 2)
    __builtin_memcpy(edi_2, esi_2, ecx_3 & 3)
    int32_t edi_3 = *(arg1 + 0xc)
    int32_t ecx_9 = (var_8_1 - edi_3) << 2
    __builtin_memset(__builtin_memset(eax_4 + (edi_3 << 2), 0, ecx_9 u>> 2 << 2), 0, ecx_9 & 3)
    j__free(*(arg1 + 0x18))
    *(arg1 + 0x24) = var_8_1
    *(arg1 + 0x18) = eax_4

*(*(arg1 + 0x18) + (*(arg1 + 0xc) << 2)) = arg2
int32_t result = *(arg1 + 0xc)
*(arg1 + 0xc) = result + 1
return result
