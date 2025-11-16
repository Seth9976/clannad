// 函数: sub_53bae0
// 地址: 0x53bae0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (*(arg1 + 8) == 0)
    return 

HWND hWnd_1 = *(arg1 + 0xb0)

if (hWnd_1 != 0)
    SendMessageW(hWnd_1, 0xf1, 0, 0)

HWND hWnd_2 = *(arg1 + 0x140)

if (hWnd_2 != 0)
    SendMessageW(hWnd_2, 0xf1, 0, 0)

HWND hWnd_3 = *(arg1 + 0x1d0)

if (hWnd_3 != 0)
    SendMessageW(hWnd_3, 0xf1, 0, 0)

int32_t eax_1 = *(data_bac4e4 + 0x15c)
LRESULT hWnd

if (eax_1 == 0)
    hWnd = *(arg1 + 0xb0)
label_53bb62:
    
    if (hWnd != 0)
        SendMessageW(hWnd, 0xf1, 1, 0)
else
    if (eax_1 == 1)
        hWnd = *(arg1 + 0x140)
        goto label_53bb62
    
    if (eax_1 == 2)
        hWnd = *(arg1 + 0x1d0)
        goto label_53bb62
