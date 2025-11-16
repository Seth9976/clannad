// 函数: sub_55ca60
// 地址: 0x55ca60
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

HWND hDlg = data_1af0a80
data_1af0a0c = 0
data_1af414c = 0
SetDlgItemTextA(hDlg, 0x4e63, 0x6215d8)
BOOL result

for (void* const i = &data_6128f0; i s< &data_612910; i += 4)
    result = EnableWindow(GetDlgItem(data_1af0a80, *i), 1)

data_703008 = 1
return result
