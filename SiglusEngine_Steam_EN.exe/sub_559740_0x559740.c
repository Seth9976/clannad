// 函数: sub_559740
// 地址: 0x559740
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

GetWindowRect(data_20c3888, &data_20c388c)
CreateStatusWindowA(0x54020103, &data_6138e3, data_20c3888, 0xc350)
SendMessageA(GetDlgItem(data_20c3888, 0xc350), 0x401, 0x100, &data_6138e3)
HWND hWnd = GetDlgItem(data_20c3888, 0x4f32)
int32_t lParam = 7
int32_t var_5c = 0
int32_t var_58 = 0x3c
void* const var_54 = &data_621330
SendMessageA(hWnd, 0x101b, 0, &lParam)
HWND hWnd_1 = GetDlgItem(data_20c3888, 0x4f32)
int32_t lParam_1 = 7
int32_t var_30 = 0
int32_t var_2c = 0x14
char const* const var_28 = "WeatherAttach"
SendMessageA(hWnd_1, 0x101b, 1, &lParam_1)
HWND hWnd_2 = GetDlgItem(data_20c3888, 0x4f32)
lParam = 7
int32_t var_5c_1 = 0
int32_t var_58_1 = 0x14
char const* const var_54_1 = "TimeMod"
SendMessageA(hWnd_2, 0x101b, 2, &lParam)
HWND hWnd_3 = GetDlgItem(data_20c3888, 0x4f32)
lParam_1 = 7
int32_t var_30_1 = 0
int32_t var_2c_1 = 0x5a
void* const var_28_1 = &data_62134c
SendMessageA(hWnd_3, 0x101b, 3, &lParam_1)
HWND hWnd_4 = GetDlgItem(data_20c3888, 0x4f32)
lParam = 7
int32_t var_5c_2 = 0
int32_t var_58_2 = 0x32
char const* const var_54_2 = "Status"
SendMessageA(hWnd_4, 0x101b, 4, &lParam)
HWND hWnd_5 = GetDlgItem(data_20c3888, 0x4f32)
lParam_1 = 7
int32_t var_30_2 = 0
int32_t var_2c_2 = 0x1e
void* const var_28_2 = &data_621350
SendMessageA(hWnd_5, 0x101b, 5, &lParam_1)
HWND hWnd_6 = GetDlgItem(data_20c3888, 0x4f32)
SendMessageA(hWnd_6, 0x1036, 0, SendMessageA(hWnd_6, 0x1037, 0, 0) | 0x20)
HWND hWnd_7 = GetDlgItem(data_20c3888, 0x4f33)
lParam_1 = 7
int32_t var_30_3 = 0
int32_t var_2c_3 = 0x50
char const* const var_28_3 = "FileName"
SendMessageA(hWnd_7, 0x101b, 0, &lParam_1)
HWND hWnd_8 = GetDlgItem(data_20c3888, 0x4f33)
lParam = 7
int32_t var_5c_3 = 0
int32_t var_58_3 = 0x28
void* const var_54_3 = &data_62134c
SendMessageA(hWnd_8, 0x101b, 1, &lParam)
HWND hWnd_9 = GetDlgItem(data_20c3888, 0x4f33)
lParam_1 = 7
int32_t var_30_4 = 0
int32_t var_2c_4 = 0x1e
void* const var_28_4 = &data_621350
SendMessageA(hWnd_9, 0x101b, 2, &lParam_1)
HWND hWnd_10 = GetDlgItem(data_20c3888, 0x4f33)
SendMessageA(hWnd_10, 0x1036, 0, SendMessageA(hWnd_10, 0x1037, 0, 0) | 0x20)
HWND hWnd_11 = GetDlgItem(data_20c3888, 0x4f34)
lParam_1 = 7
int32_t var_30_5 = 0
int32_t var_2c_5 = 0x64
char const* const var_28_5 = "FileName"
SendMessageA(hWnd_11, 0x101b, 0, &lParam_1)
HWND hWnd_12 = GetDlgItem(data_20c3888, 0x4f34)
lParam = 7
int32_t var_5c_4 = 0
int32_t var_58_4 = 0x32
char const* const var_54_4 = "Wait"
SendMessageA(hWnd_12, 0x101b, 1, &lParam)
HWND hWnd_13 = GetDlgItem(data_20c3888, 0x4f34)
int32_t eax_10 = sub_4c0df0(
    sub_4c0df0(
        sub_4c0df0(SendMessageA(hWnd_13, 0x1036, 0, SendMessageA(hWnd_13, 0x1037, 0, 0) | 0x20), 
            0x4f4f, data_20c3888, 0x20c389c, 1, 0), 
        0x4f32, data_20c3888, 0x20c38d4, 1, 4), 
    0x4f33, data_20c3888, 0x20c390c, 1, 2)
sub_4c0df0(eax_10, 0x4f34, data_20c3888, 0x20c3944, 1, 4)
sub_558f40()
sub_559490()
int32_t var_74_14 = SendMessageA(GetDlgItem(data_20c3888, 0x4f34), 0x1009, 0, 0)
return sub_4d5720(data_20c3888)
