// 函数: sub_5400b0
// 地址: 0x5400b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (*(arg1 + 8) == 0)
    return 

HWND hWnd_1 = *(arg1 + 0x260)

if (hWnd_1 != 0)
    SendMessageW(hWnd_1, 0xf1, 0, 0)

HWND hWnd_2 = *(arg1 + 0x2f0)

if (hWnd_2 != 0)
    SendMessageW(hWnd_2, 0xf1, 0, 0)

HWND hWnd_3 = *(arg1 + 0x380)

if (hWnd_3 != 0)
    SendMessageW(hWnd_3, 0xf1, 0, 0)

HWND hWnd_4 = *(arg1 + 0x410)

if (hWnd_4 != 0)
    SendMessageW(hWnd_4, 0xf1, 0, 0)

HWND hWnd_5 = *(arg1 + 0x4a0)

if (hWnd_5 != 0)
    SendMessageW(hWnd_5, 0xf1, 0, 0)

int32_t* hWnd = data_bac4e4

if (*hWnd != 0)
    return 

hWnd = sub_616cd0(hWnd[2], hWnd[3])

if (hWnd u> 4)
    return 

switch (hWnd)
    case nullptr
        hWnd = *(arg1 + 0x260)
    case 1
        hWnd = *(arg1 + 0x2f0)
    case 2
        hWnd = *(arg1 + 0x380)
    case 3
        hWnd = *(arg1 + 0x410)
    case 4
        hWnd = *(arg1 + 0x4a0)

if (hWnd != 0)
    SendMessageW(hWnd, 0xf1, 1, 0)
