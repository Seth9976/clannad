// 函数: sub_534f80
// 地址: 0x534f80
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (*(arg1 + 0x410) s<= 0)
    int32_t eax
    eax.b = 1
    return eax

int32_t edi = sx.d((arg2 u>> 0x10).w)

if (edi != 0)
    LRESULT hWnd = *(arg1 + 0x144)
    
    if (hWnd != 0)
        hWnd = SendMessageW(hWnd, 0xe1, 0, 0)
    
    WPARAM wParam = hWnd - 1
    
    if (edi s<= 0)
        wParam = hWnd + 1
    
    HWND hWnd_1 = *(arg1 + 0x144)
    
    if (hWnd_1 != 0)
        SendMessageW(hWnd_1, 0xe0, wParam, 1)
    
    sub_5353d0(arg1)

uint16_t eax_2
eax_2.b = 1
return eax_2
