// 函数: sub_545440
// 地址: 0x545440
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

HWND hDlg = data_1c054ec

if (hDlg == 0)
    return hDlg

if (data_1b8be8f == 0)
    return SendDlgItemMessageA(hDlg, 0x5033, 0xf1, 0, 0)

return SendDlgItemMessageA(hDlg, 0x5033, 0xf1, 1, 0)
