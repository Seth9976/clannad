// 函数: sub_55c680
// 地址: 0x55c680
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

LRESULT hDlg = data_1af0a4c

if (hDlg != 0 && arg1 u<= 0x3f)
    int32_t esi_1 = 1
    
    while (true)
        HWND hWnd = GetDlgItem(hDlg, 0x4f32)
        int32_t lParam = 5
        WPARAM var_3c_1 = arg1
        int32_t var_38_1 = esi_1
        void* const var_2c_1 = &data_6138e3
        WPARAM var_20_1 = arg1
        hDlg = SendMessageA(hWnd, 0x102e, arg1, &lParam)
        esi_1 += 1
        
        if (esi_1 s>= 0x3e)
            break
        
        hDlg = data_1af0a4c

return hDlg
