// 函数: sub_541eb0
// 地址: 0x541eb0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg2 != 0)
    int32_t ecx = arg1[5]
    int32_t* eax_1
    
    if (ecx u< 0x10)
        eax_1 = arg1
    else
        eax_1 = *arg1
    
    if (arg2 u>= eax_1)
        int32_t* edx_1
        
        if (ecx u< 0x10)
            edx_1 = arg1
        else
            edx_1 = *arg1
        
        if (arg1[4] + edx_1 u> arg2)
            if (ecx u< 0x10)
                return sub_541b40(arg1, arg1, arg2 - arg1, arg3)
            
            return sub_541b40(arg1, arg1, arg2 - *arg1, arg3)

if (arg3 u> 0xfffffffe)
    sub_743191("string too long")
    noreturn

int32_t eax_8 = arg1[5]

if (eax_8 u>= arg3)
    if (arg3 != 0)
        goto label_541f38
    
    arg1[4] = arg3
    
    if (eax_8 u< 0x10)
        *arg1 = 0
        return arg1
    
    **arg1 = 0
    return arg1

sub_541ca0(arg1, arg3, arg1[4])

if (arg3 != 0)
label_541f38:
    int32_t* eax_9
    
    if (arg1[5] u< 0x10)
        eax_9 = arg1
    else
        eax_9 = *arg1
    
    if (arg3 != 0)
        sub_748840(eax_9, arg2, arg3)
    
    bool cond:0_1 = arg1[5] u< 0x10
    arg1[4] = arg3
    
    if (not(cond:0_1))
        *(*arg1 + arg3) = 0
        return arg1
    
    *(arg1 + arg3) = 0

return arg1
