// 函数: sub_556b60
// 地址: 0x556b60
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

HWND hWnd = data_20c2e68
data_20c2e7c = 0xffffffff
GetWindowRect(hWnd, &data_20c2e6c)
CreateStatusWindowA(0x54020103, &data_6138e3, data_20c2e68, 0xc350)
SendMessageA(GetDlgItem(data_20c2e68, 0xc350), 0x401, 0x100, &data_6138e3)
HWND hWnd_1 = GetDlgItem(data_20c2e68, 0x4f32)
int32_t lParam = 7
int32_t var_5c = 0
int32_t var_58 = 0x3c
char const* const var_54 = "SeenNo"
SendMessageA(hWnd_1, 0x101b, 0, &lParam)
HWND hWnd_2 = GetDlgItem(data_20c2e68, 0x4f32)
int32_t lParam_1 = 7
int32_t var_30 = 0
int32_t var_2c = 0x5a
char const* const var_28 = "FlagCnt"
SendMessageA(hWnd_2, 0x101b, 1, &lParam_1)
HWND hWnd_3 = GetDlgItem(data_20c2e68, 0x4f32)
lParam = 7
int32_t var_5c_1 = 0
int32_t var_58_1 = 0x37
int32_t var_54_1 = 0x620eb4
SendMessageA(hWnd_3, 0x101b, 2, &lParam)
HWND hWnd_4 = GetDlgItem(data_20c2e68, 0x4f32)
SendMessageA(hWnd_4, 0x1036, 0, SendMessageA(hWnd_4, 0x1037, 0, 0) | 0x20)
HWND hWnd_5 = GetDlgItem(data_20c2e68, 0x4f33)
lParam_1 = 7
int32_t var_30_1 = 0
int32_t var_2c_1 = 0x6e
char const* const var_28_1 = "FlagNo (Line)"
SendMessageA(hWnd_5, 0x101b, 0, &lParam_1)
HWND hWnd_6 = GetDlgItem(data_20c2e68, 0x4f33)
int32_t eax_8 = sub_4c0df0(
    sub_4c0df0(
        sub_4c0df0(SendMessageA(hWnd_6, 0x1036, 0, SendMessageA(hWnd_6, 0x1037, 0, 0) | 0x24), 
            0x500d, data_20c2e68, 0x20c2e90, 1, 6), 
        0x4f50, data_20c2e68, 0x20c2ec8, 1, 0), 
    0x4f4f, data_20c2e68, 0x20c2f00, 1, 0)
int32_t eax_12 = sub_4c0df0(
    sub_4c0df0(
        sub_4c0df0(sub_4c0df0(eax_8, 0x5019, data_20c2e68, 0x20c2f38, 1, 0), 0x4fa6, data_20c2e68, 
            0x20c2f70, 1, 6), 
        0x5026, data_20c2e68, 0x20c2fa8, 1, 0), 
    0x4f93, data_20c2e68, 0x20c2fe0, 1, 0)
sub_4c0df0(
    sub_4c0df0(sub_4c0df0(eax_12, 0x4f92, data_20c2e68, 0x20c3018, 1, 0), 0x4f32, data_20c2e68, 
        0x20c3050, 1, 2), 
    0x4f33, data_20c2e68, 0x20c3088, 1, 7)
sub_5569a0()
int32_t* eax_15
int32_t edx
eax_15, edx = sub_556840()
int32_t ecx_11 = sub_5562a0(eax_15, edx, data_20c2e68, data_20c2e8c, data_20c2e88)

if (data_13191e0 != 0)
    int32_t var_74_10 = ecx_11
    return sub_4d5720(data_20c2e68)

HWND hWnd_7 = data_20c2e68
UpdateWindow(hWnd_7)
SetWindowPos(hWnd_7, 0xfffffffe, data_13191e4, data_13191e8, data_13191ec, data_13191f0, 
    SWP_SHOWWINDOW)
LRESULT ecx_12 = data_13191f8

if (ecx_12 != 0xffffffff)
    sub_5567b0(ecx_12, *(data_20c2e88 + (ecx_12 << 2)))

HWND hDlg = data_20c2e68
HWND eax_16
int32_t ecx_13
eax_16, ecx_13 = GetDlgItem(hDlg, 0x4f32)
int32_t var_74_8 = ecx_13
sub_4c1470(eax_16, data_13191f8, data_13191f4, hDlg, 0x4f32)
HWND hDlg_1 = data_20c2e68
HWND eax_17
int32_t ecx_15
eax_17, ecx_15 = GetDlgItem(hDlg_1, 0x4f33)
int32_t var_74_9 = ecx_15
return sub_4c1470(eax_17, data_1319200, data_13191fc, hDlg_1, 0x4f33)
