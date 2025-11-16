// 函数: sub_56ebd0
// 地址: 0x56ebd0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

HWND var_4 = arg1
int32_t eax
sub_55a6a0(eax, arg1, 0x1e, 0x623f40)
HWND hDlg = data_1af0a88
sub_56e770()
int32_t eax_1 = data_1315e98

if (eax_1 != 0)
    __builtin_memcpy(&data_1319064, 
        "\x01\x00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x00", 0x14)

HWND hWnd = data_1af0a88

if (eax_1 == 0)
    UpdateWindow(hWnd)
    SetWindowPos(hWnd, 0xfffffffe, data_1315ea0, data_1315ea4, data_1315ea8, data_1315eac, 
        SWP_SHOWWINDOW)

BOOL result

for (int32_t i = 0; i s< 0x14; i += 4)
    WPARAM wParam
    
    if (*(i + &data_1319064) == 0)
        wParam = 0
    else
        wParam = 1
    
    SendDlgItemMessageA(hDlg, *(i + &data_613010), 0xf1, wParam, 0)
    result = EnableWindow(GetDlgItem(hDlg, *(i + &data_612ff0)), *(i + &data_1319064))

return result
