// 函数: sub_547430
// 地址: 0x547430
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

HWND hDlg_2
BOOL bEnable

if (arg1 == 1)
    data_20c1778 = 0
label_5474cd:
    HWND hDlg_1 = data_20c176c
    data_20c1774 = 1
    SendDlgItemMessageA(hDlg_1, 0x4f4e, 0xf1, 1, 0)
    WPARAM wParam_1
    
    if (data_20c1778 == 0)
        wParam_1 = 0
    else
        wParam_1 = 1
    
    SendDlgItemMessageA(data_20c176c, 0x4f53, 0xf1, wParam_1, 0)
    
    if (data_12ff370 == 0)
        return ShowWindow(GetDlgItem(data_20c176c, 0x4f53), SW_HIDE)
    
    bEnable = 1
    int32_t var_c_2 = 0x4f53
    hDlg_2 = data_20c176c
else
    if (arg1 == 2)
        data_20c1778 = 1
        goto label_5474cd
    
    HWND hDlg = data_20c176c
    data_20c1774 = 0
    data_20c1778 = 0
    SendDlgItemMessageA(hDlg, 0x4f4e, 0xf1, 0, 0)
    WPARAM wParam
    
    if (data_20c1778 == 0)
        wParam = 0
    else
        wParam = 1
    
    SendDlgItemMessageA(data_20c176c, 0x4f53, 0xf1, wParam, 0)
    bEnable = 0
    hDlg_2 = data_20c176c
    
    if (data_12ff370 == 0)
        return ShowWindow(GetDlgItem(hDlg_2, 0x4f53), SW_HIDE)

return EnableWindow(GetDlgItem(hDlg_2, 0x4f53), bEnable)
