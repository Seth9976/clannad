// 函数: sub_55d210
// 地址: 0x55d210
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void var_414
int32_t eax_1 = __security_cookie ^ &var_414
sub_55a6a0(eax_1, arg1, 0x1c, 0x621768)
HWND hDlg = data_1af0a80
data_20c3e34 = 0
sub_4c0df0(
    sub_4c0df0(sub_4c0df0(sub_55ca60(), 0x4e60, hDlg, 0x20c3e38, 1, 3), 0x4e55, hDlg, 0x20c4674, 1, 
        3), 
    0x4e5b, hDlg, 0x20c47b4, 1, 3)
data_20c54b4 = GetWindowLongA(GetDlgItem(hDlg, 0x4e60), 0xfffffffc)
SetWindowLongA(GetDlgItem(hDlg, 0x4e60), 0xfffffffc, sub_55d150)

if (data_1315c58 != 0)
    data_1318c40 = 0
    sub_4cfd70(&data_1318e48, "cap")
    data_1319050.o = data_6248d0
    data_1319060 = 0

SetDlgItemTextA(hDlg, 0x4e5e, &data_6138e3)
SetDlgItemTextA(hDlg, 0x4e59, &data_6138e3)
SetDlgItemTextA(hDlg, 0x4e56, &data_6138e3)
SetDlgItemTextA(hDlg, 0x4e60, &data_1318c40)
SetDlgItemTextA(hDlg, 0x4e55, &data_1318e48)
SetDlgItemInt(hDlg, 0x4e61, data_1319050, 0)
SetDlgItemInt(hDlg, 0x4e57, data_1319054, 0)
int32_t var_424 = data_1319058
void string
sub_4c84d0(&string, "%d")
SetDlgItemTextA(hDlg, 0x4e5c, &string)
WPARAM wParam

if (data_131905c == 0)
    wParam = 0
else
    wParam = 1

SendDlgItemMessageA(hDlg, 0x4e5d, 0xf1, wParam, 0)
WPARAM wParam_1

if (data_1319060 == 0)
    wParam_1 = 0
else
    wParam_1 = 1

SendDlgItemMessageA(hDlg, 0x4e5f, 0xf1, wParam_1, 0)
int32_t var_424_2 = 0x752f - data_1319050
sub_4c84d0(&string, 0x621744)
SetDlgItemTextA(hDlg, 0x4e5f, &string)
SendMessageA(GetDlgItem(hDlg, 0x4e62), 0x465, 0, 0x752f)
SendMessageA(GetDlgItem(hDlg, 0x4e58), 0x465, 0, 0x10064)
SendMessageA(GetDlgItem(hDlg, 0x4e5b), 0x408, 1, 0x20)
SendMessageA(GetDlgItem(hDlg, 0x4e5b), 0x407, 1, 1)
SendMessageA(GetDlgItem(hDlg, 0x4e5b), 0x414, 1, 0)
LRESULT result = SendMessageA(GetDlgItem(hDlg, 0x4e5b), 0x405, 1, data_1319058)
HWND hWnd = data_1af0a80

if (data_1315c58 == 0)
    UpdateWindow(hWnd)
    result = SetWindowPos(hWnd, 0xfffffffe, data_1315c60, data_1315c64, data_1315c68, data_1315c6c, 
        SWP_SHOWWINDOW)

data_20c3e34 = 1
sub_5f02dd(eax_1 ^ &var_414)
return result
