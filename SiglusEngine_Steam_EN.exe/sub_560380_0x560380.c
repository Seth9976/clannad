// 函数: sub_560380
// 地址: 0x560380
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
char* result = __security_cookie ^ &__saved_ebp
char* result_1 = result
HWND hDlg = data_1af0a64

if (hDlg != 0)
    if (arg1 != 0)
        sub_4d1ba0(result, 0xc04, &data_20caa30, 0xa5)
        hDlg = data_1af0a64
        data_20caa30 = 1
    
    WPARAM wParam = 0
    void* ebx_1 = &data_92210c
    
    do
        if (data_20caa30 == 0)
            result = *((wParam << 2) + &data_20caa34)
        
        if (data_20caa30 != 0 || result != *((wParam << 2) + &data_20cae34))
            *((wParam << 2) + &data_20cae34) = *((wParam << 2) + &data_20caa34)
            uint32_t eax_2 = zx.d(*ebx_1)
            int32_t lParam
            HWND hWnd
            
            if (eax_2 == 1)
                if (hDlg != 0)
                    hWnd = GetDlgItem(hDlg, 0x4f32)
                    int32_t var_130_4 = 0x621e74
                label_560487:
                    lParam = 5
                    WPARAM wParam_1 = wParam
                    int32_t var_13c_1 = 1
                    WPARAM wParam_8 = wParam
                    SendMessageA(hWnd, 0x102e, wParam, &lParam)
                    hDlg = data_1af0a64
            else if (eax_2 == 2)
                if (hDlg != 0)
                    hWnd = GetDlgItem(hDlg, 0x4f32)
                    int32_t var_130_3 = 0x621e7c
                    goto label_560487
            else if (eax_2 == 0xff)
                if (hDlg != 0)
                    hWnd = GetDlgItem(hDlg, 0x4f32)
                    int32_t var_130_2 = 0x621e6c
                    goto label_560487
            else if (hDlg != 0)
                hWnd = GetDlgItem(hDlg, 0x4f32)
                void* const var_130_1 = &data_62129c
                goto label_560487
            int32_t var_154_2 = *(ebx_1 - 4)
            void var_108
            result = sub_4c84d0(&var_108, "%$d")
            
            if (hDlg != 0)
                HWND hWnd_1 = GetDlgItem(hDlg, 0x4f32)
                lParam = 5
                void* var_130_5 = &var_108
                WPARAM wParam_2 = wParam
                int32_t var_13c_2 = 2
                WPARAM wParam_9 = wParam
                result = SendMessageA(hWnd_1, 0x102e, wParam, &lParam)
                hDlg = data_1af0a64
            
            HWND hWnd_4
            
            if (*ebx_1 != 0xff)
                int32_t var_154_6 = *(ebx_1 + 8)
                sub_4c84d0(&var_108, "%$d")
                
                if (hDlg != 0)
                    HWND hWnd_5 = GetDlgItem(hDlg, 0x4f32)
                    lParam = 5
                    void* var_130_9 = &var_108
                    WPARAM wParam_5 = wParam
                    int32_t var_13c_5 = 3
                    WPARAM wParam_12 = wParam
                    SendMessageA(hWnd_5, 0x102e, wParam, &lParam)
                    hDlg = data_1af0a64
                
                int32_t var_154_8 = *(ebx_1 + 0xc)
                sub_4c84d0(&var_108, "%$d")
                
                if (hDlg != 0)
                    HWND hWnd_6 = GetDlgItem(hDlg, 0x4f32)
                    lParam = 5
                    void* var_130_10 = &var_108
                    WPARAM wParam_6 = wParam
                    int32_t var_13c_6 = 4
                    WPARAM wParam_13 = wParam
                    SendMessageA(hWnd_6, 0x102e, wParam, &lParam)
                    hDlg = data_1af0a64
                
                int32_t var_154_10 = *(ebx_1 + 0x18)
                result = sub_4c84d0(&var_108, "%$d")
                
                if (hDlg != 0)
                    hWnd_4 = GetDlgItem(hDlg, 0x4f32)
                    void* var_130_11 = &var_108
                    goto label_560717
            else if (hDlg != 0)
                HWND hWnd_2 = GetDlgItem(hDlg, 0x4f32)
                lParam = 5
                WPARAM wParam_3 = wParam
                int32_t var_13c_3 = 3
                void* const var_130_6 = &data_6138e3
                WPARAM wParam_10 = wParam
                result = SendMessageA(hWnd_2, 0x102e, wParam, &lParam)
                hDlg = data_1af0a64
                
                if (hDlg != 0)
                    HWND hWnd_3 = GetDlgItem(hDlg, 0x4f32)
                    lParam = 5
                    WPARAM wParam_4 = wParam
                    int32_t var_13c_4 = 4
                    void* const var_130_7 = &data_6138e3
                    WPARAM wParam_11 = wParam
                    result = SendMessageA(hWnd_3, 0x102e, wParam, &lParam)
                    hDlg = data_1af0a64
                    
                    if (hDlg != 0)
                        hWnd_4 = GetDlgItem(hDlg, 0x4f32)
                        void* const var_130_8 = &data_6138e3
                    label_560717:
                        lParam = 5
                        WPARAM wParam_7 = wParam
                        int32_t var_13c_7 = 5
                        WPARAM wParam_14 = wParam
                        result = SendMessageA(hWnd_4, 0x102e, wParam, &lParam)
                        hDlg = data_1af0a64
        
        wParam += 1
        ebx_1 += 0x28
    while (wParam s< 0x100)
    
    data_20caa30 = 0

sub_5f02dd(result_1 ^ &__saved_ebp)
return result
