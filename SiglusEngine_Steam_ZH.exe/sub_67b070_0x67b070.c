// 函数: sub_67b070
// 地址: 0x67b070
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg2 s< 0)
    return 

HWND hWnd = data_bac510

if (arg2 s>= hWnd * 3)
    return 

if (*(arg1 + 0x12) == 0)
    int32_t edx_3
    edx_3.b = 1
    
    if (*(arg1 + 0xc) == 0x3e8)
        sub_660620(hWnd, edx_3.b, arg2, 1)
        return 
    
    sub_660750(hWnd, edx_3.b, arg2, 1, 1)
else
    void* eax = *(arg1 + 4)
    *(arg1 + 0x1c) = arg2
    hWnd = *(eax + 4)
    
    if (hWnd != 0)
        SendMessageW(hWnd, 0x10, 0, 0)
