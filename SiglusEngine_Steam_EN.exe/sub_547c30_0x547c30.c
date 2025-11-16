// 函数: sub_547c30
// 地址: 0x547c30
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg2 == 0x110)
    data_20c17b0 = arg1
    int32_t var_8_2 = SetFocus(GetDlgItem(arg1, 0x4e54))
    sub_4d5720(data_20c17b0)
else
    if (arg2 != 0x111)
        return 0
    
    uint32_t eax_5 = zx.d(arg3)
    
    if (eax_5 == 0x4e54)
        HWND hDlg = data_20c17b0
        data_20c17b4 = 1
        EndDialog(hDlg, 0)
        return 1
    
    if (eax_5 == 0x4f4f)
        EndDialog(data_20c17b0, 0)

return 1
