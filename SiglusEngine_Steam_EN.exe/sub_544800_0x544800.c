// 函数: sub_544800
// 地址: 0x544800
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
HWND hDlg = data_1c054ec
data_20c16b8 = 0x5033
RECT rect_2
GetWindowRect(GetDlgItem(hDlg, 0x5033), &rect_2)
data_20c16bc = rect_2.left - data_20c16b0
data_20c16c0 = rect_2.top - data_20c16b4
data_20c16c4 = rect_2.right - rect_2.left
data_20c16c8 = rect_2.bottom - rect_2.top
HWND hDlg_1 = data_1c054ec
data_20c16cc = 0x4e35
RECT rect_1
GetWindowRect(GetDlgItem(hDlg_1, 0x4e35), &rect_1)
data_20c16d0 = rect_1.left - data_20c16b0
data_20c16d4 = rect_1.top - data_20c16b4
data_20c16d8 = rect_1.right - rect_1.left
data_20c16dc = rect_1.bottom - rect_1.top
HWND hDlg_2 = data_1c054ec
data_20c16e0 = 0x4ed4
GetWindowRect(GetDlgItem(hDlg_2, 0x4ed4), &rect_2)
data_20c16e4 = rect_2.left - data_20c16b0
data_20c16e8 = rect_2.top - data_20c16b4
data_20c16ec = rect_2.right - rect_2.left
data_20c16f0 = rect_2.bottom - rect_2.top
RECT rect
GetWindowRect(GetDlgItem(data_1c054ec, 0x505a), &rect)
GetWindowRect(GetDlgItem(data_1c054ec, 0x4ee2), &rect_1)
int32_t result = rect_1.bottom - rect.bottom
sub_4d1c30(result, &data_20c16b8, &data_20c16f4, 0x14)
sub_4d1c30(result, &data_20c16cc, &data_20c1708, 0x14)
sub_4d1c30(result, &data_20c16e0, &data_20c171c, 0x14)
data_20c16fc -= result
data_20c1710 -= result
data_20c1724 -= result
sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
