// 函数: sub_54dc40
// 地址: 0x54dc40
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
sub_54d710()
sub_4d6c40(&data_20c245c, &data_20c2460)
data_1319204 = 0
RECT rect
GetWindowRect(data_20c22c0, &rect)
int32_t left = rect.left
int32_t top = rect.top
HWND hDlg_1 = data_20c22c0
data_1319210 = rect.right - left
int32_t eax_5 = rect.bottom - top
data_1319208 = left
data_131920c = top
data_1319214 = eax_5
data_1319218 = SendMessageA(GetDlgItem(hDlg_1, 0x4f32), 0x1027, 0, 0)
WPARAM eax_8 = sub_4c1810(hDlg_1, 0x4f32)
HWND hDlg = data_20c22c0
data_131921c = eax_8
BOOL result = EndDialog(hDlg, 0)
sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
