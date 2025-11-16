// 函数: sub_42a41c
// 地址: 0x42a41c
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t edx = *(arg1 + 0x14)
uint32_t ecx = edx
int32_t edi
int32_t var_1c = edi
int32_t edi_1 = 0
uint32_t eax_1 = ecx u>> 1
int32_t result = 0
uint32_t var_8 = eax_1

if (ecx u<= 0)
label_42a46d:
    
    if (edx != ((not.d(edx) + 1) & edx))
    label_42a511:
        int32_t edx_2 = *(arg1 + 0x14)
        int32_t ecx_22
        
        while (true)
            ecx_22 = *(arg1 + 0x18)
            
            if (edx_2 u<= eax_1)
                break
            
            int32_t* ecx_19 = ecx_22 + (edx_2 << 2)
            *ecx_19 = ecx_19[-1]
            int32_t* ecx_21 = *(arg1 + 0x1c) + (edx_2 << 2)
            *ecx_21 = ecx_21[-1]
            edx_2 -= 1
        
        *(ecx_22 + (eax_1 << 2)) = arg2
        *(*(arg1 + 0x1c) + (eax_1 << 2)) = 1
        *(arg1 + 0x14) += 1
        goto label_42a547
    
    uint32_t edx_1
    
    if (edx == 0)
        edx_1 = 1
    else
        edx_1 = edx * 2
    
    int32_t eax_5 = sub_745f3f(edx_1 << 2)
    int32_t eax_11
    
    if (eax_5 != 0)
        int32_t ecx_7 = *(arg1 + 0x14) << 2
        int32_t esi_4
        int32_t edi_3
        edi_3, esi_4 = __builtin_memcpy(eax_5, *(arg1 + 0x1c), ecx_7 u>> 2 << 2)
        __builtin_memcpy(edi_3, esi_4, ecx_7 & 3)
        j__free(*(arg1 + 0x1c))
        *(arg1 + 0x1c) = eax_5
        int32_t eax_8 = *(arg1 + 0x14)
        int32_t eax_9
        
        if (eax_8 == 0)
            eax_9 = 1
        else
            eax_9 = eax_8 * 2
        
        eax_11 = sub_745f3f(eax_9 << 2)
    
    if (eax_5 != 0 && eax_11 != 0)
        int32_t ecx_14 = *(arg1 + 0x14) << 2
        int32_t esi_6
        int32_t edi_5
        edi_5, esi_6 = __builtin_memcpy(eax_11, *(arg1 + 0x18), ecx_14 u>> 2 << 2)
        __builtin_memcpy(edi_5, esi_6, ecx_14 & 3)
        j__free(*(arg1 + 0x18))
        *(arg1 + 0x18) = eax_11
        eax_1 = var_8
        goto label_42a511
    
    result = 0x8007000e
else
    do
        int32_t esi_2 = *(*(arg1 + 0x18) + (eax_1 << 2))
        
        if (arg2 u<= esi_2)
            if (arg2 u>= esi_2)
                break
            
            ecx = eax_1
        else
            edi_1 = eax_1 + 1
        
        eax_1 = (ecx + edi_1) u>> 1
        var_8 = eax_1
    while (edi_1 u< ecx)
    
    if (edi_1 u>= ecx)
        goto label_42a46d
    
label_42a547:
    
    if (arg3 != 0)
        *arg3 = eax_1

j__free(0)
return result
