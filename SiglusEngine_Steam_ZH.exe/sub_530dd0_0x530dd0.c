// 函数: sub_530dd0
// 地址: 0x530dd0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
RECT rect
rect.left = 0
rect.top = 0
rect.right = arg2
BOOL result = *(arg1 + 4)
rect.bottom = arg3
int128_t xmm0
xmm0.d = rect.left
xmm0:4.d = rect.top
xmm0:8.d = rect.right
xmm0:0xc.d = rect.bottom
*(result + 0x38) = xmm0

if (*(arg1 + 0x10) == 0)
    rect.left = 0
    rect.top = 0
    rect.right = arg2
    rect.bottom = arg3
    int32_t dwExStyle = GetWindowLongW(*(*(arg1 + 4) + 4), 0xffffffec)
    AdjustWindowRectEx(&rect, GetWindowLongW(*(*(arg1 + 4) + 4), 0xfffffff0), 0, dwExStyle)
    int128_t xmm0_1
    xmm0_1.d = rect.left
    xmm0_1:4.d = rect.top
    xmm0_1:8.d = rect.right
    xmm0_1:0xc.d = rect.bottom
    *(*(arg1 + 4) + 0x28) = xmm0_1
    HWND hWnd = *(*(arg1 + 4) + 4)
    
    if (hWnd != 0)
        SetWindowPos(hWnd, nullptr, 0, 0, rect.right - rect.left, rect.bottom - rect.top, 0x16)
    
    result = sub_6c1770(*(arg1 + 4))

sub_745f2b(eax_1 ^ &__saved_ebp)
return result
