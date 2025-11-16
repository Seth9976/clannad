// 函数: sub_539b50
// 地址: 0x539b50
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (*(arg1 + 8) == 0)
    return 

HWND hWnd_1 = *(arg1 + 0x2f0)

if (hWnd_1 != 0)
    SendMessageW(hWnd_1, 0xf1, 0, 0)

HWND hWnd_2 = *(arg1 + 0x380)

if (hWnd_2 != 0)
    SendMessageW(hWnd_2, 0xf1, 0, 0)

HWND hWnd_3 = *(arg1 + 0x410)

if (hWnd_3 != 0)
    SendMessageW(hWnd_3, 0xf1, 0, 0)

HWND hWnd_4 = *(arg1 + 0x4a0)

if (hWnd_4 != 0)
    SendMessageW(hWnd_4, 0xf1, 0, 0)

LRESULT hWnd = *(data_bac4e4 + 0x138)

if (hWnd u> 3)
    return 

switch (hWnd)
    case 0
        hWnd = *(arg1 + 0x2f0)
    case 1
        hWnd = *(arg1 + 0x380)
    case 2
        hWnd = *(arg1 + 0x410)
    case 3
        hWnd = *(arg1 + 0x4a0)

if (hWnd != 0)
    SendMessageW(hWnd, 0xf1, 1, 0)
