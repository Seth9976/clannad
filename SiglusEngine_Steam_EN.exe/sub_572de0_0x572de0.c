// 函数: sub_572de0
// 地址: 0x572de0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void var_54
int32_t eax_1 = __security_cookie ^ &var_54

if (arg2 == 0xf && data_20f0288 != 0)
    PAINTSTRUCT paint
    HDC hdc = BeginPaint(arg1, &paint)
    int32_t top = paint.rcPaint.top
    int32_t left = paint.rcPaint.left
    BitBlt(hdc, left, top, paint.rcPaint.right, paint.rcPaint.bottom, data_20f0288, left, top, 
        SRCCOPY)
    EndPaint(arg1, &paint)

LRESULT result = CallWindowProcA(data_20f20d0, arg1, arg2, arg3, arg4)
sub_5f02dd(eax_1 ^ &var_54)
return result
