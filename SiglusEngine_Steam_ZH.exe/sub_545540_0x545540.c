// 函数: sub_545540
// 地址: 0x545540
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (*(arg1 + 8) == 0)
    return 

HWND hWnd_1 = *(arg1 + 0x144)
LRESULT eax

if (hWnd_1 != 0)
    eax = SendMessageW(hWnd_1, 0x400, 0, 0)
else
    eax = 0

int32_t edx_1 = *(data_bac4e4 + 0x68)

if (edx_1 != 0xff - eax)
    HWND hWnd_13 = *(arg1 + 0x144)
    
    if (hWnd_13 != 0)
        SendMessageW(hWnd_13, 0x405, 1, 0xff - edx_1)

LRESULT hWnd_2 = *(arg1 + 0x2f4)

if (hWnd_2 != 0)
    hWnd_2 = SendMessageW(hWnd_2, 0x400, 0, 0)

int32_t edx_2 = *(data_bac4e4 + 0x6c)

if (edx_2 != 0xff - hWnd_2)
    HWND hWnd_14 = *(arg1 + 0x2f4)
    
    if (hWnd_14 != 0)
        SendMessageW(hWnd_14, 0x405, 1, 0xff - edx_2)

LRESULT hWnd_3 = *(arg1 + 0x4a4)

if (hWnd_3 != 0)
    hWnd_3 = SendMessageW(hWnd_3, 0x400, 0, 0)

int32_t edx_3 = *(data_bac4e4 + 0x70)

if (edx_3 != 0xff - hWnd_3)
    HWND hWnd_15 = *(arg1 + 0x4a4)
    
    if (hWnd_15 != 0)
        SendMessageW(hWnd_15, 0x405, 1, 0xff - edx_3)

LRESULT hWnd_4 = *(arg1 + 0x654)

if (hWnd_4 != 0)
    hWnd_4 = SendMessageW(hWnd_4, 0x400, 0, 0)

int32_t edx_4 = *(data_bac4e4 + 0x74)

if (edx_4 != 0xff - hWnd_4)
    HWND hWnd_16 = *(arg1 + 0x654)
    
    if (hWnd_16 != 0)
        SendMessageW(hWnd_16, 0x405, 1, 0xff - edx_4)

LRESULT hWnd_5 = *(arg1 + 0x804)

if (hWnd_5 != 0)
    hWnd_5 = SendMessageW(hWnd_5, 0x400, 0, 0)

int32_t edx_5 = *(data_bac4e4 + 0x78)

if (edx_5 != 0xff - hWnd_5)
    HWND hWnd_17 = *(arg1 + 0x804)
    
    if (hWnd_17 != 0)
        SendMessageW(hWnd_17, 0x405, 1, 0xff - edx_5)

LRESULT hWnd_6 = *(arg1 + 0x9b4)

if (hWnd_6 != 0)
    hWnd_6 = SendMessageW(hWnd_6, 0x400, 0, 0)

int32_t edx_6 = *(data_bac4e4 + 0x7c)

if (edx_6 != 0xff - hWnd_6)
    HWND hWnd_7 = *(arg1 + 0x9b4)
    
    if (hWnd_7 != 0)
        SendMessageW(hWnd_7, 0x405, 1, 0xff - edx_6)

LRESULT hWnd_8 = *(arg1 + 0x1d4)

if (hWnd_8 != 0)
    hWnd_8, edx_6 = SendMessageW(hWnd_8, 0xf0, 0, 0)

hWnd_8.b &= 1
edx_6.b = *(data_bac4e4 + 0xec)

if (edx_6.b != hWnd_8.b)
    HWND hWnd_18 = *(arg1 + 0x1d4)
    
    if (hWnd_18 != 0)
        WPARAM wParam
        wParam.b = edx_6.b != 0
        SendMessageW(hWnd_18, 0xf1, wParam, 0)

LRESULT hWnd_9 = *(arg1 + 0x384)

if (hWnd_9 != 0)
    hWnd_9, edx_6 = SendMessageW(hWnd_9, 0xf0, 0, 0)

hWnd_9.b &= 1
edx_6.b = *(data_bac4e4 + 0xed)

if (edx_6.b != hWnd_9.b)
    HWND hWnd_19 = *(arg1 + 0x384)
    
    if (hWnd_19 != 0)
        WPARAM wParam_1
        wParam_1.b = edx_6.b != 0
        SendMessageW(hWnd_19, 0xf1, wParam_1, 0)

LRESULT hWnd_10 = *(arg1 + 0x534)

if (hWnd_10 != 0)
    hWnd_10, edx_6 = SendMessageW(hWnd_10, 0xf0, 0, 0)

hWnd_10.b &= 1
edx_6.b = *(data_bac4e4 + 0xee)

if (edx_6.b != hWnd_10.b)
    HWND hWnd_20 = *(arg1 + 0x534)
    
    if (hWnd_20 != 0)
        WPARAM wParam_2
        wParam_2.b = edx_6.b != 0
        SendMessageW(hWnd_20, 0xf1, wParam_2, 0)

LRESULT hWnd_11 = *(arg1 + 0x6e4)

if (hWnd_11 != 0)
    hWnd_11, edx_6 = SendMessageW(hWnd_11, 0xf0, 0, 0)

hWnd_11.b &= 1
edx_6.b = *(data_bac4e4 + 0xef)

if (edx_6.b != hWnd_11.b)
    HWND hWnd_21 = *(arg1 + 0x6e4)
    
    if (hWnd_21 != 0)
        WPARAM wParam_3
        wParam_3.b = edx_6.b != 0
        SendMessageW(hWnd_21, 0xf1, wParam_3, 0)

LRESULT hWnd_12 = *(arg1 + 0x894)

if (hWnd_12 != 0)
    hWnd_12, edx_6 = SendMessageW(hWnd_12, 0xf0, 0, 0)

hWnd_12.b &= 1
edx_6.b = *(data_bac4e4 + 0xf0)

if (edx_6.b != hWnd_12.b)
    HWND hWnd_22 = *(arg1 + 0x894)
    
    if (hWnd_22 != 0)
        WPARAM wParam_4
        wParam_4.b = edx_6.b != 0
        SendMessageW(hWnd_22, 0xf1, wParam_4, 0)

LRESULT hWnd = *(arg1 + 0xa44)

if (hWnd != 0)
    hWnd, edx_6 = SendMessageW(hWnd, 0xf0, 0, 0)

hWnd.b &= 1
edx_6.b = *(data_bac4e4 + 0xf1)

if (edx_6.b == hWnd.b)
    return 

HWND hWnd_23 = *(arg1 + 0xa44)

if (hWnd_23 != 0)
    WPARAM wParam_5
    wParam_5.b = edx_6.b != 0
    SendMessageW(hWnd_23, 0xf1, wParam_5, 0)
