// 函数: sub_45a6f0
// 地址: 0x45a6f0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
BOOL eax_2 = data_7036ac
int32_t esi = 0

if (eax_2 != 0)
    if (eax_2 == 2 || data_187a5c0 == 0)
        esi = 0xffffffff
    
    HMENU hMenu_1 = data_1cd5340
    
    if (hMenu_1 != 0)
        eax_2 = sub_45a140(0)
        
        if (esi s>= 0)
            HMENU hMenu = CreatePopupMenu()
            bool cond:0 = data_12dc5f4 == 0
            data_1cd53d0 = hMenu
            
            if (not(cond:0))
                AppendMenuA(hMenu, MF_BYCOMMAND, data_12dc5f0 + 0x5208, 0x619790)
                hMenu = data_1cd53d0
            
            int32_t i = 0
            
            if (data_12dc4d0 s> 0)
                do
                    void* eax_3 = sub_495490(i)
                    void newItem
                    sub_45a350(eax_3, i, &newItem, eax_3, data_12dc4cc)
                    AppendMenuA(data_1cd53d0, MF_BYCOMMAND, i + 0x5208, &newItem)
                    i += 1
                while (i s< data_12dc4d0)
                
                hMenu = data_1cd53d0
            
            AppendMenuA(hMenu, MF_BYCOMMAND, 0, 0x6144f8)
            
            if (arg1 != 0xffffffff)
                HMENU esi_1 = data_1cd53d0
                uint8_t var_408[0x400]
                GetMenuStringA(esi_1, arg1 + 0x5208, &var_408, 0x400, MF_BYCOMMAND)
                ModifyMenuA(esi_1, arg1 + 0x5208, MF_CHECKED, arg1 + 0x5208, &var_408)
            
            BOOL eax_6 = AppendMenuA(hMenu_1, MF_POPUP, data_1cd53d0, &data_12a2da0)
            sub_5f02dd(eax_1 ^ &__saved_ebp)
            return eax_6
        
        if (esi == 0xffffffff)
            eax_2 = AppendMenuA(hMenu_1, MF_GRAYED, 1, &data_12a2da0)

sub_5f02dd(eax_1 ^ &__saved_ebp)
return eax_2
