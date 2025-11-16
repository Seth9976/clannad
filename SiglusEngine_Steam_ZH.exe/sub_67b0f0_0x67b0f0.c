// 函数: sub_67b0f0
// 地址: 0x67b0f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

WPARAM eax = sub_6c4be0(arg1 + 0xb8)
WPARAM wParam

if (eax != 0xffffffff)
    if (arg2 == 0)
        wParam = eax - 1
        
        if (wParam s< 0)
            HWND hWnd_7 = *(arg1 + 0xbc)
            LRESULT esi
            
            if (hWnd_7 != 0)
                esi = SendMessageW(hWnd_7, 0x1004, 0, 0)
            else
                esi = 0
            
            wParam = esi - 1
    else
        LRESULT hWnd_6 = *(arg1 + 0xbc)
        wParam = eax + 1
        
        if (hWnd_6 != 0)
            hWnd_6 = SendMessageW(hWnd_6, 0x1004, 0, 0)
        
        if (wParam s>= hWnd_6)
            wParam = 0
    
    if (eax != wParam)
        goto label_67b16c
else
    wParam = 0
label_67b16c:
    HWND hWnd = *(arg1 + 0xbc)
    int32_t lParam = 8
    int32_t var_3c_1 = 1
    int32_t var_38_1 = 1
    
    if (hWnd != 0)
        SendMessageW(hWnd, 0x102b, wParam, &lParam)
    
    HWND hWnd_1 = *(arg1 + 0xbc)
    lParam = 8
    int32_t var_3c_2 = 2
    int32_t var_38_2 = 2
    
    if (hWnd_1 != 0)
        SendMessageW(hWnd_1, 0x102b, wParam, &lParam)
    
    HWND hWnd_2 = *(arg1 + 0xbc)
    
    if (hWnd_2 != 0)
        SendMessageW(hWnd_2, 0x1013, wParam, 1)
int32_t esi_1 = *(arg1 + 0xbc)
HWND hWnd_3 = GetFocus()

if (hWnd_3 != esi_1)
    SetFocus(*(arg1 + 0xbc))
    HWND hWnd_4 = *(arg1 + 0x51c)
    
    if (hWnd_4 != 0)
        SendMessageW(hWnd_4, 0xf4, 0, 1)
    
    HWND hWnd_5 = *(arg1 + 0x5b0)
    
    if (hWnd_5 != 0)
        SendMessageW(hWnd_5, 0xf4, 0, 1)
    
    hWnd_3 = *(arg1 + 0x644)
    
    if (hWnd_3 != 0)
        return SendMessageW(hWnd_3, 0xf4, 0, 1)

return hWnd_3
