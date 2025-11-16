// 函数: sub_541600
// 地址: 0x541600
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void var_c30
int32_t eax_1 = __security_cookie ^ &var_c30
uint32_t eax_2 = data_1bfdd30
char** var_c2c = nullptr

if (eax_2 u> 0x65)
label_542401:
    data_1b8b06c = 1
    sub_5f02dd(eax_1 ^ &var_c30)
    return eax_2

eax_2 = zx.d(lookup_table_542478[eax_2])
char** eax_9
bool cond:3_1

switch (eax_2)
    case 0
        int32_t eax_3 = data_1af4e84
        
        if (eax_3 == 0)
            eax_2 = sub_4ef190(eax_3, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
            
            if (data_702fc0 != 0)
                int32_t var_c3c_1 = data_1b8a720
                sub_4c84d0(&data_7027c0, "%$d")
                sub_545fa0()
                data_1af4e70 = 1
                int32_t i
                
                do
                    i = ShowCursor(1)
                while (i s<= 0)
                HWND hWnd_1 = data_7027bc
                data_1af17a0 = 1
                data_1af17cc = 1
                MessageBoxA(hWnd_1, &data_7027c0, "DEBUG_MESSAGEBOX_OK", MB_OK)
                int32_t ecx_8 = data_7037a0
                data_1af17cc = 0
                data_1af17a0 = 0
                sub_4d59f0(ecx_8)
                HWND eax_6 = sub_545f70()
                sub_5f02dd(eax_1 ^ &var_c30)
                return eax_6
        else
            eax_2 = eax_3 - 1
            
            if (eax_3 == 1)
                int32_t ecx_2
                eax_2, ecx_2 = sub_4ef190(eax_2, arg2 + 0x20, *(arg2 + 0x20), SMDB", &data_1b8a720)
                
                if (data_702fc0 != 0)
                    char* edx_1 = data_1b8a728
                    
                    if (edx_1 != 0)
                        sub_4d0e90(ecx_2, edx_1)
                        sub_545fa0()
                        data_1af4e70 = 1
                        int32_t i_1
                        
                        do
                            i_1 = ShowCursor(1)
                        while (i_1 s<= 0)
                        HWND hWnd = data_7027bc
                        data_1af17a0 = 1
                        data_1af17cc = 1
                        MessageBoxA(hWnd, &data_7027c0, "DEBUG_MESSAGEBOX_OK", MB_OK)
                        int32_t ecx_3 = data_7037a0
                        data_1af17cc = 0
                        data_1af17a0 = 0
                        sub_4d59f0(ecx_3)
                        HWND eax_5 = sub_545f70()
                        sub_5f02dd(eax_1 ^ &var_c30)
                        return eax_5
        
        sub_5f02dd(eax_1 ^ &var_c30)
        return eax_2
    case 1
        int32_t eax_7 = data_1af4e84
        
        if (eax_7 == 0)
            eax_9 = sub_4ef190(eax_7, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
            
            if (data_702fc0 != 0)
                int32_t var_c3c_2 = data_1b8a720
                sub_4c84d0(&data_7027c0, "%$d")
                sub_545fa0()
                data_1af4e70 = 1
                int32_t i_2
                
                do
                    i_2 = ShowCursor(1)
                while (i_2 s<= 0)
            label_5418a4:
                HWND hWnd_2 = data_7027bc
                data_1af17a0 = 1
                data_1af17cc = 1
                char** eax_10 =
                    MessageBoxA(hWnd_2, &data_7027c0, "DEBUG_MESSAGEBOX_OKCANCEL", MB_OKCANCEL)
                int32_t ecx_20 = data_7037a0
                var_c2c = eax_10
                data_1af17cc = 0
                data_1af17a0 = 0
                sub_4d59f0(ecx_20)
                eax_9 = sub_545f70()
                cond:3_1 = var_c2c == 1
            label_5418f1:
                
                if (not(cond:3_1))
                    goto label_5418f7
        else
            eax_9 = eax_7 - 1
            
            if (eax_7 != 1)
            label_5418f7:
                data_715e98 = 1
                sub_5f02dd(eax_1 ^ &var_c30)
                return eax_9
            
            int32_t ecx_13
            eax_9, ecx_13 = sub_4ef190(eax_9, arg2 + 0x20, *(arg2 + 0x20), U"SMDB", &data_1b8a720)
            
            if (data_702fc0 != 0)
                char* edx_4 = data_1b8a728
                
                if (edx_4 != 0)
                    sub_4d0e90(ecx_13, edx_4)
                    sub_545fa0()
                    data_1af4e70 = 1
                    int32_t i_3
                    
                    do
                        i_3 = ShowCursor(1)
                    while (i_3 s<= 0)
                    goto label_5418a4
    case 2
        int32_t eax_11 = data_1af4e84
        
        if (eax_11 == 0)
            eax_9 = sub_4ef190(eax_11, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
            
            if (data_702fc0 != 0)
                int32_t var_c3c_3 = data_1b8a720
                sub_4c84d0(&data_7027c0, "%$d")
                sub_545fa0()
                data_1af4e70 = 1
                int32_t i_4
                
                do
                    i_4 = ShowCursor(1)
                while (i_4 s<= 0)
            label_5419e4:
                HWND hWnd_3 = data_7027bc
                data_1af17a0 = 1
                data_1af17cc = 1
                char** eax_13 =
                    MessageBoxA(hWnd_3, &data_7027c0, "DEBUG_MESSAGEBOX_YESNO", MB_YESNO)
                int32_t ecx_30 = data_7037a0
                var_c2c = eax_13
                data_1af17cc = 0
                data_1af17a0 = 0
                sub_4d59f0(ecx_30)
                eax_9 = sub_545f70()
                cond:3_1 = var_c2c == 6
                goto label_5418f1
        else
            eax_9 = eax_11 - 1
            
            if (eax_11 != 1)
                goto label_5418f7
            
            int32_t ecx_25
            eax_9, ecx_25 = sub_4ef190(eax_9, arg2 + 0x20, *(arg2 + 0x20), U"SMDB", &data_1b8a720)
            
            if (data_702fc0 != 0)
                char* edx_7 = data_1b8a728
                
                if (edx_7 != 0)
                    sub_4d0e90(ecx_25, edx_7)
                    sub_545fa0()
                    data_1af4e70 = 1
                    int32_t i_5
                    
                    do
                        i_5 = ShowCursor(1)
                    while (i_5 s<= 0)
                    goto label_5419e4
    case 3
        int32_t eax_14 = data_1af4e84
        
        if (eax_14 == 0)
            eax_9 = sub_4ef190(eax_14, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
            
            if (data_702fc0 != 0)
                int32_t var_c3c_4 = data_1b8a720
                sub_4c84d0(&data_7027c0, "%$d")
                sub_545fa0()
                data_1af4e70 = 1
                int32_t i_6
                
                do
                    i_6 = ShowCursor(1)
                while (i_6 s<= 0)
            label_541b06:
                HWND hWnd_4 = data_7027bc
                data_1af17a0 = 1
                data_1af17cc = 1
                char** eax_16 = MessageBoxA(hWnd_4, &data_7027c0, "DEBUG_MESSAGEBOX_YESNOCANCEL", 
                    MB_YESNOCANCEL)
                int32_t ecx_36 = data_7037a0
                var_c2c = eax_16
                data_1af17cc = 0
                data_1af17a0 = 0
                sub_4d59f0(ecx_36)
                sub_545f70()
                eax_9 = var_c2c
                
                if (eax_9 != 6)
                    if (eax_9 == 7)
                        goto label_5418f7
                    
                    goto label_541b64
        else
            eax_9 = eax_14 - 1
            
            if (eax_14 != 1)
            label_541b64:
                data_715e98 = 2
                sub_5f02dd(eax_1 ^ &var_c30)
                return eax_9
            
            int32_t ecx_33
            eax_9, ecx_33 = sub_4ef190(eax_9, arg2 + 0x20, *(arg2 + 0x20), U"SMDB", &data_1b8a720)
            
            if (data_702fc0 != 0)
                char* edx_10 = data_1b8a728
                
                if (edx_10 != 0)
                    sub_4d0e90(ecx_33, edx_10)
                    sub_545fa0()
                    data_1af4e70 = 1
                    int32_t i_7
                    
                    do
                        i_7 = ShowCursor(1)
                    while (i_7 s<= 0)
                    goto label_541b06
    case 4
        int32_t eax_17 = data_1af4e84
        char* var_c40_1
        
        if (eax_17 == 0)
            eax_2 = sub_4ef190(eax_17, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
            
            if (data_702fc0 != 0)
                int32_t var_c3c_6 = data_1b8a720
                var_c40_1 = &data_61c68c
            label_541c04:
                eax_2 = sub_4c84d0(&data_7027c0, var_c40_1)
                
                if (data_702fc0 != 0)
                    eax_2 = 1
                    
                    if (data_13184f8 == 0)
                        if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
                            eax_2 = 0
                        
                        if (data_1311178 != 0 && data_13184e8:4 == 0)
                            eax_2 = 0
                        
                        if (data_1af174c == 0 && eax_2 != 0)
                            char* eax_21 = sub_55f390(
                                sub_55f1e0(
                                    sub_55ef70(eax_2, data_72d6ac, data_719b6c, "DEBUG_MESSAGE", 
                                        &data_7027c0), 
                                    data_72d6ac, data_719b6c, "DEBUG_MESSAGE", &data_7027c0), 
                                data_72d6ac, data_719b6c, "DEBUG_MESSAGE", &data_7027c0)
                            sub_5f02dd(eax_1 ^ &var_c30)
                            return eax_21
        else
            eax_2 = eax_17 - 1
            
            if (eax_17 == 1)
                eax_2 = sub_4ef190(eax_2, arg2 + 0x20, *(arg2 + 0x20), U"SMDB", &data_1b8a720)
                
                if (data_702fc0 != 0)
                    eax_2 = data_1b8a728
                    
                    if (eax_2 != 0)
                        uint32_t var_c3c_5 = eax_2
                        var_c40_1 = &data_613c34
                        goto label_541c04
        sub_5f02dd(eax_1 ^ &var_c30)
        return eax_2
    case 5
        data_70486c = 2
        sub_5f02dd(eax_1 ^ &var_c30)
        return eax_2
    case 6
        data_704870 = 1
        sub_5f02dd(eax_1 ^ &var_c30)
        return eax_2
    case 7
        data_704870 = 0
        sub_5f02dd(eax_1 ^ &var_c30)
        return eax_2
    case 8
        data_704874 = 1
        sub_5f02dd(eax_1 ^ &var_c30)
        return eax_2
    case 9
        data_704874 = 0
        sub_5f02dd(eax_1 ^ &var_c30)
        return eax_2
    case 0xa
        data_704878 = 0
        sub_5f02dd(eax_1 ^ &var_c30)
        return eax_2
    case 0xb
        int32_t eax_22 = data_1af4e84
        
        if (eax_22 == 0)
            sub_4ef190(eax_22, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
            int32_t eax_25 = data_1b8a720 - 1
            int32_t eax_26 = neg.d(eax_25)
            data_704878 = sbb.d(eax_26, eax_26, eax_25 != 0) + 2
            sub_5f02dd(eax_1 ^ &var_c30)
            return sbb.d(eax_26, eax_26, eax_25 != 0) + 2
        
        eax_2 = eax_22 - 1
        
        if (eax_22 != 1)
            sub_5f02dd(eax_1 ^ &var_c30)
            return eax_2
        
        data_704878 = 1
        sub_5f02dd(eax_1 ^ &var_c30)
        return eax_2
    case 0xc
        int32_t eax_29 = 0
        
        if (data_702fc0 != 0)
            eax_29 = data_131324c
        
        data_715e98 = eax_29
        sub_5f02dd(eax_1 ^ &var_c30)
        return eax_29
    case 0xd
        int32_t eax_30 = data_702fc0
        data_715e98 = eax_30
        sub_5f02dd(eax_1 ^ &var_c30)
        return eax_30
    case 0xe
        int32_t eax_31 = data_1af4e84
        int32_t esi_1 = 0
        
        if (eax_31 == 0)
            eax_2 = sub_4ef190(eax_31, arg2 + 0x20, *(arg2 + 0x20), "S&", &data_1b8a720)
        else
            eax_2 = eax_31 - 1
            
            if (eax_31 == 1)
                eax_2 = sub_4ef190(eax_2, arg2 + 0x20, *(arg2 + 0x20), "S&S", &data_1b8a720)
                esi_1 = data_1b8a750
        
        if (data_702fc0 == 0)
            sub_5f02dd(eax_1 ^ &var_c30)
            return eax_2
        
        int32_t ecx_74 = data_1b8a728
        char* var_c28 = nullptr
        int32_t var_c24 = 0
        sub_4a4620(sub_543f80(&var_c24, esi_1, ecx_74, &var_c24, &var_c28), var_c28, data_1b8a744, 
            data_1b8a740)
        int32_t eax_35 = sub_4d6c40(&var_c24, &var_c28)
        sub_5f02dd(eax_1 ^ &var_c30)
        return eax_35
    case 0xf
        int32_t eax_36 = data_1af4e84
        int32_t ecx_79 = 0
        char** edi_1 = 0x3fff
        char** esi_2 = 0xffffc001
        
        if (eax_36 == 0)
            eax_2 = sub_4ef190(eax_36, arg2 + 0x20, *(arg2 + 0x20), "S%", &data_1b8a720)
            ecx_79 = 0
        else if (eax_36 == 1)
            eax_2 = sub_4ef190(eax_36 - 1, arg2 + 0x20, *(arg2 + 0x20), "S%$", &data_1b8a720)
            ecx_79 = data_1b8a748
        else
            eax_2 = eax_36 - 2
            
            if (eax_36 == 2)
                eax_2 = sub_4ef190(eax_2, arg2 + 0x20, *(arg2 + 0x20), "S%$$$", &data_1b8a720)
                ecx_79 = data_1b8a748
                esi_2 = data_1b8a75c
                edi_1 = data_1b8a770
        
        if (data_702fc0 == 0)
            sub_5f02dd(eax_1 ^ &var_c30)
            return eax_2
        
        sub_544160(&var_c2c, ecx_79, data_1b8a728, &var_c2c, esi_2, edi_1)
        char** eax_40 = var_c2c
        
        if (eax_40 s>= esi_2)
            esi_2 = eax_40
            
            if (eax_40 s> edi_1)
                esi_2 = edi_1
        
        int32_t edx_27 = data_1b8a744
        int32_t ecx_87 = data_1b8a740
        var_c2c = esi_2
        int32_t eax_41 = sub_4e8000(eax_40, edx_27, ecx_87, esi_2, &data_704898)
        sub_5f02dd(eax_1 ^ &var_c30)
        return eax_41
    case 0x10
        int32_t eax_42 = sub_541320(arg1, arg2)
        sub_5f02dd(eax_1 ^ &var_c30)
        return eax_42
    case 0x11
        int32_t eax_43 = data_1af4e84
        
        if (eax_43 == 0)
            sub_4ef190(eax_43, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        label_542022:
            eax_2 = data_1b8a720
            
            if (eax_2 s>= 0 && eax_2 s< 0x20)
                goto label_542038
            
            sub_5f02dd(eax_1 ^ &var_c30)
            return eax_2
        
        if (eax_43 != 1)
            goto label_542022
        
        data_1b8a720 = eax_43 - 1
    label_542038:
        uint32_t eax_46 = timeGetTime()
        *((data_1b8a720 << 2) + &data_1b8add8) = eax_46
        sub_5f02dd(eax_1 ^ &var_c30)
        return eax_46
    case 0x12
        int32_t eax_47 = data_1af4e84
        
        if (eax_47 != 0)
            if (eax_47 != 1)
                goto label_54208c
            
            data_1b8a720 = eax_47 - 1
        label_5420a6:
            int32_t eax_51 = timeGetTime() - *((data_1b8a720 << 2) + &data_1b8add8)
            data_715e98 = eax_51
            sub_5f02dd(eax_1 ^ &var_c30)
            return eax_51
        
        sub_4ef190(eax_47, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
    label_54208c:
        eax_9 = data_1b8a720
        
        if (eax_9 s>= 0 && eax_9 s< 0x20)
            goto label_5420a6
    case 0x13
        int32_t eax_52 = data_1af4e84
        
        if (eax_52 == 0)
            eax_2 = sub_4ef190(eax_52, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
            
            if (data_702fc0 != 0)
                int32_t ecx_108 = data_1b8a720
                eax_2 = ecx_108 - 1
                
                if (eax_2 u<= 0x270f)
                    data_1af0a0c = ecx_108
                    sub_5f02dd(eax_1 ^ &var_c30)
                    return eax_2
        else
            eax_2 = eax_52 - 1
            
            if (eax_52 == 1)
                data_1af0a0c = eax_2
                sub_5f02dd(eax_1 ^ &var_c30)
                return eax_2
        
        sub_5f02dd(eax_1 ^ &var_c30)
        return eax_2
    case 0x14
        int32_t eax_54 = data_1af4e84
        
        if (eax_54 == 0)
            int32_t* var_c3c_10 = &data_1b8a720
            eax_2 = sub_4ef190(eax_54, arg2 + 0x20, *(arg2 + 0x20), U"SMDB", &data_1b8a720)
        else
            eax_2 = eax_54 - 1
            
            if (eax_54 == 1)
                int32_t* var_c3c_9 = &data_1b8a720
                eax_2 = sub_4ef190(eax_2, arg2 + 0x20, *(arg2 + 0x20), "S$", &data_1b8a720)
        
        if (data_702fc0 != 0)
            void* var_c3c_11 = &data_13517e0
            char var_c20[0x208]
            int32_t eax_56
            int32_t ecx_114
            eax_56, ecx_114 = sub_4c3da0(sub_4c84d0(&var_c20, "%s\_DebugBankSave"), 0xffffffff, 
                &var_c20, 0xffffffff)
            char text[0x804]
            
            if (eax_56 != 2)
                int32_t var_c3c_12 = ecx_114
                
                if (sub_4c3da0(sub_4c39b0(&var_c20), 0xffffffff, &var_c20, 0xffffffff) == 2)
                    char (* var_c3c_13)[0x208] = &var_c20
                    sub_4c84d0(&text, "BANKSAVE")
                    sub_545fa0()
                    data_1af4e70 = 1
                    int32_t i_8
                    
                    do
                        i_8 = ShowCursor(1)
                    while (i_8 s<= 0)
                    data_1af17a0 = 1
                    HWND hWnd_5 = data_7027bc
                    data_1af17cc = 1
                    MessageBoxA(hWnd_5, &text, 0x617a88, MB_OK)
                    int32_t ecx_117 = data_7037a0
                    data_1af17cc = 0
                    data_1af17a0 = 0
                    sub_4d59f0(ecx_117)
                    sub_545f70()
            
            char* edx_32 = data_1b8a728
            
            if (data_1bfdd30 != 0x65)
                sub_4cfd70(&var_c20, edx_32)
            else
                char var_a18[0x208]
                sub_4cfd70(&var_a18, edx_32)
                sub_4c3960(&var_a18, 0)
                int32_t esi_3 = data_1c054dc
                int32_t var_c3c_14 = esi_3
                char (* var_c40_6)[0x208] = &var_a18
                sub_4c84d0(&var_c20, "%s%04d")
                data_1c054dc = esi_3 + 1
            
            sub_4c3960(&var_c20, &data_61cf5c)
            char (* ecx_122)[0x208] = &var_c20
            
            while (true)
                char eax_59 = *ecx_122
                
                if (eax_59 u>= 0x80 && (eax_59 u< 0xa0 || eax_59 u> 0xdf) && eax_59 u< 0xfe)
                    ecx_122 = &(*ecx_122)[2]
                    continue
                
                if (eax_59 == 0)
                    break
                
                if (eax_59 u>= 0x41 && eax_59 u<= 0x5a)
                    *ecx_122 = eax_59 + 0x20
                
                ecx_122 = &(*ecx_122)[1]
            
            int32_t eax_60 = data_1af4e84
            
            if (eax_60 == 0)
                char (* var_c3c_16)[0x208] = &var_c20
                void* var_c40_8 = &data_13517e0
                sub_4c84d0(&text, "%s\_DebugBankSave\%s")
                int32_t eax_65 = sub_4d6e30(&text, data_1332b60, data_1332b54, data_1332b64, &text)
                sub_5f02dd(eax_1 ^ &var_c30)
                return eax_65
            
            eax_2 = eax_60 - 1
            
            if (eax_60 == 1)
                eax_2 = data_1b8a734
                
                if (eax_2 u<= 0x20)
                    eax_2 <<= 5
                    
                    if (*(eax_2 + &data_976b50) != 0)
                        char (* var_c3c_15)[0x208] = &var_c20
                        void* var_c40_7 = &data_13517e0
                        sub_4c84d0(&text, "%s\_DebugBankSave\%s")
                        data_1b8a734
                        int32_t eax_63 = sub_4d6e30(&text, (&data_976b58)[data_1b8a734 * 8], 
                            (&data_976b54)[data_1b8a734 * 8], (&data_976b5c)[data_1b8a734 * 8], 
                            &text)
                        sub_5f02dd(eax_1 ^ &var_c30)
                        return eax_63
        
        sub_5f02dd(eax_1 ^ &var_c30)
        return eax_2
    case 0x15
        goto label_542401

data_715e98 = 0
sub_5f02dd(eax_1 ^ &var_c30)
return eax_9
