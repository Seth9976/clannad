// 函数: sub_5a6de0
// 地址: 0x5a6de0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
BOOL hWnd = arg1

if (arg2 s< arg4 && arg3 s< arg5)
    HDC eax_2 = *(hWnd + 0xfc)
    int32_t cx = arg4 - arg2
    int32_t cy = arg5 - arg3
    BitBlt(eax_2, arg6, arg7, cx, cy, eax_2, arg2, arg3, SRCCOPY)
    RECT rect
    rect.left = arg6
    rect.right = cx + arg6
    rect.bottom = cy + arg7
    rect.top = arg7
    hWnd = *(hWnd + 4)
    
    if (hWnd != 0)
        hWnd = InvalidateRect(hWnd, &rect, 0)

sub_745f2b(eax_1 ^ &__saved_ebp)
return hWnd
