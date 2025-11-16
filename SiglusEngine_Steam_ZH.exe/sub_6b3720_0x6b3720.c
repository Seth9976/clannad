// 函数: sub_6b3720
// 地址: 0x6b3720
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
                return sub_6b3810(arg1, arg1, arg2 - arg1, arg3)
            
            return sub_6b3810(arg1, arg1, arg2 - *arg1, arg3)

int32_t* ecx_3 = arg1[4]

if (0xffffffff - ecx_3 u<= arg3)
    sub_743191("string too long")
    noreturn

if (arg3 != 0 && sub_541df0(arg1, ecx_3 + arg3, 0) != 0)
    int32_t* ecx_5
    
    if (arg1[5] u< 0x10)
        ecx_5 = arg1
    else
        ecx_5 = *arg1
    
    if (arg3 != 0)
        sub_748840(arg1[4] + ecx_5, arg2, arg3)
    
    int32_t ecx_7 = ecx_3 + arg3
    bool cond:0_1 = arg1[5] u< 0x10
    arg1[4] = ecx_7
    
    if (not(cond:0_1))
        (*arg1)[ecx_7] = 0
        return arg1
    
    arg1[ecx_7] = 0

return arg1
