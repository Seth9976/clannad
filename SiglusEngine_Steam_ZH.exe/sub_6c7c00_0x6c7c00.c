// 函数: sub_6c7c00
// 地址: 0x6c7c00
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1

if (arg2 == 2)
    int32_t* lpClassName_1 = arg1 + 0x78
    PWSTR lpClassName
    
    if (*(arg1 + 0x8c) u< 8)
        lpClassName = lpClassName_1
    else
        lpClassName = *lpClassName_1
    
    UnregisterClassW(lpClassName, data_4ebe3a8)
    bool cond:1_1 = lpClassName_1[5] u< 8
    lpClassName_1[4] = 0
    
    if (not(cond:1_1))
        lpClassName_1 = *lpClassName_1
    
    *lpClassName_1 = 0

return sub_6c0020(arg1, arg2, arg3, arg4)
