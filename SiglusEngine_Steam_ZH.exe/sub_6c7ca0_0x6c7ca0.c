// 函数: sub_6c7ca0
// 地址: 0x6c7ca0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

HMENU hMenu = *arg1

if (hMenu != 0)
    return GetMenuItemCount(hMenu)

return 0xffffffff
