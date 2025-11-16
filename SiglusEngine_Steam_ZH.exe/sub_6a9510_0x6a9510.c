// 函数: sub_6a9510
// 地址: 0x6a9510
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

HMENU hMenu = arg1[0xc]

if (hMenu != 0)
    if (arg1[0xd].b == 0)
        arg1[0xc] = 0
    else
        DestroyMenu(hMenu)

arg1[0xc] = 0
arg1[0xd].b = 0
HMENU hMenu_1 = arg1[0xa]

if (hMenu_1 != 0)
    if (arg1[0xb].b == 0)
        arg1[0xa] = 0
    else
        DestroyMenu(hMenu_1)

arg1[0xa] = 0
arg1[0xb].b = 0
HMENU hMenu_2 = arg1[8]

if (hMenu_2 != 0)
    if (arg1[9].b == 0)
        arg1[8] = 0
    else
        DestroyMenu(hMenu_2)

arg1[8] = 0
arg1[9].b = 0
HMENU hMenu_3 = arg1[6]

if (hMenu_3 != 0)
    if (arg1[7].b == 0)
        arg1[6] = 0
    else
        DestroyMenu(hMenu_3)

arg1[6] = 0
arg1[7].b = 0
HMENU hMenu_4 = arg1[4]

if (hMenu_4 != 0)
    if (arg1[5].b == 0)
        arg1[4] = 0
    else
        DestroyMenu(hMenu_4)

arg1[4] = 0
arg1[5].b = 0
HMENU hMenu_5 = arg1[2]

if (hMenu_5 != 0)
    if (arg1[3].b == 0)
        arg1[2] = 0
    else
        DestroyMenu(hMenu_5)

arg1[2] = 0
arg1[3].b = 0
HMENU hMenu_6 = arg1[0xe]

if (hMenu_6 != 0)
    if (arg1[0xf].b == 0)
        arg1[0xe] = 0
    else
        DestroyMenu(hMenu_6)

arg1[0xe] = 0
arg1[0xf].b = 0
HMENU hMenu_7 = arg1[0x14]

if (hMenu_7 != 0)
    if (arg1[0x15].b == 0)
        arg1[0x14] = 0
    else
        DestroyMenu(hMenu_7)

arg1[0x14] = 0
arg1[0x15].b = 0
HMENU hMenu_8 = arg1[0x12]

if (hMenu_8 != 0)
    if (arg1[0x13].b == 0)
        arg1[0x12] = 0
    else
        DestroyMenu(hMenu_8)

arg1[0x12] = 0
arg1[0x13].b = 0
HMENU hMenu_9 = arg1[0x10]

if (hMenu_9 != 0)
    if (arg1[0x11].b == 0)
        arg1[0x10] = 0
    else
        DestroyMenu(hMenu_9)

arg1[0x10] = 0
arg1[0x11].b = 0
HMENU hMenu_10 = arg1[0x1c]

if (hMenu_10 != 0)
    if (arg1[0x1d].b == 0)
        arg1[0x1c] = 0
    else
        DestroyMenu(hMenu_10)

arg1[0x1c] = 0
arg1[0x1d].b = 0
HMENU hMenu_11 = *arg1

if (hMenu_11 != 0)
    if (arg1[1].b != 0)
        BOOL eax = DestroyMenu(hMenu_11)
        *arg1 = 0
        arg1[1].b = 0
        return eax
    
    *arg1 = 0

*arg1 = 0
arg1[1].b = 0
return hMenu_11
