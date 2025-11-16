// 函数: sub_539ab0
// 地址: 0x539ab0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

RECT rect
LRESULT result = __security_cookie ^ &rect
LRESULT result_1 = result

if (*(arg1 + 8) != 0)
    HWND hWnd_1 = *(arg1 + 0x260)
    
    if (hWnd_1 != 0)
        WPARAM wParam
        wParam.b = *(data_bac4e4 + 0x134) != 0
        SendMessageW(hWnd_1, 0xf1, wParam, 0)
    
    sub_539b50(arg1)
    HWND hWnd = *(arg1 + 8)
    __builtin_memset(&rect, 0, 0x10)
    GetClientRect(hWnd, &rect)
    result = SendMessageW(*(arg1 + 8), 5, 0, 
        zx.d((rect.bottom).w - (rect.top).w) << 0x10 | zx.d((rect.right).w - (rect.left).w))

sub_745f2b(result_1 ^ &rect)
return result
