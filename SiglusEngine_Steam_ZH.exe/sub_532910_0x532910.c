// 函数: sub_532910
// 地址: 0x532910
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
            
            return sub_532870(arg1, arg1, (arg2 - eax_4) s>> 1, arg3)

void* ecx_2 = arg1[4]

if (0xffffffff - ecx_2 u<= arg3)
    sub_743191("string too long")
    noreturn

if (arg3 != 0)
    void* eax_7 = ecx_2 + arg3
    
    if (sub_52e660(arg1, eax_7, 0) != 0)
        int32_t* ecx_4
        
        if (arg1[5] u< 8)
            ecx_4 = arg1
        else
            ecx_4 = *arg1
        
        if (arg3 != 0)
            sub_748840(ecx_4 + (arg1[4] << 1), arg2, arg3 * 2)
        
        sub_52e940(arg1, eax_7)

return arg1
