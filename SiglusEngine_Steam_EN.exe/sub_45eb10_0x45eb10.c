// 函数: sub_45eb10
// 地址: 0x45eb10
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
RECT rect
GetClipCursor(&rect)
int32_t esi

if (rect.left != 0 || rect.top != 0)
    esi = 1
else
    int32_t eax_2 = GetSystemMetrics(SM_CXSCREEN)
    
    if (rect.right != eax_2)
        esi = 1
    else
        int32_t eax_3 = GetSystemMetrics(SM_CYSCREEN)
        
        if (rect.bottom != eax_3)
            esi = 1
        else
            esi = 0

HWND bottom = GetFocus()

if (bottom != data_7027bc || (data_7037a8 == 0xffffffff && data_7037ac == 0xffffffff
        && data_7037b0 == 0xffffffff && data_7037b4 == 0xffffffff))
    if (esi != 1)
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return bottom
    
    bottom = ClipCursor(nullptr)
    sub_5f02dd(eax_1 ^ &__saved_ebp)
    return bottom

if (esi != 0)
    int32_t var_28
    bottom = sub_45e980(&var_28)
    
    if (bottom == 0)
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return bottom
    
    int32_t var_24
    int32_t var_20
    
    if (rect.left == var_28 && rect.top == var_24 && rect.right == var_20)
        bottom = rect.bottom
        int32_t var_1c
        
        if (bottom == var_1c)
            sub_5f02dd(eax_1 ^ &__saved_ebp)
            return bottom

HWND eax_7 = sub_45ea60()
sub_5f02dd(eax_1 ^ &__saved_ebp)
return eax_7
