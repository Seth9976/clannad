// 函数: sub_1ac5067
// 地址: 0x1ac5067
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

arg1[5] = 0
arg1[6] = 0
arg1[6] = 4
arg1[1] = 0
arg1[2] = 1
arg1[3] = 0
arg1[4] = 0
uint32_t eax
int32_t ecx
eax, ecx = TlsAlloc()
*arg1 = eax

if (eax != 0xffffffff)
    InitializeCriticalSection(&arg1[7])
    return arg1

sub_1aab087(ecx)
noreturn
