// 函数: sub_4c1470
// 地址: 0x4c1470
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
HWND hWnd = GetDlgItem(arg4, arg5)
LRESULT eax_3 = SendMessageA(hWnd, 0x1027, 0, 0)

if (arg2 != 0xffffffff)
    int32_t lParam = 8
    WPARAM var_5c_1 = arg2
    int32_t var_54_1 = 3
    int32_t var_50_1 = 3
    SendMessageA(hWnd, 0x102b, arg2, &lParam)

int32_t lParam_1 = 2
SendMessageA(hWnd, 0x100e, 0, &lParam_1)
int32_t var_18
int32_t var_10
LRESULT result = SendMessageA(hWnd, 0x1014, 0, (var_10 - var_18) * (arg3 - eax_3))
sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
