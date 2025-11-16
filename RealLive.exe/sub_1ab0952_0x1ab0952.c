// 函数: sub_1ab0952
// 地址: 0x1ab0952
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

int32_t result = sub_1ac597f()

if (*(result + 0x14) != 0)
    return result

void* eax = sub_1ac56ef()
*(eax + 0x30) = SetWindowsHookExA(~WH_JOURNALRECORD, 0x1ab0e28, nullptr, GetCurrentThreadId())
int32_t eax_3 = sub_1ac556a(0x1c07254, 0x1ac46e3)

if (*(eax_3 + 0x14) != 0)
    (*(eax_3 + 0x14))(*(sub_1ac597f() + 8))

return sub_1ac54a8(0x1c07250, 0x1ac46f8)
