// 函数: sub_4d5870
// 地址: 0x4d5870
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (data_1af476c != 0)
    return sub_4d57b0() __tailcall

HMENU hMenu = GetMenu(data_7027bc)

if (hMenu != 0)
    DestroyMenu(hMenu)

BOOL result = SetMenu(data_7027bc, nullptr)
data_1c051e0 = 0
return result
