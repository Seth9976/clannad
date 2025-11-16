// 函数: sub_6c3c50
// 地址: 0x6c3c50
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

LRESULT hWnd = *(arg1 + 4)

if (hWnd == 0)
    return hWnd

return SendMessageW(hWnd, 0x130c, arg2, 0)
