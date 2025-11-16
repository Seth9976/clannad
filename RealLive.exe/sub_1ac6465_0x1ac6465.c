// 函数: sub_1ac6465
// 地址: 0x1ac6465
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

uint32_t uMode
uMode.w = SetErrorMode(SEM_ALL_ERRORS).w | 0x8001
SetErrorMode(uMode)
int32_t eax = sub_1ac597f()
*(eax + 8) = arg1
*(eax + 0xc) = arg1
void* eax_2 = *(sub_1ac597f() + 4)

if (eax_2 != 0)
    *(eax_2 + 0x68) = arg1
    *(eax_2 + 0x6c) = arg2
    *(eax_2 + 0x70) = arg3
    *(eax_2 + 0x74) = arg4
    sub_1ac64c8(eax_2)

if (*(sub_1ac597f() + 0x14) == 0)
    sub_1ab0952()

return 1
