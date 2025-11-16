// 函数: sub_5434d0
// 地址: 0x5434d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (*(arg1 + 8) == 0)
    return 0xffffffff

LRESULT hWnd = *(arg1 + 0x650)

if (hWnd != 0)
    hWnd = SendMessageW(hWnd, 0xf0, 0, 0)

if ((hWnd.b & 1) != 0)
    return 0

HWND hWnd_1 = *(arg1 + 0x6e0)

if (hWnd_1 != 0)
    int32_t eax_4
    eax_4.b = (SendMessageW(hWnd_1, 0xf0, 0, 0) & 1) != 0
    return (eax_4 << 1) + 0xffffffff

hWnd_1.b = (hWnd_1.b & 1) != 0
return (hWnd_1 << 1) + 0xffffffff
