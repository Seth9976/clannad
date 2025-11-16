// 函数: sub_4e6290
// 地址: 0x4e6290
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

WNDCLASSEXA param0
param0.style = 0x2b
param0.lpfnWndProc = sub_4e4050
param0.cbClsExtra = 0
param0.cbWndExtra = 4
param0.hInstance = data_134cebc

if (arg1 != 0)
    param0.hIcon = arg1
    param0.hIconSm = arg1
else
    param0.hIcon = LoadIconA(arg1, 0x7f00)
    param0.hIconSm = LoadIconA(nullptr, 0x7f00)

param0.hCursor = LoadCursorA(nullptr, 0x7f00)
param0.hbrBackground = 0
data_1af476c = 0xc9
param0.lpszMenuName = 0xc9
param0.lpszClassName = 0x1bfdb18
param0.cbSize = 0x30

if (RegisterClassExA(&param0) != 0)
    HINSTANCE hInstance = data_134cebc
    data_1c051e4 = 0x82ca0000
    data_1c051e8 = 0
    int32_t nHeight = GetSystemMetrics(SM_CYSCREEN)
    int32_t nWidth = GetSystemMetrics(SM_CXSCREEN)
    HWND hWnd = CreateWindowExA(WS_EX_LEFT, 0x1bfdb18, 0x1bfe038, data_1c051e4, 0, 0, nWidth, 
        nHeight, nullptr, nullptr, hInstance, nullptr)
    data_7027bc = hWnd
    
    if (hWnd != 0)
        UpdateWindow(hWnd)
        return 1

return 0
