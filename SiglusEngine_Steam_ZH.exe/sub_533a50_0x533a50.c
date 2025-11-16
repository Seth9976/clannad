// 函数: sub_533a50
// 地址: 0x533a50
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (*(arg1 + 8) == 0)
    return 

HWND hWnd = *(arg1 + 0x140)

if (hWnd != 0)
    SendMessageW(hWnd, 0x405, 1, 0xff - *(data_bac4e4 + 0x110))

HWND hWnd_1 = *(arg1 + 0x1d0)

if (hWnd_1 != 0)
    WPARAM wParam
    wParam.b = *(data_bac4e4 + 0x114) != 0
    SendMessageW(hWnd_1, 0xf1, wParam, 0)
