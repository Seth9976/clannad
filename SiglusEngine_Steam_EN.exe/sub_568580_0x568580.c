// 函数: sub_568580
// 地址: 0x568580
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax
sub_55a6a0(eax, arg1, 0x13, 0x623384)
HWND hDlg_1 = data_1af0a5c
HWND hDlg = hDlg_1

if (data_1315238 == 0)
    UpdateWindow(hDlg_1)
    SetWindowPos(hDlg_1, 0xfffffffe, data_1315240, data_1315244, data_1315248, data_131524c, 
        SWP_SHOWWINDOW)
    hDlg_1 = data_1af0a5c

if (GetDlgItem(hDlg_1, 0x4f32) != 0)
    HWND hWnd = GetDlgItem(hDlg_1, 0x4f32)
    sub_55a710(SendMessageA(hWnd, 0x1036, 0, SendMessageA(hWnd, 0x1037, 0, 0) | 0x21), 0x4f32, 
        hDlg_1, data_1315238, &data_1315238, 2, &data_63fd78, 0x63fca8)

LRESULT eax_5

for (int32_t i = 0; i s< 7; i += 1)
    int32_t esi_2 = (&data_612b40)[i]
    HWND hWnd_1 = GetDlgItem(hDlg, 0x4f32)
    int32_t lParam = 5
    int32_t i_1 = i
    int32_t var_3c_1 = 0
    int32_t var_30_1 = esi_2
    int32_t i_2 = i
    eax_5 = SendMessageA(hWnd_1, 0x1007, 0, &lParam)

int32_t result
int32_t ecx_1
result, ecx_1 = sub_4d1ba0(eax_5, 0x38, &data_20cc9b0, 0xa5)

if (data_1315238 != 0)
    return result

int32_t var_58_4 = ecx_1
return sub_4c1470(result, data_1315254, data_1315250, hDlg, 0x4f32)
