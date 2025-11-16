// 函数: sub_4c63a0
// 地址: 0x4c63a0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp

if (arg2 == 0x10)
    sub_4cfd70(&data_1af44a4, 0x20af124)
    HGDIOBJ __saved_ebx = data_20f3454
    data_131d2c8 = data_20ae98c
    data_1af44a0 = data_20ae988
    data_1af449c = data_20af120
    DeleteObject(__saved_ebx)
    EndDialog(arg1, 0)
    sub_5f02dd(eax_1 ^ &__saved_ebp)
    return 1

char var_28[0x20]

if (arg2 == 0x110)
    sub_4cfd70(0x20af124, &data_1af44a4)
    data_20ae988 = data_1af44a0
    data_20ae98c = data_131d2c8
    data_20af120 = data_1af449c
    HWND hWnd_2 = GetDlgItem(arg1, 0x4fd8)
    data_20f3438 = hWnd_2
    GetClientRect(hWnd_2, &data_20f343c)
    bool cond:0_1 = data_20af110:0xc s<= 0
    data_20f344c = data_20f3448 - data_20f3440
    int32_t i_1 = 0
    
    if (not(cond:0_1))
        LPARAM* edi_5 = data_20af110:4 + 4
        int32_t i
        
        do
            SendDlgItemMessageA(arg1, 0x4f22, 0x180, 0, *edi_5)
            edi_5 = &edi_5[3]
            i = i_1 + 1
            i_1 = i
        while (i s< data_20af110:0xc)
    
    SendDlgItemMessageA(arg1, 0x4f22, 0x189, sub_4c6200(arg1), &var_28)
    int32_t eax_70 = data_1af4498 + 1
    
    if (eax_70 u<= 3)
        int32_t nIDDlgItem
        HWND hWnd_3
        
        switch (eax_70)
            case 0
                ShowWindow(GetDlgItem(arg1, 0x4fa9), SW_HIDE)
                int32_t var_3c_16 = 0
                hWnd_3 = GetDlgItem(arg1, 0x4faa)
            label_4c6a3f:
                ShowWindow(hWnd_3, SW_HIDE)
                ShowWindow(GetDlgItem(arg1, 0x4f82), SW_HIDE)
                ShowWindow(GetDlgItem(arg1, 0x4f83), SW_HIDE)
                int32_t var_3c_20 = 0
                nIDDlgItem = 0x4f84
            case 1
                ShowWindow(GetDlgItem(arg1, 0x4fa9), SW_HIDE)
                int32_t var_3c_17 = 0
                nIDDlgItem = 0x4faa
            case 2
                int32_t var_3c_18 = 0
                hWnd_3 = GetDlgItem(arg1, 0x4faa)
                goto label_4c6a3f
            case 3
                int32_t var_3c_19 = 0
                hWnd_3 = GetDlgItem(arg1, 0x4fa9)
                goto label_4c6a3f
        
        ShowWindow(GetDlgItem(arg1, nIDDlgItem), SW_HIDE)
    
    HDC eax_76 = GetDC(data_20f3438)
    int32_t var_3c_22 = data_20ae984
    data_20f3450 = eax_76
    char eax_77 = sub_4c5c80(eax_76, &var_28, eax_76)
    ReleaseDC(data_20f3438, data_20f3450)
    HFONT eax_79 =
        CreateFontA(data_20f344c, 0, 0, 0, 0x190, 0, 0, 0, zx.d(eax_77), 0, 0, 0, 0, &var_28)
    HWND hWnd_1 = data_20f3438
    data_20f3454 = eax_79
    HDC hdc_1 = GetDC(hWnd_1)
    HGDIOBJ h_1 = data_20f3454
    data_20f3450 = hdc_1
    SelectObject(hdc_1, h_1)
    ReleaseDC(data_20f3438, data_20f3450)
    SendMessageA(data_20f3438, 0x30, data_20f3454, 1)
    SetFocus(GetDlgItem(arg1, 2))
    int32_t var_3c_27 = SetWindowTextA(arg1, 0x20ae940)
    sub_4d5720(arg1)
