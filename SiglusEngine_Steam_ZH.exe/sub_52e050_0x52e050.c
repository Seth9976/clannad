// 函数: sub_52e050
// 地址: 0x52e050
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

(*(*arg1 + 0x28))()
HWND hWnd = arg1[1]

if (hWnd != 0)
    UpdateWindow(hWnd)

int32_t hWnd_1 = arg1[1]

if (hWnd_1 != 0 && (GetWindowLongW(hWnd_1, 0xfffffff0) & 0x10000000) s<= 0)
    ShowWindow(arg1[1], SW_SHOW)

hWnd_1.b = 1
return hWnd_1
