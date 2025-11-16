// 函数: sub_9a5900
// 地址: 0x9a5900
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* ecx = arg2
int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(*(ecx + 0x24))
int32_t edi_1 = (eax_1 - edx) s>> 1
arg2 = nullptr
int32_t eax_3 = sub_99cca0(ecx, (edi_1 * arg6) << 2)
int32_t __saved_ebx_1 = arg6
int32_t var_14 = eax_3

if (__saved_ebx_1 s> 0)
    int32_t esi_1 = arg5
    int32_t* eax_5 = arg4 - esi_1
    void* edx_5 = eax_3 - esi_1
    arg4 = eax_5
    void* var_10_1 = edx_5
    int32_t i_1 = __saved_ebx_1
    int32_t i
    
    do
        int32_t ebx_1 = *(eax_5 + esi_1)
        
        if (*esi_1 != 0)
            arg2 += 1
        
        int32_t eax_6 = 0
        
        if (edi_1 s> 0)
            int32_t* edx_6 = edx_5 + esi_1
            int32_t var_c_1 = __saved_ebx_1 << 2
            
            do
                int32_t ecx_2 = *(ebx_1 + (eax_6 << 2))
                eax_6 += 1
                *edx_6 = ecx_2
                edx_6 = &edx_6[__saved_ebx_1]
            while (eax_6 s< edi_1)
            
            esi_1 = arg5
            edx_5 = var_10_1
            __saved_ebx_1 = arg6
        
        eax_5 = arg4
        esi_1 += 4
        i = i_1
        i_1 -= 1
        arg5 = esi_1
    while (i != 1)
    
    if (arg2 != 0)
        int32_t __saved_ebx = __saved_ebx_1
        sub_9a62d0(&var_14, arg3, arg1, &var_14, 1, arg7)

return 0
