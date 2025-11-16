// 函数: sub_533920
// 地址: 0x533920
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg2 != *(arg1 + 0x140))
    int32_t eax
    eax.b = 0
    return eax

LRESULT hWnd = *(arg1 + 0x140)

if (hWnd != 0)
    hWnd = SendMessageW(hWnd, 0x400, 0, 0)

*(data_bac4e4 + 0x110) = 0xff - hWnd
void* eax_1
eax_1.b = 1
return eax_1
