// 函数: sub_545410
// 地址: 0x545410
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg2 == *(arg1 + 0x144))
    LRESULT hWnd = *(arg1 + 0x144)
    
    if (hWnd != 0)
        hWnd = SendMessageW(hWnd, 0x400, 0, 0)
    
    *(data_bac4e4 + 0x68) = 0xff - hWnd
    void* eax_1
    eax_1.b = 1
    return eax_1

if (arg2 == *(arg1 + 0x2f4))
    LRESULT hWnd_1 = *(arg1 + 0x2f4)
    
    if (hWnd_1 != 0)
        hWnd_1 = SendMessageW(hWnd_1, 0x400, 0, 0)
    
    *(data_bac4e4 + 0x6c) = 0xff - hWnd_1
    void* eax_2
    eax_2.b = 1
    return eax_2

if (arg2 == *(arg1 + 0x4a4))
    LRESULT hWnd_2 = *(arg1 + 0x4a4)
    
    if (hWnd_2 != 0)
        hWnd_2 = SendMessageW(hWnd_2, 0x400, 0, 0)
    
    *(data_bac4e4 + 0x70) = 0xff - hWnd_2
    void* eax_3
    eax_3.b = 1
    return eax_3

if (arg2 == *(arg1 + 0x654))
    *(data_bac4e4 + 0x74) = 0xff - sub_6c3920(arg1 + 0x650)
    void* eax_5
    eax_5.b = 1
    return eax_5

if (arg2 == *(arg1 + 0x804))
    *(data_bac4e4 + 0x78) = 0xff - sub_6c3920(arg1 + 0x800)
    void* eax_7
    eax_7.b = 1
    return eax_7

if (arg2 != *(arg1 + 0x9b4))
    int32_t eax
    eax.b = 0
    return eax

*(data_bac4e4 + 0x7c) = 0xff - sub_6c3920(arg1 + 0x9b0)
void* eax_9
eax_9.b = 1
return eax_9
