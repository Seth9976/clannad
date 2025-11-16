// 函数: sub_6d8290
// 地址: 0x6d8290
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* ecx
void* var_8 = ecx
int32_t* edi = arg4

if (edi s<= 0 || arg3 s< 0 || (arg2 == 0 && arg3 s> 0))
    sub_6d42e0(ecx, "internal error: array realloc")
    noreturn

if (edi s<= 0x7fffffff - arg3)
    int32_t* eax_2 = sub_6d8240(0x7fffffff - arg3, arg3 + edi, ecx, arg5)
    arg4 = eax_2
    
    if (eax_2 != 0)
        if (arg3 s> 0)
            sub_748840(eax_2, arg2, arg3 * arg5)
            eax_2 = arg4
        
        _memset(arg3 * arg5 + eax_2, 0, edi * arg5)
        return arg4

return 0
