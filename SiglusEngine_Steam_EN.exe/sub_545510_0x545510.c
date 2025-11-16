// 函数: sub_545510
// 地址: 0x545510
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void var_47c
int32_t eax_1 = __security_cookie ^ &var_47c

if (arg2 u> 0x7e)
    if (arg2 == 0x110)
        data_1c054ec = arg1
        HWND hWnd = GetDlgItem(arg1, 0x4ef0)
        SendMessageA(hWnd, 0x1036, 0, SendMessageA(hWnd, 0x1037, 0, 0) | 0x20)
        HWND hWnd_1 = GetDlgItem(data_1c054ec, 0x4ef0)
        int32_t lParam = 7
        int32_t var_464_1 = 0
        int32_t var_460_1 = 0x16
        void* const var_45c_1 = &data_6138e3
        SendMessageA(hWnd_1, 0x101b, 0, &lParam)
        HWND hWnd_2 = GetDlgItem(data_1c054ec, 0x4ef0)
        int32_t lParam_1 = 7
        int32_t var_438_1 = 0
        int32_t var_434_1 = 0x64
        char const* const var_430_1 = "Resolution"
        SendMessageA(hWnd_2, 0x101b, 1, &lParam_1)
        sub_544bf0()
        sub_544f90()
        sub_544e30()
        sub_5452a0()
        sub_545440()
        WPARAM wParam
        
        if (data_187c51c == 0)
            wParam = 0
        else
            wParam = 1
        
        SendDlgItemMessageA(data_1c054ec, 0x4e35, 0xf1, wParam, 0)
        WPARAM wParam_1
        
        if (data_1313cd0 == 0)
            wParam_1 = 0
        else
            wParam_1 = 1
        
        SendDlgItemMessageA(data_1c054ec, 0x5052, 0xf1, wParam_1, 0)
        int32_t ecx_22 = data_1332b50
        
        if (ecx_22 u<= 4)
            SendMessageA(GetDlgItem(data_1c054ec, *((ecx_22 << 2) + &data_611fe8)), 0xf1, 1, 0)
            ecx_22 = data_1332b50
        
        sub_545480(ecx_22)
        sub_544690()
        sub_544800()
        
        if (data_108feb8 == 0)
            sub_544790(0x4eef, &var_47c)
            int32_t eax_36 = sub_544630(0x4eef, 0x503a)
            ShowWindow(GetDlgItem(data_1c054ec, 0x503a), SW_HIDE)
            int32_t X
            int32_t Y
            int32_t nWidth
            int32_t var_46c
            MoveWindow(GetDlgItem(data_1c054ec, 0x4eef), X, Y, nWidth, var_46c + eax_36, 1)
        
        sub_5452e0(data_1332b50)
        
        if (data_1332b50 != 4)
            sub_544ab0()
        else
            sub_5449a0()
        
        SendMessageA(GetDlgItem(data_1c054ec, 0x5054), 0x407, 1, 0x32)
        SendMessageA(GetDlgItem(data_1c054ec, 0x5054), 0x408, 1, 0x12c)
        SendMessageA(GetDlgItem(data_1c054ec, 0x5054), 0x414, 0xa, 0)
        sub_544c30(data_1332b48)
        SendMessageA(GetDlgItem(data_1c054ec, 0x504f), 0x407, 1, 0x32)
        SendMessageA(GetDlgItem(data_1c054ec, 0x504f), 0x408, 1, 0x12c)
        SendMessageA(GetDlgItem(data_1c054ec, 0x504f), 0x414, 0xa, 0)
        sub_544cb0(data_1332b4c)
        SendMessageA(GetDlgItem(data_1c054ec, 0x4f43), 0x407, 1, 0xffffffce)
        SendMessageA(GetDlgItem(data_1c054ec, 0x4f43), 0x408, 1, 0x32)
        SendMessageA(GetDlgItem(data_1c054ec, 0x4f43), 0x414, 0xa, 0)
        sub_544d30(data_1332b40)
        SendMessageA(GetDlgItem(data_1c054ec, 0x4f3f), 0x407, 1, 0xffffffce)
        SendMessageA(GetDlgItem(data_1c054ec, 0x4f3f), 0x408, 1, 0x32)
        SendMessageA(GetDlgItem(data_1c054ec, 0x4f3f), 0x414, 0xa, 0)
        sub_544db0(data_1332b44)
        
        if (sub_4d4ec0(3) != 4)
            EnableWindow(GetDlgItem(data_1c054ec, 0x5036), 0)
        
        int32_t eax_55
        int32_t ecx_28
        eax_55, ecx_28 = sub_4d4ec0(4)
        
        if (eax_55 != 5)
            ecx_28 = EnableWindow(GetDlgItem(data_1c054ec, 0x5037), 0)
        
        int32_t var_48c_12 = ecx_28
        sub_4d5720(data_1c054ec)
        SetFocus(GetDlgItem(data_1c054ec, 0x4eef))
        SendMessageA(GetDlgItem(data_1c054ec, 0x4eef), 0xf4, 1, 1)
    else if (arg2 == 0x111)
        uint32_t eax_24 = zx.d(arg3)
        
        if (eax_24 s> 0x4ed4)
            if (eax_24 s> 0x5033)
                int32_t ecx_17
                
                if (eax_24 - 0x5035 u<= 0x1e)
                    switch (eax_24)
                        case 0x5035
                            data_187c518 = 1
                            data_187c520 = 1
                            data_1c0518f = 0
                            data_1c0518e = 0
                        case 0x5036
                            ecx_17 = 3
                        label_5459f5:
                            int32_t eax_31 = sub_4d4ec0(ecx_17)
                            
                            if (eax_31 s<= 0xffffffff || eax_31 s>= 8)
                                eax_31 = 1
                            else if (eax_31 == 5 || eax_31 == 4)
                                if (eax_31 - 1 u> 4)
                                    eax_31 = 1
                                else
                                    eax_31 = sub_4d4ec0(eax_31 - 1)
                            
                            data_187c518 = eax_31
                            data_187c520 = eax_31
                            data_1c0518f = 0
                            data_1c0518e = 0
                        case 0x5037
                            ecx_17 = 4
                            goto label_5459f5
                        case 0x5038
                            data_187c518 = 2
                            data_187c520 = 2
                            data_1c0518f = 0
                            data_1c0518e = 0
                        case 0x5039
                            data_187c518 = 3
                            data_187c520 = 3
                            data_1c0518f = 0
                            data_1c0518e = 0
                        case 0x503a
                            sub_545fa0()
                            sub_543df0()
                            sub_545f70()
                        case 0x504e
                            sub_544cb0(0x64)
                            
                            if (data_1313cd0 != 0)
                                sub_544c30(data_1332b4c)
                        case 0x5052
                            data_1313cd0 = sub_4c1080(data_1c054ec, 0x5052) != 0
                        case 0x5053
                            sub_544c30(0x64)
                            
                            if (data_1313cd0 != 0)
                                sub_544cb0(data_1332b48)
            else if (eax_24 == 0x5033)
                data_1b8be8f = sub_4c1080(data_1c054ec, 0x5033) != 0
            else
                void string
                
                if (eax_24 - 0x4edc u<= 0x66)
                    switch (eax_24)
                        case 0x4edc
                            sub_545fa0()
                            DialogBoxParamA(data_134cebc, 0x16b, data_7027bc, sub_546710, 0)
                            sub_545f70()
                        case 0x4eef
                            sub_545130()
                        case 0x4f1d
                            data_1332b50 = 0
                            sub_4cfd70(&string, 
                                "High Resolution results makes surroundings turn black.\nLow Resolution "
                            "results lets the screen stick out.")
                            SetDlgItemTextA(data_1c054ec, 0x4f1c, &string)
                            sub_5452e0(0)
                            sub_544ab0()
                        case 0x4f1e
                            data_1332b50 = 1
                            sub_4cfd70(&string, 
                                "Deviating aspect ratio leads to the area under and above the screen "
                            "turn black.")
                            SetDlgItemTextA(data_1c054ec, 0x4f1c, &string)
                            sub_5452e0(1)
                            sub_544ab0()
                        case 0x4f1f
                            data_1332b50 = 2
                            sub_4cfd70(&string, 
                                "When the aspect ratio is different, the screen will be stretched.")
                            SetDlgItemTextA(data_1c054ec, 0x4f1c, &string)
                            sub_5452e0(2)
                            sub_544ab0()
                        case 0x4f20
                            data_1332b50 = 3
                            sub_4cfd70(&string, 
                                "When the aspect ratio is different, horizontal area will leave the "
                            "screen.\nOr turns black.")
                            SetDlgItemTextA(data_1c054ec, 0x4f1c, &string)
                            sub_5452e0(3)
                            sub_544ab0()
                        case 0x4f21
                            data_1332b50 = 4
                            sub_4cfd70(&string, "Please adjust by custom settings.")
                            SetDlgItemTextA(data_1c054ec, 0x4f1c, &string)
                            sub_5452e0(4)
                            sub_5449a0()
                        case 0x4f3e
                            sub_544db0(0)
                        case 0x4f42
                            sub_544d30(0)
        else if (eax_24 == 0x4ed4)
            DestroyWindow(data_1c054ec)
        else if (eax_24 == 0x4e35)
            data_187c51c = sub_4c1080(data_1c054ec, eax_24) != 0
    else if (arg2 == 0x114)
        if (arg4 != GetDlgItem(data_1c054ec, 0x5054))
            if (arg4 != GetDlgItem(data_1c054ec, 0x504f))
                if (arg4 != GetDlgItem(data_1c054ec, 0x4f43))
                    if (arg4 == GetDlgItem(data_1c054ec, 0x4f3f))
                        LRESULT eax_21 = SendMessageA(GetDlgItem(data_1c054ec, 0x4f3f), 0x400, 0, 0)
                        data_1332b44 = eax_21
                        sub_544db0(eax_21)
                else
                    LRESULT eax_18 = SendMessageA(GetDlgItem(data_1c054ec, 0x4f43), 0x400, 0, 0)
                    data_1332b40 = eax_18
                    sub_544d30(eax_18)
            else
                LRESULT eax_15 = SendMessageA(GetDlgItem(data_1c054ec, 0x504f), 0x400, 0, 0)
                data_1332b4c = eax_15
                sub_544cb0(eax_15)
                
                if (data_1313cd0 != 0)
                    sub_544c30(data_1332b4c)
        else
            LRESULT eax_12 = SendMessageA(GetDlgItem(data_1c054ec, 0x5054), 0x400, 0, 0)
            data_1332b48 = eax_12
            sub_544c30(eax_12)
            
            if (data_1313cd0 != 0)
                sub_544cb0(data_1332b48)
        
        goto label_5456fb
else if (arg2 == 0x7e)
    HWND var_48c_2 = arg1
    sub_4d5720(data_1c054ec)
    sub_544f90()
    sub_544e30()
    sub_5452a0()
else if (arg2 == 2)
    sub_544bc0()
    data_1c054ec = 0
else
    if (arg2 == 0x10)
        DestroyWindow(data_1c054ec)
        sub_5f02dd(eax_1 ^ &var_47c)
        return 1
    
    if (arg2 == 0x4e)
    label_5456fb:
        
        if (arg3 == 0x4ef0)
            int32_t eax_22 = *(arg4 + 8)
            
            if (eax_22 == 0xffffff9b)
                sub_5452a0()
            else if (eax_22 == 0xfffffffe)
                sub_5452a0()

sub_5f02dd(eax_1 ^ &var_47c)
return 0
