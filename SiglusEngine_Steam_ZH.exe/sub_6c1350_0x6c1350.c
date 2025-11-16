// 函数: sub_6c1350
// 地址: 0x6c1350
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
*arg2 = point.x
arg2[1] = point.y
arg2[2] = point_1.x
arg2[3] = point_1.y
sub_745f2b(eax_1 ^ &__saved_ebp)
return arg2
