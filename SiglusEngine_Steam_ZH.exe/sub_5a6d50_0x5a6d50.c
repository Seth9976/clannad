// 函数: sub_5a6d50
// 地址: 0x5a6d50
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
HBRUSH eax_2 = CreateSolidBrush(0x808080)

if (arg2 s> 0 && arg3 s> 0)
    RECT var_1c
    var_1c.bottom = arg3
    var_1c.left = 0
    var_1c.top = 0
    var_1c.right = arg2
    FillRect(*(arg1 + 0xfc), &var_1c, eax_2)
    HWND hWnd = *(arg1 + 4)
    
    if (hWnd != 0)
        InvalidateRect(hWnd, &var_1c, 0)

BOOL result = DeleteObject(eax_2)
sub_745f2b(eax_1 ^ &__saved_ebp)
return result
