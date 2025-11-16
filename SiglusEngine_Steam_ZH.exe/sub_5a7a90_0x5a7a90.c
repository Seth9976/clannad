// 函数: sub_5a7a90
// 地址: 0x5a7a90
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
LRESULT hWnd = arg3

if (hWnd == *(arg1 + 0x164))
    HWND hWnd_1 = *(arg1 + 0x164)
    
    if (hWnd_1 != 0)
        arg3 = SendMessageW(hWnd_1, 0xe1, 0, 0)
    else
        arg3 = 0
    
    sub_6c37d0(arg1 + 0x160, arg2)
    hWnd = *(arg1 + 0x164)
    
    if (hWnd != 0)
        hWnd = SendMessageW(hWnd, 0xe1, 0, 0)
    
    if (arg3 != hWnd)
        WPARAM hWnd_2 = *(arg1 + 0x164)
        
        if (hWnd_2 != 0)
            hWnd_2 = SendMessageW(hWnd_2, 0xe1, 0, 0)
        
        return sub_5a7ca0(arg1, *(arg1 + 0x58), *(arg1 + 0x38), hWnd_2, *(arg1 + 0x3c), arg1 + 4, 
            *(arg1 + 0x1c), 0)

return hWnd
