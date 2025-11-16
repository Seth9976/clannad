// 函数: sub_4c1570
// 地址: 0x4c1570
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

HWND hWnd = GetDlgItem(arg2, arg4)
int32_t eax_1 = SendMessageA(hWnd, 0x102c, arg3, 2) & 0xfffffffd

if (arg5 != 0)
    eax_1 |= 2

int32_t var_34 = eax_1
int32_t lParam = 8
WPARAM var_3c = arg3
int32_t var_30 = 2
return SendMessageA(hWnd, 0x102b, arg3, &lParam)
