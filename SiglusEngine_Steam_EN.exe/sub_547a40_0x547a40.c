// 函数: sub_547a40
// 地址: 0x547a40
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

HKEY var_8 = arg1

if (arg1 == 1)
    int32_t eax_1 = data_20c17a4
    
    if (eax_1 s< 0 || eax_1 s> 2)
        eax_1 = 0
        data_20c17a4 = 0
    
    bool cond:0_1 = data_1332d90 == 0
    data_1af4524 = eax_1
    data_1313c9c = eax_1
    data_1af4520 = 1
    
    if (not(cond:0_1) && data_1332b88 != 0
            && RegOpenKeyExA(0x80000001, &data_1332b88, 0, KEY_ALL_ACCESS, &var_8) == NO_ERROR)
        RegCloseKey(var_8)
        int32_t eax_3 = data_20c17a4
        
        if (data_1333df4 != eax_3)
            sub_4d6d50(eax_3, "MoviePlayType", &data_1332b88, eax_3)
            data_1333df4 = data_20c17a4
        
        HWND hDlg = data_20c17a0
        data_1af4520 = 0
        return EndDialog(hDlg, 0)
else if (arg1 == 0)
    int32_t eax_6 = data_20c17a8
    
    if (data_20c17ac != 0)
        eax_6 = 1
    
    data_20c17a8 = eax_6

return EndDialog(data_20c17a0, 0)
