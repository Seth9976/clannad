// 函数: sub_563b20
// 地址: 0x563b20
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t hDlg_14 = data_1af0a78

if (hDlg_14 != 0)
    int32_t edi_1 = data_20ca9f4
    HWND hWnd = GetDlgItem(hDlg_14, 0x4eee)
    HDC hDC = GetDC(hWnd)
    RECT rect_1
    GetWindowRect(hWnd, &rect_1)
    int32_t var_40_1 = rect_1.right - rect_1.left + 1
    int32_t var_3c_1 = rect_1.bottom - rect_1.top + 1
    RECT rect
    GetWindowRect(GetDlgItem(data_1af0a78, 0x4f25), &rect)
    int32_t eax_11 = rect_1.bottom - rect.top + 1
    GetWindowRect(GetDlgItem(data_1af0a78, 0x502c), &rect)
    int32_t eax_15 = rect_1.right - rect.left + 1
    
    if (data_20cc930 != 0 || arg1 != 0)
        RECT lprc
        lprc.right = var_40_1
        lprc.left = 0
        lprc.top = 0
        lprc.bottom = var_3c_1
        FillRect(hDC, &lprc, GetSysColorBrush(COLOR_BTNFACE))
        
        for (void* const i = &data_612aa0; i s< &data_612b18; i += 4)
            InvalidateRect(GetDlgItem(data_1af0a78, *i), nullptr, 0)
        
        __builtin_memcpy(&data_20cc940, 
            "\x01\x00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x00\x01\x00\x"
        "00\x00\x01\x00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x00\x01"
        "00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x00", 
            0x40)
        data_20cc930 = 0
    
    HWND hWnd_1
    
    if (edi_1 s< 0x3e8)
        int32_t var_50_1
        
        if (data_20cc934 != 0)
            HWND hDlg = data_1af0a78
            data_20cc934 = 0
            ShowWindow(GetDlgItem(hDlg, 0x4f25), SW_HIDE)
            var_50_1 = 1
        else
            var_50_1 = 0
        
        int32_t eax_21
        
        if (data_20cc938 != 0)
            HWND hDlg_1 = data_1af0a78
            data_20cc938 = 0
            ShowWindow(GetDlgItem(hDlg_1, 0x502c), SW_HIDE)
            eax_21 = 1
        else
            eax_21 = 0
        
        if ((eax_21 | var_50_1) == 0)
            int32_t eax_26
            int32_t edx_1
            edx_1:eax_26 = sx.q(var_40_1 - 8)
            int32_t esi_3 = (eax_26 - edx_1) s>> 1
            int32_t eax_30
            int32_t edx_2
            edx_2:eax_30 = sx.q(var_3c_1 - 8)
            int32_t eax_32 = (eax_30 - edx_2) s>> 1
            int32_t var_44_2 = eax_32
            
            if (*((edi_1 << 2) + &data_20cc940) != 0)
                sub_563890(eax_32, edi_1, hDC, 0, 0, esi_3, eax_32, 0)
                eax_32 = var_44_2
            
            if (*((edi_1 << 2) + &data_20cc940:4) != 0)
                sub_563890(esi_3 + 8, edi_1 + 1, hDC, esi_3 + 8, 0, esi_3, eax_32, 0)
            
            if (*((edi_1 << 2) + &data_20cc940:8) != 0)
                sub_563890(var_44_2 + 8, edi_1 + 2, hDC, 0, var_44_2 + 8, esi_3, var_44_2, 0)
            
            if (*((edi_1 << 2) + &data_20cc940:0xc) != 0)
                hWnd_1 = esi_3 + 8
                sub_563890(hWnd_1, edi_1 + 3, hDC, hWnd_1, var_44_2 + 8, esi_3, var_44_2, nullptr)
    else if (*((edi_1 << 2) + &data_20cb9a0) != 0)
        int32_t var_48_1
        int32_t edx_7
        
        if ((&data_976b50)[(edi_1 - 0x3e8) * 8] == 0)
            edx_7 = data_70300c
            var_48_1 = data_7030dc
        else
            edx_7 = (&data_976b58)[(edi_1 - 0x3e8) * 8]
            var_48_1 = (&data_976b5c)[(edi_1 - 0x3e8) * 8]
        
        int32_t eax_41 = data_131851c
        int32_t var_44_3 = edx_7
        int32_t esi_5
        
        if (eax_41 == 0)
            int32_t esi_9
            
            if (data_20cc934 != 0)
                HWND hDlg_12 = data_1af0a78
                data_20cc934 = 0
                ShowWindow(GetDlgItem(hDlg_12, 0x4f25), SW_HIDE)
                esi_9 = 1
            else
                esi_9 = 0
            
            int32_t eax_63
            
            if (data_20cc938 != 0)
                HWND hDlg_13 = data_1af0a78
                data_20cc938 = 0
                ShowWindow(GetDlgItem(hDlg_13, 0x502c), SW_HIDE)
                eax_63 = 1
            else
                eax_63 = 0
            
            esi_5 = esi_9 | eax_63
            
            if (esi_5 == 0)
                int32_t temp0_1 = divs.dp.d(sx.q(var_48_1 * var_40_1), var_44_3)
                
                if (temp0_1 s>= var_3c_1)
                    var_40_1 = divs.dp.d(sx.q(var_44_3 * var_3c_1), var_48_1)
                else
                    var_3c_1 = temp0_1
            
        label_564192:
            hWnd_1 = nullptr
        label_564194:
            
            if (esi_5 == 0)
                goto label_564198
        else
            if (eax_41 == 1)
                int32_t esi_8
                
                if (data_20cc934 != 0)
                    HWND hDlg_10 = data_1af0a78
                    data_20cc934 = 0
                    ShowWindow(GetDlgItem(hDlg_10, 0x4f25), SW_HIDE)
                    esi_8 = 1
                else
                    esi_8 = 0
                
                if (data_20cc938 != 0)
                    HWND hDlg_11 = data_1af0a78
                    data_20cc938 = 0
                    ShowWindow(GetDlgItem(hDlg_11, 0x502c), SW_HIDE)
                    esi_5 = esi_8 | 1
                else
                    esi_5 = esi_8
                
                goto label_564192
            
            if (eax_41 == 2)
                int32_t ecx_4 = var_40_1
                
                if (ecx_4 s< edx_7)
                    int32_t esi_4
                    
                    if (data_20cc934 != 1)
                        HWND hDlg_2 = data_1af0a78
                        data_20cc934 = 1
                        ShowWindow(GetDlgItem(hDlg_2, 0x4f25), SW_SHOW)
                        esi_4 = 1
                    else
                        esi_4 = 0
                    
                    int32_t eax_47 = var_3c_1 - eax_11
                    int32_t edx_8 = var_48_1
                    var_3c_1 = eax_47
                    int32_t ecx_6
                    
                    if (eax_47 s>= edx_8)
                        int32_t ecx_8
                        
                        if (data_20cc938 != 0)
                            HWND hDlg_4 = data_1af0a78
                            data_20cc938 = 0
                            ShowWindow(GetDlgItem(hDlg_4, 0x502c), SW_HIDE)
                            eax_47 = var_3c_1
                            ecx_8 = 1
                            edx_8 = var_48_1
                        else
                            ecx_8 = 0
                        
                        esi_5 = esi_4 | ecx_8
                        ecx_6 = var_40_1
                    else if (data_20cc938 != 1)
                        HWND hDlg_3 = data_1af0a78
                        data_20cc938 = 1
                        ShowWindow(GetDlgItem(hDlg_3, 0x502c), SW_SHOW)
                        eax_47 = var_3c_1
                        edx_8 = var_48_1
                        esi_5 = esi_4 | 1
                        ecx_6 = var_40_1 - eax_15
                        var_40_1 = ecx_6
                    else
                        esi_5 = esi_4
                        ecx_6 = var_40_1 - eax_15
                        var_40_1 = ecx_6
                    
                    if (arg1 == 0)
                        hWnd_1 = 1
                    else
                        sub_563740(eax_47, edx_8, var_44_3, ecx_6, eax_47)
                        hWnd_1 = 1
                else if (var_3c_1 s>= var_48_1)
                    int32_t esi_7
                    
                    if (data_20cc934 != 0)
                        HWND hDlg_8 = data_1af0a78
                        data_20cc934 = 0
                        ShowWindow(GetDlgItem(hDlg_8, 0x4f25), SW_HIDE)
                        esi_7 = 1
                    else
                        esi_7 = 0
                    
                    if (data_20cc938 != 0)
                        HWND hDlg_9 = data_1af0a78
                        data_20cc938 = 0
                        ShowWindow(GetDlgItem(hDlg_9, 0x502c), SW_HIDE)
                        esi_5 = esi_7 | 1
                        hWnd_1 = 1
                    else
                        esi_5 = esi_7
                        hWnd_1 = 1
                else
                    int32_t esi_6
                    
                    if (data_20cc938 != 1)
                        HWND hDlg_5 = data_1af0a78
                        data_20cc938 = 1
                        ShowWindow(GetDlgItem(hDlg_5, 0x502c), SW_SHOW)
                        ecx_4 = var_40_1
                        esi_6 = 1
                        edx_7 = var_44_3
                    else
                        esi_6 = 0
                    
                    int32_t ecx_10 = ecx_4 - eax_15
                    var_40_1 = ecx_10
                    int32_t eax_53
                    
                    if (ecx_10 s>= edx_7)
                        int32_t eax_56
                        
                        if (data_20cc934 != 0)
                            HWND hDlg_7 = data_1af0a78
                            data_20cc934 = 0
                            ShowWindow(GetDlgItem(hDlg_7, 0x4f25), SW_HIDE)
                            ecx_10 = var_40_1
                            eax_56 = 1
                        else
                            eax_56 = 0
                        
                        esi_5 = esi_6 | eax_56
                        eax_53 = var_3c_1
                    else if (data_20cc934 != 1)
                        HWND hDlg_6 = data_1af0a78
                        data_20cc934 = 1
                        ShowWindow(GetDlgItem(hDlg_6, 0x4f25), SW_SHOW)
                        ecx_10 = var_40_1
                        esi_5 = esi_6 | 1
                        eax_53 = var_3c_1 - eax_11
                        var_3c_1 = eax_53
                    else
                        esi_5 = esi_6
                        eax_53 = var_3c_1 - eax_11
                        var_3c_1 = eax_53
                    
                    if (arg1 == 0)
                        hWnd_1 = 1
                    else
                        sub_563740(eax_53, var_48_1, var_44_3, ecx_10, eax_53)
                        hWnd_1 = 1
                
                goto label_564194
            
            hWnd_1 = hWnd
        label_564198:
            sub_563890(hWnd_1, edi_1 - 0x3e8, hDC, 0, 0, var_40_1, var_3c_1, hWnd_1)
    __builtin_memset(&data_20cc940, 0, 0x40)
    hDlg_14 = ReleaseDC(hWnd, hDC)

sub_5f02dd(eax_1 ^ &__saved_ebp)
return hDlg_14
