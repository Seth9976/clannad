// 函数: sub_6c79a0
// 地址: 0x6c79a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (*arg1 != arg1[1])
    POINT point
    __builtin_memset(&point, 0, 8)
    GetCursorPos(&point)
    ScreenToClient(arg2, &point)
    
    for (int32_t* i = *arg1; i != arg1[1]; i = &i[1])
        int32_t x = point.x
        int32_t y = point.y
        int32_t var_18
        sub_6c7260(*i, &var_18)
        int32_t var_14
        int32_t var_10
        int32_t var_c
        
        if ((var_14 != 0 || var_c != 0 || var_18 != var_c || var_10 != 0) && var_18 s<= x
                && x s< var_10 && var_14 s<= y && y s< var_c)
            return *i

return 0
