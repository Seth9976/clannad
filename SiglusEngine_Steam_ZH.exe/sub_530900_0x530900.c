// 函数: sub_530900
// 地址: 0x530900
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result = *(arg1 + 0x310)

if (result == *(arg1 + 0x314))
    return result

LRESULT hWnd = *(arg1 + 0xc0)
LRESULT hWnd_2

if (hWnd != 0)
    hWnd = SendMessageW(hWnd, 0x130b, 0, 0)
    hWnd_2 = hWnd
    
    if (hWnd s< 0 || hWnd s>= (*(arg1 + 0x314) - *(arg1 + 0x310)) s>> 2)
    label_530949:
        HWND hWnd_1 = *(arg1 + 0xc0)
        hWnd_2 = 0
        
        if (hWnd_1 != 0)
            SendMessageW(hWnd_1, 0x130c, 0, 0)
else
    hWnd_2 = hWnd
    
    if (hWnd s>= (*(arg1 + 0x314) - *(arg1 + 0x310)) s>> 2)
        goto label_530949

(*(**(*(arg1 + 0x310) + (hWnd_2 << 2)) + 0x10))(*(arg1 + 4))
sub_530a00(arg1)
return sub_530990(arg1, *(*(arg1 + 0x310) + (hWnd_2 << 2)))
