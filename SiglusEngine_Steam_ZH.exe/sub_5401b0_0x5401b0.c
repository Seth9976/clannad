// 函数: sub_5401b0
// 地址: 0x5401b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (*(arg1 + 8) == 0)
    return 0xffffffff

HWND hWnd = *(arg1 + 0x260)
char eax_1

if (hWnd != 0)
    eax_1 = SendMessageW(hWnd, 0xf0, 0, 0)
else
    eax_1 = 0

if ((eax_1 & 1) != 0)
    return 0

LRESULT hWnd_1 = *(arg1 + 0x2f0)

if (hWnd_1 != 0)
    hWnd_1 = SendMessageW(hWnd_1, 0xf0, 0, 0)

if ((hWnd_1.b & 1) != 0)
    return 1

LRESULT hWnd_2 = *(arg1 + 0x380)

if (hWnd_2 != 0)
    hWnd_2 = SendMessageW(hWnd_2, 0xf0, 0, 0)

if ((hWnd_2.b & 1) != 0)
    return 2

if (sub_6c3160(arg1 + 0x40c) != 0)
    return 3

if (sub_6c3160(arg1 + 0x49c) != 0)
    return 4

return 0xffffffff
