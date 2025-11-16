// 函数: sub_576980
// 地址: 0x576980
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

LRESULT eax = arg3
LRESULT lParam = 0
LRESULT lParam_2 = 0
int32_t i_2 = (*(eax + 0xa4) - *(eax + 0xa0)) s/ 0x15fc
LPARAM lParam_1 = arg2
int32_t i_1 = i_2
int32_t arg_c

if (i_2 s> 0)
    int32_t ebx_1 = 0
    int32_t i
    
    do
        void* esi_3 = *(arg3 + 0xa0) + ebx_1
        
        if (*(esi_3 + 0x1ac) != 0)
            lParam = sub_576aa0(arg1, lParam_1, lParam, esi_3, arg_c.b)
            lParam_2 = lParam
        else
            lParam = lParam_2
            
            if ((*(esi_3 + 0x1438) - *(esi_3 + 0x1434)) s/ 0x15fc s> 0)
                lParam = sub_576aa0(arg1, arg2, lParam, esi_3, arg_c.b)
                lParam_2 = lParam
        
        lParam_1 = arg2
        ebx_1 += 0x15fc
        i = i_1
        i_1 -= 1
    while (i != 1)

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
    sub_5784e0(arg1 + 0x3680, &arg_c, var_14, i_1)
    lParam = lParam_2
    lParam_1 = arg2

return result
