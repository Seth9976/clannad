// 函数: sub_56faa0
// 地址: 0x56faa0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
LRESULT result = __security_cookie ^ &__saved_ebp
LRESULT result_1 = result
HWND hDlg = data_1af0a40

if (hDlg != 0)
    if (arg1 != 0)
        sub_4d1ba0(result, 0x14, &data_20efcdc, 0xa5)
        hDlg = data_1af0a40
    
    int32_t ecx = data_719b6c
    int32_t eax_1 = data_72d6ac
    int32_t lParam
    void var_108
    
    if (data_20efcdc != ecx || data_20efce0 != eax_1)
        int32_t var_14c_1 = eax_1
        int32_t var_150_1 = ecx
        data_20efce0 = eax_1
        data_20efcdc = ecx
        sub_4c84d0(&var_108, "Seen%04d (%05d)")
        
        if (hDlg != 0)
            HWND hWnd = GetDlgItem(hDlg, 0x4f32)
            lParam = 5
            void* var_130_1 = &var_108
            int32_t var_140_1 = 0
            int32_t var_13c_1 = 1
            int32_t var_124_1 = 0
            SendMessageA(hWnd, 0x102e, 0, &lParam)
            hDlg = data_1af0a40
    
    result = data_161d5dc
    int32_t ecx_1 = data_161d5e4
    
    if (data_20efce4 != result || data_20efcec != ecx_1)
        data_20efce4 = result
        int32_t eax_2 = data_163111c
        data_20efcec = ecx_1
        data_20efce8 = eax_2
        result = sub_561ce0(&data_1606c30, &var_108)
        
        if (hDlg != 0)
            HWND hWnd_1 = GetDlgItem(hDlg, 0x4f32)
            lParam = 5
            void* var_130_2 = &var_108
            int32_t var_140_2 = 1
            int32_t var_13c_2 = 1
            int32_t var_124_2 = 1
            result = SendMessageA(hWnd_1, 0x102e, 1, &lParam)

sub_5f02dd(result_1 ^ &__saved_ebp)
return result
