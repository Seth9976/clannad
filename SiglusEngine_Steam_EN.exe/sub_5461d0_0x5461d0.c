// 函数: sub_5461d0
// 地址: 0x5461d0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

RECT rect
int32_t eax_1 = __security_cookie ^ &rect

if (data_1af40f4 != data_1c051d0 || data_1af40f0 != data_1c051cc)
    EnableWindow(GetDlgItem(data_20c1730, 0x4e6c), 0)
else
    SendDlgItemMessageA(data_20c1730, 0x504d, 0xf1, 1, 0)

HWND hWnd_1 = GetDlgItem(data_20c1730, 0x4e6c)
data_20c1738 = GetWindowLongA(hWnd_1, 0xfffffffc)
SetWindowLongA(hWnd_1, 0xfffffffc, sub_546150)
HWND hWnd_2 = GetDlgItem(data_20c1730, 0x4e6b)
data_20c173c = GetWindowLongA(hWnd_2, 0xfffffffc)
SetWindowLongA(hWnd_2, 0xfffffffc, sub_546190)
int32_t var_12c = data_1c051cc
int32_t var_130_6 = data_1c051d0
void string
sub_4c84d0(&string, "The current resolution is %d * %d.")
SetDlgItemTextA(data_20c1730, 0x4fac, &string)
HWND hWnd = data_20c1730
data_20c1734 = 0xf
SetTimer(hWnd, 0x3e7, 0x3e8, nullptr)
int32_t eax_7 = data_20c1734
int32_t ecx_1

if (eax_7 s> 0)
    int32_t var_12c_2 = eax_7
    sub_4c84d0(&string, "The game will return to the previous resolution in %d seconds.")
    ecx_1 = SetDlgItemTextA(data_20c1730, 0x4fe9, &string)
else
    ecx_1 = sub_5460e0(0)

int32_t var_12c_4 = ecx_1
sub_4d5720(data_20c1730)
SetFocus(GetDlgItem(data_20c1730, 0x4e6b))
SendMessageA(GetDlgItem(data_20c1730, 0x4e6b), 0xf4, 1, 1)
GetWindowRect(data_20c1730, &rect)
int32_t eax_10 = sub_4d18c0(2)
int32_t X = rect.right - 0x20 + modu.dp.d(0:eax_10, 0x64)
uint32_t temp1_1 = modu.dp.d(0:(sub_4d18c0(2)), 0x15e)
BOOL result = SetCursorPos(X, rect.bottom - 0x10e + temp1_1)
sub_5f02dd(eax_1 ^ &rect)
return result
