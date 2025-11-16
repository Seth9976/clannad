// 函数: sub_53ffd0
// 地址: 0x53ffd0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (*(arg1 + 8) == 0)
    return 

HWND hWnd_1 = *(arg1 + 0xb0)

if (hWnd_1 != 0)
    SendMessageW(hWnd_1, 0xf1, 0, 0)

HWND hWnd_2 = *(arg1 + 0x140)

if (hWnd_2 != 0)
    SendMessageW(hWnd_2, 0xf1, 0, 0)

int32_t eax_1 = *data_bac4e4
LRESULT hWnd

if (eax_1 == 0)
label_54001e:
    hWnd = *(arg1 + 0x140)
label_540024:
    
    if (hWnd != 0)
        SendMessageW(hWnd, 0xf1, 1, 0)
else
    if (eax_1 == 1)
        hWnd = *(arg1 + 0xb0)
        goto label_540024
    
    if (eax_1 == 2)
        goto label_54001e
