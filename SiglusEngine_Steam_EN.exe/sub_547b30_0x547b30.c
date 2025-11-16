// 函数: sub_547b30
// 地址: 0x547b30
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg2 == 0x110)
    data_20c17a0 = arg1
    sub_5479f0()
else
    if (arg2 != 0x111)
        return 0
    
    uint32_t eax_5 = zx.d(arg3)
    
    if (eax_5 == 0x4f73)
        data_20c17a4 = 1
        return 1
    
    if (eax_5 == 0x4f78)
        data_20c17a4 = 2
    
    if (eax_5 == 0x4f6e)
        data_20c17a4 = 0
        return 1
    
    if (eax_5 == 0x4e54)
        int32_t eax_7 = data_20c17a8
        HWND hDlg = data_20c17a0
        
        if (data_20c17ac != 0)
            eax_7 = 1
        
        data_20c17a8 = eax_7
        EndDialog(hDlg, 0)
        return 1
    
    if (eax_5 == 0x4f4f)
        sub_547a40(1)

return 1
