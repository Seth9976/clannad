// 函数: sub_579190
// 地址: 0x579190
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

LRESULT eax = arg3
LRESULT lParam = 0
LRESULT lParam_2 = 0
int32_t eax_1
int32_t edx_2
edx_2:eax_1 = muls.dp.d(0x6bca1af3, *(eax + 0xa4) - *(eax + 0xa0))
int32_t edx_3 = edx_2 s>> 8
int32_t i_1 = (edx_3 u>> 0x1f) + edx_3
LPARAM lParam_1 = arg2
int32_t arg_c

if (i_1 s> 0)
    int32_t esi_1 = 0
    LRESULT lParam_3
    int32_t i
    
    do
        lParam_3 = sub_576aa0(arg1, lParam_1, lParam, *(arg3 + 0xa0) + esi_1, arg_c.b)
        lParam_1 = arg2
        esi_1 += 0x260
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
