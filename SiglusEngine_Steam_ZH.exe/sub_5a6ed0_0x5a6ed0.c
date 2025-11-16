// 函数: sub_5a6ed0
// 地址: 0x5a6ed0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void var_54
int32_t eax_1 = __security_cookie ^ &var_54

if (arg2 == 0xf && *(arg1 + 0xfc) != 0)
    PAINTSTRUCT paint
    HDC hdc = BeginPaint(*(arg1 + 4), &paint)
    int32_t top = paint.rcPaint.top
    int32_t left = paint.rcPaint.left
    BitBlt(hdc, left, top, paint.rcPaint.right, paint.rcPaint.bottom, *(arg1 + 0xfc), left, top, 
        SRCCOPY)
    EndPaint(*(arg1 + 4), &paint)

LRESULT result = sub_6c0020(arg1, arg2, arg3, arg4)
sub_745f2b(eax_1 ^ &var_54)
return result
