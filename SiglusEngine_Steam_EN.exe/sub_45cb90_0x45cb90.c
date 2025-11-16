// 函数: sub_45cb90
// 地址: 0x45cb90
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void var_94
uint32_t eax_1 = __security_cookie ^ &var_94
uint32_t var_c = eax_1
char var_90[0x84]

if (arg1 == 0x2739)
    if (data_1af4148 == 0)
        uint32_t ecx_121
        uint32_t edx_1
        
        if (arg2 != 0)
            ecx_121 = zx.d(arg2.w)
            edx_1 = arg2 u>> 0x10
            data_1af454c = 0
            
            if (ecx_121 - 1 u> 0x270e || edx_1 u> 0x63)
                goto label_45dca2
            
            data_1af454c = 1
            data_1af4550 = ecx_121
            data_1af4554 = edx_1
            goto label_45dc63
        
        void* ecx_122
        LRESULT edx_2
        
        if (data_1af454c == 0)
        label_45dca2:
            int32_t eax_69 = data_108f35c
            
            if (eax_69 != 0)
                int32_t var_9c_21 = eax_69
                int32_t var_a0_22 = data_108f358
                sub_4c84d0(&var_90, 0x6198b4)
            else
                int32_t var_9c_20 = data_108f358
                sub_4c84d0(&var_90, 0x61989c)
            
            edx_2 = data_108f35c
            ecx_122 = data_108f358
        else
            ecx_121 = data_1af4550
            edx_1 = data_1af4554
        label_45dc63:
            
            if (edx_1 != 0)
                uint32_t var_9c_19 = edx_1
                uint32_t var_a0_21 = ecx_121
                sub_4c84d0(&var_90, 0x6198b4)
                edx_2 = data_1af4554
                ecx_122 = data_1af4550
            else
                uint32_t var_9c_18 = ecx_121
                sub_4c84d0(&var_90, 0x61989c)
                edx_2 = data_1af4554
                ecx_122 = data_1af4550
        
        eax_1 = sub_453500(&var_90, edx_2, ecx_122, &var_90, nullptr)
