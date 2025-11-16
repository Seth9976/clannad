// 函数: sub_4d57b0
// 地址: 0x4d57b0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (data_1c051e0 != 0)
    HMENU hMenu = GetMenu(data_7027bc)
    
    if (hMenu != 0)
        DestroyMenu(hMenu)
    
    SetMenu(data_7027bc, nullptr)
    data_1c051e0 = 0

HMENU lpMenuName = data_1af476c

if (lpMenuName == 0)
    return lpMenuName

HMENU hMenu_1 = LoadMenuA(data_134cebc, lpMenuName)
SetMenu(data_7027bc, hMenu_1)
data_1c051e0 = 1
return sub_4e3760(1)
