// 函数: sub_55bcf0
// 地址: 0x55bcf0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
sub_55a6a0(eax_1, arg1, 0x20, 0x6213c8)
HWND hDlg_1 = data_1af0a90
HWND hDlg_2 = hDlg_1
HWND hDlg = hDlg_1

if (data_13160d8 == 0)
    UpdateWindow(hDlg_1)
    SetWindowPos(hDlg_1, 0xfffffffe, data_13160e0, data_13160e4, data_13160e8, data_13160ec, 
        SWP_SHOWWINDOW)
    hDlg_1 = data_1af0a90
    hDlg_2 = hDlg_1

if (GetDlgItem(hDlg_1, 0x4f32) != 0)
    HWND hWnd = GetDlgItem(hDlg_1, 0x4f32)
    sub_55a710(SendMessageA(hWnd, 0x1036, 0, SendMessageA(hWnd, 0x1037, 0, 0) | 0x21), 0x4f32, 
        hDlg_2, data_13160d8, &data_13160d8, 2, &data_63faa0, Dd#F#F")

int32_t lParam
void var_10c
int32_t i

for (i = 0; i s< 0x10; i += 1)
    int32_t i_2 = i
    sub_4c84d0(&var_10c, "K[%d]")
    HWND hWnd_1 = GetDlgItem(hDlg, 0x4f32)
    lParam = 5
    void* var_13c_1 = &var_10c
    int32_t i_4 = i
    int32_t var_148_1 = 0
    int32_t i_6 = i
    SendMessageA(hWnd_1, 0x1007, 0, &lParam)

LRESULT eax_6

for (int32_t i_1 = 0; i_1 s< 0x28; )
    int32_t i_3 = i_1
    sub_4c84d0(&var_10c, "L[%02d]")
    HWND hWnd_2 = GetDlgItem(hDlg, 0x4f32)
    lParam = 5
    void* var_13c_2 = &var_10c
    int32_t i_5 = i
    int32_t var_148_2 = 0
    int32_t i_7 = i
    eax_6 = SendMessageA(hWnd_2, 0x1007, 0, &lParam)
    i_1 += 1
    i += 1

LRESULT result
int32_t ecx_1
result, ecx_1 = sub_4d1ba0(eax_6, 0x4a0, 0x20c5000, 0xa5)

if (data_13160d8 == 0)
    int32_t var_160_5 = ecx_1
    result = sub_4c1470(result, data_13160f4, data_13160f0, hDlg, 0x4f32)

sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
