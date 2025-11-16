// 函数: sub_66f7b0
// 地址: 0x66f7b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* ecx = arg1[4]

if (ecx u< arg2)
    sub_7431bf("invalid string position")
    noreturn

if (0xffffffff - ecx u<= arg3)
    sub_743191("string too long")
    noreturn

if (arg3 != 0)
    char* eax_1 = ecx + arg3
    
    if (sub_541df0(arg1, eax_1, 0) != 0)
        int32_t eax_3 = arg1[5]
        int32_t* edx_1
        
        if (eax_3 u< 0x10)
            edx_1 = arg1
        else
            edx_1 = *arg1
        
        int32_t* ecx_2
        
        if (eax_3 u< 0x10)
            ecx_2 = arg1
        else
            ecx_2 = *arg1
        
        int32_t eax_4 = arg1[4]
        
        if (eax_4 != arg2)
            _memcpy(ecx_2 + arg2 + arg3, edx_1 + arg2, eax_4 - arg2)
        
        sub_607fa0(arg1, arg2, arg3, arg4)
        bool cond:0_1 = arg1[5] u< 0x10
        arg1[4] = eax_1
        
        if (not(cond:0_1))
            *(*arg1 + eax_1) = 0
            return arg1
        
        *(arg1 + eax_1) = 0

return arg1
