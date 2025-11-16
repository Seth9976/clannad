// 函数: sub_45c820
// 地址: 0x45c820
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
HMENU i_1 = __security_cookie ^ &__saved_ebp
HMENU i_3 = i_1

if (data_1af476c != 0)
    HMENU eax_1 = GetMenu(data_7027bc)
    BOOL eax_5 = sub_4cc060(
        sub_4cc060(
            sub_4cc060(sub_4cc060(eax_1, 0x275f, eax_1, nullptr, 1, data_137475c), 0x275e, eax_1, 
                nullptr, 0, data_137475c), 
            0x275b, eax_1, nullptr, 1, data_1333e30), 
        0x275a, eax_1, nullptr, 0, data_1333e30)
    sub_4cc060(
        sub_4cc060(
            sub_4cc060(sub_4cc060(eax_5, 0x2734, eax_1, nullptr, 0, data_1313248), 0x2735, eax_1, 
                nullptr, 1, data_1313248), 
            0x2736, eax_1, nullptr, 2, data_1313248), 
        0x2737, eax_1, nullptr, 3, data_1313248)
    int32_t edi_1 = data_131324c
    uint8_t var_40c[0x404]
    GetMenuStringA(eax_1, 0x2731, &var_40c, 0x400, MF_BYCOMMAND)
    enum MENU_ITEM_FLAGS uFlags
    
    uFlags = edi_1 == 0 ? MF_BYCOMMAND : MF_CHECKED
    
    ModifyMenuA(eax_1, 0x2731, uFlags, 0x2731, &var_40c)
    int32_t edi_2 = data_1313250
    GetMenuStringA(eax_1, 0x273d, &var_40c, 0x400, MF_BYCOMMAND)
    enum MENU_ITEM_FLAGS uFlags_1
    
    uFlags_1 = edi_2 == 0 ? MF_BYCOMMAND : MF_CHECKED
    
    ModifyMenuA(eax_1, 0x273d, uFlags_1, 0x273d, &var_40c)
    int32_t edi_3 = data_1313254
    GetMenuStringA(eax_1, 0x2797, &var_40c, 0x400, MF_BYCOMMAND)
    enum MENU_ITEM_FLAGS uFlags_2
    
    uFlags_2 = edi_3 == 0 ? MF_BYCOMMAND : MF_CHECKED
    
    ModifyMenuA(eax_1, 0x2797, uFlags_2, 0x2797, &var_40c)
    int32_t edi_4 = data_131325c
    GetMenuStringA(eax_1, 0x2733, &var_40c, 0x400, MF_BYCOMMAND)
    enum MENU_ITEM_FLAGS uFlags_3
    
    uFlags_3 = edi_4 == 0 ? MF_BYCOMMAND : MF_CHECKED
    
    ModifyMenuA(eax_1, 0x2733, uFlags_3, 0x2733, &var_40c)
    int32_t edi_5 = data_1313258
    GetMenuStringA(eax_1, 0x272f, &var_40c, 0x400, MF_BYCOMMAND)
    enum MENU_ITEM_FLAGS uFlags_4
    
    uFlags_4 = edi_5 == 0 ? MF_BYCOMMAND : MF_CHECKED
    
    ModifyMenuA(eax_1, 0x272f, uFlags_4, 0x272f, &var_40c)
    int32_t edi_6 = data_1313244
    GetMenuStringA(eax_1, 0x2738, &var_40c, 0x400, MF_BYCOMMAND)
    enum MENU_ITEM_FLAGS uFlags_5
    
    uFlags_5 = edi_6 == 0 ? MF_BYCOMMAND : MF_CHECKED
    
    ModifyMenuA(eax_1, 0x2738, uFlags_5, 0x2738, &var_40c)
    
    for (int32_t i = 0; i s< 0x50; i += 4)
        int32_t edx_1 = *(i + &data_134ce6c)
        
        if (edx_1 != 0xffffffff)
            uint32_t ecx_9 = *(i + &data_610840)
            ModifyMenuA(eax_1, ecx_9, MF_BYCOMMAND, ecx_9, data_134ce50:4 + edx_1)
    
    PSTR lpNewItem
    
    if (data_1313cd4 != 0)
        lpNewItem = 0x619884
    else
        lpNewItem = 0x619868
    
    ModifyMenuA(eax_1, 0x272e, MF_BYCOMMAND, 0x272e, lpNewItem)
    i_1 = nullptr
    HMENU i_2 = nullptr
    
    do
        uint32_t uIDNewItem_1 = *((i_1 << 2) + &data_610890)
        
        if (uIDNewItem_1 != 0)
            enum MENU_ITEM_FLAGS uFlags_6
            uint32_t uIDNewItem
            PSTR lpNewItem_1
            
            if (i_1 u> 0x3f || (&data_1af0a10)[i_1] == 0)
                GetMenuStringA(eax_1, uIDNewItem_1, &var_40c, 0x400, MF_BYCOMMAND)
                lpNewItem_1 = &var_40c
                uIDNewItem = uIDNewItem_1
                uFlags_6 = MF_BYCOMMAND
            else
                GetMenuStringA(eax_1, uIDNewItem_1, &var_40c, 0x400, MF_BYCOMMAND)
                lpNewItem_1 = &var_40c
                uIDNewItem = uIDNewItem_1
                uFlags_6 = MF_CHECKED
            
            ModifyMenuA(eax_1, uIDNewItem_1, uFlags_6, uIDNewItem, lpNewItem_1)
            i_1 = i_2
        
        i_1 = &i_1->unused + 1
        i_2 = i_1
    while (i_1 s< 0x40)
    
    if (data_108f33c != 0)
        sub_45c420()
        i_1 = sub_45c4c0()

sub_5f02dd(i_3 ^ &__saved_ebp)
return i_1
