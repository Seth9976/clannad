// 函数: sub_6b3080
// 地址: 0x6b3080
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

char eax = (*(arg1 + 0x3c)).b

if ((eax & 2) != 0)
    return 0xffffffff

if (arg2 == 0xffffffff)
    return 0

if ((eax & 8) != 0)
    int32_t edx_1 = **(arg1 + 0x20)
    
    if (edx_1 != 0)
        int32_t edi_1 = *(arg1 + 0x38)
        
        if (edx_1 u< edi_1)
            int32_t ecx_2 = **(arg1 + 0x30) + edx_1 - edi_1
            **(arg1 + 0x20) = edi_1
            **(arg1 + 0x30) = ecx_2

int32_t edx_2 = **(arg1 + 0x20)
void* i

if (edx_2 == 0)
    i = nullptr
else
    int32_t* edi_2 = *(arg1 + 0x30)
    int32_t ecx_3 = *edi_2
    
    if (edx_2 u< ecx_3 + edx_2)
        *edi_2 = ecx_3 - 1
        int32_t* edx_3 = *(arg1 + 0x20)
        char* esi_1 = *edx_3
        *edx_3 = &esi_1[1]
        *esi_1 = arg2.b
        return arg2
    
    if (edx_2 != 0)
        i = **(arg1 + 0x30) - **(arg1 + 0xc) + edx_2
    else
        i = nullptr

uint32_t ecx_8 = i u>> 1

if (ecx_8 u< 0x20)
    ecx_8 = 0x20
label_6b3139:
    
    while (0x7fffffff - ecx_8 u< i)
        ecx_8 u>>= 1
        
        if (ecx_8 == 0)
            break
    
    if (ecx_8 != 0)
        uint32_t eax_13 = ecx_8 + i
        int32_t* eax_14 = sub_541c70(eax_13)
        int32_t* ecx_11 = **(arg1 + 0xc)
        
        if (i != 0)
            sub_748840(eax_14, ecx_11, i)
        
        int32_t* edi_5
        
        if (i != 0 && i != 0)
            edi_5 = ecx_11
            *(arg1 + 0x38) += eax_14 - ecx_11
            void** ecx_13 = *(arg1 + 0x10)
            void* edx_7 = **(arg1 + 0x20) - ecx_11 + eax_14
            *ecx_13 += eax_14 - edi_5
            **(arg1 + 0x20) = edx_7
            **(arg1 + 0x30) = eax_14 - edx_7 + eax_13
            
            if ((*(arg1 + 0x3c) & 4) == 0)
                void* ecx_19 = **(arg1 + 0x1c) - edi_5 + eax_14
                void* edx_10 = **(arg1 + 0x20) - ecx_19 + 1
                **(arg1 + 0xc) = eax_14
                **(arg1 + 0x1c) = ecx_19
                **(arg1 + 0x2c) = edx_10
            else
                **(arg1 + 0xc) = eax_14
                **(arg1 + 0x1c) = 0
                **(arg1 + 0x2c) = eax_14
        else
            int32_t* eax_15 = *(arg1 + 0x10)
            edi_5 = ecx_11
            *(arg1 + 0x38) = eax_14
            *eax_15 = eax_14
            **(arg1 + 0x20) = eax_14
            **(arg1 + 0x30) = eax_13
            bool cond:0_1 = (*(arg1 + 0x3c) & 4) == 0
            **(arg1 + 0xc) = eax_14
            int32_t* eax_19 = *(arg1 + 0x1c)
            
            if (cond:0_1)
                *eax_19 = eax_14
                **(arg1 + 0x2c) = 1
            else
                *eax_19 = 0
                **(arg1 + 0x2c) = eax_14
        
        if ((*(arg1 + 0x3c) & 1) != 0)
            j__free(edi_5)
        
        int32_t* eax_37 = *(arg1 + 0x30)
        *(arg1 + 0x3c) |= 1
        *eax_37 -= 1
        int32_t* ecx_20 = *(arg1 + 0x20)
        char* edx_11 = *ecx_20
        *ecx_20 = &edx_11[1]
        char eax_39 = arg2.b
        *edx_11 = eax_39
        return eax_39
else if (ecx_8 != 0)
    goto label_6b3139

return 0xffffffff
