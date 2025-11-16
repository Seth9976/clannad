// 函数: sub_567f10
// 地址: 0x567f10
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
sub_55a6a0(eax_1, arg1, 0xe, 0x62336c)
HWND hDlg_1 = data_1af0a48
HWND hDlg = hDlg_1

if (data_1314c98 == 0)
    UpdateWindow(hDlg_1)
    SetWindowPos(hDlg_1, 0xfffffffe, data_1314ca0, data_1314ca4, data_1314ca8, data_1314cac, 
        SWP_SHOWWINDOW)
    hDlg_1 = data_1af0a48

if (GetDlgItem(hDlg_1, 0x4f32) != 0)
    HWND hWnd = GetDlgItem(hDlg_1, 0x4f32)
    sub_55a710(SendMessageA(hWnd, 0x1036, 0, SendMessageA(hWnd, 0x1037, 0, 0) | 0x21), 0x4f32, 
        hDlg_1, data_1314c98, &data_1314c98, 8, &data_63ff40, 0x63ff20)

for (int32_t i = 0; i s< 0x80; i += 1)
    int32_t i_1 = i
    void var_28
    sub_4c84d0(&var_28, "%03d")
    HWND hWnd_1 = GetDlgItem(hDlg, 0x4f32)
    int32_t lParam = 5
    void* var_54_1 = &var_28
    int32_t i_2 = i
    int32_t var_60_1 = 0
    int32_t i_3 = i
    SendMessageA(hWnd_1, 0x1007, 0, &lParam)

int32_t result = sub_567e10()
sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
