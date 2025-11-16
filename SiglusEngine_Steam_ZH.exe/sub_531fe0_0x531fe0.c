// 函数: sub_531fe0
// 地址: 0x531fe0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (*(arg1 + 8) == 0)
    return 

HWND hWnd = *(arg1 + 0x260)
int32_t ebx
ebx.b = 0
LRESULT eax_1

if (hWnd != 0)
    eax_1 = SendMessageW(hWnd, 0x400, 0, 0)
else
    eax_1 = 0

int32_t edx_1 = *(data_bac4e4 + 0x144)

if (edx_1 != eax_1 * 0xa)
    HWND hWnd_2 = *(arg1 + 0x260)
    
    if (hWnd_2 != 0)
        SendMessageW(hWnd_2, 0x405, 1, edx_1 s/ 0xa)
    
    ebx.b = 1

LRESULT hWnd_1 = *(arg1 + 0x410)

if (hWnd_1 != 0)
    hWnd_1 = SendMessageW(hWnd_1, 0x400, 0, 0)

int32_t edx_4 = *(data_bac4e4 + 0x148)

if (edx_4 != hWnd_1 * 0x64)
    HWND hWnd_3 = *(arg1 + 0x410)
    
    if (hWnd_3 == 0)
        return sub_532140(arg1) __tailcall
    
    SendMessageW(hWnd_3, 0x405, 1, edx_4 s/ 0x64)
    return sub_532140(arg1) __tailcall

if (ebx.b != 0)
    return sub_532140(arg1) __tailcall
