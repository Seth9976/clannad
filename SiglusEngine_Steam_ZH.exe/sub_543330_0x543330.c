// 函数: sub_543330
// 地址: 0x543330
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (*(arg1 + 8) == 0)
    return 

HWND hWnd = *(arg1 + 0xb0)

if (hWnd != 0)
    WPARAM wParam
    wParam.b = *(data_bac4e4 + 0x194) != 0
    SendMessageW(hWnd, 0xf1, wParam, 0)

HWND hWnd_1 = *(arg1 + 0x140)

if (hWnd_1 != 0)
    WPARAM wParam_1
    wParam_1.b = *(data_bac4e4 + 0x195) != 0
    SendMessageW(hWnd_1, 0xf1, wParam_1, 0)

HWND hWnd_2 = *(arg1 + 0x1d0)

if (hWnd_2 != 0)
    WPARAM wParam_2
    wParam_2.b = *(data_bac4e4 + 0x196) != 0
    SendMessageW(hWnd_2, 0xf1, wParam_2, 0)

HWND hWnd_3 = *(arg1 + 0x260)

if (hWnd_3 != 0)
    WPARAM wParam_3
    wParam_3.b = *(data_bac4e4 + 0x197) != 0
    SendMessageW(hWnd_3, 0xf1, wParam_3, 0)

HWND hWnd_4 = *(arg1 + 0x2f0)

if (hWnd_4 != 0)
    WPARAM wParam_4
    wParam_4.b = *(data_bac4e4 + 0x198) != 0
    SendMessageW(hWnd_4, 0xf1, wParam_4, 0)

HWND hWnd_5 = *(arg1 + 0x380)

if (hWnd_5 != 0)
    WPARAM wParam_5
    wParam_5.b = *(data_bac4e4 + 0x199) != 0
    SendMessageW(hWnd_5, 0xf1, wParam_5, 0)

HWND hWnd_6 = *(arg1 + 0x410)

if (hWnd_6 != 0)
    WPARAM wParam_6
    wParam_6.b = *(data_bac4e4 + 0x19a) != 0
    SendMessageW(hWnd_6, 0xf1, wParam_6, 0)

return sub_543460(arg1) __tailcall
