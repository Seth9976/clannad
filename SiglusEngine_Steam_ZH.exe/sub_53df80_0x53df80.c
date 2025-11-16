// 函数: sub_53df80
// 地址: 0x53df80
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg2 == *(arg1 + 0x140))
    HWND hWnd = *(arg1 + 0x140)
    
    if (hWnd != 0)
        *(data_bac4e4 + 0x117) = SendMessageW(hWnd, 0x400, 0, 0)
        return 1
    
    *(data_bac4e4 + 0x117) = hWnd.b
    hWnd.b = 1
    return hWnd

if (arg2 == *(arg1 + 0x260))
    HWND hWnd_1 = *(arg1 + 0x260)
    
    if (hWnd_1 != 0)
        *(data_bac4e4 + 0x116) = SendMessageW(hWnd_1, 0x400, 0, 0)
        return 1
    
    *(data_bac4e4 + 0x116) = hWnd_1.b
    hWnd_1.b = 1
    return hWnd_1

if (arg2 != *(arg1 + 0x380))
    if (arg2 != *(arg1 + 0x4a0))
        int32_t eax
        eax.b = 0
        return eax
    
    *(data_bac4e4 + 0x118) = 0xff - sub_6c3920(arg1 + 0x49c)
    void* eax_5
    eax_5.b = 1
    return eax_5

HWND hWnd_2 = *(arg1 + 0x380)

if (hWnd_2 != 0)
    *(data_bac4e4 + 0x115) = SendMessageW(hWnd_2, 0x400, 0, 0)
    return 1

*(data_bac4e4 + 0x115) = hWnd_2.b
hWnd_2.b = 1
return hWnd_2
