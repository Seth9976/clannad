// 函数: sub_6c3410
// 地址: 0x6c3410
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

HWND hWnd = *(arg1 + 4)

if (hWnd != 0)
    return SendMessageW(hWnd, 0x147, 0, 0)

return hWnd
