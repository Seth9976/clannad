// 函数: sub_5705b0
// 地址: 0x5705b0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
LRESULT result = __security_cookie ^ &__saved_ebp
LRESULT result_1 = result
HWND hDlg = data_1af0a54

if (hDlg != 0)
    if (arg1 != 0)
        sub_4d1ba0(result, 0x84, &data_20f0090, 0xa5)
        hDlg = data_1af0a54
        data_20f0090 = 1
    
    void* i = &data_20f00d4
    int32_t* ebx_1 = &data_8d02b8
    WPARAM wParam = 0
    
    do
        void* i_1 = i
        int32_t j_1 = 2
        int32_t j
        
        do
            if (data_20f0090 == 0)
                result = *i
            
            if (data_20f0090 != 0 || result != *(i - 0x40))
                *i = *(i - 0x40)
                result = ebx_1[-1]
                int32_t lParam
                HWND hWnd
                
                switch (result)
                    case 0
                        if (hDlg != 0)
                            hWnd = GetDlgItem(hDlg, 0x4f32)
                            int32_t var_134_1 = 0x6212a4
                        label_570722:
                            lParam = 5
                            WPARAM wParam_1 = wParam
                            int32_t var_140_1 = 1
                            WPARAM wParam_5 = wParam
                            result = SendMessageA(hWnd, 0x102e, wParam, &lParam)
                            hDlg = data_1af0a54
                            i = i_1
                    case 1
                        if (hDlg != 0)
                            hWnd = GetDlgItem(hDlg, 0x4f32)
                            int32_t var_134_2 = 0x6212ac
                            goto label_570722
                    case 2
                        if (hDlg != 0)
                            hWnd = GetDlgItem(hDlg, 0x4f32)
                            int32_t var_134_4 = 0x6212cc
                            goto label_570722
                    case 3
                        if (hDlg != 0)
                            hWnd = GetDlgItem(hDlg, 0x4f32)
                            int32_t var_134_3 = 0x6212bc
                            goto label_570722
                    case 4
                        if (hDlg != 0)
                            hWnd = GetDlgItem(hDlg, 0x4f32)
                            int32_t var_134_5 = 0x6212dc
                            goto label_570722
                    case 5
                        if (hDlg != 0)
                            hWnd = GetDlgItem(hDlg, 0x4f32)
                            int32_t var_134_6 = 0x6212ec
                            goto label_570722
                    case 6
                        if (hDlg != 0)
                            hWnd = GetDlgItem(hDlg, 0x4f32)
                            int32_t var_134_7 = 0x6212fc
                            goto label_570722
                
                HWND hWnd_2
                
                if (ebx_1[-1] != 0)
                    HWND hWnd_1
                    
                    if (ebx_1[1] == 0)
                        if (*ebx_1 == 0)
                            if (hDlg != 0)
                                hWnd_1 = GetDlgItem(hDlg, 0x4f32)
                                int32_t var_134_10 = 0x621318
                                goto label_5707c7
                        else if (hDlg != 0)
                            hWnd_1 = GetDlgItem(hDlg, 0x4f32)
                            int32_t var_134_9 = 0x621310
                            goto label_5707c7
                    else if (hDlg != 0)
                        hWnd_1 = GetDlgItem(hDlg, 0x4f32)
                        int32_t var_134_8 = 0x624058
                    label_5707c7:
                        lParam = 5
                        WPARAM wParam_2 = wParam
                        int32_t var_140_2 = 2
                        WPARAM wParam_6 = wParam
                        SendMessageA(hWnd_1, 0x102e, wParam, &lParam)
                        hDlg = data_1af0a54
                    int32_t var_15c_3 = ebx_1[0xb18]
                    void var_108
                    result = sub_4c84d0(&var_108, "%d")
                    
                    if (hDlg != 0)
                        hWnd_2 = GetDlgItem(hDlg, 0x4f32)
                        void* var_134_11 = &var_108
                        goto label_5708ad
                    
                    i = i_1
                else if (hDlg != 0)
                    HWND hWnd_3 = GetDlgItem(hDlg, 0x4f32)
                    lParam = 5
                    WPARAM wParam_3 = wParam
                    int32_t var_140_3 = 2
                    void* const var_134_12 = &data_6138e3
                    WPARAM wParam_7 = wParam
                    result = SendMessageA(hWnd_3, 0x102e, wParam, &lParam)
                    hDlg = data_1af0a54
                    
                    if (hDlg == 0)
                        i = i_1
                    else
                        hWnd_2 = GetDlgItem(hDlg, 0x4f32)
                        void* const var_134_13 = &data_6138e3
                    label_5708ad:
                        lParam = 5
                        WPARAM wParam_4 = wParam
                        int32_t var_140_4 = 3
                        WPARAM wParam_8 = wParam
                        result = SendMessageA(hWnd_2, 0x102e, wParam, &lParam)
                        hDlg = data_1af0a54
                        i = i_1
            
            i += 4
            ebx_1 = &ebx_1[0xb20]
            i_1 = i
            wParam += 1
            j = j_1
            j_1 -= 1
        while (j != 1)
    while (i s< 0x20f0114)
    
    data_20f0090 = 0

sub_5f02dd(result_1 ^ &__saved_ebp)
return result
