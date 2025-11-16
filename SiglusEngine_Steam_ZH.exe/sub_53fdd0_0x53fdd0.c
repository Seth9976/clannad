// 函数: sub_53fdd0
// 地址: 0x53fdd0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_4 = arg1

if (*(arg1 + 8) == 0)
    return 

sub_53ffd0(arg1)
sub_5400b0(arg1)
HWND hWnd_5 = *(arg1 + 0x5c0)

if (hWnd_5 != 0)
    WPARAM wParam
    wParam.b = *(data_bac4a0 + 0x68) != 0
    SendMessageW(hWnd_5, 0xf1, wParam, 0)

HWND hWnd = *(arg1 + 0x890)

if (hWnd != 0)
    SendMessageW(hWnd, 0x14e, *(data_bac4a0 + 0x6c), 0)

sub_541000(arg1)
sub_540260(arg1)
HWND hWnd_1 = *(arg1 + 0x1078)

if (hWnd_1 != 0)
    SendMessageW(hWnd_1, 0x405, 1, *(data_bac4e4 + 0x58))

HWND hWnd_2 = *(arg1 + 0x12b8)

if (hWnd_2 != 0)
    SendMessageW(hWnd_2, 0x405, 1, *(data_bac4e4 + 0x54))

HWND hWnd_6 = *(arg1 + 0x1348)

if (hWnd_6 != 0)
    WPARAM wParam_1
    wParam_1.b = *(data_bac4e4 + 0x5c) != 0
    SendMessageW(hWnd_6, 0xf1, wParam_1, 0)

HWND hWnd_3 = *(arg1 + 0x1588)

if (hWnd_3 != 0)
    SendMessageW(hWnd_3, 0x405, 1, *(data_bac4e4 + 0x64))

HWND hWnd_4 = *(arg1 + 0x17c8)

if (hWnd_4 != 0)
    SendMessageW(hWnd_4, 0x405, 1, *(data_bac4e4 + 0x60))

sub_540440(arg1)
sub_540dd0(arg1)
sub_541660(arg1)
