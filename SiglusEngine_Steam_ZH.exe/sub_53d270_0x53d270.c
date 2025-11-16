// 函数: sub_53d270
// 地址: 0x53d270
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg2 != *(arg1 + 0xb0))
    int32_t eax
    eax.b = 0
    return eax

LRESULT hWnd = *(arg1 + 0xb0)

if (hWnd != 0)
    hWnd = SendMessageW(hWnd, 0x400, 0, 0)

*(data_bac4e4 + 0x13c) = 0x64 - hWnd
void* eax_1
eax_1.b = 1
return eax_1
