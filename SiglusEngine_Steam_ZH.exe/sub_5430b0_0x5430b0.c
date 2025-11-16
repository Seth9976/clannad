// 函数: sub_5430b0
// 地址: 0x5430b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (*(arg1 + 8) == 0)
    return 

HWND hWnd = *(arg1 + 0xb0)
char eax_1

if (hWnd != 0)
    eax_1 = SendMessageW(hWnd, 0xf0, 0, 0)
else
    eax_1 = 0

char edx = *(data_bac4e4 + 0x194)

if (edx != (eax_1 & 1))
    HWND hWnd_8 = *(arg1 + 0xb0)
    
    if (hWnd_8 != 0)
        WPARAM wParam
        wParam.b = edx != 0
        SendMessageW(hWnd_8, 0xf1, wParam, 0)

LRESULT hWnd_1 = *(arg1 + 0x140)

if (hWnd_1 != 0)
    hWnd_1 = SendMessageW(hWnd_1, 0xf0, 0, 0)

hWnd_1.b &= 1
edx = *(data_bac4e4 + 0x195)

if (edx != hWnd_1.b)
    HWND hWnd_9 = *(arg1 + 0x140)
    
    if (hWnd_9 != 0)
        WPARAM wParam_1
        wParam_1.b = edx != 0
        SendMessageW(hWnd_9, 0xf1, wParam_1, 0)

LRESULT hWnd_2 = *(arg1 + 0x1d0)

if (hWnd_2 != 0)
    hWnd_2 = SendMessageW(hWnd_2, 0xf0, 0, 0)

hWnd_2.b &= 1
edx = *(data_bac4e4 + 0x196)

if (edx != hWnd_2.b)
    HWND hWnd_10 = *(arg1 + 0x1d0)
    
    if (hWnd_10 != 0)
        WPARAM wParam_2
        wParam_2.b = edx != 0
        SendMessageW(hWnd_10, 0xf1, wParam_2, 0)

LRESULT hWnd_3 = *(arg1 + 0x260)

if (hWnd_3 != 0)
    hWnd_3 = SendMessageW(hWnd_3, 0xf0, 0, 0)

hWnd_3.b &= 1
edx = *(data_bac4e4 + 0x197)

if (edx != hWnd_3.b)
    HWND hWnd_11 = *(arg1 + 0x260)
    
    if (hWnd_11 != 0)
        WPARAM wParam_3
        wParam_3.b = edx != 0
        SendMessageW(hWnd_11, 0xf1, wParam_3, 0)

LRESULT hWnd_4 = *(arg1 + 0x2f0)

if (hWnd_4 != 0)
    hWnd_4 = SendMessageW(hWnd_4, 0xf0, 0, 0)

hWnd_4.b &= 1
edx = *(data_bac4e4 + 0x198)

if (edx != hWnd_4.b)
    HWND hWnd_12 = *(arg1 + 0x2f0)
    
    if (hWnd_12 != 0)
        WPARAM wParam_4
        wParam_4.b = edx != 0
        SendMessageW(hWnd_12, 0xf1, wParam_4, 0)

LRESULT hWnd_5 = *(arg1 + 0x380)

if (hWnd_5 != 0)
    hWnd_5 = SendMessageW(hWnd_5, 0xf0, 0, 0)

hWnd_5.b &= 1
edx = *(data_bac4e4 + 0x199)

if (edx != hWnd_5.b)
    HWND hWnd_13 = *(arg1 + 0x380)
    
    if (hWnd_13 != 0)
        WPARAM wParam_5
        wParam_5.b = edx != 0
        SendMessageW(hWnd_13, 0xf1, wParam_5, 0)

LRESULT hWnd_6 = *(arg1 + 0x410)

if (hWnd_6 != 0)
    hWnd_6 = SendMessageW(hWnd_6, 0xf0, 0, 0)

hWnd_6.b &= 1
edx = *(data_bac4e4 + 0x19a)

if (edx != hWnd_6.b)
    HWND hWnd_14 = *(arg1 + 0x410)
    
    if (hWnd_14 != 0)
        WPARAM wParam_6
        wParam_6.b = edx != 0
        SendMessageW(hWnd_14, 0xf1, wParam_6, 0)

LRESULT hWnd_7 = *(arg1 + 0x4a0)

if (hWnd_7 != 0)
    hWnd_7 = SendMessageW(hWnd_7, 0xf0, 0, 0)

hWnd_7.b &= 1
edx = *(data_bac434 + 0xe)

if (edx != hWnd_7.b)
    HWND hWnd_15 = *(arg1 + 0x4a0)
    
    if (hWnd_15 != 0)
        WPARAM wParam_7
        wParam_7.b = edx != 0
        SendMessageW(hWnd_15, 0xf1, wParam_7, 0)

void* eax = sub_5434d0(arg1)

if (*(data_bac434 + 0x10) != eax)
    return sub_543460(arg1) __tailcall
