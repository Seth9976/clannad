// 函数: sub_540dd0
// 地址: 0x540dd0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t eax
int32_t ecx
eax, ecx = timeGetTime()

if (eax - *(data_bac4a0 + 0x64) u< 0x1f4)
    int32_t var_10_4 = ecx
    return sub_540cd0(arg1)

HWND hWnd = *(arg1 + 0xb0)

if (hWnd != 0)
    BOOL eax_2
    eax_2.b = IsWindowEnabled(hWnd) != 0
    
    if (eax_2.b != 1)
        EnableWindow(*(arg1 + 0xb0), 1)

HWND hWnd_1 = *(arg1 + 0x140)

if (hWnd_1 != 0)
    BOOL eax_3
    eax_3.b = IsWindowEnabled(hWnd_1) != 0
    
    if (eax_3.b != 1)
        EnableWindow(*(arg1 + 0x140), 1)

HWND hWnd_2 = *(arg1 + 0x260)

if (hWnd_2 != 0)
    BOOL eax_4
    eax_4.b = IsWindowEnabled(hWnd_2) != 0
    
    if (eax_4.b != 1)
        EnableWindow(*(arg1 + 0x260), 1)

return sub_540990(arg1) __tailcall
