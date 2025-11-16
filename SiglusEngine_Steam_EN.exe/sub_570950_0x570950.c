// 函数: sub_570950
// 地址: 0x570950
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
sub_55a6a0(eax_1, arg1, 0x11, 0x62406c)
HWND hDlg_1 = data_1af0a54
HWND hDlg = hDlg_1

if (data_1314ff8 == 0)
    UpdateWindow(hDlg_1)
    SetWindowPos(hDlg_1, 0xfffffffe, data_1315000, data_1315004, data_1315008, data_131500c, 
        SWP_SHOWWINDOW)
    hDlg_1 = data_1af0a54

if (GetDlgItem(hDlg_1, 0x4f32) != 0)
    HWND hWnd = GetDlgItem(hDlg_1, 0x4f32)
    sub_55a710(SendMessageA(hWnd, 0x1036, 0, SendMessageA(hWnd, 0x1037, 0, 0) | 0x21), 0x4f32, 
        hDlg_1, data_1314ff8, &data_1314ff8, 4, &data_63ffd0, 0x63ffc0)

LRESULT eax_8

for (int32_t i = 0; i s< 0x10; i += 1)
    uint32_t var_160_3 = i u>> 1
    char const* const var_164_4
    
    if ((i.b & 1) == 0)
        var_164_4 = "%03d Front"
    else
        var_164_4 = "    (Back)"
    
    void var_10c
    sub_4c84d0(&var_10c, var_164_4)
    HWND hWnd_1 = GetDlgItem(hDlg, 0x4f32)
    int32_t lParam = 5
    void* var_138_1 = &var_10c
    int32_t i_1 = i
    int32_t var_144_1 = 0
    int32_t i_2 = i
    eax_8 = SendMessageA(hWnd_1, 0x1007, 0, &lParam)

int32_t result
int32_t ecx_1
result, ecx_1 = sub_4d1ba0(eax_8, 0x84, &data_20f0090, 0xa5)
data_20f0090 = 1

if (data_1314ff8 == 0)
    int32_t var_160_5 = ecx_1
    result = sub_4c1470(result, data_1315014, data_1315010, hDlg, 0x4f32)

sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
