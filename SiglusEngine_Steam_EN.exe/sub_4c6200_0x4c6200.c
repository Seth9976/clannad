// 函数: sub_4c6200
// 地址: 0x4c6200
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

SendDlgItemMessageA(arg1, 0x4f82, 0xf1, 0, 0)
SendDlgItemMessageA(arg1, 0x4f83, 0xf1, 0, 0)
SendDlgItemMessageA(arg1, 0x4f84, 0xf1, 0, 0)
int32_t eax = data_131d2c8

if (eax == 0)
    int32_t var_14_3 = 1
    int32_t var_18_3 = 0xf1
    SendDlgItemMessageA(arg1, 0x4f82, 0xf1, 1, 0)
else if (eax == 1)
    int32_t var_14_2 = 1
    int32_t var_18_2 = 0xf1
    SendDlgItemMessageA(arg1, 0x4f83, 0xf1, 1, 0)
else if (eax == 2)
    int32_t var_14_1 = 1
    int32_t var_18_1 = 0xf1
    SendDlgItemMessageA(arg1, 0x4f84, 0xf1, 1, eax - 2)

WPARAM wParam

if (data_131d2c8 != 1)
    wParam = 0
else
    wParam = 1

SendDlgItemMessageA(arg1, 0x4fa9, 0xf1, wParam, 0)
WPARAM wParam_1

if (data_131d2c8 != 2)
    wParam_1 = 0
else
    wParam_1 = 1

SendDlgItemMessageA(arg1, 0x4faa, 0xf1, wParam_1, 0)
SendDlgItemMessageA(arg1, 0x4f65, 0xf1, 0, 0)
SendDlgItemMessageA(arg1, 0x4f66, 0xf1, 0, 0)
SendDlgItemMessageA(arg1, 0x4f67, 0xf1, 0, 0)
int32_t eax_4 = data_1af44a0
int32_t nIDDlgItem

if (eax_4 == 0)
    int32_t var_10_5 = 0
    int32_t var_14_5 = 1
    int32_t var_18_5 = 0xf1
    nIDDlgItem = 0x4f65
label_4c6330:
    SendDlgItemMessageA(arg1, nIDDlgItem, 0xf1, 1, 0)
    EnableWindow(GetDlgItem(arg1, 0x4f23), 0)
else
    if (eax_4 == 1)
        int32_t var_10_4 = 0
        int32_t var_14_4 = 1
        int32_t var_18_4 = 0xf1
        nIDDlgItem = 0x4f66
        goto label_4c6330
    
    if (eax_4 == 2)
        SendDlgItemMessageA(arg1, 0x4f67, 0xf1, 1, eax_4 - 2)
        EnableWindow(GetDlgItem(arg1, 0x4f23), 1)
WPARAM wParam_2

if (data_1af449c != 1)
    wParam_2 = 0
else
    wParam_2 = 1

SendDlgItemMessageA(arg1, 0x4f23, 0xf1, wParam_2, 0)
WPARAM wParam_3 = SendDlgItemMessageA(arg1, 0x4f22, 0x18f, 0xffffffff, &data_1af44a4)

if (wParam_3 == 0xffffffff)
    wParam_3 = 0

SendDlgItemMessageA(arg1, 0x4f22, 0x186, wParam_3, 0)
return wParam_3
