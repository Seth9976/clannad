// 函数: sub_4d5830
// 地址: 0x4d5830
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (data_1c051e0 == 0)
    return 

HMENU hMenu = GetMenu(data_7027bc)

if (hMenu != 0)
    DestroyMenu(hMenu)

SetMenu(data_7027bc, nullptr)
data_1c051e0 = 0
