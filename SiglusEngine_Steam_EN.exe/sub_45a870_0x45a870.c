// 函数: sub_45a870
// 地址: 0x45a870
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
BOOL eax_2 = data_7036b0
int32_t esi = 0

if (eax_2 != 0)
    HMENU hMenu = data_1cd5340
    
    if (eax_2 == 2)
        esi = 0xffffffff
    
    if (hMenu != 0)
        eax_2 = sub_45a140(0)
        
        if (esi s>= 0)
            HMENU eax_3 = CreatePopupMenu()
            bool cond:1 = data_12dc5f4 == 0
            data_1cd53d4 = eax_3
            
            if (not(cond:1))
                bool cond:2_1 = sub_495490(data_12dc5f0) == 0
                int32_t eax_5 = data_12dc5f0
                enum MENU_ITEM_FLAGS uFlags
                uint32_t uIDNewItem
                
                if (cond:2_1)
                    uIDNewItem = eax_5 + 0x55f0
                    uFlags = MF_GRAYED
                else
                    uIDNewItem = eax_5 + 0x55f0
                    uFlags = MF_BYCOMMAND
                
                AppendMenuA(data_1cd53d4, uFlags, uIDNewItem, 0x6197a0)
            
            int32_t i = 0
            
            if (data_12dc4d0 s> 0)
                do
                    void* eax_8 = sub_495490(i)
                    void newItem
                    sub_45a350(eax_8, i, &newItem, eax_8, data_12dc4cc)
                    enum MENU_ITEM_FLAGS uFlags_1
                    
                    uFlags_1 = eax_8 == 0 ? MF_GRAYED : MF_BYCOMMAND
                    
                    AppendMenuA(data_1cd53d4, uFlags_1, i + 0x55f0, &newItem)
                    i += 1
                while (i s< data_12dc4d0)
            
            AppendMenuA(data_1cd53d4, MF_BYCOMMAND, 0, 0x6144f8)
            
            if (arg1 != 0xffffffff)
                HMENU esi_2 = data_1cd53d4
                uint8_t var_888[0x400]
                GetMenuStringA(esi_2, arg1 + 0x55f0, &var_888, 0x400, MF_BYCOMMAND)
                ModifyMenuA(esi_2, arg1 + 0x55f0, MF_CHECKED, arg1 + 0x55f0, &var_888)
            
            BOOL eax_10 = AppendMenuA(hMenu, MF_POPUP, data_1cd53d4, 0x12a2f5c)
            sub_5f02dd(eax_1 ^ &__saved_ebp)
            return eax_10
        
        if (esi == 0xffffffff)
            eax_2 = AppendMenuA(hMenu, MF_GRAYED, 0x15, 0x12a2f5c)

sub_5f02dd(eax_1 ^ &__saved_ebp)
return eax_2
