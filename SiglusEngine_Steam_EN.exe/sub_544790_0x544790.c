// 函数: sub_544790
// 地址: 0x544790
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
HWND hDlg = data_1c054ec
*arg2 = arg1
RECT rect
GetWindowRect(GetDlgItem(hDlg, arg1), &rect)
arg2[1] = rect.left - data_20c16b0
arg2[2] = rect.top - data_20c16b4
arg2[3] = rect.right - rect.left
int32_t result = rect.bottom - rect.top
arg2[4] = result
sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
