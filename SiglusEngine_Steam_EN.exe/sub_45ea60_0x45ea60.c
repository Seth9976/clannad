// 函数: sub_45ea60
// 地址: 0x45ea60
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
HWND eax_2 = GetFocus()

if (eax_2 == data_7027bc && (data_7037a8 != 0xffffffff || data_7037ac != 0xffffffff
        || data_7037b0 != 0xffffffff || data_7037b4 != 0xffffffff))
    void rect
    
    if (sub_45e980(&rect) != 0)
        BOOL eax_4 = ClipCursor(&rect)
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return eax_4
    
    data_7037a8 = 0xffffffff
    data_7037ac = 0xffffffff
    data_7037b0 = 0xffffffff
    data_7037b4 = 0xffffffff
    eax_2 = ClipCursor(nullptr)

sub_5f02dd(eax_1 ^ &__saved_ebp)
return eax_2
