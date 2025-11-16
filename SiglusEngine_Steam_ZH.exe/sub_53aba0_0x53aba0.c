// 函数: sub_53aba0
// 地址: 0x53aba0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg2 != *(arg1 + 0x260))
    int32_t eax
    eax.b = 0
    return eax

LRESULT hWnd = *(arg1 + 0x260)

if (hWnd != 0)
    hWnd = SendMessageW(hWnd, 0x400, 0, 0)

*(data_bac4e4 + 0x158) = (hWnd + 4) * 0x19
void* eax_2
eax_2.b = 1
return eax_2
