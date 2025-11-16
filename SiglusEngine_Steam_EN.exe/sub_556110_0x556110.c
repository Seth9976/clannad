// 函数: sub_556110
// 地址: 0x556110
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

HWND hWnd_1 = data_1c054ec

if (hWnd_1 != 0)
    ShowWindow(hWnd_1, SW_HIDE)
    InvalidateRect(data_1c054ec, nullptr, 1)

data_1af4e70 = 1
int32_t i

do
    i = ShowCursor(1)
while (i s<= 0)
data_1af17a0 = 1
data_1af17cc = 1
sub_499050()
DialogBoxParamA(data_134cebc, 0x138, data_7027bc, sub_556010, 0)
sub_4d6c40(&data_1bfdd48, &data_1bfdd4c)
int32_t eax = data_7037a0
data_1bfdd50 = 0
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

HWND hWnd = data_1c054ec

if (hWnd == 0)
    return hWnd

ShowWindow(hWnd, SW_SHOW)
return InvalidateRect(data_1c054ec, nullptr, 1)
