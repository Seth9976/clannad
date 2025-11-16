// 函数: sub_53bb80
// 地址: 0x53bb80
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (*(arg1 + 8) == 0)
    return 0xffffffff

HWND hWnd = *(arg1 + 0xb0)
char eax_1

if (hWnd != 0)
    eax_1 = SendMessageW(hWnd, 0xf0, 0, 0)
else
    eax_1 = 0

if ((eax_1 & 1) != 0)
    return 0

LRESULT hWnd_1 = *(arg1 + 0x140)

if (hWnd_1 != 0)
    hWnd_1 = SendMessageW(hWnd_1, 0xf0, 0, 0)

if ((hWnd_1.b & 1) != 0)
    return 1

HWND hWnd_2 = *(arg1 + 0x1d0)

if (hWnd_2 == 0)
    if ((hWnd_2.b & 1) != 0)
        return 2
    
    return 0xffffffff

if ((SendMessageW(hWnd_2, 0xf0, 0, 0) & 1) != 0)
    return 2

return 0xffffffff
