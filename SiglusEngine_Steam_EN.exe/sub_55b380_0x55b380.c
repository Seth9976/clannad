// 函数: sub_55b380
// 地址: 0x55b380
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
LRESULT result = __security_cookie ^ &__saved_ebp
LRESULT result_1 = result
HWND hDlg = data_1af0a68

if (hDlg != 0)
    if (arg1 != 0)
        sub_4d1ba0(result, 0x104, &data_20c46b0, 0xa5)
        hDlg = data_1af0a68
        data_20c46b0 = 1
    
    void* ebx_1 = &data_8c4db4
    void* var_10c_1 = &data_ef1004
    
    for (WPARAM wParam = 0; wParam s< 0x20; )
        if (data_20c46b0 == 0)
            result = *((wParam << 2) + &data_20c4734)
        
        if (data_20c46b0 != 0 || result != *((wParam << 2) + &data_20c46b4))
            bool cond:0_1 = *ebx_1 != 0
            result = *((wParam << 2) + &data_20c46b4)
            *((wParam << 2) + &data_20c4734) = result
            int32_t lParam
            HWND hWnd_2
            
            if (cond:0_1)
                void* var_158_3 = ebx_1
                void var_108
                sub_4c84d0(&var_108, "%s")
                
                if (hDlg != 0)
                    HWND hWnd_3 = GetDlgItem(hDlg, 0x4f32)
                    lParam = 5
                    void* var_134_4 = &var_108
                    WPARAM wParam_3 = wParam
                    int32_t var_140_3 = 1
                    WPARAM wParam_8 = wParam
                    SendMessageA(hWnd_3, 0x102e, wParam, &lParam)
                    hDlg = data_1af0a68
                
                int32_t var_158_5 = *(var_10c_1 - 4)
                sub_4c84d0(&var_108, "%d")
                
                if (hDlg != 0)
                    HWND hWnd_4 = GetDlgItem(hDlg, 0x4f32)
                    lParam = 5
                    void* var_134_5 = &var_108
                    WPARAM wParam_4 = wParam
                    int32_t var_140_4 = 2
                    WPARAM wParam_9 = wParam
                    SendMessageA(hWnd_4, 0x102e, wParam, &lParam)
                    hDlg = data_1af0a68
                
                int32_t eax_4
                int32_t edx_1
                edx_1:eax_4 = sx.q(*var_10c_1)
                int32_t var_158_7 = (eax_4 + (edx_1 & 0x3ff)) s>> 0xa
                result = sub_4c84d0(&var_108, "%dKB")
                
                if (hDlg != 0)
                    hWnd_2 = GetDlgItem(hDlg, 0x4f32)
                    void* var_134_6 = &var_108
                    goto label_55b610
            else if (hDlg != 0)
                HWND hWnd = GetDlgItem(hDlg, 0x4f32)
                lParam = 5
                WPARAM wParam_1 = wParam
                int32_t var_140_1 = 1
                int32_t var_134_1 = 0x6212a4
                WPARAM wParam_6 = wParam
                result = SendMessageA(hWnd, 0x102e, wParam, &lParam)
                hDlg = data_1af0a68
                
                if (hDlg != 0)
                    HWND hWnd_1 = GetDlgItem(hDlg, 0x4f32)
                    lParam = 5
                    WPARAM wParam_2 = wParam
                    int32_t var_140_2 = 2
                    void* const var_134_2 = &data_6138e3
                    WPARAM wParam_7 = wParam
                    result = SendMessageA(hWnd_1, 0x102e, wParam, &lParam)
                    hDlg = data_1af0a68
                    
                    if (hDlg != 0)
                        hWnd_2 = GetDlgItem(hDlg, 0x4f32)
                        void* const var_134_3 = &data_6138e3
                    label_55b610:
                        lParam = 5
                        WPARAM wParam_5 = wParam
                        int32_t var_140_5 = 3
                        WPARAM wParam_10 = wParam
                        result = SendMessageA(hWnd_2, 0x102e, wParam, &lParam)
                        hDlg = data_1af0a68
        
        var_10c_1 += 0xb0
        wParam += 1
        ebx_1 += 0x28
    
    data_20c46b0 = 0

sub_5f02dd(result_1 ^ &__saved_ebp)
return result
