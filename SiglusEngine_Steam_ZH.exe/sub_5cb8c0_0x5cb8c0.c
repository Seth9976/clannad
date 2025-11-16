// 函数: sub_5cb8c0
// 地址: 0x5cb8c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void var_54
int32_t eax_1 = __security_cookie ^ &var_54
sub_6b2940(arg2, arg3, arg4)

if (arg2 == 0xf)
    PAINTSTRUCT paint
    BeginPaint(*(arg1 + 4), &paint)
    EndPaint(*(arg1 + 4), &paint)

if (arg2 == 2)
    void* lpClassName_1 = arg1 + 0x78
    void* lpClassName
    
    if (*(arg1 + 0x8c) u< 8)
        lpClassName = lpClassName_1
    else
        lpClassName = *lpClassName_1
    
    UnregisterClassW(lpClassName, data_4ebe3a8)
    bool cond:1_1 = *(lpClassName_1 + 0x14) u< 8
    *(lpClassName_1 + 0x10) = 0
    
    if (not(cond:1_1))
        lpClassName_1 = *lpClassName_1
    
    *lpClassName_1 = 0

LRESULT result = sub_6c0020(arg1, arg2, arg3, arg4)
sub_745f2b(eax_1 ^ &var_54)
return result
