// 函数: sub_55aff0
// 地址: 0x55aff0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
POINT point
GetCursorPos(&point)

for (int32_t* i = &data_1af0a10; i s< &data_1af0b10; i = &i[1])
    HWND hWnd = *i
    
    if (hWnd != 0)
        RECT rect
        GetWindowRect(hWnd, &rect)
        int32_t x = point.x
        
        if (x s>= rect.left && x s<= rect.right)
            int32_t y = point.y
            
            if (y s>= rect.top && y s<= rect.bottom)
                sub_5f02dd(eax_1 ^ &__saved_ebp)
                return 1

sub_5f02dd(eax_1 ^ &__saved_ebp)
return 0
