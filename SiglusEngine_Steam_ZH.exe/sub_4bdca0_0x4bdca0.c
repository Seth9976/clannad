// 函数: sub_4bdca0
// 地址: 0x4bdca0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

char eax = (*(arg1 + 0x6c)).b
uint32_t ecx_1 = zx.d(*(arg1 + 0x6d))
*arg2 = ecx_1
uint32_t eax_1 = zx.d(eax)

if (eax_1 != 1)
    if (eax_1 == 2 && ecx_1 == 0)
        *arg3 = 9
        
        if (arg4 != 0)
            *arg4 = 1
        
        return 0
else if (ecx_1 u< 1)
    *arg3 = 0
    
    if (arg4 != 0)
        *arg4 = 0
    
    return 0

return 0x80004005
