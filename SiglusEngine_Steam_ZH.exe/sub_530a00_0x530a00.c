// 函数: sub_530a00
// 地址: 0x530a00
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void var_58
int32_t eax_1 = __security_cookie ^ &var_58
BOOL result = *(arg1 + 0x310)

if (result != *(arg1 + 0x314))
    HWND hWnd_3 = *(arg1 + 0xc0)
    LRESULT var_54_1
    
    if (hWnd_3 != 0)
        LRESULT eax_2 = SendMessageW(hWnd_3, 0x130b, 0, 0)
        var_54_1 = eax_2
        
        if (eax_2 s< 0 || eax_2 s>= (*(arg1 + 0x314) - *(arg1 + 0x310)) s>> 2)
        label_530a69:
            HWND hWnd_4 = *(arg1 + 0xc0)
            var_54_1 = 0
            
            if (hWnd_4 != 0)
                SendMessageW(hWnd_4, 0x130c, 0, 0)
    else
        var_54_1 = 0
        
        if (0 s>= (*(arg1 + 0x314) - *(arg1 + 0x310)) s>> 2)
            goto label_530a69
    
    HWND hWnd = *(arg1 + 0xc0)
    RECT var_30
    __builtin_memset(&var_30, 0, 0x10)
    GetWindowRect(hWnd, &var_30)
    HWND hWnd_5 = *(arg1 + 0xc0)
    
    if (hWnd_5 != 0)
        SendMessageW(hWnd_5, 0x1328, 0, &var_30)
    
    uint128_t xmm0
    xmm0.d = var_30.left
    xmm0:4.d = var_30.top
    xmm0:8.d = var_30.right
    xmm0:0xc.d = var_30.bottom
    HWND hWnd_1 = *(arg1 + 4)
    POINT point_1
    point_1.x = xmm0
    point_1.y = _mm_bsrli_si128(xmm0, 4)
    ScreenToClient(hWnd_1, &point_1)
    int32_t xmm1_2 = _mm_bsrli_si128(xmm0, 0xc)
    HWND hWnd_2 = *(arg1 + 4)
    POINT point
    point.x = _mm_bsrli_si128(xmm0, 8)
    point.y = xmm1_2
    ScreenToClient(hWnd_2, &point)
    result = *(*(arg1 + 0x310) + (var_54_1 << 2))
    HWND hWnd_6 = *(result + 4)
    
    if (hWnd_6 != 0)
        int32_t y = point_1.y
        result = SetWindowPos(hWnd_6, nullptr, point_1.x - 2, y, point.x - (point_1.x - 2), 
            point.y - y, 0x14)

sub_745f2b(eax_1 ^ &var_58)
return result
