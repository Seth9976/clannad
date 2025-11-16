// 函数: sub_5353d0
// 地址: 0x5353d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void var_44
LRESULT result = __security_cookie ^ &var_44
LRESULT result_1 = result

if (*(arg1 + 0x410) s> 0)
    LRESULT hWnd_2 = *(arg1 + 0x144)
    LRESULT var_40_1
    
    if (hWnd_2 != 0)
        var_40_1 = SendMessageW(hWnd_2, 0xe1, 0, 0)
    else
        var_40_1 = hWnd_2
    
    int32_t edi_2
    
    if ((GetWindowLongW(*(arg1 + 0x144), 0xfffffff0) & 0x10000000) s<= 0)
        edi_2 = 0
    else
        HWND hWnd = *(arg1 + 0x144)
        RECT rect
        __builtin_memset(&rect, 0, 0x10)
        GetClientRect(hWnd, &rect)
        edi_2 = rect.right - rect.left
    
    HWND hWnd_1 = *(arg1 + 0xb0)
    RECT rect_1
    __builtin_memset(&rect_1, 0, 0x10)
    GetClientRect(hWnd_1, &rect_1)
    result = var_40_1
    int32_t ecx_2 = rect_1.right - edi_2 - rect_1.left
    
    if (result != *(arg1 + 0x414) || ecx_2 != *(arg1 + 0x418))
        int32_t X = *(arg1 + 0x41c) + 0xc
        int32_t i_1 = 0
        int32_t Y = 1 - result * 0x1b
        
        if (*(arg1 + 0x410) s> 0)
            int32_t edi_3 = 0
            int32_t i
            
            do
                HWND hWnd_6 = *(*(arg1 + 0x420) + edi_3 + 8)
                
                if (hWnd_6 != 0)
                    SetWindowPos(hWnd_6, nullptr, 8, Y + 6, 0, 0, 0x15)
                
                HWND hWnd_3 = *(*(arg1 + 0x420) + edi_3 + 8)
                
                if (hWnd_3 != 0)
                    SetWindowPos(hWnd_3, nullptr, 0, 0, *(arg1 + 0x41c), 0xe, 0x16)
                
                HWND hWnd_4 = *(*(arg1 + 0x420) + edi_3 + 0x9c)
                
                if (hWnd_4 != 0)
                    SetWindowPos(hWnd_4, nullptr, X, Y, 0, 0, 0x15)
                
                HWND hWnd_5 = *(*(arg1 + 0x420) + edi_3 + 0x9c)
                
                if (hWnd_5 != 0)
                    SetWindowPos(hWnd_5, nullptr, 0, 0, ecx_2 - X - 4, 0x1a, 0x16)
                
                Y += 0x1b
                i = i_1 + 1
                edi_3 += 0x12c
                i_1 = i
            while (i s< *(arg1 + 0x410))
        
        result = var_40_1
        *(arg1 + 0x414) = result
        *(arg1 + 0x418) = ecx_2

sub_745f2b(result_1 ^ &var_44)
return result
