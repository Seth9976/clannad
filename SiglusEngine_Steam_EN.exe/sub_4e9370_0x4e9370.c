// 函数: sub_4e9370
// 地址: 0x4e9370
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (data_702fc0 == 0 || data_1af09e0 != 0)
    return 

HWND hWnd_2 = data_1c054ec

if (hWnd_2 != 0)
    ShowWindow(hWnd_2, SW_HIDE)
    InvalidateRect(data_1c054ec, nullptr, 1)

data_1af4e70 = 1
int32_t i

do
    i = ShowCursor(1)
while (i s<= 0)
HWND hWnd = data_7027bc
data_1af17a0 = 1
data_1af17cc = 1
MessageBoxA(hWnd, 0x61e740, 0x61e738, MB_OK)
int32_t eax = data_7037a0
data_1af17cc = 0
data_1af17a0 = 0
data_1af4e70 = eax

if (eax != 0)
    int32_t i_1
    
    do
        i_1 = ShowCursor(1)
    while (i_1 s<= 0)
else
    int32_t i_2
    
    do
        i_2 = ShowCursor(0)
    while (i_2 s>= 0)

HWND hWnd_1 = data_1c054ec

if (hWnd_1 != 0)
    ShowWindow(hWnd_1, SW_SHOW)
    InvalidateRect(data_1c054ec, nullptr, 1)

data_1af09e0 = 1
