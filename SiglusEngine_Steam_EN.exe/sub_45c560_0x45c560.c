// 函数: sub_45c560
// 地址: 0x45c560
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
HWND hWnd = data_1c054ec

if (hWnd != 0)
    ShowWindow(hWnd, SW_HIDE)
    InvalidateRect(data_1c054ec, nullptr, 1)

data_1af4e70 = 1
int32_t i

do
    i = ShowCursor(1)
while (i s<= 0)
int32_t ecx = data_7037a4
data_1af17a0 = 1
data_1af17cc = 1
sub_45ee40(ecx, 1)
int32_t result

if (data_12dc5e0 != 0)
    result = sub_54a590(arg1)
else
    data_1cd5340 = CreatePopupMenu()
    int32_t eax_3 = sub_4956b0(0)
    
    if (data_12dc5f4 != 0)
        int32_t ecx_1 = data_12dc5f0
        enum MENU_ITEM_FLAGS uFlags
        uint32_t uIDNewItem
        
        if (arg1 != MF_BYCOMMAND)
            bool cond:1_1 = sub_495490(ecx_1) == 0
            int32_t eax_5 = data_12dc5f0
            int32_t var_8b0_2 = 0x6197a0
            
            if (cond:1_1)
                uIDNewItem = eax_5 + 1
                uFlags = MF_GRAYED
            else
                uIDNewItem = eax_5 + 1
                uFlags = MF_BYCOMMAND
        else
            int32_t var_8b0_1 = 0x6197a0
            uIDNewItem = ecx_1 + 1
            uFlags = arg1
        
        AppendMenuA(data_1cd5340, uFlags, uIDNewItem, 0x6197a0)
    
    uint32_t i_1 = 0
    
    if (data_12dc4d0 s> 0)
        do
            void* eax_8 = sub_495490(i_1)
            void var_48c
            sub_45a350(eax_8, i_1, &var_48c, eax_8, data_12dc4cc)
            enum MENU_ITEM_FLAGS uFlags_1
            uint32_t uIDNewItem_1
            void* lpNewItem
            
            if (eax_8 != 0 || arg1 == MF_BYCOMMAND)
                i_1 += 1
                lpNewItem = &var_48c
                uIDNewItem_1 = i_1
                uFlags_1 = MF_BYCOMMAND
            else
                i_1 += 1
                lpNewItem = &var_48c
                uIDNewItem_1 = i_1
                uFlags_1 = MF_GRAYED
            
            AppendMenuA(data_1cd5340, uFlags_1, uIDNewItem_1, lpNewItem)
        while (i_1 s< data_12dc4d0)
    
    AppendMenuA(data_1cd5340, MF_BYCOMMAND, 0, 0x6144f8)
    
    if (eax_3 != 0xffffffff)
        HMENU esi_2 = data_1cd5340
        uint8_t var_88c[0x400]
        GetMenuStringA(esi_2, eax_3 + 1, &var_88c, 0x400, MF_BYCOMMAND)
        ModifyMenuA(esi_2, eax_3 + 1, MF_CHECKED, eax_3 + 1, &var_88c)
    
    POINT point
    GetCursorPos(&point)
    BOOL eax_10 = TrackPopupMenu(data_1cd5340, TPM_RIGHTBUTTON | TPM_RETURNCMD, point.x, point.y, 
        0, data_7027bc, nullptr)
    DestroyMenu(data_1cd5340)
    
    if (eax_10 != 0)
        result = eax_10 - 1
    else
        result = 0xffffffff

int32_t eax_12 = data_7037a0
data_1392cc4 = 0
data_13701e0 = 1
data_1392cc8 = 1
data_f89aec = 0xffffffff
data_f89af0 = 0xffffffff
data_f89af4 = 0xffffffff
data_f89af8 = 0xffffffff
data_1af17cc = 0
data_1af17a0 = 0
data_1af4e70 = eax_12

if (eax_12 != 0)
    int32_t i_2
    
    do
        i_2 = ShowCursor(1)
    while (i_2 s<= 0)
else
    int32_t i_3
    
    do
        i_3 = ShowCursor(0)
    while (i_3 s>= 0)

HWND hWnd_1 = data_1c054ec

if (hWnd_1 != 0)
    ShowWindow(hWnd_1, SW_SHOW)
    InvalidateRect(data_1c054ec, nullptr, 1)

data_1af1788 = 1
sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
