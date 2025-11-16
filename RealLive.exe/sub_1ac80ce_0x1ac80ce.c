// 函数: sub_1ac80ce
// 地址: 0x1ac80ce
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

int32_t eax = sub_1ac597f()
sub_1ac63ce(1)
char* lpClassName = eax + 0x34

while (*lpClassName != 0)
    void* eax_1 = sub_1a93473(lpClassName, 0xa)
    *eax_1 = 0
    UnregisterClassA(lpClassName, *(sub_1ac597f() + 8))
    lpClassName = eax_1 + 1

*(eax + 0x34) = 0
sub_1ac643e(1)
void* eax_4 = *(sub_1ac597f() + 4)

if (eax_4 != 0)
    int32_t eax_5 = *(eax_4 + 0x54)
    
    if (eax_5 != 0)
        eax_5(1, 0)

void* eax_6 = sub_1ac56ef()
int32_t* ecx_2 = *(eax_6 + 0xcc)

if (ecx_2 != 0 && (*(*ecx_2 + 0xb8))() != 0)
    *(eax_6 + 0xcc) = 0

BOOL hhk_1 = sub_1ac597f()

if (*(hhk_1 + 0x14) == 0)
    HHOOK hhk = *(eax_6 + 0x30)
    
    if (hhk != 0)
        UnhookWindowsHookEx(hhk)
        *(eax_6 + 0x30) = 0
    
    hhk_1 = *(eax_6 + 0x2c)
    
    if (hhk_1 != 0)
        hhk_1 = UnhookWindowsHookEx(hhk_1)
        *(eax_6 + 0x2c) = 0

return hhk_1
