// 函数: sub_558650
// 地址: 0x558650
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_c = ecx
GetWindowRect(data_20c35dc, &data_20c35e0)
CreateStatusWindowA(0x54020103, &data_6138e3, data_20c35dc, 0xc350)
int32_t eax_4 = sub_4c0df0(
    sub_4c0df0(
        sub_4c0df0(SendMessageA(GetDlgItem(data_20c35dc, 0xc350), 0x401, 0x100, &data_6138e3), 
            0x4f4f, data_20c35dc, 0x20c35f0, 1, 0), 
        0x4e54, data_20c35dc, 0x20c3628, 1, 0), 
    0x4f32, data_20c35dc, 0x20c3660, 1, 4)
sub_4c0df0(eax_4, 0x4f33, data_20c35dc, 0x20c3698, 1, 2)
sub_5585b0()
sub_5584c0(*(data_20c36d4 + (data_20c3880 << 2)))
int32_t ecx_7 = SendMessageA(GetDlgItem(data_20c35dc, 0x4f32), 0x186, data_20c3880, 0)

if (data_1319220 != 0)
    int32_t var_1c_1 = ecx_7
    return sub_4d5720(data_20c35dc)

HWND hWnd = data_20c35dc
UpdateWindow(hWnd)
SetWindowPos(hWnd, 0xfffffffe, data_1319224, data_1319228, data_131922c, data_1319230, 
    SWP_SHOWWINDOW)
WPARAM wParam = data_1319234

if (wParam s< 0)
    wParam = 0

SendMessageA(GetDlgItem(data_20c35dc, 0x4f32), 0x197, wParam, 0)
WPARAM wParam_1 = data_1319238

if (wParam_1 s< 0)
    wParam_1 = 0

return SendMessageA(GetDlgItem(data_20c35dc, 0x4f33), 0x197, wParam_1, 0)