else if (data_1af476c != 0)
    eax_1 = arg1 - 0x4e20
    
    if (eax_1 u<= 0xf9f)
        int32_t eax_2 = sub_45bd20(arg1)
        sub_5f02dd(var_c ^ &var_94)
        return eax_2
    
    if (arg1 - 0x2710 u<= 0x87)
        eax_1 = zx.d(*(arg1 + sub_45b6d0+0x78))
        int32_t ecx_116
        
        switch (eax_1)
            case 0
                if (data_1af0a10 != 0)
                    sub_559ef0(0, 0)
                    EndDialog(data_1af0a10, 0)
                    data_1af0a10 = 0
                else
                    HWND eax_24 =
                        CreateDialogParamA(data_134cebc, 0x13c, data_7027bc, sub_5752a0, 0)
                    bool cond:0_1 = data_1313cd4 != 1
                    data_1af0a10 = eax_24
                    
                    if (not(cond:0_1))
                        sub_55af90()
                        HWND hWnd = data_7027bc
                        data_1313cd4 = 0
                        HWND eax_25 = SetFocus(hWnd)
                        sub_5f02dd(var_c ^ &var_94)
                        return eax_25
                
                HWND eax_26 = SetFocus(data_7027bc)
                sub_5f02dd(var_c ^ &var_94)
                return eax_26
            case 1
                if (data_1af0a3c != 0)
                    sub_559ef0(0xb, 0)
                    EndDialog(data_1af0a3c, 0)
                    data_1af0a3c = 0
                else
                    HWND eax_57 =
                        CreateDialogParamA(data_134cebc, 0x13e, data_7027bc, sub_55fc90, 0)
                    bool cond:11_1 = data_1313cd4 != 1
                    data_1af0a3c = eax_57
                    
                    if (not(cond:11_1))
                        sub_55af90()
                        HWND hWnd_11 = data_7027bc
                        data_1313cd4 = 0
                        HWND eax_58 = SetFocus(hWnd_11)
                        sub_5f02dd(var_c ^ &var_94)
                        return eax_58
                
                HWND eax_59 = SetFocus(data_7027bc)
                sub_5f02dd(var_c ^ &var_94)
                return eax_59
            case 2
                ecx_116 = 0xc
            label_45d873:
                sub_55aaa0(ecx_116)
            label_45d87e:
                HWND eax_60 = SetFocus(data_7027bc)
                sub_5f02dd(var_c ^ &var_94)
                return eax_60
            case 3
                ecx_116 = 0xd
                goto label_45d873
            case 4
                ecx_116 = 0xe
                goto label_45d873
            case 5
                ecx_116 = 0xf
                goto label_45d873
            case 6
                ecx_116 = 0x10
                goto label_45d873
            case 7
                ecx_116 = 0x11
                goto label_45d873
            case 8
                ecx_116 = 0x12
                goto label_45d873
            case 9
                if (data_1af0a5c != 0)
                    sub_559ef0(0x13, 0)
                    EndDialog(data_1af0a5c, 0)
                    data_1af0a5c = 0
                    goto label_45d87e
                
                data_1af0a5c = CreateDialogParamA(data_134cebc, 0x13c, data_7027bc, sub_5686e0, 0)
            label_45d8ed:
                
                if (data_1313cd4 != 1)
                    goto label_45d87e
                
                sub_55af90()
                data_1313cd4 = 0
                goto label_45d87e
            case 0xa
                ecx_116 = 0x14
                goto label_45d873
            case 0xb
                if (data_1af0a64 == 0)
                    data_1af0a64 =
                        CreateDialogParamA(data_134cebc, 0x13c, data_7027bc, sub_560920, 0)
                    goto label_45d8ed
                
                sub_559ef0(0x15, 0)
                EndDialog(data_1af0a64, 0)
                data_1af0a64 = 0
                goto label_45d87e
            case 0xc
                if (data_1af0a68 == 0)
                    data_1af0a68 =
                        CreateDialogParamA(data_134cebc, 0x13c, data_7027bc, sub_55b820, 0)
                    goto label_45d8ed
                
                sub_559ef0(0x16, 0)
                EndDialog(data_1af0a68, 0)
                data_1af0a68 = 0
                goto label_45d87e
            case 0xd
                ecx_116 = 0x17
                goto label_45d873
            case 0xe
                if (data_1af0a70 == 0)
                    data_1af0a70 =
                        CreateDialogParamA(data_134cebc, 0x13c, data_7027bc, sub_55ee10, 0)
                    goto label_45d8ed
                
                sub_559ef0(0x18, 0)
                EndDialog(data_1af0a70, 0)
                data_1af0a70 = 0
                goto label_45d87e
            case 0xf
                if (data_1af0a74 == 0)
                    data_1af0a74 =
                        CreateDialogParamA(data_134cebc, 0x13c, data_7027bc, sub_560300, 0)
                    goto label_45d8ed
                
                sub_559ef0(0x19, 0)
                EndDialog(data_1af0a74, 0)
                data_1af0a74 = 0
                goto label_45d87e
            case 0x10
                ecx_116 = 0x1a
                goto label_45d873
            case 0x11
                if (data_1af0a7c == 0)
                    data_1af0a7c =
                        CreateDialogParamA(data_134cebc, 0x13c, data_7027bc, sub_575770, 0)
                    goto label_45d8ed
                
                sub_559ef0(0x1b, 0)
                EndDialog(data_1af0a7c, 0)
                data_1af0a7c = 0
                goto label_45d87e
            case 0x12
                ecx_116 = 0x1c
                goto label_45d873
            case 0x13
                ecx_116 = 0x1d
                goto label_45d873
            case 0x14
                ecx_116 = 0x1e
                goto label_45d873
            case 0x15
                ecx_116 = 0x1f
                goto label_45d873
            case 0x16
                ecx_116 = 0x20
                goto label_45d873
            case 0x17
                ecx_116 = 0x2b
                goto label_45d873
            case 0x18
                ecx_116 = 0x2c
                goto label_45d873
            case 0x19
                ecx_116 = 0x2e
                goto label_45d873
            case 0x1a
                ecx_116 = 0x2f
                goto label_45d873
            case 0x1b
                ecx_116 = 0x30
                goto label_45d873
            case 0x1c
                eax_1 = MessageBoxA(data_7027bc, 0x619948, 0x61992c, MB_YESNO)
                
                if (eax_1 == 6)
                    sub_55a460()
                    sub_55a3f0()
                    sub_5f02dd(var_c ^ &var_94)
                    return 0
            case 0x1d
                for (int32_t i = 0; i s< 0x40; i += 1)
                    int32_t eax_20
                    
                    if (i s>= 0)
                        eax_20 = sub_55a570(i)
                    
                    if (i s< 0 || eax_20 == 0)
                        sub_55aaa0(i)
                
                HWND eax_21 = SetFocus(data_7027bc)
                sub_5f02dd(var_c ^ &var_94)
                return eax_21
            case 0x1e
                if (data_1313cd4 != 0)
                    HWND eax_19 = sub_55af90()
                    data_1313cd4 = 0
                    sub_5f02dd(var_c ^ &var_94)
                    return eax_19
                
                int32_t eax_18 = sub_55a460()
                data_1313cd4 = 1
                sub_5f02dd(var_c ^ &var_94)
                return eax_18
            case 0x1f
                data_1313258 ^= 1
                data_703008 = 1
                sub_5f02dd(var_c ^ &var_94)
                return eax_1
            case 0x20
                HWND eax_8 = sub_550200()
                sub_5f02dd(var_c ^ &var_94)
                return eax_8
            case 0x21
                data_131324c ^= 1
                data_703008 = 1
                sub_5f02dd(var_c ^ &var_94)
                return eax_1
            case 0x22
                BOOL eax_67 = sub_54e9f0()
                sub_5f02dd(var_c ^ &var_94)
                return eax_67
            case 0x23
                data_131325c ^= 1
                data_703008 = 1
                sub_5f02dd(var_c ^ &var_94)
                return eax_1
            case 0x24
                data_1313248 = 0
                data_703008 = 1
                sub_5f02dd(var_c ^ &var_94)
                return eax_1
            case 0x25
                data_1313248 = 1
                data_703008 = 1
                sub_5f02dd(var_c ^ &var_94)
                return eax_1
            case 0x26
                data_1313248 = 2
                data_703008 = 1
                sub_5f02dd(var_c ^ &var_94)
                return eax_1
            case 0x27
                data_1313248 = 3
                data_703008 = 1
                sub_5f02dd(var_c ^ &var_94)
                return eax_1
            case 0x28
                data_1313244 ^= 1
                data_703008 = 1
                sub_5f02dd(var_c ^ &var_94)
                return eax_1
            case 0x29
            label_45cc22:
                eax_1 = sub_558c80()
                
                if (eax_1 != 0)
                    int32_t var_9c_2 = data_1313318
                    int32_t var_a0_2 = data_1313314
                label_45cc45:
                    sub_4c84d0(&var_90, 0x6198d0)
                    char* eax_5 = sub_453500(&var_90, data_1313318, data_1313314, &var_90, 0x6198ec)
                    sub_5f02dd(var_c ^ &var_94)
                    return eax_5
            case 0x2a
                int32_t eax_3 = data_1313314
                
                if (eax_3 == 0xffffffff)
                    goto label_45cc22
                
                int32_t ecx_3 = data_1313318
                
                if (ecx_3 == 0xffffffff)
                    goto label_45cc22
                
                int32_t var_9c_1 = ecx_3
                int32_t var_a0_1 = eax_3
                goto label_45cc45
            case 0x2b
                int32_t eax_9 = sub_54e7b0()
                sub_5f02dd(var_c ^ &var_94)
                return eax_9
            case 0x2c
                data_1313250 ^= 1
                data_703008 = 1
                sub_5f02dd(var_c ^ &var_94)
                return eax_1
            case 0x2d
                if (data_1af0a14 != 0)
                    sub_559ef0(1, 0)
                    EndDialog(data_1af0a14, 0)
                    data_1af0a14 = 0
                else
                    HWND eax_27 =
                        CreateDialogParamA(data_134cebc, 0x13f, data_7027bc, sub_561080, 0)
                    bool cond:1_1 = data_1313cd4 != 1
                    data_1af0a14 = eax_27
                    
                    if (not(cond:1_1))
                        sub_55af90()
                        HWND hWnd_1 = data_7027bc
                        data_1313cd4 = 0
                        HWND eax_28 = SetFocus(hWnd_1)
                        sub_5f02dd(var_c ^ &var_94)
                        return eax_28
                
                HWND eax_29 = SetFocus(data_7027bc)
                sub_5f02dd(var_c ^ &var_94)
                return eax_29
            case 0x2e
                if (data_1af0a18 != 0)
                    sub_559ef0(2, 0)
                    EndDialog(data_1af0a18, 0)
                    data_1af0a18 = 0
                else
                    HWND eax_30 =
                        CreateDialogParamA(data_134cebc, 0x13f, data_7027bc, sub_5610c0, 0)
                    bool cond:2_1 = data_1313cd4 != 1
                    data_1af0a18 = eax_30
                    
                    if (not(cond:2_1))
                        sub_55af90()
                        HWND hWnd_2 = data_7027bc
                        data_1313cd4 = 0
                        HWND eax_31 = SetFocus(hWnd_2)
                        sub_5f02dd(var_c ^ &var_94)
                        return eax_31
                
                HWND eax_32 = SetFocus(data_7027bc)
                sub_5f02dd(var_c ^ &var_94)
                return eax_32
            case 0x2f
                if (data_1af0a1c != 0)
                    sub_559ef0(3, 0)
                    EndDialog(data_1af0a1c, 0)
                    data_1af0a1c = 0
                else
                    HWND eax_33 =
                        CreateDialogParamA(data_134cebc, 0x13f, data_7027bc, sub_561100, 0)
                    bool cond:3_1 = data_1313cd4 != 1
                    data_1af0a1c = eax_33
                    
                    if (not(cond:3_1))
                        sub_55af90()
                        HWND hWnd_3 = data_7027bc
                        data_1313cd4 = 0
                        HWND eax_34 = SetFocus(hWnd_3)
                        sub_5f02dd(var_c ^ &var_94)
                        return eax_34
                
                HWND eax_35 = SetFocus(data_7027bc)
                sub_5f02dd(var_c ^ &var_94)
                return eax_35
            case 0x30
                if (data_1af0a20 != 0)
                    sub_559ef0(4, 0)
                    EndDialog(data_1af0a20, 0)
                    data_1af0a20 = 0
                else
                    HWND eax_36 =
                        CreateDialogParamA(data_134cebc, 0x13f, data_7027bc, sub_561140, 0)
                    bool cond:4_1 = data_1313cd4 != 1
                    data_1af0a20 = eax_36
                    
                    if (not(cond:4_1))
                        sub_55af90()
                        HWND hWnd_4 = data_7027bc
                        data_1313cd4 = 0
                        HWND eax_37 = SetFocus(hWnd_4)
                        sub_5f02dd(var_c ^ &var_94)
                        return eax_37
                
                HWND eax_38 = SetFocus(data_7027bc)
                sub_5f02dd(var_c ^ &var_94)
                return eax_38
            case 0x31
                if (data_1af0a24 != 0)
                    sub_559ef0(5, 0)
                    EndDialog(data_1af0a24, 0)
                    data_1af0a24 = 0
                else
                    HWND eax_39 =
                        CreateDialogParamA(data_134cebc, 0x13f, data_7027bc, sub_561180, 0)
                    bool cond:5_1 = data_1313cd4 != 1
                    data_1af0a24 = eax_39
                    
                    if (not(cond:5_1))
                        sub_55af90()
                        HWND hWnd_5 = data_7027bc
                        data_1313cd4 = 0
                        HWND eax_40 = SetFocus(hWnd_5)
                        sub_5f02dd(var_c ^ &var_94)
                        return eax_40
                
                HWND eax_41 = SetFocus(data_7027bc)
                sub_5f02dd(var_c ^ &var_94)
                return eax_41
            case 0x32
                if (data_1af0a28 != 0)
                    sub_559ef0(6, 0)
                    EndDialog(data_1af0a28, 0)
                    data_1af0a28 = 0
                else
                    HWND eax_42 =
                        CreateDialogParamA(data_134cebc, 0x13f, data_7027bc, sub_5611c0, 0)
                    bool cond:6_1 = data_1313cd4 != 1
                    data_1af0a28 = eax_42
                    
                    if (not(cond:6_1))
                        sub_55af90()
                        HWND hWnd_6 = data_7027bc
                        data_1313cd4 = 0
                        HWND eax_43 = SetFocus(hWnd_6)
                        sub_5f02dd(var_c ^ &var_94)
                        return eax_43
                
                HWND eax_44 = SetFocus(data_7027bc)
                sub_5f02dd(var_c ^ &var_94)
                return eax_44
            case 0x33
                if (data_1af0a2c != 0)
                    sub_559ef0(7, 0)
                    EndDialog(data_1af0a2c, 0)
                    data_1af0a2c = 0
                else
                    HWND eax_45 =
                        CreateDialogParamA(data_134cebc, 0x13f, data_7027bc, sub_561200, 0)
                    bool cond:7_1 = data_1313cd4 != 1
                    data_1af0a2c = eax_45
                    
                    if (not(cond:7_1))
                        sub_55af90()
                        HWND hWnd_7 = data_7027bc
                        data_1313cd4 = 0
                        HWND eax_46 = SetFocus(hWnd_7)
                        sub_5f02dd(var_c ^ &var_94)
                        return eax_46
                
                HWND eax_47 = SetFocus(data_7027bc)
                sub_5f02dd(var_c ^ &var_94)
                return eax_47
            case 0x34
                if (data_1af0a30 != 0)
                    sub_559ef0(8, 0)
                    EndDialog(data_1af0a30, 0)
                    data_1af0a30 = 0
                else
                    HWND eax_48 =
                        CreateDialogParamA(data_134cebc, 0x13f, data_7027bc, sub_561240, 0)
                    bool cond:8_1 = data_1313cd4 != 1
                    data_1af0a30 = eax_48
                    
                    if (not(cond:8_1))
                        sub_55af90()
                        HWND hWnd_8 = data_7027bc
                        data_1313cd4 = 0
                        HWND eax_49 = SetFocus(hWnd_8)
                        sub_5f02dd(var_c ^ &var_94)
                        return eax_49
                
                HWND eax_50 = SetFocus(data_7027bc)
                sub_5f02dd(var_c ^ &var_94)
                return eax_50
            case 0x35
                if (data_1af0a34 != 0)
                    sub_559ef0(9, 0)
                    EndDialog(data_1af0a34, 0)
                    data_1af0a34 = 0
                else
                    HWND eax_51 =
                        CreateDialogParamA(data_134cebc, 0x13f, data_7027bc, sub_561280, 0)
                    bool cond:9_1 = data_1313cd4 != 1
                    data_1af0a34 = eax_51
                    
                    if (not(cond:9_1))
                        sub_55af90()
                        HWND hWnd_9 = data_7027bc
                        data_1313cd4 = 0
                        HWND eax_52 = SetFocus(hWnd_9)
                        sub_5f02dd(var_c ^ &var_94)
                        return eax_52
                
                HWND eax_53 = SetFocus(data_7027bc)
                sub_5f02dd(var_c ^ &var_94)
                return eax_53
            case 0x36
                if (data_1af0a38 != 0)
                    sub_559ef0(0xa, 0)
                    EndDialog(data_1af0a38, 0)
                    data_1af0a38 = 0
                else
                    HWND eax_54 =
                        CreateDialogParamA(data_134cebc, 0x13f, data_7027bc, sub_5612c0, 0)
                    bool cond:10_1 = data_1313cd4 != 1
                    data_1af0a38 = eax_54
                    
                    if (not(cond:10_1))
                        sub_55af90()
                        HWND hWnd_10 = data_7027bc
                        data_1313cd4 = 0
                        HWND eax_55 = SetFocus(hWnd_10)
                        sub_5f02dd(var_c ^ &var_94)
                        return eax_55
                
                HWND eax_56 = SetFocus(data_7027bc)
                sub_5f02dd(var_c ^ &var_94)
                return eax_56
            case 0x37
                ecx_116 = 0x21
                goto label_45d873
            case 0x38
                ecx_116 = 0x22
                goto label_45d873
            case 0x39
                ecx_116 = 0x23
                goto label_45d873
            case 0x3a
                ecx_116 = 0x24
                goto label_45d873
            case 0x3b
                ecx_116 = 0x25
                goto label_45d873
            case 0x3c
                ecx_116 = 0x26
                goto label_45d873
            case 0x3d
                ecx_116 = 0x27
                goto label_45d873
            case 0x3e
                ecx_116 = 0x28
                goto label_45d873
            case 0x3f
                ecx_116 = 0x29
                goto label_45d873
            case 0x40
                ecx_116 = 0x2a
                goto label_45d873
            case 0x41
                for (wchar32 const* const i_1 = *)('&%$#"!\n\t"; i_1 s< &data_610840; i_1 = &i_1[1])
                    wchar32 const ecx_63 = *i_1
                    int32_t eax_22
                    
                    if (ecx_63 s>= 0)
                        eax_22 = sub_55a570(ecx_63)
                    
                    if (ecx_63 s< 0 || eax_22 == 0)
                        sub_55aaa0(ecx_63)
                
                HWND eax_23 = SetFocus(data_7027bc)
                sub_5f02dd(var_c ^ &var_94)
                return eax_23
            case 0x42
                HWND eax_16 = sub_54d500()
                sub_5f02dd(var_c ^ &var_94)
                return eax_16
            case 0x43
                HWND eax_11 = sub_5552a0()
                sub_5f02dd(var_c ^ &var_94)
                return eax_11
            case 0x44
                HWND eax_17 = sub_555770()
                sub_5f02dd(var_c ^ &var_94)
                return eax_17
            case 0x45
                HWND eax_14 = sub_556110()
                sub_5f02dd(var_c ^ &var_94)
                return eax_14
            case 0x46
                HWND eax_12 = sub_557400()
                sub_5f02dd(var_c ^ &var_94)
                return eax_12
            case 0x47
                HWND eax_10 = sub_5582c0()
                sub_5f02dd(var_c ^ &var_94)
                return eax_10
            case 0x48
                HWND eax_15 = sub_559d10()
                sub_5f02dd(var_c ^ &var_94)
                return eax_15
            case 0x49
                data_1333e30 = 0
                data_1313ca4 = 0
                data_1332b84 = 1
                sub_5f02dd(var_c ^ &var_94)
                return eax_1
            case 0x4a
                data_1333e30 = 1
                data_1313ca4 = 1
                data_1332b84 = 1
                sub_5f02dd(var_c ^ &var_94)
                return eax_1
            case 0x4b
                data_137475c = 0
                data_1313ca0 = 0
                data_1af451c = 1
                int32_t eax_7 = sub_45df30(nullptr)
                sub_5f02dd(var_c ^ &var_94)
                return eax_7
            case 0x4c
                data_137475c = 1
                data_1313ca0 = 1
                data_1af451c = 1
                int32_t eax_6 = sub_45df30(1)
                sub_5f02dd(var_c ^ &var_94)
                return eax_6
            case 0x4d
                ecx_116 = 0x31
                goto label_45d873
            case 0x4e
                ecx_116 = 0x32
                goto label_45d873
            case 0x4f
                HWND eax_13 = sub_54e000()
                sub_5f02dd(var_c ^ &var_94)
                return eax_13
            case 0x50
                ecx_116 = 0x33
                goto label_45d873
            case 0x51
                data_1313254 ^= 1
                data_703008 = 1
                sub_5f02dd(var_c ^ &var_94)
                return eax_1
sub_5f02dd(var_c ^ &var_94)
return eax_1
