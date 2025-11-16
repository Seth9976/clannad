// 函数: sub_5356b0
// 地址: 0x5356b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint16_t result = (arg2 u>> 0x10).w
int32_t result_1 = sx.d(result)

if (result_1 == 0)
    return result

LRESULT hWnd = *(arg1 + 0x144)

if (hWnd != 0)
    hWnd = SendMessageW(hWnd, 0xe1, 0, 0)

WPARAM wParam = hWnd - 1

if (result_1 s<= 0)
    wParam = hWnd + 1

HWND hWnd_1 = *(arg1 + 0x144)

if (hWnd_1 != 0)
    SendMessageW(hWnd_1, 0xe0, wParam, 1)

return sub_5353d0(arg1)
