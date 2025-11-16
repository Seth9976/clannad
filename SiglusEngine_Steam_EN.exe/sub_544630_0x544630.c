// 函数: sub_544630
// 地址: 0x544630
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
RECT rect
GetWindowRect(GetDlgItem(data_1c054ec, arg1), &rect)
RECT rect_1
GetWindowRect(GetDlgItem(data_1c054ec, arg2), &rect_1)
int32_t result = rect_1.bottom - rect.bottom
sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
