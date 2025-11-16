// 函数: sub_5a7850
// 地址: 0x5a7850
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
POINT point
point.x = arg2
point.y = arg3
ClientToScreen(*arg1, &point)
ScreenToClient(arg1[0x19], &point)
int32_t x = point.x
int32_t y = point.y
struct HWND__* hWnd = arg1[0x19]
RECT rect
__builtin_memset(&rect, 0, 0x10)
GetClientRect(hWnd, &rect)
int32_t result

if (rect.left s<= x && x s< rect.right && rect.top s<= y && y s< rect.bottom)
    result.b = 1
    sub_745f2b(eax_1 ^ &__saved_ebp)
    return result

result.b = 0
sub_745f2b(eax_1 ^ &__saved_ebp)
return result
