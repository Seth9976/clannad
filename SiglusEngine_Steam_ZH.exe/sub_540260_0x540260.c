// 函数: sub_540260
// 地址: 0x540260
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (*(arg1 + 8) == 0)
    return 

HWND hWnd_1 = *(arg1 + 0xad8)

if (hWnd_1 != 0)
    SendMessageW(hWnd_1, 0xf1, 0, 0)

HWND hWnd_2 = *(arg1 + 0xb68)

if (hWnd_2 != 0)
    SendMessageW(hWnd_2, 0xf1, 0, 0)

HWND hWnd_3 = *(arg1 + 0xbf8)

if (hWnd_3 != 0)
    SendMessageW(hWnd_3, 0xf1, 0, 0)

HWND hWnd_4 = *(arg1 + 0xc88)

if (hWnd_4 != 0)
    SendMessageW(hWnd_4, 0xf1, 0, 0)

HWND hWnd_5 = *(arg1 + 0xd18)

if (hWnd_5 != 0)
    SendMessageW(hWnd_5, 0xf1, 0, 0)

HWND hWnd_6 = *(arg1 + 0xda8)

if (hWnd_6 != 0)
    SendMessageW(hWnd_6, 0xf1, 0, 0)

LRESULT hWnd = *(data_bac4e4 + 0x50)

if (hWnd u> 5)
    return 

switch (hWnd)
    case 0
        hWnd = *(arg1 + 0xad8)
    case 1
        hWnd = *(arg1 + 0xb68)
    case 2
        hWnd = *(arg1 + 0xbf8)
    case 3
        hWnd = *(arg1 + 0xc88)
    case 4
        hWnd = *(arg1 + 0xd18)
    case 5
        hWnd = *(arg1 + 0xda8)

if (hWnd != 0)
    SendMessageW(hWnd, 0xf1, 1, 0)
