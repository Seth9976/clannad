// 函数: sub_6c1460
// 地址: 0x6c1460
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
RECT rect
__builtin_memset(&rect, 0, 0x10)
GetWindowRect(*(arg1 + 4), &rect)
int32_t hWnd = GetWindowLongW(*(arg1 + 4), 0xfffffff8)
POINT point
point.x = rect.left
point.y = rect.top
ScreenToClient(hWnd, &point)
POINT point_1
point_1.x = rect.right
point_1.y = rect.bottom
ScreenToClient(hWnd, &point_1)
rect.left = point.x
rect.top = point.y
rect.right = point_1.x
int32_t y = point_1.y
rect.bottom = y
int128_t xmm0
xmm0.d = rect.left
xmm0:4.d = rect.top
xmm0:8.d = rect.right
xmm0:0xc.d = rect.bottom
*(arg1 + 0x48) = xmm0
sub_745f2b(eax_1 ^ &__saved_ebp)
return y
