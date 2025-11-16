// 函数: sub_573e30
// 地址: 0x573e30
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
LRESULT result = __security_cookie ^ &__saved_ebp
LRESULT result_1 = result

if (data_1af0a58 != 0)
    if (arg1 != 0)
        sub_4d1ba0(result, 0x1ec, &data_20f2160, 0xa5)
    
    int32_t esi_1 = data_7036a8
    int32_t var_1f4[0x29]
    int32_t var_150[0x29]
    int32_t var_ac[0x29]
    
    for (int32_t i = 0; i s< 0xa4; i += 4)
        int32_t ecx = *(i + &data_613040)
        
        if (ecx s>= 0)
            *(&var_150 + i) = *(ecx * 0x1bc + &data_12a2d9c)
            *(&var_1f4 + i) = (&data_7036ac)[ecx]
            *(&var_ac + i) = sub_45aa10(ecx)
        else if (ecx == 0xffffffff)
            *(&var_ac + i) = esi_1
    
    WPARAM wParam = 0
    HWND hDlg = data_1af0a58
    
    do
        result = *((wParam << 2) + &data_613040)
        int32_t lParam
        HWND hWnd_2
        
        if (result s>= 0)
            int32_t eax_5 = var_150[wParam]
            
            if (*((wParam << 2) + &data_20f2160) != eax_5)
                *((wParam << 2) + &data_20f2160) = eax_5
                HWND hWnd
                
                if (eax_5 == 0)
                    if (hDlg != 0)
                        hWnd = GetDlgItem(hDlg, 0x4f32)
                        void* const var_21c_3 = &(*U"GHIJKLNOPQRTUVWXYZ")[6]
                    label_573f69:
                        lParam = 5
                        WPARAM wParam_1 = wParam
                        int32_t var_228_1 = 1
                        WPARAM wParam_4 = wParam
                        SendMessageA(hWnd, 0x102e, wParam, &lParam)
                        hDlg = data_1af0a58
                else if (eax_5 == 1)
                    if (hDlg != 0)
                        hWnd = GetDlgItem(hDlg, 0x4f32)
                        void* const var_21c_2 = &(*U"GHIJKLNOPQRTUVWXYZ")[0xc]
                        goto label_573f69
                else if (eax_5 == 2 && hDlg != 0)
                    hWnd = GetDlgItem(hDlg, 0x4f32)
                    void* const var_21c_1 = U"GHIJKLNOPQRTUVWXYZ"
                    goto label_573f69
            
            int32_t eax_9 = var_ac[wParam]
            
            if (*((wParam << 2) + &data_20f22a8) != eax_9)
                *((wParam << 2) + &data_20f22a8) = eax_9
                HWND hWnd_1
                
                if (eax_9 == 0)
                    if (hDlg != 0)
                        hWnd_1 = GetDlgItem(hDlg, 0x4f32)
                        int32_t var_21c_6 = 0x6240e4
                    label_574019:
                        lParam = 5
                        WPARAM wParam_2 = wParam
                        int32_t var_228_2 = 2
                        WPARAM wParam_5 = wParam
                        SendMessageA(hWnd_1, 0x102e, wParam, &lParam)
                        hDlg = data_1af0a58
                else if (eax_9 == 1)
                    if (hDlg != 0)
                        hWnd_1 = GetDlgItem(hDlg, 0x4f32)
                        int32_t var_21c_5 = 0x6240f0
                        goto label_574019
                else if (eax_9 == 2 && hDlg != 0)
                    hWnd_1 = GetDlgItem(hDlg, 0x4f32)
                    int32_t var_21c_4 = 0x6240fc
                    goto label_574019
            
            result = var_1f4[wParam]
            
            if (*((wParam << 2) + &data_20f2204) != result)
                *((wParam << 2) + &data_20f2204) = result
                
                if (result != 0)
                    LRESULT result_2 = result
                    result -= 1
                    
                    if (result_2 != 1)
                        LRESULT result_3 = result
                        result -= 1
                        
                        if (result_3 == 1 && hDlg != 0)
                            hWnd_2 = GetDlgItem(hDlg, 0x4f32)
                            int32_t var_228_3 = 3
                            char const* const var_21c_7 = "GRAY"
                            goto label_574160
                    else if (hDlg != 0)
                        hWnd_2 = GetDlgItem(hDlg, 0x4f32)
                        int32_t var_228_4 = 3
                        void* const var_21c_8 = &data_614ef4
                        goto label_574160
                else if (hDlg != 0)
                    hWnd_2 = GetDlgItem(hDlg, 0x4f32)
                    int32_t var_228_5 = 3
                    void* const var_21c_9 = &data_614ef8
                    goto label_574160
        else if (result == 0xffffffff)
            result = var_ac[wParam]
            
            if (*((wParam << 2) + &data_20f22a8) != result)
                *((wParam << 2) + &data_20f22a8) = result
                
                if (result == 0)
                    if (hDlg != 0)
                        hWnd_2 = GetDlgItem(hDlg, 0x4f32)
                        int32_t var_21c_11 = 0x624124
                    label_574150:
                        int32_t var_228_6 = 2
                    label_574160:
                        lParam = 5
                        WPARAM wParam_3 = wParam
                        WPARAM wParam_6 = wParam
                        result = SendMessageA(hWnd_2, 0x102e, wParam, &lParam)
                        hDlg = data_1af0a58
                else if (hDlg != 0)
                    hWnd_2 = GetDlgItem(hDlg, 0x4f32)
                    int32_t var_21c_10 = 0x624114
                    goto label_574150
        wParam += 1
    while (wParam s< 0x29)

sub_5f02dd(result_1 ^ &__saved_ebp)
return result
