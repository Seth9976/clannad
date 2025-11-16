// 函数: sub_6c3920
// 地址: 0x6c3920
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

HWND hWnd = *(arg1 + 4)

if (hWnd != 0)
    return SendMessageW(hWnd, 0x400, 0, 0)

return hWnd
