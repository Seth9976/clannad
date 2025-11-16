// 函数: sub_575560
// 地址: 0x575560
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
sub_55a6a0(eax_1, arg1, 0x1b, 0x624578)
HWND hDlg_1 = data_1af0a7c
HWND hDlg_2 = hDlg_1
HWND hDlg = hDlg_1

if (data_1315b38 == 0)
    UpdateWindow(hDlg_1)
    SetWindowPos(hDlg_1, 0xfffffffe, data_1315b40, data_1315b44, data_1315b48, data_1315b4c, 
        SWP_SHOWWINDOW)
    hDlg_1 = data_1af0a7c
    hDlg_2 = hDlg_1

if (GetDlgItem(hDlg_1, 0x4f32) != 0)
    HWND hWnd = GetDlgItem(hDlg_1, 0x4f32)
    sub_55a710(SendMessageA(hWnd, 0x1036, 0, SendMessageA(hWnd, 0x1037, 0, 0) | 0x21), 0x4f32, 
        hDlg_2, data_1315b38, &data_1315b38, 2, &data_640000, 0x63ffb4)

int32_t lParam
LRESULT eax_6

for (int32_t i = 0; i s< 5; i += 1)
    int32_t esi_1 = (&data_613150)[i]
    HWND hWnd_1 = GetDlgItem(hDlg, 0x4f32)
    lParam = 5
    int32_t i_3 = i
    int32_t var_148_1 = 0
    int32_t var_13c_1 = esi_1
    int32_t i_4 = i
    eax_6 = SendMessageA(hWnd_1, 0x1007, 0, &lParam)

int32_t i_1 = 0

if (data_7031bc s> 0)
    do
        int32_t i_2 = i_1
        void var_10c
        sub_4c84d0(&var_10c, "OBJ %03d")
        HWND hWnd_2 = GetDlgItem(hDlg, 0x4f32)
        lParam = 5
        int32_t var_14c_1 = i_1 + 5
        int32_t var_130_1 = i_1 + 5
        int32_t var_148_2 = 0
        void* var_13c_2 = &var_10c
        eax_6 = SendMessageA(hWnd_2, 0x1007, 0, &lParam)
        i_1 += 1
    while (i_1 s< data_7031bc)

int32_t result
int32_t ecx_2
result, ecx_2 = sub_4d1ba0(eax_6, 0x1028, &data_20f2350, 0xa5)

if (data_1315b38 == 0)
    int32_t var_160_5 = ecx_2
    result = sub_4c1470(result, data_1315b54, data_1315b50, hDlg, 0x4f32)

sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
