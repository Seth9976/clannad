// 函数: sub_67b240
// 地址: 0x67b240
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
HWND hWnd = *(arg1 + 0x24)
LRESULT var_8_1
LRESULT eax
WPARAM wParam

if (hWnd != 0)
    eax = SendMessageW(hWnd, 0x130b, 0, 0)
    var_8_1 = eax
    
    if (eax != 0xffffffff)
        goto label_67b25f
    
    wParam = 0
label_67b2c6:
    HWND hWnd_1 = *(arg1 + 0x24)
    
    if (hWnd_1 != 0)
        SendMessageW(hWnd_1, 0x130c, wParam, 0)
    
    sub_67a890(arg1)
    sub_67acd0(arg1)
else
    eax = 0
    var_8_1 = 0
label_67b25f:
    
    if (arg2 == 0)
        wParam = eax - 1
        
        if (wParam s< 0)
            HWND hWnd_6 = *(arg1 + 0x24)
            LRESULT esi
            
            if (hWnd_6 != 0)
                esi = SendMessageW(hWnd_6, 0x1304, 0, 0)
                eax = var_8_1
            else
                esi = 0
            
            wParam = esi - 1
    else
        LRESULT hWnd_5 = *(arg1 + 0x24)
        wParam = eax + 1
        
        if (hWnd_5 != 0)
            hWnd_5 = SendMessageW(hWnd_5, 0x1304, 0, 0)
            eax = var_8_1
        
        if (wParam s>= hWnd_5)
            wParam = 0
    
    if (eax != wParam)
        goto label_67b2c6
int32_t esi_1 = *(arg1 + 0x24)
HWND hWnd_2 = GetFocus()

if (hWnd_2 != esi_1)
    SetFocus(*(arg1 + 0x24))
    HWND hWnd_3 = *(arg1 + 0x51c)
    
    if (hWnd_3 != 0)
        SendMessageW(hWnd_3, 0xf4, 0, 1)
    
    HWND hWnd_4 = *(arg1 + 0x5b0)
    
    if (hWnd_4 != 0)
        SendMessageW(hWnd_4, 0xf4, 0, 1)
    
    hWnd_2 = *(arg1 + 0x644)
    
    if (hWnd_2 != 0)
        return SendMessageW(hWnd_2, 0xf4, 0, 1)

return hWnd_2
