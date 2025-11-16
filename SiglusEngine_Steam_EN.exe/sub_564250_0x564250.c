// 函数: sub_564250
// 地址: 0x564250
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

PAINTSTRUCT paint
int32_t eax_1 = __security_cookie ^ &paint

if (arg2 == 0xf)
    BeginPaint(arg1, &paint)
    EndPaint(arg1, &paint)
    sub_5f02dd(eax_1 ^ &paint)
    return 1

if (arg2 == 0x201)
    GetCursorPos(&data_20cc9a4)
    data_20cc984 = data_20cc8d4
    int32_t eax_3 = data_20cc8d8
    data_20cc980 = 1
    data_20cc988 = eax_3

LRESULT result = CallWindowProcA(data_20cc9ac, arg1, arg2, arg3, arg4)
sub_5f02dd(eax_1 ^ &paint)
return result
