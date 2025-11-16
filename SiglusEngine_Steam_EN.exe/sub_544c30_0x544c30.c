// 函数: sub_544c30
// 地址: 0x544c30
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
HWND hDlg = data_1c054ec
data_1332b48 = arg1
SendMessageA(GetDlgItem(hDlg, 0x5054), 0x405, 1, arg1)
LPARAM var_90_1 = arg1
void string
sub_4c84d0(&string, "%d ^%")
BOOL result = SetDlgItemTextA(data_1c054ec, 0x5055, &string)
sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
