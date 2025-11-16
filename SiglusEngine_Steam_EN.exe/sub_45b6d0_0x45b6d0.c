// 函数: sub_45b6d0
// 地址: 0x45b6d0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
enum MESSAGEBOX_RESULT eax_1 = __security_cookie ^ &__saved_ebp
enum MESSAGEBOX_RESULT var_8 = eax_1

if (arg1 s> 0)
    if (arg1 - 1 u<= 0x1e)
        switch (arg1)
            case 1
                eax_1 = sub_54a590(1)
                
                if (eax_1 u<= 0x100)
                    int32_t eax_5 = sub_45b340(eax_1)
                    sub_5f02dd(var_8 ^ &__saved_ebp)
                    return eax_5
            case 2
                int32_t eax_6 = sub_5478e0()
                sub_5f02dd(var_8 ^ &__saved_ebp)
                return eax_6
            case 3
                int32_t eax_7 = DialogBoxParamA(data_134cebc, 0x157, data_7027bc, sub_54d080, 0)
                data_703008 = 1
                sub_5f02dd(var_8 ^ &__saved_ebp)
                return eax_7
            case 4
                int32_t eax_8 = DialogBoxParamA(data_134cebc, 0x168, data_7027bc, sub_54c360, 0)
                sub_5f02dd(var_8 ^ &__saved_ebp)
                return eax_8
            case 5
                if (arg2 == 6)
                    BOOL eax_9 = sub_545fe0()
                    sub_5f02dd(var_8 ^ &__saved_ebp)
                    return eax_9
                
                int32_t eax_10 = sub_4a5cd0(arg2)
                arg2.b = 1
                int32_t eax_11 = sub_4d4e10(eax_10, arg2.b)
                sub_445260()
                sub_5f02dd(var_8 ^ &__saved_ebp)
                return eax_11
            case 6
                int32_t eax_12 = DialogBoxParamA(data_134cebc, 0x155, data_7027bc, sub_54b050, 0)
                sub_5f02dd(var_8 ^ &__saved_ebp)
                return eax_12
            case 7
                enum MESSAGEBOX_RESULT eax_13 =
                    MessageBoxA(data_7027bc, &data_619850, "SYSCOM_DEBUG", MB_OK)
                sub_5f02dd(var_8 ^ &__saved_ebp)
                return eax_13
            case 8
                data_13132c0 = arg2
                sub_5f02dd(var_8 ^ &__saved_ebp)
                return eax_1
            case 9
                int32_t eax_14 = sub_4c6dd0()
                sub_5f02dd(var_8 ^ &__saved_ebp)
                return eax_14
            case 0xa
                int32_t eax_15 = DialogBoxParamA(data_134cebc, 0x148, data_7027bc, sub_543320, 0)
                sub_5f02dd(var_8 ^ &__saved_ebp)
                return eax_15
            case 0xb
                if (data_13132e8 != arg2)
                    bool cond:1_1 = data_92b1b0 == 0
                    data_13132e8 = arg2
                    
                    if (not(cond:1_1) && data_92b3e8 == 0)
                        char var_214[0x20c]
                        int32_t ecx_36 = sub_4cfd70(&var_214, &data_92b1b0)
                        int32_t var_218 = 0xffffffff
                        char* eax_17 =
                            sub_49f8d0(sub_4a0c60(), 0, &var_214, 0, ecx_36, 0, 0xffffffff)
                        sub_5f02dd(var_8 ^ &__saved_ebp)
                        return eax_17
            case 0xc
                int32_t eax_18 = sub_45b6b0(arg2)
                sub_5f02dd(var_8 ^ &__saved_ebp)
                return eax_18
            case 0xd
                int32_t eax_19 = DialogBoxParamA(data_134cebc, 0x165, data_7027bc, sub_542e60, 0)
                sub_5f02dd(var_8 ^ &__saved_ebp)
                return eax_19
            case 0xe
                bool cond:3_1
                
                if (data_12a2d94 != 0)
                    eax_1 = MessageBoxA(data_7027bc, &data_12fff8c, "Confirmation", MB_YESNO)
                    cond:3_1 = eax_1 != IDYES
                else
                    cond:3_1 = arg2 != 1
                
                if (not(cond:3_1))
                    char* eax_20 = sub_4539b0(1)
                    sub_5f02dd(var_8 ^ &__saved_ebp)
                    return eax_20
            case 0xf
                if (data_1300594 != 0)
                    data_1313b3c = arg2 == 0
                    sub_5f02dd(var_8 ^ &__saved_ebp)
                    return eax_1
                
                int32_t eax_21 = sub_543b90()
                sub_5f02dd(var_8 ^ &__saved_ebp)
                return eax_21
            case 0x10
                enum MESSAGEBOX_RESULT eax_22 =
                    MessageBoxA(data_7027bc, &data_1305b58, 0x12a4960, MB_OK)
                sub_5f02dd(var_8 ^ &__saved_ebp)
                return eax_22
            case 0x11
                int32_t eax_23
                eax_23.b = arg2 == 0
                data_1313c7c = eax_23
                sub_5f02dd(var_8 ^ &__saved_ebp)
                return eax_23
            case 0x12
                int32_t eax_24
                eax_24.b = arg2 == 0
                data_1313c80 = eax_24
                sub_5f02dd(var_8 ^ &__saved_ebp)
                return eax_24
            case 0x13
                int32_t eax_25
                eax_25.b = arg2 == 0
                data_1313c84 = eax_25
                sub_5f02dd(var_8 ^ &__saved_ebp)
                return eax_25
            case 0x14
                int32_t eax_26
                eax_26.b = arg2 == 0
                data_1313c88 = eax_26
                sub_5f02dd(var_8 ^ &__saved_ebp)
                return eax_26
            case 0x15
                data_1313c8c = arg2
                sub_5f02dd(var_8 ^ &__saved_ebp)
                return eax_1
            case 0x16
                data_1313c90 = arg2
                sub_5f02dd(var_8 ^ &__saved_ebp)
                return eax_1
            case 0x17
                int32_t eax_27 = DialogBoxParamA(data_134cebc, 0x14e, data_7027bc, sub_546d90, 0)
                sub_5f02dd(var_8 ^ &__saved_ebp)
                return eax_27
            case 0x18
                eax_1 = sub_45b470()
                
                if (eax_1 != 0)
                    eax_1 = sub_45b580()
                    
                    if (eax_1 != 0 && data_1311175 != 0)
                        int32_t eax_28 = sub_4d4e10(1, 1)
                        sub_445260()
                        sub_5f02dd(var_8 ^ &__saved_ebp)
                        return eax_28
            case 0x19
                if (data_1af17b8 == 0)
                    goto label_45bbb6
                
                data_1af17b8 = 0
                data_1af17b0 = 0
                sub_5f02dd(var_8 ^ &__saved_ebp)
                return eax_1
            case 0x1a
                int32_t eax_29
                eax_29.b = data_13132f8 == 0
                data_13132f8 = eax_29
                sub_5f02dd(var_8 ^ &__saved_ebp)
                return eax_29
            case 0x1b
                if (data_1af17b0 != 0)
                    data_1af17b0 = 0
                    data_1af17b8 = 0
                    sub_5f02dd(var_8 ^ &__saved_ebp)
                    return eax_1
                
                bool cond:2_1 = data_703674 != 0
                data_1af17b0 = 1
                
                if (not(cond:2_1) && data_7037c8 != 0)
                label_45bbb6:
                    data_1af17b8 = 1
                    sub_5f02dd(var_8 ^ &__saved_ebp)
                    return eax_1
            case 0x1c
                bool cond:4_1
                
                if (data_12a2d94 != 0)
                    eax_1 = MessageBoxA(data_7027bc, &data_130008c, "Confirmation", MB_YESNO)
                    cond:4_1 = eax_1 != IDYES
                else
                    cond:4_1 = arg2 != 1
                
                if (not(cond:4_1))
                    char* eax_30 = sub_453750(eax_1, 1, 1, &data_6144d8)
                    sub_5f02dd(var_8 ^ &__saved_ebp)
                    return eax_30
            case 0x1d
                bool cond:5_1
                
                if (data_12a2d94 != 0)
                    eax_1 = MessageBoxA(data_7027bc, &data_130018c, "Confirmation", MB_YESNO)
                    cond:5_1 = eax_1 != IDYES
                else
                    cond:5_1 = arg2 != 1
                
                if (not(cond:5_1))
                    BOOL eax_31 = PostMessageA(data_7027bc, 2, 0, 0)
                    sub_5f02dd(var_8 ^ &__saved_ebp)
                    return eax_31
            case 0x1f
                data_1af17c4 = 1
else if (arg1 == 0)
    eax_1 = sub_54a590(0)
    
    if (eax_1 u<= 0x100)
        int32_t eax_4 = sub_496210(eax_1, 1, eax_1, 1)
        sub_5f02dd(var_8 ^ &__saved_ebp)
        return eax_4
else
    if (arg1 == 0xffffd8ef)
        int32_t eax_3 = sub_547210(data_7027bc)
        sub_5f02dd(var_8 ^ &__saved_ebp)
        return eax_3
    
    if (arg1 == 0xffffd8f0)
        int32_t eax_2 = sub_547c00(data_7027bc, 0)
        sub_5f02dd(var_8 ^ &__saved_ebp)
        return eax_2

sub_5f02dd(var_8 ^ &__saved_ebp)
return eax_1
