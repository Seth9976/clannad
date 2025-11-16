// 函数: sub_545880
// 地址: 0x545880
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (*(arg1 + 8) == 0)
    return 

HWND hWnd_1 = *(arg1 + 0x144)

if (hWnd_1 != 0)
    SendMessageW(hWnd_1, 0x405, 1, 0xff - *(data_bac4e4 + 0x68))

HWND hWnd_2 = *(arg1 + 0x2f4)

if (hWnd_2 != 0)
    SendMessageW(hWnd_2, 0x405, 1, 0xff - *(data_bac4e4 + 0x6c))

HWND hWnd_3 = *(arg1 + 0x4a4)

if (hWnd_3 != 0)
    SendMessageW(hWnd_3, 0x405, 1, 0xff - *(data_bac4e4 + 0x70))

HWND hWnd_4 = *(arg1 + 0x654)

if (hWnd_4 != 0)
    SendMessageW(hWnd_4, 0x405, 1, 0xff - *(data_bac4e4 + 0x74))

HWND hWnd_5 = *(arg1 + 0x804)

if (hWnd_5 != 0)
    SendMessageW(hWnd_5, 0x405, 1, 0xff - *(data_bac4e4 + 0x78))

HWND hWnd = *(arg1 + 0x9b4)

if (hWnd != 0)
    SendMessageW(hWnd, 0x405, 1, 0xff - *(data_bac4e4 + 0x7c))

HWND hWnd_6 = *(arg1 + 0x1d4)

if (hWnd_6 != 0)
    WPARAM wParam
    wParam.b = *(data_bac4e4 + 0xec) != 0
    SendMessageW(hWnd_6, 0xf1, wParam, 0)

HWND hWnd_7 = *(arg1 + 0x384)

if (hWnd_7 != 0)
    WPARAM wParam_1
    wParam_1.b = *(data_bac4e4 + 0xed) != 0
    SendMessageW(hWnd_7, 0xf1, wParam_1, 0)

HWND hWnd_8 = *(arg1 + 0x534)

if (hWnd_8 != 0)
    WPARAM wParam_2
    wParam_2.b = *(data_bac4e4 + 0xee) != 0
    SendMessageW(hWnd_8, 0xf1, wParam_2, 0)

HWND hWnd_9 = *(arg1 + 0x6e4)

if (hWnd_9 != 0)
    WPARAM wParam_3
    wParam_3.b = *(data_bac4e4 + 0xef) != 0
    SendMessageW(hWnd_9, 0xf1, wParam_3, 0)

HWND hWnd_10 = *(arg1 + 0x894)

if (hWnd_10 != 0)
    WPARAM wParam_4
    wParam_4.b = *(data_bac4e4 + 0xf0) != 0
    SendMessageW(hWnd_10, 0xf1, wParam_4, 0)

HWND hWnd_11 = *(arg1 + 0xa44)

if (hWnd_11 != 0)
    WPARAM wParam_5
    wParam_5.b = *(data_bac4e4 + 0xf1) != 0
    SendMessageW(hWnd_11, 0xf1, wParam_5, 0)
