// 函数: sub_1ac65e5
// 地址: 0x1ac65e5
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

char* esi = arg1
void* edi = esi

while (*esi != 0)
    void* eax
    eax.b = *esi
    
    if (eax.b == 0x5c || eax.b == 0x2f || eax.b == 0x3a)
        edi = sub_1a9371d(esi)
    
    esi = sub_1a9371d(esi)

if (arg2 == 0)
    return lstrlenA(edi) + 1

lstrcpynA(arg2, edi, arg3)
return 0
