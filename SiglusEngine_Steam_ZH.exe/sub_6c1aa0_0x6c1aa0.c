// 函数: sub_6c1aa0
// 地址: 0x6c1aa0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

BOOL hWnd = *(arg1 + 4)

if (hWnd != 0)
    hWnd.b = IsWindowEnabled(hWnd) != 0
    
    if (hWnd.b != arg2)
        return EnableWindow(*(arg1 + 4), zx.d(arg2))

return hWnd
