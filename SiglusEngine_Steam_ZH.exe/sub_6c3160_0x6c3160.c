// 函数: sub_6c3160
// 地址: 0x6c3160
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

HWND hWnd = *(arg1 + 4)

if (hWnd != 0)
    return SendMessageW(hWnd, 0xf0, 0, 0) & 1

return hWnd & 1
