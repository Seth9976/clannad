// 函数: sub_69fa60
// 地址: 0x69fa60
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c9b18
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ebx
ebx.b = 0
int32_t var_8_1 = 0
HMENU hMenu_2 = CreatePopupMenu()
char ecx = 0
HMENU hMenu_1 = hMenu_2

if (hMenu_2 != 0)
    ecx = 1

sub_69fb30(&hMenu_1, nullptr)
ebx.b = sub_6a0700(&hMenu_1)
HMENU hMenu = hMenu_1

if (hMenu != 0 && ecx != 0)
    DestroyMenu(hMenu)

hMenu.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return hMenu
