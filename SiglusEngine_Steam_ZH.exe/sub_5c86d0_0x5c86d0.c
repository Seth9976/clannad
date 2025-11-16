// 函数: sub_5c86d0
// 地址: 0x5c86d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp

if (arg3 == 0)
    sub_745f2b(eax_1 ^ &__saved_ebp)
    return 0x80004003

if (*(arg1 + 0x30) != 0)
    HDC eax_4 = GetDC(*(arg1 - 0x28))
    *arg3 = eax_4
    
    if (eax_4 != 0)
        *(arg1 + 0x30) = 0
        
        if ((arg2 & 1) == 0)
            RECT var_18
            GetClientRect(*(arg1 - 0x28), &var_18)
            char eax_5 = arg2
            
            if ((eax_5 & 4) != 0)
                struct HDC__* hdc = CreateCompatibleDC(*arg3)
                
                if (hdc != 0)
                    HBITMAP eax_7 = CreateCompatibleBitmap(*arg3, var_18.right - var_18.left, 
                        var_18.bottom - var_18.top)
                    
                    if (eax_7 != 0)
                        HGDIOBJ ho = SelectObject(hdc, eax_7)
                        
                        if (ho != 0)
                            DeleteObject(ho)
                            *(arg1 + 0x2c) = *arg3
                            *arg3 = hdc
                        else
                            DeleteObject(eax_7)
                            DeleteDC(hdc)
                    else
                        DeleteDC(hdc)
                
                eax_5 = arg2
            
            if ((eax_5 & 2) != 0)
                FillRect(*arg3, &var_18, 6)
        
        sub_745f2b(eax_1 ^ &__saved_ebp)
        return 0

sub_745f2b(eax_1 ^ &__saved_ebp)
return 0x80004005
