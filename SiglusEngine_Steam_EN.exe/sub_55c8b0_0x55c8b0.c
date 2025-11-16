// 函数: sub_55c8b0
// 地址: 0x55c8b0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
sub_55a6a0(eax_1, arg1, 0xf, 0x6215c8)
HWND hDlg_1 = data_1af0a4c
HWND hDlg = hDlg_1

if (data_1314db8 == 0)
    UpdateWindow(hDlg_1)
    SetWindowPos(hDlg_1, 0xfffffffe, data_1314dc0, data_1314dc4, data_1314dc8, data_1314dcc, 
        SWP_SHOWWINDOW)
    hDlg_1 = data_1af0a4c

if (GetDlgItem(hDlg_1, 0x4f32) != 0)
    HWND hWnd = GetDlgItem(hDlg_1, 0x4f32)
    sub_55a710(SendMessageA(hWnd, 0x1036, 0, SendMessageA(hWnd, 0x1037, 0, 0) | 0x21), 0x4f32, 
        hDlg_1, data_1314db8, &data_1314db8, 0x3e, &data_63fbb0, 0x63fab0)

LRESULT result

for (int32_t i = 0; i s< 0x40; i += 1)
    int32_t i_1 = i
    void var_28
    sub_4c84d0(&var_28, "%03d")
    HWND hWnd_1 = GetDlgItem(hDlg, 0x4f32)
    int32_t lParam = 5
    void* var_54_1 = &var_28
    int32_t i_2 = i
    int32_t var_60_1 = 0
    int32_t i_3 = i
    result = SendMessageA(hWnd_1, 0x1007, 0, &lParam)

if (data_1af0a4c != 0)
    result = sub_55c7b0()

sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
