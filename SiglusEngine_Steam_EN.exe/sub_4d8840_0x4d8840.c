// 函数: sub_4d8840
// 地址: 0x4d8840
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

PAINTSTRUCT paint
int32_t eax_1 = __security_cookie ^ &paint

if (data_187c608 != 0)
    char* eax_2 = sub_41add0()
    sub_5f02dd(eax_1 ^ &paint)
    return eax_2

HDC eax_3 = BeginPaint(data_7027bc, &paint)

if (data_1332b5c s> 0 && data_1332b58 s> 0 && data_1332b54 != 0 && data_1332b60 s> 0
        && data_1332b64 s> 0)
    if (data_1c0529c == 0)
        if (data_1332b34 == 0)
            sub_4d86c0(eax_3)
        else
            sub_4d84b0(eax_3)
    else if (data_1332b34 != 0)
        sub_4d84b0(eax_3)
    else
        sub_4d8790(eax_3)

BOOL eax_4 = EndPaint(data_7027bc, &paint)
sub_5f02dd(eax_1 ^ &paint)
return eax_4
