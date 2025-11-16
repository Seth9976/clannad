// 函数: sub_549250
// 地址: 0x549250
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void var_5c
int32_t eax_1 = __security_cookie ^ &var_5c

if ((GetWindowLongA(GetDlgItem(data_20c17c4, 0x4f1b), 0xfffffff0) & 0x8000000) != 0)
    sub_5f02dd(eax_1 ^ &var_5c)
    return 0

SetFocus(GetDlgItem(data_20c17c4, 0x4f1b))
SendMessageA(GetDlgItem(data_20c17c4, 0x4f4f), 0xf4, 0, 1)
SendMessageA(GetDlgItem(data_20c17c4, 0x4e54), 0xf4, 0, 1)
SendMessageA(GetDlgItem(data_20c17c4, 0x4f68), 0xf4, 0, 1)
WPARAM wParam = sub_4c1520(data_20c17c4, 0x4f1b)
int32_t lParam

if (wParam == 0xffffffff)
    HWND hWnd = GetDlgItem(data_20c17c4, 0x4f1b)
    LRESULT eax_8 = SendMessageA(hWnd, 0x1027, 0, 0)
    int32_t lParam_1 = 2
    SendMessageA(hWnd, 0x100e, 0, &lParam_1)
    int32_t var_18
    int32_t var_10
    sub_4c1300(SendMessageA(hWnd, 0x1014, 0, neg.d((var_10 - var_18) * eax_8)), data_20c17c4, 0, 
        0x4f1b, 0xfffffffe)
    HWND hWnd_1 = GetDlgItem(data_20c17c4, 0x4f1b)
    int32_t eax_11 = SendMessageA(hWnd_1, 0x102c, 0, 2) | 2
    lParam = 8
    int32_t var_4c_1 = eax_11
    int32_t var_54_1 = 0
    int32_t var_48_1 = 2
    SendMessageA(hWnd_1, 0x102b, 0, &lParam)
    sub_5f02dd(eax_1 ^ &var_5c)
    return 1

LRESULT eax_13

if (data_20c2008 != 0)
    eax_13 = sub_495490(wParam)

if (data_20c2008 == 0 || eax_13 != 0)
    HWND hWnd_2 = GetDlgItem(data_20c17c4, 0x4f1b)
    int32_t eax_15 = SendMessageA(hWnd_2, 0x102c, wParam, 2) | 2
    lParam = 8
    int32_t var_4c_2 = eax_15
    WPARAM wParam_1 = wParam
    int32_t var_48_2 = 2
    eax_13 = SendMessageA(hWnd_2, 0x102b, wParam, &lParam)

sub_4c11f0(eax_13, data_20c17c4, wParam, 0x4f1b, 1)
sub_5f02dd(eax_1 ^ &var_5c)
return 1
