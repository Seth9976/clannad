// 函数: sub_66ec40
// 地址: 0x66ec40
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t edi = arg4
int32_t eax_2 = (edi - arg3) s>> 1
int16_t result

if (eax_2 s<= 0x28)
    int16_t eax_20 = *arg2
    int16_t edx_4 = *arg3
    
    if (eax_20 u< edx_4)
        *arg2 = edx_4
        *arg3 = eax_20
    
    result = *edi
    
    if (result u< *arg2)
        int16_t result_1 = result
        *edi = *arg2
        *arg2 = result_1
        result = *arg3
        
        if (result_1 u< result)
            *arg2 = result
            *arg3 = result_1
else
    int32_t eax_4
    int32_t edx
    edx:eax_4 = sx.q(eax_2 + 1)
    int32_t eax_6 = (eax_4 + (edx & 7)) s>> 3
    int16_t ebx_1 = *arg3
    int32_t eax_7 = eax_6 * 2
    void* edx_3 = &arg3[eax_6]
    int16_t eax_8 = *edx_3
    
    if (eax_8 u< ebx_1)
        *edx_3 = ebx_1
        *arg3 = eax_8
    
    int16_t eax_10 = arg3[eax_6 * 2]
    
    if (eax_10 u< *edx_3)
        arg3[eax_6 * 2] = *edx_3
        edi = arg4
        *edx_3 = eax_10
        int16_t eax_11 = *arg3
        
        if (eax_10 u< eax_11)
            *edx_3 = eax_11
            *arg3 = eax_10
    
    int16_t eax_12 = *arg2
    void* ecx_1 = arg2 - eax_7
    int16_t ebx_3 = *ecx_1
    
    if (eax_12 u< ebx_3)
        *arg2 = ebx_3
        *ecx_1 = eax_12
    
    int16_t eax_14 = arg2[eax_6]
    
    if (eax_14 u< *arg2)
        arg2[eax_6] = *arg2
        edi = arg4
        *arg2 = eax_14
        int16_t eax_15 = *ecx_1
        
        if (eax_14 u< eax_15)
            *arg2 = eax_15
            *ecx_1 = eax_14
    
    int16_t* ebx_6 = edi - (eax_6 << 2)
    int16_t* ecx_3 = edi - eax_7
    int16_t edi_3 = *ebx_6
    int16_t eax_16 = *ecx_3
    int16_t* edi_4 = arg4
    
    if (eax_16 u< edi_3)
        *ecx_3 = edi_3
        edi_4 = arg4
        *ebx_6 = eax_16
    
    uint32_t eax_17 = zx.d(*edi_4)
    arg4 = eax_17
    
    if (eax_17.w u< *ecx_3)
        eax_17.w = *ecx_3
        *edi_4 = eax_17.w
        int16_t edi_6 = arg4.w
        *ecx_3 = edi_6
        int16_t edi_7 = *ebx_6
        
        if (edi_6 u< edi_7)
            *ecx_3 = edi_7
            *ebx_6 = edi_6
    
    int16_t eax_19 = *arg2
    int16_t edi_8 = *edx_3
    
    if (eax_19 u< edi_8)
        *arg2 = edi_8
        *edx_3 = eax_19
    
    result = *ecx_3
    
    if (result u< *arg2)
        int16_t result_2 = result
        *ecx_3 = *arg2
        *arg2 = result_2
        result = *edx_3
        
        if (result_2 u< result)
            *arg2 = result
            *edx_3 = result_2

return result
