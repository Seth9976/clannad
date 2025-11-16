// 函数: sub_6c4b00
// 地址: 0x6c4b00
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

LRESULT hWnd = *(arg1 + 4)
int32_t lParam = 8
int32_t var_34 = 1
int32_t var_30 = 1

if (hWnd == 0)
    return hWnd

return SendMessageW(hWnd, 0x102b, arg2, &lParam)
