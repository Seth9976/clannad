// 函数: sub_5554c0
// 地址: 0x5554c0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

GetWindowRect(data_20c2d28, &data_20c2d2c)
CreateStatusWindowA(0x54020103, &data_6138e3, data_20c2d28, 0xc350)
sub_4c0df0(
    sub_4c0df0(
        sub_4c0df0(SendMessageA(GetDlgItem(data_20c2d28, 0xc350), 0x401, 0x100, &data_6138e3), 
            0x4f4f, data_20c2d28, 0x20c2d74, 1, 0), 
        0x500d, data_20c2d28, 0x20c2d3c, 1, 6), 
    0x4f32, data_20c2d28, 0x20c2dac, 1, 2)
HWND hWnd = GetDlgItem(data_20c2d28, 0x4f32)
int32_t lParam = 7
int32_t var_5c = 0
int32_t var_58 = 0xb4
int32_t var_54 = 0x620d00
SendMessageA(hWnd, 0x101b, 0, &lParam)
HWND hWnd_1 = GetDlgItem(data_20c2d28, 0x4f32)
int32_t lParam_1 = 7
int32_t var_30 = 0
int32_t var_2c = 0x28
int32_t var_28 = 0x620d08
SendMessageA(hWnd_1, 0x101b, 1, &lParam_1)
HWND hWnd_2 = GetDlgItem(data_20c2d28, 0x4f32)
SendMessageA(hWnd_2, 0x1036, 0, SendMessageA(hWnd_2, 0x1037, 0, 0) | 0x20)
int32_t var_6c_3 = sub_555370()
return sub_4d5720(data_20c2d28)
