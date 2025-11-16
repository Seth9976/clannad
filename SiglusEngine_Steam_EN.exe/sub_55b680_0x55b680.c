// 函数: sub_55b680
// 地址: 0x55b680
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
sub_55a6a0(eax_1, arg1, 0x16, 0x621394)
HWND hDlg_1 = data_1af0a68
HWND hDlg = hDlg_1

if (data_1315598 == 0)
    UpdateWindow(hDlg_1)
    SetWindowPos(hDlg_1, 0xfffffffe, data_13155a0, data_13155a4, data_13155a8, data_13155ac, 
        SWP_SHOWWINDOW)
    hDlg_1 = data_1af0a68

if (GetDlgItem(hDlg_1, 0x4f32) != 0)
    HWND hWnd = GetDlgItem(hDlg_1, 0x4f32)
    sub_55a710(SendMessageA(hWnd, 0x1036, 0, SendMessageA(hWnd, 0x1037, 0, 0) | 0x21), 0x4f32, 
        hDlg_1, data_1315598, &data_1315598, 4, &data_63fa90, &(*Dd#F#F")[2])

LRESULT eax_6

for (int32_t i = 0; i s< 0x20; i += 1)
    int32_t i_1 = i
    void var_10c
    sub_4c84d0(&var_10c, "%03d")
    HWND hWnd_1 = GetDlgItem(hDlg, 0x4f32)
    int32_t lParam = 5
    void* var_138_1 = &var_10c
    int32_t i_2 = i
    int32_t var_144_1 = 0
    int32_t i_3 = i
    eax_6 = SendMessageA(hWnd_1, 0x1007, 0, &lParam)

int32_t result
int32_t ecx_1
result, ecx_1 = sub_4d1ba0(eax_6, 0x104, &data_20c46b0, 0xa5)
data_20c46b0 = 1

if (data_1315598 == 0)
    int32_t var_160_4 = ecx_1
    result = sub_4c1470(result, data_13155b4, data_13155b0, hDlg, 0x4f32)

sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
