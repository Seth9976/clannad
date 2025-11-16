// 函数: sub_548c60
// 地址: 0x548c60
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
HWND hWnd = GetDlgItem(data_20c17c4, 0x4f1b)
RECT rect
GetClientRect(hWnd, &rect)
LRESULT eax_2 = SendMessageA(hWnd, 0x101d, 0, 0)
LPARAM lParam = rect.right - rect.left - eax_2 - 2

if (lParam s<= 0 || lParam s>= 0x2710)
    lParam = 0x280

LRESULT result = SendMessageA(hWnd, 0x101e, 1, lParam)
sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
