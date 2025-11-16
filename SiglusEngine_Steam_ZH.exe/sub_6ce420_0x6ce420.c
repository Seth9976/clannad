// 函数: sub_6ce420
// 地址: 0x6ce420
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg3
int32_t* eax = arg2

if (arg3 != 0 && eax != 0)
    if (arg4 != 1 && arg4 != 2)
        sub_6d42e0(arg3, "Invalid sCAL unit")
        noreturn
    
    if (arg5 == 0)
        sub_6d42e0(arg3, "Invalid sCAL width")
        noreturn
    
    char* esi_1 = arg5
    void* edx = &esi_1[1]
    int32_t eax_1
    
    do
        eax_1.b = *esi_1
        esi_1 = &esi_1[1]
    while (eax_1.b != 0)
    void* esi_2 = esi_1 - edx
    
    if (esi_1 == edx || *arg5 == 0x2d)
        sub_6d42e0(arg3, "Invalid sCAL width")
        noreturn
    
    if (sub_6cd400(arg5, esi_2) == 0)
        sub_6d42e0(arg3, "Invalid sCAL width")
        noreturn
    
    char* ecx_1 = arg6
    
    if (ecx_1 == 0)
        sub_6d42e0(arg3, "Invalid sCAL height")
        noreturn
    
    int32_t edi
    int32_t var_14_1 = edi
    char* edi_2 = ecx_1
    void* edx_2 = &edi_2[1]
    int32_t eax_2
    
    do
        eax_2.b = *edi_2
        edi_2 = &edi_2[1]
    while (eax_2.b != 0)
    void* edi_3 = edi_2 - edx_2
    
    if (edi_2 == edx_2 || *ecx_1 == 0x2d)
        sub_6d42e0(arg3, "Invalid sCAL height")
        noreturn
    
    if (sub_6cd400(ecx_1, edi_3) == 0)
        sub_6d42e0(arg3, "Invalid sCAL height")
        noreturn
    
    eax[0x3f].b = arg4.b
    int32_t* eax_5 = sub_6d8360(arg3, esi_2 + 1)
    eax[0x40] = eax_5
    
    if (eax_5 != 0)
        sub_748840(eax_5, arg5, esi_2 + 1)
        int32_t* eax_7 = sub_6d8360(arg3, edi_3 + 1)
        eax[0x41] = eax_7
        
        if (eax_7 != 0)
            int32_t* eax_8 = sub_748840(eax_7, arg6, edi_3 + 1)
            eax[2] |= 0x4000
            eax[0x3a] |= 0x100
            return eax_8
        
        sub_6d83a0(arg3, eax[0x40])
        eax[0x40] = 0
    
    eax = sub_6d4470(arg3, "Memory allocation failed while processing sCAL")

return eax
