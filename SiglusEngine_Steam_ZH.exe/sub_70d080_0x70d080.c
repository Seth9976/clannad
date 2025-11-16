// 函数: sub_70d080
// 地址: 0x70d080
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg2 != 0)
    char* ecx = arg1[5]
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
                void* __saved_ebx_1 = arg3
                return sub_70cf70(arg1, ecx, arg1, arg2 - arg1)
            
            void* __saved_ebx = arg3
            return sub_70cf70(arg1, ecx, arg1, arg2 - *arg1)

void* ecx_3 = arg1[4]

if (0xffffffff - ecx_3 u<= arg3)
    sub_743191("string too long")
    noreturn

if (arg3 != 0)
    void* eax_9 = ecx_3 + arg3
    
    if (sub_541df0(arg1, eax_9, 0) != 0)
        int32_t eax_11 = arg1[5]
        int32_t* edx_2
        
        if (eax_11 u< 0x10)
            edx_2 = arg1
        else
            edx_2 = *arg1
        
        int32_t* eax_12
        
        if (eax_11 u< 0x10)
            eax_12 = arg1
        else
            eax_12 = *arg1
        
        void* ecx_5 = arg1[4]
        
        if (ecx_5 != 0)
            _memcpy(eax_12 + arg3, edx_2, ecx_5)
        
        int32_t* eax_14
        
        if (arg1[5] u< 0x10)
            eax_14 = arg1
        else
            eax_14 = *arg1
        
        if (arg3 != 0)
            sub_748840(eax_14, arg2, arg3)
        
        sub_541fc0(arg1, eax_9)

return arg1
