// 函数: sub_6c7fa0
// 地址: 0x6c7fa0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

HMENU hMenu = *arg1

if (hMenu != 0)
    uint32_t eax
    eax.b = GetMenuState(hMenu, arg2, MF_BYCOMMAND).b & 8
    return neg.d(sbb.d(eax, eax, 0 u< eax.b))

hMenu.b = 0
return hMenu
