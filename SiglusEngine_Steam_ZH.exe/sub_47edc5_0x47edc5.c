// 函数: sub_47edc5
// 地址: 0x47edc5
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
int32_t ecx = arg2
int32_t edx = ecx + *(arg1 + 0x5c)
int32_t eax_1 = *(arg1 + 0x60)
int32_t edi
int32_t var_10 = edi

if (edx u> eax_1)
    arg2 = eax_1
    
    if (eax_1 == 0)
        arg2 = 0x100
    
    if (edx u> arg2)
        int32_t i
        
        do
            i = arg2 * 2
            arg2 = i
        while (*(arg1 + 0x5c) + ecx u> i)
    
    int32_t eax_6 = sub_745f3f(arg2 << 2)
    
    if (eax_6 == 0)
        return 0x8007000e
    
    int32_t ecx_4 = *(arg1 + 0x5c) << 2
    int32_t esi_2
    int32_t edi_2
    edi_2, esi_2 = __builtin_memcpy(eax_6, *(arg1 + 0x58), ecx_4 u>> 2 << 2)
    __builtin_memcpy(edi_2, esi_2, ecx_4 & 3)
    j__free(*(arg1 + 0x58))
    *(arg1 + 0x58) = eax_6
    *(arg1 + 0x60) = arg2

return 0
