// 函数: sub_69faf0
// 地址: 0x69faf0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

HMENU hMenu = *arg1

if (hMenu != 0)
    if (arg1[1].b != 0)
        BOOL eax = DestroyMenu(hMenu)
        *arg1 = 0
        arg1[1].b = 0
        return eax
    
    *arg1 = 0

*arg1 = 0
arg1[1].b = 0
return hMenu
