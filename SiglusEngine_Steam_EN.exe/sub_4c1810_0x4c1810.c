// 函数: sub_4c1810
// 地址: 0x4c1810
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

HWND var_8 = arg1
LRESULT eax_2 = SendMessageA(GetDlgItem(arg1, arg2), 0x1004, 0, 0)
WPARAM wParam = 0

if (eax_2 s> 0)
    do
        if (SendMessageA(GetDlgItem(arg1, arg2), 0x102c, wParam, 2) != 0)
            return wParam
        
        wParam += 1
    while (wParam s< eax_2)

return 0xffffffff
