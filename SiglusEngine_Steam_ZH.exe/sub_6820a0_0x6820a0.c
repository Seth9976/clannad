// 函数: sub_6820a0
// 地址: 0x6820a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

sub_681e50(arg1)
LRESULT hWnd = *(arg1 + 4)

if (hWnd == 0)
    return hWnd

return SendMessageW(hWnd, 0x10, 0, 0)
