// 函数: sub_5c84b0
// 地址: 0x5c84b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp

if (arg2 == 0)
    sub_745f2b(eax_1 ^ &__saved_ebp)
    return 0x80004003

HWND hWnd = *(arg1 - 0x28)
int128_t point = *arg2

if (ClientToScreen(hWnd, &point) != 0)
    ClientToScreen(*(arg1 - 0x28), &point:8)

HWND hWnd_1 = GetParent(*(arg1 - 0x28))

if (hWnd_1 != 0 && ScreenToClient(hWnd_1, &point) != 0)
    ScreenToClient(hWnd_1, &point:8)

int32_t Y = point:4.d
int32_t X = point.d
MoveWindow(*(arg1 - 0x28), X, Y, point:8.d - X, point:0xc.d - Y, 1)
sub_745f2b(eax_1 ^ &__saved_ebp)
return 0
