// 函数: sub_533970
// 地址: 0x533970
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (*(arg1 + 8) == 0)
    return 

HWND hWnd_1 = *(arg1 + 0x140)
LRESULT eax

if (hWnd_1 != 0)
    eax = SendMessageW(hWnd_1, 0x400, 0, 0)
else
    eax = 0

int32_t ebx_1 = *(data_bac4e4 + 0x110)

if (ebx_1 != 0xff - eax)
    HWND hWnd_2 = *(arg1 + 0x140)
    
    if (hWnd_2 != 0)
        SendMessageW(hWnd_2, 0x405, 1, 0xff - ebx_1)

LRESULT hWnd = *(arg1 + 0x1d0)

if (hWnd != 0)
    hWnd = SendMessageW(hWnd, 0xf0, 0, 0)

hWnd.b &= 1
char edx_1 = *(data_bac4e4 + 0x114)

if (edx_1 == hWnd.b)
    return 

HWND hWnd_3 = *(arg1 + 0x1d0)

if (hWnd_3 != 0)
    WPARAM wParam
    wParam.b = edx_1 != 0
    SendMessageW(hWnd_3, 0xf1, wParam, 0)
