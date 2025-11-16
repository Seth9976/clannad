// 函数: sub_453fe0
// 地址: 0x453fe0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx

if (data_137162e == 0)
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
enum MESSAGEBOX_RESULT eax = MessageBoxA(hWnd, 0x6194c8, 0x617a88, MB_YESNO)
int32_t ecx_1 = data_7037a0
data_1af17cc = 0
data_1af17a0 = 0
data_1af4e70 = ecx_1

if (ecx_1 != 0)
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
    hWnd_1 = InvalidateRect(data_1c054ec, nullptr, 1)

if (eax != IDYES)
    return 

if (data_1af454c != 0)
    sub_453500(hWnd_1, data_1af4554, data_1af4550, 0x6194e0, nullptr)
    return 

sub_453500(hWnd_1, data_108f35c, data_108f358, 0x6194e0, nullptr)
