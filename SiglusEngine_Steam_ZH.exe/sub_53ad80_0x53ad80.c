// 函数: sub_53ad80
// 地址: 0x53ad80
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (*(arg1 + 8) == 0)
    return 

HWND hWnd = *(arg1 + 0x2f0)

if (hWnd != 0)
    WPARAM wParam
    wParam.b = *(data_bac4e4 + 0x154) != 0
    SendMessageW(hWnd, 0xf1, wParam, 0)

HWND hWnd_1 = *(arg1 + 0x380)

if (hWnd_1 != 0)
    WPARAM wParam_1
    wParam_1.b = *(data_bac4e4 + 0x155) != 0
    SendMessageW(hWnd_1, 0xf1, wParam_1, 0)

HWND hWnd_2 = *(arg1 + 0x410)

if (hWnd_2 != 0)
    WPARAM wParam_2
    wParam_2.b = *(data_bac4e4 + 0x156) != 0
    SendMessageW(hWnd_2, 0xf1, wParam_2, 0)

HWND hWnd_3 = *(arg1 + 0x260)

if (hWnd_3 == 0)
    return 

int32_t eax_5
int32_t edx_1
edx_1:eax_5 = muls.dp.d(0x51eb851f, *(data_bac4e4 + 0x158) - 0x64)
int32_t edx_2 = edx_1 s>> 3
SendMessageW(hWnd_3, 0x405, 1, (edx_2 u>> 0x1f) + edx_2)
