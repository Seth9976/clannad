// 函数: sub_5452a0
// 地址: 0x5452a0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

HWND ecx = data_1c054ec

if (ecx == 0)
    return 

WPARAM eax_1 = sub_4c1810(ecx, 0x4ef0)
BOOL bEnable

if (eax_1 s< 0 || eax_1 s>= data_1c054e8)
    bEnable = 0
else
    bEnable = 1

EnableWindow(GetDlgItem(data_1c054ec, 0x4eef), bEnable)
