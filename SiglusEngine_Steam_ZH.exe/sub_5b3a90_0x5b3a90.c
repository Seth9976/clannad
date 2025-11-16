// 函数: sub_5b3a90
// 地址: 0x5b3a90
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx = arg2

if (*(arg1 + 0x324) != 0)
    Concurrency::details::ContextBase::ContextBase(ebx, &arg2, arg1 + 0x320)

if (*(arg1 + 0x454) != 0)
    Concurrency::details::ContextBase::ContextBase(ebx, &arg2, arg1 + 0x450)

int32_t i_1 = 0

if ((*(arg1 + 0x308) - *(arg1 + 0x304)) s/ 0x3b4 s> 0)
    int32_t eax_7 = 0
    arg2 = 0
    int32_t ecx_8
    int32_t i
    
    do
        void* esi_2 = *(arg1 + 0x304) + eax_7
        void var_c
        
        if (*(esi_2 + 0x28) != 0)
            Concurrency::details::ContextBase::ContextBase(ebx, &var_c, esi_2 + 0x24)
        void var_10
        
        if (*(esi_2 + 0x158) != 0)
            Concurrency::details::ContextBase::ContextBase(ebx, &var_10, esi_2 + 0x154)
        void var_14
        
        if (*(esi_2 + 0x288) != 0)
            Concurrency::details::ContextBase::ContextBase(ebx, &var_14, esi_2 + 0x284)
        ecx_8 = *(arg1 + 0x308) - *(arg1 + 0x304)
        arg2 += 0x3b4
        i = i_1 + 1
        i_1 = i
        eax_7 = arg2
    while (i s< ecx_8 s/ 0x3b4)

arg2 = 0
int32_t result = (*(arg1 + 0x148) - *(arg1 + 0x144)) s/ 0x15fc

if (result s> 0)
    int32_t esi_5 = 0
    
    do
        sub_5ef110(*(arg1 + 0x144) + esi_5, ebx)
        int32_t ecx_14 = *(arg1 + 0x148) - *(arg1 + 0x144)
        esi_5 += 0x15fc
        arg2 += 1
        result = ecx_14 s/ 0x15fc
    while (arg2 s< result)

return result
