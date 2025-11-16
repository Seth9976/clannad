// 函数: sub_543d40
// 地址: 0x543d40
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg2 == 0x110)
    data_20c1644 = arg1
    sub_543c80()
else
    if (arg2 != 0x111)
        return 0
    
    uint32_t eax_5 = zx.d(arg3)
    
    if (eax_5 == 0x4f6e)
        data_20c1648 = 1
        return 1
    
    if (eax_5 == 0x4e54)
        int32_t eax_7 = data_20c164c
        HWND hDlg = data_20c1644
        
        if (data_20c1650 != 0)
            eax_7 = 1
        
        data_20c164c = eax_7
        EndDialog(hDlg, 0)
        return 1
    
    if (eax_5 == 0x4f4f)
        sub_543cd0(1)
    
    if (eax_5 == 0x4f73)
        data_20c1648 = 0

return 1
