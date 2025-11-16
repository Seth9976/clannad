// 函数: sub_53e090
// 地址: 0x53e090
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (*(arg1 + 8) == 0)
    return 

HWND hWnd_1 = *(arg1 + 0x140)
LRESULT eax

if (hWnd_1 != 0)
    eax = SendMessageW(hWnd_1, 0x400, 0, 0)
else
    eax = 0

uint32_t lParam = zx.d(*(data_bac4e4 + 0x117))

if (lParam != eax)
    HWND hWnd_2 = *(arg1 + 0x140)
    
    if (hWnd_2 != 0)
        SendMessageW(hWnd_2, 0x405, 1, lParam)

LRESULT hWnd_3 = *(arg1 + 0x260)

if (hWnd_3 != 0)
    hWnd_3 = SendMessageW(hWnd_3, 0x400, 0, 0)

uint32_t lParam_1 = zx.d(*(data_bac4e4 + 0x116))

if (lParam_1 != hWnd_3)
    HWND hWnd_4 = *(arg1 + 0x260)
    
    if (hWnd_4 != 0)
        SendMessageW(hWnd_4, 0x405, 1, lParam_1)

LRESULT hWnd_5 = *(arg1 + 0x380)

if (hWnd_5 != 0)
    hWnd_5 = SendMessageW(hWnd_5, 0x400, 0, 0)

uint32_t lParam_2 = zx.d(*(data_bac4e4 + 0x115))

if (lParam_2 != hWnd_5)
    HWND hWnd_6 = *(arg1 + 0x380)
    
    if (hWnd_6 != 0)
        SendMessageW(hWnd_6, 0x405, 1, lParam_2)

LRESULT hWnd = *(arg1 + 0x4a0)

if (hWnd != 0)
    hWnd = SendMessageW(hWnd, 0x400, 0, 0)

uint32_t ebx_1 = zx.d(*(data_bac4e4 + 0x118))

if (ebx_1 == 0xff - hWnd)
    return 

hWnd = *(arg1 + 0x4a0)

if (hWnd != 0)
    SendMessageW(hWnd, 0x405, 1, 0xff - ebx_1)
