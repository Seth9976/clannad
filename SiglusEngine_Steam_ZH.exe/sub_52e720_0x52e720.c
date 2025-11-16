// 函数: sub_52e720
// 地址: 0x52e720
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg2 != 0)
    int32_t ecx = arg1[5]
    int32_t* eax_1
    
    if (ecx u< 8)
        eax_1 = arg1
    else
        eax_1 = *arg1
    
    if (arg2 u>= eax_1)
        int32_t* edx_1
        
        if (ecx u< 8)
            edx_1 = arg1
        else
            edx_1 = *arg1
        
        if (edx_1 + (arg1[4] << 1) u> arg2)
            int32_t* eax_4
            
            if (ecx u< 8)
                eax_4 = arg1
            else
                eax_4 = *arg1
            
            return sub_52e3c0(arg1, arg1, (arg2 - eax_4) s>> 1, arg3)

if (arg3 u> 0x7ffffffe)
    sub_743191("string too long")
    noreturn

int32_t eax_6 = arg1[5]

if (eax_6 u>= arg3)
    if (arg3 != 0)
        goto label_52e7a0
    
    arg1[4] = arg3
    
    if (eax_6 u< 8)
        *arg1 = 0
        return arg1
    
    **arg1 = 0
    return arg1

sub_52e500(arg1, arg3, arg1[4])

if (arg3 != 0)
label_52e7a0:
    int32_t* ecx_3
    
    if (arg1[5] u< 8)
        ecx_3 = arg1
    else
        ecx_3 = *arg1
    
    if (arg3 != 0)
        sub_748840(ecx_3, arg2, arg3 * 2)
    
    bool cond:0_1 = arg1[5] u< 8
    arg1[4] = arg3
    
    if (not(cond:0_1))
        *(*arg1 + (arg3 << 1)) = 0
        return arg1
    
    *(arg1 + (arg3 << 1)) = 0

return arg1
