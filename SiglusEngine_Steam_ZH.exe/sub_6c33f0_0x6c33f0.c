// 函数: sub_6c33f0
// 地址: 0x6c33f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

LRESULT hWnd = *(arg1 + 4)

if (hWnd == 0)
    return hWnd

return SendMessageW(hWnd, 0x14e, arg2, 0)
