// 函数: sub_4db540
// 地址: 0x4db540
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* result = arg1
char eax = (*(arg1 + 0x98)).b
result = nullptr

if ((eax & 1) == 0 || (eax & 8) == 0)
    *arg5 = 0
else
    int32_t* ecx = *(arg1 + 0x74)
    
    if (ecx == 0)
        *arg5 = 0
    else
        int32_t eax_2 = (*(*ecx + 0x24))(ecx, arg2, arg3, arg4, &result)
        
        if (eax_2 s< 0)
            return 0
        
        if (eax_2 == 1)
            *arg5 = 0

return result
