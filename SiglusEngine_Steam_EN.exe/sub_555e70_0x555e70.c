// 函数: sub_555e70
// 地址: 0x555e70
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

GetWindowRect(data_20c2de4, &data_20c2de8)
CreateStatusWindowA(0x54020103, &data_6138e3, data_20c2de4, 0xc350)
SendMessageA(GetDlgItem(data_20c2de4, 0xc350), 0x401, 0x100, &data_6138e3)
HWND hWnd = GetDlgItem(data_20c2de4, 0x4f32)
int32_t lParam = 7
int32_t var_5c = 0
int32_t var_58 = 0xf0
int32_t var_54 = 0x620dcc
SendMessageA(hWnd, 0x101b, 0, &lParam)
HWND hWnd_1 = GetDlgItem(data_20c2de4, 0x4f32)
int32_t lParam_1 = 7
int32_t var_30 = 0
int32_t var_2c = 0xa0
int32_t var_28 = 0x620dd4
SendMessageA(hWnd_1, 0x101b, 1, &lParam_1)
HWND hWnd_2 = GetDlgItem(data_20c2de4, 0x4f32)
lParam = 7
int32_t var_5c_1 = 0
int32_t var_58_1 = 0x5a
char const* const var_54_1 = "Mod:Col(Kage)"
SendMessageA(hWnd_2, 0x101b, 2, &lParam)
HWND hWnd_3 = GetDlgItem(data_20c2de4, 0x4f32)
sub_4c0df0(
    sub_4c0df0(SendMessageA(hWnd_3, 0x1036, 0, SendMessageA(hWnd_3, 0x1037, 0, 0) | 0x20), 0x4f4f, 
        data_20c2de4, 0x20c2df8, 1, 0), 
    0x4f32, data_20c2de4, 0x20c2e30, 1, 2)
int32_t var_6c_4 = sub_555840()
return sub_4d5720(data_20c2de4)
