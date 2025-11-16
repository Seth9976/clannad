// 函数: sub_5b9860
// 地址: 0x5b9860
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

HWND hWnd = *(arg1 + 0xc0)

if (hWnd != 0 && (GetWindowLongW(hWnd, 0xfffffff0) & 0x10000000) s> 0)
    ShowWindow(*(arg1 + 0xc0), SW_HIDE)

HWND hWnd_1 = *(arg1 + 0xc0)

if (hWnd_1 != 0)
    DestroyWindow(hWnd_1)

BOOL ho = *(arg1 + 0xb8)

if (ho != 0)
    ho = DeleteObject(ho)
    *(arg1 + 0xb8) = 0

*(arg1 + 0xa0) = 0
return ho
