// 函数: sub_6c3790
// 地址: 0x6c3790
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

LRESULT hWnd = *(arg1 + 4)

if (hWnd == 0)
    return hWnd

return SendMessageW(hWnd, 0xe0, arg2, 1)
