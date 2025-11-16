// 函数: sub_543460
// 地址: 0x543460
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (*(arg1 + 8) == 0)
    return 

HWND hWnd_1 = *(arg1 + 0x650)

if (hWnd_1 != 0)
    SendMessageW(hWnd_1, 0xf1, 0, 0)

HWND hWnd_2 = *(arg1 + 0x6e0)

if (hWnd_2 != 0)
    SendMessageW(hWnd_2, 0xf1, 0, 0)

int32_t eax_1 = *(data_bac434 + 0x10)
LRESULT hWnd

if (eax_1 == 0)
    hWnd = *(arg1 + 0x650)
label_5434ba:
    
    if (hWnd != 0)
        SendMessageW(hWnd, 0xf1, 1, 0)
else if (eax_1 == 1)
    hWnd = *(arg1 + 0x6e0)
    goto label_5434ba
