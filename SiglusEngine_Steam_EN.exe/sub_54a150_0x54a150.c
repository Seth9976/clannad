// 函数: sub_54a150
// 地址: 0x54a150
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

SetWindowLongA(GetDlgItem(data_20c17c4, 0x4f4f), 0xfffffffc, data_20c2178)
SetWindowLongA(GetDlgItem(data_20c17c4, 0x4e54), 0xfffffffc, data_20c217c)
SetWindowLongA(GetDlgItem(data_20c17c4, 0x4f1b), 0xfffffffc, data_20c2180)
SetWindowLongA(GetDlgItem(data_20c17c4, 0x4ef5), 0xfffffffc, data_20c2184)
SetWindowLongA(GetDlgItem(data_20c17c4, 0x5032), 0xfffffffc, data_20c2188)
SetWindowLongA(GetDlgItem(data_20c17c4, 0x4f68), 0xfffffffc, data_20c218c)
int32_t eax_6 = data_20c200c
HWND hWnd = data_20c17c4

if (arg1 != 0)
    eax_6 = 0xffffffff

data_20c200c = eax_6
GetWindowRect(hWnd, &data_1313cac)
LRESULT eax_8 = SendMessageA(GetDlgItem(data_20c17c4, 0x4f1b), 0x101d, 0, 0)
LRESULT ecx = data_1313cbc
HWND hDlg = data_20c17c4

if (eax_8 u<= 0x63f)
    ecx = eax_8

data_1313cbc = ecx
LRESULT eax_10 = SendMessageA(GetDlgItem(hDlg, 0x4f1b), 0x101d, 1, 0)
LRESULT ecx_1 = data_1313cc0

if (eax_10 u<= 0x63f)
    ecx_1 = eax_10

data_1313cc0 = ecx_1
LRESULT eax_12 = SendMessageA(GetDlgItem(data_20c17c4, 0x4f1b), 0x1027, 0, 0)
HWND ecx_2 = data_20c17c4
data_1313cc4 = eax_12
WPARAM eax_13 = sub_4c1520(ecx_2, 0x4f1b)
HWND hDlg_1 = data_20c17c4
data_1313cc8 = eax_13
int32_t eax_15 = sx.d(SendDlgItemMessageA(hDlg_1, 0x4ef5, 0xf2, 0, 0))
HWND hDlg_2 = data_20c17c4
data_1313ccc = eax_15 & 1
int32_t eax_18 = sx.d(SendDlgItemMessageA(hDlg_2, 0x5032, 0xf2, 0, 0))
HWND hDlg_3 = data_20c17c4
data_1313ca8 = 1
data_13132cc = eax_18 & 1
BOOL result = EndDialog(hDlg_3, 0)
data_20c17c4 = 0
return result
