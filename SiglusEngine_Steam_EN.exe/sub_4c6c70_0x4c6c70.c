// 函数: sub_4c6c70
// 地址: 0x4c6c70
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t esi = data_1af44c4
HDC hDC_1 = GetDC(data_7027bc)
HDC hDC = hDC_1

if (data_20ae984 != esi)
    hDC_1 = sub_4d4070(&data_20af110)
    data_20ae984 = 0xffff2bcf
    data_20af110 = zx.o(0)
    sub_4d4390(hDC_1, &data_20af110, hDC, esi)
    data_20ae984 = esi
else if (data_20af110.d == 0)
    sub_4d4390(hDC_1, &data_20af110, hDC, esi)
    data_20ae984 = esi

ReleaseDC(data_7027bc, hDC)

if (data_20af110:0xc s<= 0)
    return 0

HWND hWnd = data_1c054ec

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
DialogBoxParamA(hInstance, 0x167, hWndParent, sub_4c63a0, 0)
int32_t eax_1 = data_7037a0
data_1af17cc = 0
data_1af17a0 = 0
data_1af4e70 = eax_1

if (eax_1 != 0)
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

return 1
