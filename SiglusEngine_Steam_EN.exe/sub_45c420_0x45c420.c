// 函数: sub_45c420
// 地址: 0x45c420
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

HMENU hMenu = GetMenu(data_7027bc)

if (hMenu != 0)
    if (data_7036a0 == 0)
        return EnableMenuItem(hMenu, 0, 0x401)
    
    EnableMenuItem(hMenu, 0, MF_BYPOSITION)
    hMenu = GetSubMenu(hMenu, 0)
    
    if (hMenu != 0)
        int32_t i_2
        int32_t ecx
        i_2, ecx = GetMenuItemCount(hMenu)
        int32_t i_1 = i_2
        
        if (i_1 s> 0)
            int32_t i
            
            do
                ecx = DeleteMenu(hMenu, 0, MF_BYPOSITION)
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        data_1cd5340 = hMenu
        data_1cd5370 = 0
        data_1cd53a0 = 1
        return sub_45afb0(ecx, 0) __tailcall

return hMenu
