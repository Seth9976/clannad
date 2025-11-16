// 函数: sub_76474c
// 地址: 0x76474c
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = *arg2

if (arg1 == eax)
    int32_t ecx_1 = *arg3
    
    if (ecx_1 != arg4)
        int32_t eax_3 = sub_74cda8(ecx_1, eax, 2)
        
        if (eax_3 == 0)
            return 0
        
        *arg3 = eax_3
    else
        int32_t eax_1 = sub_74cccf(eax, 2)
        *arg3 = eax_1
        
        if (eax_1 == 0)
            return 0
        
        *arg5 = 1
        sub_748840(*arg3, arg4, *arg2)
    
    *arg2 <<= 1

return 1
