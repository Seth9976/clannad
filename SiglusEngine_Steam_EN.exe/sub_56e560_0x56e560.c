// 函数: sub_56e560
// 地址: 0x56e560
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax
sub_55a6a0(eax, arg1, 0x10, 0x623f00)
HWND hDlg_1 = data_1af0a50
HWND hDlg = hDlg_1

if (data_1314ed8 == 0)
    UpdateWindow(hDlg_1)
    SetWindowPos(hDlg_1, 0xfffffffe, data_1314ee0, data_1314ee4, data_1314ee8, data_1314eec, 
        SWP_SHOWWINDOW)
    hDlg_1 = data_1af0a50

if (GetDlgItem(hDlg_1, 0x4f32) != 0)
    HWND hWnd = GetDlgItem(hDlg_1, 0x4f32)
    sub_55a710(SendMessageA(hWnd, 0x1036, 0, SendMessageA(hWnd, 0x1037, 0, 0) | 0x21), 0x4f32, 
        hDlg_1, data_1314ed8, &data_1314ed8, 5, &data_63ffa0, PdP((")

LRESULT eax_5

for (int32_t i = 0; i s< 0x2a; i += 1)
    int32_t esi_2 = (&data_612f00)[i]
    HWND hWnd_1 = GetDlgItem(hDlg, 0x4f32)
    int32_t lParam = 5
    int32_t i_1 = i
    int32_t var_3c_1 = 0
    int32_t var_30_1 = esi_2
    int32_t i_2 = i
    eax_5 = SendMessageA(hWnd_1, 0x1007, 0, &lParam)

int32_t result
int32_t ecx_1
result, ecx_1 = sub_4d1ba0(eax_5, 0x8c8, &data_20ef270, 0xa5)

if (data_1314ed8 != 0)
    return result

int32_t var_58_4 = ecx_1
return sub_4c1470(result, data_1314ef4, data_1314ef0, hDlg, 0x4f32)
