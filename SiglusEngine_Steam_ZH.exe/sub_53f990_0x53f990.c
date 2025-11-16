// 函数: sub_53f990
// 地址: 0x53f990
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg2 == *(arg1 + 0x1078))
    HWND hWnd = *(arg1 + 0x1078)
    LPARAM lParam
    
    if (hWnd != 0)
        lParam = SendMessageW(hWnd, 0x400, 0, 0)
    else
        lParam = 0
    
    void* ecx = data_bac4e4
    bool cond:0 = *(ecx + 0x5c) == 0
    *(ecx + 0x58) = lParam
    
    if (not(cond:0))
        *(ecx + 0x54) = lParam
        HWND hWnd_3 = *(arg1 + 0x12b8)
        
        if (hWnd_3 != 0)
            SendMessageW(hWnd_3, 0x405, 1, lParam)
    
    sub_541660(arg1)
    struct _EXCEPTION_REGISTRATION_RECORD** eax_1
    eax_1.b = 1
    return eax_1

if (arg2 == *(arg1 + 0x12b8))
    HWND hWnd_1 = *(arg1 + 0x12b8)
    LPARAM lParam_1
    
    if (hWnd_1 != 0)
        lParam_1 = SendMessageW(hWnd_1, 0x400, 0, 0)
    else
        lParam_1 = 0
    
    void* ecx_2 = data_bac4e4
    bool cond:1 = *(ecx_2 + 0x5c) == 0
    *(ecx_2 + 0x54) = lParam_1
    
    if (not(cond:1))
        *(ecx_2 + 0x58) = lParam_1
        HWND hWnd_4 = *(arg1 + 0x1078)
        
        if (hWnd_4 != 0)
            SendMessageW(hWnd_4, 0x405, 1, lParam_1)
    
    sub_541660(arg1)
    struct _EXCEPTION_REGISTRATION_RECORD** eax_2
    eax_2.b = 1
    return eax_2

if (arg2 != *(arg1 + 0x1588))
    if (arg2 != *(arg1 + 0x17c8))
        int32_t eax
        eax.b = 0
        return eax
    
    *(data_bac4e4 + 0x60) = sub_6c3920(arg1 + 0x17c4)
    sub_541660(arg1)
    struct _EXCEPTION_REGISTRATION_RECORD** eax_5
    eax_5.b = 1
    return eax_5

LRESULT hWnd_2 = *(arg1 + 0x1588)

if (hWnd_2 != 0)
    hWnd_2 = SendMessageW(hWnd_2, 0x400, 0, 0)

*(data_bac4e4 + 0x64) = hWnd_2
sub_541660(arg1)
struct _EXCEPTION_REGISTRATION_RECORD** eax_3
eax_3.b = 1
return eax_3
