// 函数: sub_6bfea0
// 地址: 0x6bfea0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

LRESULT hWnd = *(arg1 + 4)

if (hWnd == 0)
    return hWnd

return SendMessageW(hWnd, 0x10, 0, 0)
