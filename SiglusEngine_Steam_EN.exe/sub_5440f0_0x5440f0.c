// 函数: sub_5440f0
// 地址: 0x5440f0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg2 == 0x110)
    data_20c1668 = arg1
    sub_544050()
else
    if (arg2 != 0x111)
        return 0
    
    if (arg3 == 0x4f4f)
        uint32_t eax_4 = GetDlgItemInt(data_20c1668, 0x4ef6, nullptr, 1)
        HWND hDlg = data_20c1668
        *data_20c1674 = eax_4
        EndDialog(hDlg, 0)

return 1
