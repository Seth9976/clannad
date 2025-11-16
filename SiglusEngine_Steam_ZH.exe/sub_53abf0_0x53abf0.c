// 函数: sub_53abf0
// 地址: 0x53abf0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (*(arg1 + 8) == 0)
    return 

HWND hWnd = *(arg1 + 0x2f0)
char eax_1

if (hWnd != 0)
    eax_1 = SendMessageW(hWnd, 0xf0, 0, 0)
else
    eax_1 = 0

char edx = *(data_bac4e4 + 0x154)

if (edx != (eax_1 & 1))
    HWND hWnd_4 = *(arg1 + 0x2f0)
    
    if (hWnd_4 != 0)
        WPARAM wParam
        wParam.b = edx != 0
        SendMessageW(hWnd_4, 0xf1, wParam, 0)

LRESULT hWnd_1 = *(arg1 + 0x380)

if (hWnd_1 != 0)
    hWnd_1 = SendMessageW(hWnd_1, 0xf0, 0, 0)

hWnd_1.b &= 1
edx = *(data_bac4e4 + 0x155)

if (edx != hWnd_1.b)
    HWND hWnd_5 = *(arg1 + 0x380)
    
    if (hWnd_5 != 0)
        WPARAM wParam_1
        wParam_1.b = edx != 0
        SendMessageW(hWnd_5, 0xf1, wParam_1, 0)

LRESULT hWnd_2 = *(arg1 + 0x410)

if (hWnd_2 != 0)
    hWnd_2 = SendMessageW(hWnd_2, 0xf0, 0, 0)

hWnd_2.b &= 1
edx = *(data_bac4e4 + 0x156)

if (edx != hWnd_2.b)
    HWND hWnd_6 = *(arg1 + 0x410)
    
    if (hWnd_6 != 0)
        WPARAM wParam_2
        wParam_2.b = edx != 0
        SendMessageW(hWnd_6, 0xf1, wParam_2, 0)

LRESULT hWnd_3 = *(arg1 + 0x260)

if (hWnd_3 != 0)
    hWnd_3 = SendMessageW(hWnd_3, 0x400, 0, 0)

int32_t ecx_4 = *(data_bac4e4 + 0x158)

if (ecx_4 == (hWnd_3 + 4) * 0x19)
    return 

HWND hWnd_7 = *(arg1 + 0x260)

if (hWnd_7 != 0)
    SendMessageW(hWnd_7, 0x405, 1, (ecx_4 - 0x64) s/ 0x19)
