// 函数: sub_570450
// 地址: 0x570450
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax
int32_t eax_1 = sub_55a6a0(eax, arg1, 0x32, 0x624040)
HWND hDlg = data_1af0ad8
int32_t eax_3 =
    sub_4c0df0(sub_4c0df0(eax_1, 0x4fd8, hDlg, 0x20efcf0, 1, 2), 0x505c, hDlg, 0x20efd28, 1, 2)
data_20f0088 = 0xffffffff
sub_4d1ba0(eax_3, 0x328, 0x20efd60, 0)
SetDlgItemTextA(hDlg, 0x4fd8, &data_6138e3)
BOOL result = SetDlgItemTextA(hDlg, 0x505c, &data_6138e3)
HWND hWnd = data_1af0ad8

if (data_1317518 != 0)
    return result

UpdateWindow(hWnd)
return SetWindowPos(hWnd, 0xfffffffe, data_1317520, data_1317524, data_1317528, data_131752c, 
    SWP_SHOWWINDOW)
