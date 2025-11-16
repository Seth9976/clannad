// 函数: sub_6c37b0
// 地址: 0x6c37b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

HWND hWnd = *(arg1 + 4)

if (hWnd != 0)
    return SendMessageW(hWnd, 0xe1, 0, 0)

return hWnd
