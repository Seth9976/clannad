// 函数: sub_540040
// 地址: 0x540040
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* result

if (*(arg1 + 8) != 0)
    LRESULT hWnd = *(arg1 + 0xb0)
    
    if (hWnd != 0)
        hWnd = SendMessageW(hWnd, 0xf0, 0, 0)
    
    result = data_bac4e4
    
    if ((hWnd.b & 1) != 0 && *result != 1)
        result.b = 0
        return sub_540073() __tailcall
    
    LRESULT hWnd_1 = *(arg1 + 0x140)
    
    if (hWnd_1 != 0)
        hWnd_1 = SendMessageW(hWnd_1, 0xf0, 0, 0)
        result = data_bac4e4
    
    if ((hWnd_1.b & 1) != 0)
        result = *result
        
        if (result != 0 && result != 2)
            result.b = 0
            return sub_540073() __tailcall

result.b = 1
return result
