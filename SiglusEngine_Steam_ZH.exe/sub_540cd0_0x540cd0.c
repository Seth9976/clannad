// 函数: sub_540cd0
// 地址: 0x540cd0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

HWND hWnd = *(arg1 + 0xb0)

if (hWnd != 0)
    BOOL eax
    eax.b = IsWindowEnabled(hWnd) != 0
    
    if (eax.b != 0)
        EnableWindow(*(arg1 + 0xb0), 0)

HWND hWnd_1 = *(arg1 + 0x140)

if (hWnd_1 != 0)
    BOOL eax_1
    eax_1.b = IsWindowEnabled(hWnd_1) != 0
    
    if (eax_1.b != 0)
        EnableWindow(*(arg1 + 0x140), 0)

HWND hWnd_2 = *(arg1 + 0x260)

if (hWnd_2 != 0)
    BOOL eax_2
    eax_2.b = IsWindowEnabled(hWnd_2) != 0
    
    if (eax_2.b != 0)
        EnableWindow(*(arg1 + 0x260), 0)

HWND hWnd_3 = *(arg1 + 0x2f0)

if (hWnd_3 != 0)
    BOOL eax_3
    eax_3.b = IsWindowEnabled(hWnd_3) != 0
    
    if (eax_3.b != 0)
        EnableWindow(*(arg1 + 0x2f0), 0)

HWND hWnd_4 = *(arg1 + 0x380)

if (hWnd_4 != 0)
    BOOL eax_4
    eax_4.b = IsWindowEnabled(hWnd_4) != 0
    
    if (eax_4.b != 0)
        EnableWindow(*(arg1 + 0x380), 0)

HWND hWnd_5 = *(arg1 + 0x410)

if (hWnd_5 != 0)
    BOOL eax_5
    eax_5.b = IsWindowEnabled(hWnd_5) != 0
    
    if (eax_5.b != 0)
        EnableWindow(*(arg1 + 0x410), 0)

BOOL hWnd_6 = *(arg1 + 0x4a0)

if (hWnd_6 != 0)
    hWnd_6.b = IsWindowEnabled(hWnd_6) != 0
    
    if (hWnd_6.b != 0)
        return EnableWindow(*(arg1 + 0x4a0), 0)

return hWnd_6
