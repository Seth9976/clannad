// 函数: sub_6800a0
// 地址: 0x6800a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax_2 = (arg4 - arg3) s>> 2
int32_t eax_36

if (eax_2 s<= 0x28)
    if (arg5(arg2, arg3) != 0)
        int32_t ecx_13 = *arg2
        *arg2 = *arg3
        *arg3 = ecx_13
    
    eax_36 = arg5(arg4, arg2)
    
    if (eax_36 != 0)
        int32_t ecx_14 = *arg4
        *arg4 = *arg2
        *arg2 = ecx_14
        eax_36 = arg5(arg2, arg3)
        
        if (eax_36 != 0)
            int32_t ecx_15 = *arg2
            eax_36 = *arg3
            *arg2 = eax_36
            *arg3 = ecx_15
else
    int32_t eax_4
    int32_t edx
    edx:eax_4 = sx.q(eax_2 + 1)
    int32_t eax_6 = (eax_4 + (edx & 7)) s>> 3
    int32_t eax_7 = eax_6 << 2
    int32_t* ebx_1 = &arg3[eax_6]
    
    if (arg5(ebx_1, arg3) != 0)
        int32_t ecx_1 = *ebx_1
        *ebx_1 = *arg3
        *arg3 = ecx_1
    
    if (arg5(&arg3[eax_6 * 2], ebx_1) != 0)
        int32_t ecx_2 = arg3[eax_6 * 2]
        arg3[eax_6 * 2] = *ebx_1
        *ebx_1 = ecx_2
        
        if (arg5(ebx_1, arg3) != 0)
            int32_t ecx_3 = *ebx_1
            *ebx_1 = *arg3
            *arg3 = ecx_3
    
    int32_t* eax_17 = arg2 - eax_7
    
    if (arg5(arg2, eax_17) != 0)
        int32_t ecx_4 = *arg2
        *arg2 = *eax_17
        *eax_17 = ecx_4
    
    if (arg5(&arg2[eax_6], arg2) != 0)
        int32_t ecx_5 = arg2[eax_6]
        arg2[eax_6] = *arg2
        *arg2 = ecx_5
        
        if (arg5(arg2, eax_17) != 0)
            int32_t ecx_6 = *arg2
            *arg2 = *eax_17
            *eax_17 = ecx_6
    
    void* eax_27 = arg4 - (eax_6 << 3)
    int32_t* edi_3 = arg4 - eax_7
    int32_t* var_10_2 = eax_27
    
    if (arg5(edi_3, eax_27) != 0)
        int32_t ecx_7 = *edi_3
        *edi_3 = *var_10_2
        *var_10_2 = ecx_7
    
    if (arg5(arg4, edi_3) != 0)
        int32_t ecx_8 = *arg4
        *arg4 = *edi_3
        *edi_3 = ecx_8
        
        if (arg5(edi_3, var_10_2) != 0)
            int32_t ecx_9 = *edi_3
            *edi_3 = *var_10_2
            *var_10_2 = ecx_9
    
    if (arg5(arg2, ebx_1) != 0)
        int32_t ecx_10 = *arg2
        *arg2 = *ebx_1
        *ebx_1 = ecx_10
    
    eax_36 = arg5(edi_3, arg2)
    
    if (eax_36 != 0)
        int32_t ecx_11 = *edi_3
        *edi_3 = *arg2
        *arg2 = ecx_11
        eax_36 = arg5(arg2, ebx_1)
        
        if (eax_36 != 0)
            int32_t ecx_12 = *arg2
            int32_t eax_38 = *ebx_1
            *arg2 = eax_38
            *ebx_1 = ecx_12
            return eax_38

return eax_36
