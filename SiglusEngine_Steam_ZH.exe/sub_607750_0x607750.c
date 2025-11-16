// 函数: sub_607750
// 地址: 0x607750
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

char* edi = arg4
char* esi = arg2
char* result = edi - arg3

if (result s<= 0x28)
    arg2.b = *esi
    result.b = *arg3
    
    if (arg2.b s< result.b)
        *esi = result.b
        *arg3 = arg2.b
    
    arg2.b = *edi
    
    if (arg2.b s< *esi)
        result.b = *esi
        *edi = result.b
        *esi = arg2.b
        result.b = *arg3
        
        if (arg2.b s< result.b)
            *esi = result.b
            *arg3 = arg2.b
else
    int32_t eax_2
    int32_t edx
    edx:eax_2 = sx.q(&result[1])
    int32_t edx_3 = ((edx & 7) + eax_2) s>> 3
    int32_t ebx
    ebx.b = arg3[edx_3]
    char* edx_4 = &arg3[edx_3]
    int32_t var_8_1 = edx_3 * 2
    int32_t eax_3
    eax_3.b = *arg3
    
    if (ebx.b s< eax_3.b)
        *edx_4 = eax_3.b
        *arg3 = ebx.b
    
    ebx.b = arg3[var_8_1]
    
    if (ebx.b s< *edx_4)
        int32_t eax_4
        eax_4.b = *edx_4
        *(var_8_1 + arg3) = eax_4.b
        edi = arg4
        *edx_4 = ebx.b
        eax_4.b = *arg3
        
        if (ebx.b s< eax_4.b)
            *edx_4 = eax_4.b
            *arg3 = ebx.b
    
    char* ecx_1 = esi - edx_3
    result = &esi[edx_3]
    int32_t ebx_1
    ebx_1:1.b = *esi
    ebx_1.b = *ecx_1
    
    if (ebx_1:1.b s< ebx_1.b)
        *esi = ebx_1.b
        *ecx_1 = ebx_1:1.b
    
    ebx_1.b = *result
    
    if (ebx_1.b s< *esi)
        char* result_1 = result
        result.b = *esi
        *result_1 = result.b
        edi = arg4
        *esi = ebx_1.b
        result.b = *ecx_1
        
        if (ebx_1.b s< result.b)
            *esi = result.b
            *ecx_1 = ebx_1.b
    
    char* ecx_3 = edi - edx_3
    char* ebx_3 = edi - var_8_1
    result:1.b = *ecx_3
    result.b = *ebx_3
    
    if (result:1.b s< result.b)
        *ecx_3 = result.b
        *ebx_3 = result:1.b
    
    result:1.b = *edi
    
    if (result:1.b s< *ecx_3)
        result.b = *ecx_3
        *edi = result.b
        *ecx_3 = result:1.b
        result.b = *ebx_3
        
        if (result:1.b s< result.b)
            *ecx_3 = result.b
            *ebx_3 = result:1.b
    
    ebx_3.b = *esi
    result.b = *edx_4
    
    if (ebx_3.b s< result.b)
        *esi = result.b
        *edx_4 = ebx_3.b
    
    ebx_3.b = *ecx_3
    
    if (ebx_3.b s< *esi)
        result.b = *esi
        *ecx_3 = result.b
        *esi = ebx_3.b
        result.b = *edx_4
        
        if (ebx_3.b s< result.b)
            *esi = result.b
            *edx_4 = ebx_3.b

return result
