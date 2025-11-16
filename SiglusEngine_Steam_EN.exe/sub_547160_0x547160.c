// 函数: sub_547160
// 地址: 0x547160
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg2 == 0x110)
    data_20c175c = arg1
    sub_547090()
else
    if (arg2 != 0x111)
        return 0
    
    uint32_t eax_5 = zx.d(arg3)
    
    if (eax_5 == 0x4f6e)
        data_20c1760 = 1
        return 1
    
    if (eax_5 == 0x4e54)
        int32_t eax_7 = data_20c1764
        HWND hDlg = data_20c175c
        
        if (data_20c1768 != 0)
            eax_7 = 1
        
        data_20c1764 = eax_7
        EndDialog(hDlg, 0)
        return 1
    
    if (eax_5 == 0x4f4f)
        sub_5470e0(1)
    
    if (eax_5 == 0x4f73)
        data_20c1760 = 0

return 1
