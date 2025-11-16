// 函数: sub_6c3530
// 地址: 0x6c3530
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void** lParam = arg2

if (lParam[5] u>= 8)
    lParam = *lParam

HWND hWnd = *(arg1 + 4)

if (hWnd == 0)
    return lParam

return SendMessageW(hWnd, 0x14a, arg3, lParam)
