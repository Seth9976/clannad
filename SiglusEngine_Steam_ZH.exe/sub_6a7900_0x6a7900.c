// 函数: sub_6a7900
// 地址: 0x6a7900
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp

if (data_4ebe4b0 != 0 && data_4ebe680 == 0)
    int32_t var_60 = ValidateRect(*(arg1 + 4), nullptr)
    sub_6f7fb0()
    int32_t eax_2
    eax_2.b = 0
    sub_745f2b(eax_1 ^ &__saved_ebp)
    return eax_2

PAINTSTRUCT paint
HDC eax_3 = BeginPaint(*(arg1 + 4), &paint)
HGDIOBJ eax_4 = GetStockObject(BLACK_BRUSH)
SelectObject(eax_3, eax_4)
var_44
FillRect(eax_3, &var_44, eax_4)
EndPaint(*(arg1 + 4), &paint)
BOOL eax_5
eax_5.b = 0
sub_745f2b(eax_1 ^ &__saved_ebp)
return eax_5
