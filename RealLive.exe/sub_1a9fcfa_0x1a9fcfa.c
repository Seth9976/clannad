// 函数: sub_1a9fcfa
// 地址: 0x1a9fcfa
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

char* eax = arg1
int32_t ecx = arg2 - 1

if (arg2 != 0)
    while (*eax != 0)
        eax = &eax[1]
        int32_t esi_1 = ecx
        ecx -= 1
        
        if (esi_1 == 0)
            break

if (*eax != 0)
    return arg2

return eax - arg1
