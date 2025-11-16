// 函数: sub_6c4be0
// 地址: 0x6c4be0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

HWND hWnd = *(arg1 + 4)

if (hWnd != 0)
    LRESULT eax = SendMessageW(hWnd, 0x1004, 0, 0)
    WPARAM wParam = 0
    
    if (eax s> 0)
        do
            HWND hWnd_1 = *(arg1 + 4)
            char eax_1
            
            if (hWnd_1 != 0)
                eax_1 = SendMessageW(hWnd_1, 0x102c, wParam, 2)
            else
                eax_1 = 0
            
            if ((eax_1 & 2) != 0)
                return wParam
            
            wParam += 1
        while (wParam s< eax)

return 0xffffffff
