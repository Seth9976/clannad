// 函数: sub_4c1520
// 地址: 0x4c1520
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

HWND hWnd = GetDlgItem(arg1, arg2)
LRESULT eax = SendMessageA(hWnd, 0x1004, 0, 0)
WPARAM wParam = 0

if (eax s> 0)
    do
        if (SendMessageA(hWnd, 0x102c, wParam, 1) != 0)
            return wParam
        
        wParam += 1
    while (wParam s< eax)

return 0xffffffff
