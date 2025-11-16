// 函数: sub_45a190
// 地址: 0x45a190
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if ((&data_7036ac)[arg2] == 0)
    return 

HMENU hMenu = (&data_1cd5340)[arg3]

if (hMenu == 0)
    return 

if (arg3 s>= 0)
    sub_45a140(arg3)

int32_t var_8_1 = 0

if (arg6 == 0)
    char* eax_1 = arg2 * 0x1bc + 0x12a2dc8
    
    for (int32_t i = 0; i s< 0xa; )
        if (*eax_1 != 0)
            var_8_1 = 1
            break
        
        i += 1
        eax_1 = &eax_1[0x28]

int32_t ecx = arg5

if ((&data_7036ac)[arg2] == 2)
    ecx = 0xffffffff

uint32_t uIDNewItem

if (arg4 s< 0xbb8)
    uIDNewItem = arg4 * 0x14 + 0x4e21
else
    uIDNewItem = arg4 + 0x4e20

arg1 = arg2 * 0x1bc
void* var_10_1 = arg1
void* lpNewItem_1 = arg1 + &data_12a2da0
void* lpNewItem = lpNewItem_1

if (arg2 == 0x19 && data_108f354 == 2)
    arg1 = &data_130028c
    
    if (data_13132e0 != 1)
        arg1 = lpNewItem_1
    
    lpNewItem_1 = arg1
    lpNewItem = arg1

if (ecx s< 0)
    if (ecx == 0xffffffff)
        AppendMenuA(hMenu, MF_GRAYED, uIDNewItem, lpNewItem_1)
        return 
    
    if (ecx == 0xfffffffe)
        AppendMenuA(hMenu, MF_CHECKED, uIDNewItem, lpNewItem_1)
        return 
    
    if (ecx == 0xfffffffd)
        AppendMenuA(hMenu, MF_BYCOMMAND, uIDNewItem, lpNewItem_1)
    
    return 

if (var_8_1 != 0)
    int32_t i_1 = 0
    (&data_1cd53d0)[arg2] = CreatePopupMenu()
    
    do
        if (*(var_10_1 + i_1 * 0x28 + 0x12a2dc8) != 0)
            enum MENU_ITEM_FLAGS uFlags
            
            if (ecx - 1 != i_1)
                uFlags = MF_BYCOMMAND
            else
                uFlags = MF_CHECKED
            
            AppendMenuA((&data_1cd53d0)[arg2], uFlags, uIDNewItem + i_1, 
                var_10_1 + i_1 * 0x28 + 0x12a2dc8)
            
            if (i_1 == 0xffffffff)
                AppendMenuA((&data_1cd53d0)[arg2], MF_SEPARATOR, 0, nullptr)
        
        i_1 += 1
    while (i_1 s< 0xa)
    
    AppendMenuA(hMenu, MF_POPUP, (&data_1cd53d0)[arg2], lpNewItem)
    return 

if (ecx != 0)
    AppendMenuA(hMenu, MF_CHECKED, uIDNewItem, lpNewItem_1)
    return 

AppendMenuA(hMenu, MF_BYCOMMAND, uIDNewItem, lpNewItem_1)
