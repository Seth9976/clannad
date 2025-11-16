// 函数: sub_56e4b0
// 地址: 0x56e4b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

HWND hWnd = *(arg1 + 0xbc)
LRESULT eax

if (hWnd != 0)
    eax = SendMessageW(hWnd, 0x130b, 0, 0)

int32_t hWnd_2

if (hWnd == 0 || eax == 0)
    HWND hWnd_3 = *(arg1 + 0x150)
    
    if (hWnd_3 != 0 && (GetWindowLongW(hWnd_3, 0xfffffff0) & 0x10000000) s<= 0)
        ShowWindow(*(arg1 + 0x150), SW_SHOW)
    
    hWnd_2 = *(arg1 + 0x484)
    
    if (hWnd_2 != 0)
        hWnd_2 = GetWindowLongW(hWnd_2, 0xfffffff0)
        
        if ((hWnd_2 & 0x10000000) s> 0)
            return ShowWindow(*(arg1 + 0x484), SW_HIDE)
else
    HWND hWnd_1 = *(arg1 + 0x150)
    
    if (hWnd_1 != 0 && (GetWindowLongW(hWnd_1, 0xfffffff0) & 0x10000000) s> 0)
        ShowWindow(*(arg1 + 0x150), SW_HIDE)
    
    hWnd_2 = *(arg1 + 0x484)
    
    if (hWnd_2 != 0)
        hWnd_2 = GetWindowLongW(hWnd_2, 0xfffffff0)
        
        if ((hWnd_2 & 0x10000000) s<= 0)
            return ShowWindow(*(arg1 + 0x484), SW_SHOW)

return hWnd_2
