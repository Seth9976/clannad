// 函数: sub_5741b0
// 地址: 0x5741b0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
sub_55a6a0(eax_1, arg1, 0x12, 0x624184)
HWND hDlg_1 = data_1af0a58
HWND hDlg_2 = hDlg_1
HWND hDlg = hDlg_1

if (data_1315118 == 0)
    UpdateWindow(hDlg_1)
    SetWindowPos(hDlg_1, 0xfffffffe, data_1315120, data_1315124, data_1315128, data_131512c, 
        SWP_SHOWWINDOW)
    hDlg_1 = data_1af0a58
    hDlg_2 = hDlg_1

HWND eax_2 = GetDlgItem(hDlg_1, 0x4f32)

if (eax_2 != 0)
    HWND hWnd = GetDlgItem(hDlg_1, 0x4f32)
    eax_2 = sub_55a710(SendMessageA(hWnd, 0x1036, 0, SendMessageA(hWnd, 0x1037, 0, 0) | 0x21), 
        0x4f32, hDlg_2, data_1315118, &data_1315118, 4, &data_63fff0, 0x63ffe0)

for (int32_t i = 0; i s< 0x29; i += 1)
    int32_t ecx_1 = *((i << 2) + &data_613040)
    HWND hWnd_1
    
    if (ecx_1 s< 0)
        if (ecx_1 == 0xffffffff)
            hWnd_1 = GetDlgItem(hDlg, 0x4f32)
            int32_t var_bc_2 = 0x624130
            goto label_574338
        
        if (ecx_1 == 0xffffff9e)
            hWnd_1 = GetDlgItem(hDlg, 0x4f32)
            int32_t var_bc_3 = 0x62414c
            goto label_574338
        
        if (ecx_1 == 0xffffff9d)
            hWnd_1 = GetDlgItem(hDlg, 0x4f32)
            int32_t var_bc_4 = 0x624168
            goto label_574338
    else
        void* var_e0_3 = ecx_1 * 0x1bc + &data_12a2da0
        int32_t var_e4_4 = ecx_1
        void var_8c
        sub_4c84d0(&var_8c, "%03d : %s")
        hWnd_1 = GetDlgItem(hDlg, 0x4f32)
        void* var_bc_1 = &var_8c
    label_574338:
        int32_t lParam = 5
        int32_t i_1 = i
        int32_t var_c8_1 = 0
        int32_t i_2 = i
        eax_2 = SendMessageA(hWnd_1, 0x1007, 0, &lParam)

int32_t result
int32_t ecx_2
result, ecx_2 = sub_4d1ba0(eax_2, 0x1ec, &data_20f2160, 0xa5)

if (data_1315118 == 0)
    int32_t var_e0_5 = ecx_2
    result = sub_4c1470(result, data_1315134, data_1315130, hDlg, 0x4f32)

sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
