// 函数: sub_5302d0
// 地址: 0x5302d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* hWnd

if (*(arg1 + 0x310) != *(arg1 + 0x314))
    hWnd = *(arg1 + 0xc0)
    void* edx_1
    
    if (hWnd != 0)
        edx_1 = SendMessageW(hWnd, 0x130b, 0, 0)
        
        if (edx_1 s>= 0)
            goto label_53031c
    else
        edx_1 = nullptr
    label_53031c:
        
        if (edx_1 s< (*(arg1 + 0x314) - *(arg1 + 0x310)) s>> 2
                && *(*(arg1 + 0x310) + (edx_1 << 2)) == arg1 + 0x4738
                && GetFocus() == *(arg1 + 0xc0))
            if (*(arg1 + 0x4f84) s> 0)
                sub_5356b0(arg1 + 0x4b74, arg2)
            
            if (*(arg1 + 0x58a8) s> 0)
                sub_5356b0(arg1 + 0x5498, arg2)
            
            hWnd.b = 0
            return hWnd

hWnd.b = 1
return hWnd
