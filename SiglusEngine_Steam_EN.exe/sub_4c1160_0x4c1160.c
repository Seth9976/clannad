// 函数: sub_4c1160
// 地址: 0x4c1160
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
HWND hWnd = GetDlgItem(arg2, arg3)
int32_t edi = SendMessageA(hWnd, 0x1004, 0, 0) - 1
LRESULT eax_4 = SendMessageA(hWnd, 0x1027, 0, 0)
int32_t lParam = 2
SendMessageA(hWnd, 0x100e, 0, &lParam)
int32_t var_18
int32_t var_10
LRESULT result = SendMessageA(hWnd, 0x1014, 0, (var_10 - var_18) * (edi - eax_4))
sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
