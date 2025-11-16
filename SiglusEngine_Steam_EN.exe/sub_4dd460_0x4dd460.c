// 函数: sub_4dd460
// 地址: 0x4dd460
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
HDC edi = arg2
bool cond:0 = *(arg1 + 0x2c) == 0
*(arg1 + 0x30) = 1

if (not(cond:0))
    RECT rect
    GetClientRect(*(arg1 - 0x28), &rect)
    int32_t top = rect.top
    int32_t left = rect.left
    BitBlt(*(arg1 + 0x2c), left, top, rect.right - left, rect.bottom - top, edi, 0, 0, SRCCOPY)
    DeleteDC(edi)
    edi = *(arg1 + 0x2c)

ReleaseDC(*(arg1 - 0x28), edi)
sub_5f02dd(eax_1 ^ &__saved_ebp)
return 0
