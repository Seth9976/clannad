// 函数: sub_556f10
// 地址: 0x556f10
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
data_13191e0 = 0
RECT rect
GetWindowRect(data_20c2e68, &rect)
int32_t left = rect.left
int32_t top = rect.top
HWND hDlg_1 = data_20c2e68
data_13191ec = rect.right - left
int32_t eax_5 = rect.bottom - top
data_13191e4 = left
data_13191e8 = top
data_13191f0 = eax_5
data_13191f4 = SendMessageA(GetDlgItem(hDlg_1, 0x4f32), 0x1027, 0, 0)
WPARAM eax_8 = sub_4c1810(hDlg_1, 0x4f32)
HWND hDlg_2 = data_20c2e68
data_13191f8 = eax_8
data_13191fc = SendMessageA(GetDlgItem(hDlg_2, 0x4f33), 0x1027, 0, 0)
WPARAM eax_11 = sub_4c1810(hDlg_2, 0x4f33)
HWND hDlg = data_20c2e68
data_1319200 = eax_11
BOOL result = EndDialog(hDlg, 0)
sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
