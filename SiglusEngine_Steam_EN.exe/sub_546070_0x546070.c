// 函数: sub_546070
// 地址: 0x546070
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp

if (data_1c054ec != 0)
    POINT point
    GetCursorPos(&point)
    RECT rect
    GetWindowRect(data_1c054ec, &rect)
    int32_t x = point.x
    
    if (x s>= rect.left && x s<= rect.right)
        int32_t y = point.y
        
        if (y s>= rect.top && y s<= rect.bottom)
            sub_5f02dd(eax_1 ^ &__saved_ebp)
            return 1

sub_5f02dd(eax_1 ^ &__saved_ebp)
return 0
