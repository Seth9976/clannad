// 函数: sub_67a830
// 地址: 0x67a830
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (*(arg1 + 8) == 0)
    return 

HWND hWnd = *(arg1 + 0x3f4)

if (hWnd != 0)
    WPARAM wParam
    wParam.b = *(data_bac4e4 + 0x19b) != 0
    SendMessageW(hWnd, 0xf1, wParam, 0)

HWND hWnd_1 = *(arg1 + 0x488)

if (hWnd_1 != 0)
    WPARAM wParam_1
    wParam_1.b = *(data_bac4e4 + 0x19c) != 0
    SendMessageW(hWnd_1, 0xf1, wParam_1, 0)
