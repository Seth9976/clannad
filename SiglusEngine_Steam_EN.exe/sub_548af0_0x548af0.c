// 函数: sub_548af0
// 地址: 0x548af0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

WINNLSEnableIME(nullptr, 1)
HGLOBAL eax = GlobalAlloc(GHND, 0x20)
int32_t* eax_1 = GlobalLock(eax)
*eax_1 = 4
eax_1[1] = 1
GlobalUnlock(eax)
SendIMEMessageExA(GetActiveWindow(), eax)
GlobalFree(eax)
HWND hWnd = data_1c054ec
data_20c17bc = arg1
data_20c17c0 = arg2

if (hWnd != 0)
    ShowWindow(hWnd, SW_HIDE)
    InvalidateRect(data_1c054ec, nullptr, 1)

data_1af4e70 = 1
int32_t i

do
    i = ShowCursor(1)
while (i s<= 0)
HWND hWndParent = data_7027bc
data_1af17a0 = 1
HINSTANCE hInstance = data_134cebc
data_1af17cc = 1
DialogBoxParamA(hInstance, 0x152, hWndParent, sub_5489c0, 0)
int32_t eax_3 = data_7037a0
data_1af17cc = 0
data_1af17a0 = 0
data_1af4e70 = eax_3

if (eax_3 != 0)
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

HGLOBAL eax_4 = GlobalAlloc(GHND, 0x20)
int32_t* eax_5 = GlobalLock(eax_4)
*eax_5 = 4
eax_5[1] = 0
GlobalUnlock(eax_4)
SendIMEMessageExA(GetActiveWindow(), eax_4)
GlobalFree(eax_4)
return WINNLSEnableIME(nullptr, 0)
