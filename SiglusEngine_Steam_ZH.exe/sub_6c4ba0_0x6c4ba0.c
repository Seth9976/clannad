// 函数: sub_6c4ba0
// 地址: 0x6c4ba0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

LRESULT hWnd = *(arg1 + 4)
int32_t lParam = 8
int32_t var_34 = 2
int32_t var_30 = 2

if (hWnd == 0)
    return hWnd

return SendMessageW(hWnd, 0x102b, arg2, &lParam)
