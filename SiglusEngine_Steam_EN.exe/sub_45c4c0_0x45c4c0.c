// 函数: sub_45c4c0
// 地址: 0x45c4c0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

HMENU hMenu = GetMenu(data_7027bc)

if (hMenu != 0)
    if (data_7036a4 == 0)
        return EnableMenuItem(hMenu, 1, 0x401)
    
    EnableMenuItem(hMenu, 1, MF_BYPOSITION)
    hMenu = GetSubMenu(hMenu, 1)
    
    if (hMenu != 0)
        BOOL i_2 = GetMenuItemCount(hMenu)
        BOOL i_1 = i_2
        
        if (i_1 s> 0)
            BOOL i
            
            do
                i_2 = DeleteMenu(hMenu, 0, MF_BYPOSITION)
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        data_1cd5340 = hMenu
        data_1cd5370 = 0
        data_1cd53a0 = 1
        return sub_45ab90(i_2, 1, 0, 1)

return hMenu
