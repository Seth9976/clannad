// 函数: sub_6c34f0
// 地址: 0x6c34f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

LRESULT hWnd = *(arg1 + 4)

if (hWnd != 0)
    hWnd = SendMessageW(hWnd, 0x146, 0, 0)
    LRESULT esi_1 = hWnd
    
    if (esi_1 s> 0)
        LRESULT i
        
        do
            HWND hWnd_1 = *(arg1 + 4)
            
            if (hWnd_1 != 0)
                hWnd = SendMessageW(hWnd_1, 0x144, 0, 0)
            
            i = esi_1
            esi_1 -= 1
        while (i != 1)

return hWnd
