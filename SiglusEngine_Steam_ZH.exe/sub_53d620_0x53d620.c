// 函数: sub_53d620
// 地址: 0x53d620
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (*(arg1 + 8) == 0)
    return 

HWND hWnd = *(arg1 + 0xb0)

if (hWnd != 0)
    SendMessageW(hWnd, 0x405, 1, 0x64 - *(data_bac4e4 + 0x13c))

HWND hWnd_1 = *(arg1 + 0x2f0)

if (hWnd_1 != 0)
    WPARAM wParam
    wParam.b = *(data_bac4e4 + 0x140) != 0
    SendMessageW(hWnd_1, 0xf1, wParam, 0)
