// 函数: sub_578b00
// 地址: 0x578b00
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

LRESULT eax = arg3
LRESULT lParam = 0
LRESULT lParam_2 = 0
int32_t i_1 = (*(eax + 0xa4) - *(eax + 0xa0)) s/ 0xb4
LPARAM lParam_1 = arg2
int32_t arg_c

if (i_1 s> 0)
    int32_t esi_2 = 0
    LRESULT lParam_3
    int32_t i
    
    do
        lParam_3 = sub_576aa0(arg1, lParam_1, lParam, *(arg3 + 0xa0) + esi_2, arg_c.b)
        lParam_1 = arg2
        esi_2 += 0xb4
        lParam = lParam_3
        i = i_1
        i_1 -= 1
    while (i != 1)
    lParam_2 = lParam_3

LRESULT result

while (true)
    result = *(arg1 + 0xbc)
    
    if (lParam != 0)
        if (result != 0)
            result = SendMessageW(result, 0x110a, 1, lParam)
    else if (result != 0)
        result = SendMessageW(result, 0x110a, 4, lParam_1)
    
    arg3 = result
    
    if (result == 0)
        break
    
    HWND hWnd = *(arg1 + 0xbc)
    
    if (hWnd != 0)
        SendMessageW(hWnd, 0x1101, 0, result)
    
    int32_t* var_14
    sub_5788c0(arg1 + 0x3680, &var_14, &arg3)
    int32_t var_10
    sub_5784e0(arg1 + 0x3680, &arg_c, var_14, var_10)
    lParam = lParam_2
    lParam_1 = arg2

return result
