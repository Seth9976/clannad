// 函数: sub_6c7f20
// 地址: 0x6c7f20
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

HMENU hMenu = *arg1

if (hMenu != 0)
    return sub_6c7f40(arg1, GetMenuItemCount(hMenu))

return 0xffffffff
