// 函数: sub_4d4b10
// 地址: 0x4d4b10
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
HMENU top = GetMenu(data_7027bc)
HMENU hMenu = top

if (top != 0)
    int32_t var_20_1 = 0
    int32_t ebx_1 = 0
    top = GetMenuItemCount(top)
    uint32_t uItem = 0
    HMENU top_2 = top
    
    if (top s> 0)
        HMENU top_1 = arg2
        
        do
            RECT lprcItem
            top = GetMenuItemRect(data_7027bc, hMenu, uItem, &lprcItem)
            
            if (var_20_1 != 0)
                top = lprcItem.top
                
                if (top_1 != top)
                    ebx_1 += 1
                    top_1 = top
            else
                top_1 = lprcItem.top
                var_20_1 = 1
            
            uItem += 1
        while (uItem s< top_2)
        
        if (ebx_1 != 0)
            void* cy = arg2 + GetSystemMetrics(SM_CYMENUSIZE) * ebx_1
            int32_t eax_4 = GetSystemMetrics(SM_CXSCREEN)
            int32_t esi_2 = eax_4 - arg1
            int32_t X
            
            if (eax_4 - arg1 s< 0)
                X = neg.d(neg.d(esi_2) s>> 1)
            else
                X = esi_2 s>> 1
            
            int32_t eax_5 = GetSystemMetrics(SM_CYSCREEN)
            void* eax_6 = eax_5 - cy
            int32_t Y
            
            if (eax_5 - cy s< 0)
                Y = neg.d(neg.d(eax_6) s>> 1)
            else
                Y = eax_6 s>> 1
            
            top = SetWindowPos(data_7027bc, 0xfffffffe, X, Y, arg1, cy, 0x60)

sub_5f02dd(eax_1 ^ &__saved_ebp)
return top
