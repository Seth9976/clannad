// 函数: sub_6c7c60
// 地址: 0x6c7c60
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

HMENU hMenu = *arg1

if (hMenu != 0)
    if (arg1[1].b == 0)
        *arg1 = 0
    else
        DestroyMenu(hMenu)

*arg1 = 0
arg1[1].b = 0
HMENU result = CreateMenu()
*arg1 = result

if (result == 0)
    result.b = 0
    return result

arg1[1].b = 1
result.b = 1
return result