else if (arg2 == 0x111)
    uint32_t eax_7 = zx.d(arg3)
    
    if (eax_7 s<= 0x4f22)
        if (eax_7 == 0x4f22)
            SendDlgItemMessageA(arg1, 0x4f22, 0x189, 
                SendDlgItemMessageA(arg1, 0x4f22, 0x188, 0, 0), &var_28)
        label_4c66aa:
            HDC eax_49 = GetDC(data_20f3438)
            int32_t var_3c_5 = data_20ae984
            data_20f3450 = eax_49
            char eax_50 = sub_4c5c80(eax_49, &var_28, eax_49)
            ReleaseDC(data_20f3438, data_20f3450)
            HFONT eax_52 = CreateFontA(data_20f344c, 0, 0, 0, 0x190, 0, 0, 0, zx.d(eax_50), 0, 0, 
                0, 0, &var_28)
            HWND hWnd = data_20f3438
            data_20f3454 = eax_52
            HDC hdc = GetDC(hWnd)
            HGDIOBJ h = data_20f3454
            data_20f3450 = hdc
            HGDIOBJ ho_1 = SelectObject(hdc, h)
            data_20f3458 = ho_1
            DeleteObject(ho_1)
            ReleaseDC(data_20f3438, data_20f3450)
            SendMessageA(data_20f3438, 0x30, data_20f3454, 1)
            sub_5f02dd(eax_1 ^ &__saved_ebp)
            return 0
        
        if (eax_7 == 1)
            SendDlgItemMessageA(arg1, 0x4f22, 0x189, 
                SendDlgItemMessageA(arg1, 0x4f22, 0x188, 0, 0), &data_1af44a4)
            int32_t eax_15 = data_1af4498
            
            if (eax_15 == 0)
                if ((SendDlgItemMessageA(arg1, 0x4f82, 0xf2, 0, 0) & 1) == 0)
                    if ((SendDlgItemMessageA(arg1, 0x4f83, 0xf2, 0, 0) & 1) == 0)
                        data_131d2c8 = (sx.d(SendDlgItemMessageA(arg1, 0x4f84, 0xf2, 0, 0)) & 1) * 2
                    else
                        data_131d2c8 = 1
                else
                    data_131d2c8 = 0
            else if (eax_15 == 1)
                int32_t eax_23 = sub_4c1080(arg1, 0x4fa9)
                int32_t eax_24 = neg.d(eax_23)
                data_131d2c8 = neg.d(sbb.d(eax_24, eax_24, eax_23 != 0))
            else if (eax_15 == 2)
                int32_t eax_19 = sub_4c1080(arg1, 0x4faa)
                int32_t eax_20 = neg.d(eax_19)
                data_131d2c8 = sbb.d(eax_20, eax_20, eax_19 != 0) & 2
            
            int32_t eax_31 = sub_4c1080(arg1, 0x4f23)
            int32_t eax_32 = neg.d(eax_31)
            data_1af449c = neg.d(sbb.d(eax_32, eax_32, eax_31 != 0))
            int32_t edi_1
            
            if ((SendDlgItemMessageA(arg1, 0x4f65, 0xf2, 0, 0) & 1) == 0)
                if ((SendDlgItemMessageA(arg1, 0x4f66, 0xf2, 0, 0) & 1) == 0)
                    edi_1 = (sx.d(SendDlgItemMessageA(arg1, 0x4f67, 0xf2, 0, 0)) & 1) * 2
                else
                    edi_1 = 1
            else
                edi_1 = 0
            
            data_1af44a0 = edi_1
            
            if (data_1c041fc != edi_1)
                data_1c041d0 = 1
            else
                int32_t ebx_1 = data_131d2c8
                
                if (data_13740ac != ebx_1)
                    data_1c041d0 = 1
                else if (sub_4d0f10(0x1c041d4, &data_1af44a4) != 0 || data_20ae988 != edi_1
                        || data_20ae98c != ebx_1 || data_20af120 != data_1af449c)
                    data_1c041d0 = 1
                else if (sub_4d0f10(0x20af124, &data_1af44a4) != 0)
                    data_1c041d0 = 1
            
            DeleteObject(data_20f3454)
            EndDialog(arg1, 1)
            sub_5f02dd(eax_1 ^ &__saved_ebp)
            return 0
        
        if (eax_7 == 2)
            sub_4cfd70(&data_1af44a4, 0x20af124)
            HGDIOBJ ho = data_20f3454
            data_131d2c8 = data_20ae98c
            data_1af44a0 = data_20ae988
            data_1af449c = data_20af120
            DeleteObject(ho)
            EndDialog(arg1, 0)
            sub_5f02dd(eax_1 ^ &__saved_ebp)
            return 0
    else
        WPARAM wParam
        WPARAM wParam_1
        BOOL bEnable
        
        if (eax_7 - 0x4f28 u<= 0x82)
            switch (eax_7 + &jump_table_4c1c90[6])
                case &lookup_table_4c6bd0
                    sub_4cfd70(&data_1af44a4, &data_1af4478)
                    data_131d2c8 = data_1af4474
                    data_1af44a0 = data_1af4470
                    data_1af449c = data_1af4264
                    SendDlgItemMessageA(arg1, 0x4f22, 0x189, sub_4c6200(arg1), &var_28)
                    goto label_4c66aa
                case &lookup_table_4c6bd0[0x3d], &lookup_table_4c6bd0[0x3e]
                    bEnable = 0
                label_4c68fb:
                    EnableWindow(GetDlgItem(arg1, 0x4f23), bEnable)
                    sub_5f02dd(eax_1 ^ &__saved_ebp)
                    return 0
                case &lookup_table_4c6bd0[0x3f]
                    bEnable = 1
                    goto label_4c68fb
                case &lookup_table_4c6bd0[0x5a]
                    int32_t var_3c_10 = 0
                    wParam = 0
                label_4c689d:
                    SendDlgItemMessageA(arg1, 0x4fa9, 0xf1, wParam, 0)
                    int32_t var_3c_11 = 0
                    wParam_1 = 0
                    goto label_4c68ae
                case &lookup_table_4c6bd0[0x5b]
                    int32_t var_3c_12 = 0
                    wParam = 1
                    goto label_4c689d
                case &lookup_table_4c6bd0[0x5c]
                    SendDlgItemMessageA(arg1, 0x4fa9, 0xf1, 0, 0)
                    int32_t var_3c_13 = 0
                    wParam_1 = 1
                label_4c68ae:
                    SendDlgItemMessageA(arg1, 0x4faa, 0xf1, wParam_1, 0)
                    sub_5f02dd(eax_1 ^ &__saved_ebp)
                    return 0
                case &lookup_table_4c6bd0[0x81]
                    SendDlgItemMessageA(arg1, 0x4f82, 0xf1, 0, 0)
                    SendDlgItemMessageA(arg1, 0x4f83, 0xf1, 0, 0)
                    SendDlgItemMessageA(arg1, 0x4f84, 0xf1, 0, 0)
                    SendDlgItemMessageA(arg1, 0x4faa, 0xf1, 0, 0)
                    
                    if (sub_4c1080(arg1, 0x4fa9) != 0)
                        SendDlgItemMessageA(arg1, 0x4f83, 0xf1, 1, 0)
                        sub_5f02dd(eax_1 ^ &__saved_ebp)
                        return 0
                    
                label_4c67f1:
                    SendDlgItemMessageA(arg1, 0x4f82, 0xf1, 1, 0)
                    sub_5f02dd(eax_1 ^ &__saved_ebp)
                    return 0
                case &lookup_table_4c6bd0[0x82]
                    SendDlgItemMessageA(arg1, 0x4f82, 0xf1, 0, 0)
                    SendDlgItemMessageA(arg1, 0x4f83, 0xf1, 0, 0)
                    SendDlgItemMessageA(arg1, 0x4f84, 0xf1, 0, 0)
                    SendDlgItemMessageA(arg1, 0x4fa9, 0xf1, 0, 0)
                    
                    if (sub_4c1080(arg1, 0x4faa) == 0)
                        goto label_4c67f1
                    
                    SendDlgItemMessageA(arg1, 0x4f84, 0xf1, 1, 0)
                    sub_5f02dd(eax_1 ^ &__saved_ebp)
                    return 0
sub_5f02dd(eax_1 ^ &__saved_ebp)
return 0
