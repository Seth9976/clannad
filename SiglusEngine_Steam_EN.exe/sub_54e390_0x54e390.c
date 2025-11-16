// 函数: sub_54e390
// 地址: 0x54e390
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_c = ecx
int32_t eax_4 = sub_4c0df0(
    sub_4c0df0(
        sub_4c0df0(
            sub_4c0df0(GetWindowRect(data_1c054f8, &data_20c2464), 0x4f4f, data_1c054f8, 0x20c2474, 
                1, 0), 
            0x4f01, data_1c054f8, 0x20c24ac, 1, 3), 
        0x4f08, data_1c054f8, 0x20c24e4, 1, 3), 
    0x4f09, data_1c054f8, 0x20c251c, 1, 3)
sub_4c0df0(eax_4, 0x4f0a, data_1c054f8, 0x20c2554, 1, 3)
SetDlgItemTextA(data_1c054f8, 0x4f01, &data_131331c)
SetDlgItemTextA(data_1c054f8, 0x4f08, &data_1313524)
SetDlgItemTextA(data_1c054f8, 0x4f09, &data_131372c)
SetDlgItemTextA(data_1c054f8, 0x4f0a, &data_1313934)
int32_t eax_6 = GetWindowLongA(GetDlgItem(data_1c054f8, 0x4f01), 0xfffffffc)
HWND hDlg = data_1c054f8
data_20c258c = eax_6
SetWindowLongA(GetDlgItem(hDlg, 0x4f01), 0xfffffffc, sub_54e0d0)
int32_t eax_9 = GetWindowLongA(GetDlgItem(data_1c054f8, 0x4f08), 0xfffffffc)
HWND hDlg_1 = data_1c054f8
data_20c2590 = eax_9
SetWindowLongA(GetDlgItem(hDlg_1, 0x4f08), 0xfffffffc, sub_54e180)
int32_t eax_12 = GetWindowLongA(GetDlgItem(data_1c054f8, 0x4f09), 0xfffffffc)
HWND hDlg_2 = data_1c054f8
data_20c2594 = eax_12
SetWindowLongA(GetDlgItem(hDlg_2, 0x4f09), 0xfffffffc, sub_54e230)
int32_t eax_15 = GetWindowLongA(GetDlgItem(data_1c054f8, 0x4f0a), 0xfffffffc)
HWND hDlg_3 = data_1c054f8
data_20c2598 = eax_15
SetWindowLongA(GetDlgItem(hDlg_3, 0x4f0a), 0xfffffffc, sub_54e2e0)
int32_t var_1c_1 = SetFocus(GetDlgItem(data_1c054f8, 0x4f4f))
return sub_4d5720(data_1c054f8)
