// 函数: sub_53e1b0
// 地址: 0x53e1b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (*(arg1 + 8) == 0)
    return 

HWND hWnd = *(arg1 + 0x140)

if (hWnd != 0)
    SendMessageW(hWnd, 0x405, 1, zx.d(*(data_bac4e4 + 0x117)))

HWND hWnd_1 = *(arg1 + 0x260)

if (hWnd_1 != 0)
    SendMessageW(hWnd_1, 0x405, 1, zx.d(*(data_bac4e4 + 0x116)))

HWND hWnd_2 = *(arg1 + 0x380)

if (hWnd_2 != 0)
    SendMessageW(hWnd_2, 0x405, 1, zx.d(*(data_bac4e4 + 0x115)))

HWND hWnd_3 = *(arg1 + 0x4a0)

if (hWnd_3 != 0)
    SendMessageW(hWnd_3, 0x405, 1, 0xff - zx.d(*(data_bac4e4 + 0x118)))
