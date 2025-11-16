// 函数: sub_568a30
// 地址: 0x568a30
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
LRESULT result = data_1af0ad0
HWND hDlg = result

if (result != 0)
    if (arg1 != 0)
        sub_4d1ba0(result, 0x2c00, 0x20cca20, 0xa5)
        hDlg = data_1af0ad0
    
    WPARAM wParam = 0
    void* var_470_1 = &data_f89afc
    void* result_8 = &data_8fcadc
    int32_t* result_11 = &data_1090ae4
    void* i = nullptr
    void* result_4 = &data_8fcadc
    void* i_2 = nullptr
    
    do
        void* result_7
        result_7.b = 1
        result = sub_579880(i, result_7.b)
        
        if (data_13191a0 != 0 || result != 0xffffffff)
            void* esi_1 = i * 0xb0
            int32_t lParam
            void var_408
            
            if (*(esi_1 + 0x20cca20) != wParam)
                void* i_1 = i
                *(esi_1 + 0x20cca20) = wParam
                sub_4c84d0(&var_408, "%03d")
                HWND hWnd = GetDlgItem(hDlg, 0x4f32)
                lParam = 5
                void* var_454_1 = &var_408
                WPARAM wParam_1 = wParam
                int32_t var_460_1 = 0
                WPARAM wParam_30 = wParam
                SendMessageA(hWnd, 0x102e, wParam, &lParam)
            
            HWND hDlg_1
            
            if (*(esi_1 + 0x20cca24) == result)
                hDlg_1 = hDlg
            else
                *(esi_1 + 0x20cca24) = result
                
                if (result == 0xffffffff)
                    hDlg_1 = hDlg
                    HWND hWnd_2 = GetDlgItem(hDlg_1, 0x4f32)
                    lParam = 5
                    WPARAM wParam_3 = wParam
                    int32_t var_460_3 = 1
                    int32_t var_454_3 = 0x6212a4
                    WPARAM wParam_32 = wParam
                    SendMessageA(hWnd_2, 0x102e, wParam, &lParam)
                else if (result == 0)
                    hDlg_1 = hDlg
                    HWND hWnd_1 = GetDlgItem(hDlg_1, 0x4f32)
                    lParam = 5
                    WPARAM wParam_2 = wParam
                    int32_t var_460_2 = 1
                    int32_t var_454_2 = 0x623654
                    WPARAM wParam_31 = wParam
                    SendMessageA(hWnd_1, 0x102e, wParam, &lParam)
                else
                    hDlg_1 = hDlg
                    
                    if (result == 1)
                        sub_4c1110(wParam, wParam, hDlg_1, 0x4f32)
            
            result = result_11[0x22]
            
            if (*(esi_1 + 0x20cca28) != result)
                *(esi_1 + 0x20cca28) = result
                HWND hWnd_3
                
                if (result != 0xffffffff)
                    hWnd_3 = GetDlgItem(hDlg_1, 0x4f32)
                    int32_t var_454_5 = 0x62366c
                else
                    hWnd_3 = GetDlgItem(hDlg_1, 0x4f32)
                    int32_t var_454_4 = 0x623664
                
                lParam = 5
                WPARAM wParam_4 = wParam
                int32_t var_460_4 = 2
                WPARAM wParam_33 = wParam
                result, result_7 = SendMessageA(hWnd_3, 0x102e, wParam, &lParam)
            
            int32_t edi_2 = 3
            int32_t var_428
            int32_t var_414
            
            if (data_131919c == 0)
                int32_t ecx_1 = *var_470_1
                
                if (*(esi_1 + 0x20ccabc) == ecx_1)
                    result = *(esi_1 + 0x20ccac0)
                
                if (*(esi_1 + 0x20ccabc) != ecx_1 || result != *(var_470_1 + 4))
                    int32_t eax_4 = *(var_470_1 + 4)
                    int32_t var_484_5 = eax_4
                    int32_t var_488_10 = ecx_1
                    *(esi_1 + 0x20ccac0) = eax_4
                    *(esi_1 + 0x20ccabc) = ecx_1
                    sub_4c84d0(&var_408, "%d x %d")
                    HWND hWnd_4 = GetDlgItem(hDlg, 0x4f32)
                    lParam = 5
                    void* var_454_6 = &var_408
                    WPARAM wParam_5 = wParam
                    int32_t var_460_5 = 3
                    WPARAM wParam_34 = wParam
                    result, result_7 = SendMessageA(hWnd_4, 0x102e, wParam, &lParam)
                
                edi_2 = 4
                
                if (data_131919c == 0)
                    result_7 = result_4
                    result = *result_7
                    
                    if (*(esi_1 + 0x20ccac4) != result)
                        LRESULT result_1 = result
                        *(esi_1 + 0x20ccac4) = result
                        sub_4c84d0(&var_408, "%d")
                        HWND hWnd_5 = GetDlgItem(hDlg, 0x4f32)
                        lParam = 5
                        void* var_454_7 = &var_408
                        WPARAM wParam_6 = wParam
                        int32_t var_460_6 = 4
                        WPARAM wParam_35 = wParam
                        result = SendMessageA(hWnd_5, 0x102e, wParam, &lParam)
                        result_7 = result_4
                    
                    edi_2 = 5
                    
                    if (data_131919c == 0)
                        int32_t ecx_2 = *(result_7 + 0xc)
                        
                        if (*(esi_1 + 0x20ccac8) == ecx_2)
                            result = *(esi_1 + 0x20ccacc)
                        
                        if (*(esi_1 + 0x20ccac8) != ecx_2 || result != *(result_7 + 0x10))
                            int32_t eax_5 = *(result_7 + 0x10)
                            int32_t var_484_8 = eax_5
                            int32_t var_488_15 = ecx_2
                            *(esi_1 + 0x20ccacc) = eax_5
                            *(esi_1 + 0x20ccac8) = ecx_2
                            sub_4c84d0(&var_408, "%03d, %03d")
                            HWND hWnd_6 = GetDlgItem(hDlg, 0x4f32)
                            lParam = 5
                            void* var_454_8 = &var_408
                            WPARAM wParam_7 = wParam
                            int32_t var_460_7 = 5
                            WPARAM wParam_36 = wParam
                            result = SendMessageA(hWnd_6, 0x102e, wParam, &lParam)
                            result_7 = result_4
                        
                        edi_2 = 6
                        
                        if (data_131919c == 0)
                            void* ecx_6
                            
                            if (*(result_7 + 0x284) != 0)
                                int32_t ecx_7
                                ecx_7.b = *(result_7 + 0x288) != 0
                                ecx_6 = (ecx_7 << 1) + 1
                            else
                                int32_t ecx_3 = *(result_7 + 0x288)
                                int32_t ecx_4 = neg.d(ecx_3)
                                ecx_6 = sbb.d(ecx_4, ecx_4, ecx_3 != 0) & 2
                            
                            if (*(esi_1 + 0x20cca44) == ecx_6
                                    && *(esi_1 + 0x20cca48) == *(result_7 + 0x28c))
                                result = *(esi_1 + 0x20cca4c)
                            
                            if (*(esi_1 + 0x20cca44) != ecx_6
                                    || *(esi_1 + 0x20cca48) != *(result_7 + 0x28c)
                                    || result != *(result_7 + 0x290))
                                int32_t eax_7 = *(result_7 + 0x290)
                                int32_t var_484_10 = eax_7
                                *(esi_1 + 0x20cca4c) = eax_7
                                *(esi_1 + 0x20cca44) = ecx_6
                                int32_t ecx_8 = *(result_7 + 0x28c)
                                int32_t var_488_18 = ecx_8
                                int32_t var_48c_4 = (&data_612b60)[ecx_6]
                                *(esi_1 + 0x20cca48) = ecx_8
                                void* var_490_11 = ecx_6
                                sub_4c84d0(&var_408, "%d (%s) ")
                                HWND hWnd_7 = GetDlgItem(hDlg, 0x4f32)
                                lParam = 5
                                void* var_454_9 = &var_408
                                WPARAM wParam_8 = wParam
                                int32_t var_460_8 = 6
                                WPARAM wParam_37 = wParam
                                result = SendMessageA(hWnd_7, 0x102e, wParam, &lParam)
                                result_7 = result_4
                            
                            edi_2 = 7
                            
                            if (data_131919c == 0)
                                int32_t ecx_9 = *(result_7 + 0x2b8)
                                int32_t var_424_1
                                int32_t var_420_1
                                int32_t var_41c_1
                                int32_t eax_13
                                
                                if (ecx_9 == 0)
                                    var_428 = data_1313294
                                    var_424_1 = data_1313298
                                    var_420_1 = data_131329c
                                    var_41c_1 = data_13132a0
                                    eax_13 = data_13132a4
                                else
                                    var_428 = *(result_7 + 0x2bc)
                                    var_424_1 = *(result_7 + 0x2c0)
                                    var_420_1 = *(result_7 + 0x2c4)
                                    var_41c_1 = *(result_7 + 0x2c8)
                                    eax_13 = *(result_7 + 0x2cc)
                                
                                if (*(esi_1 + 0x20cca50) != ecx_9)
                                    goto label_569030
                                
                                result, result_7 =
                                    sub_4d1be0(eax_13, &var_428, esi_1 + 0x20cca80, 0x14)
                                
                                if (result != 0)
                                    result_7 = result_4
                                label_569030:
                                    int32_t eax_18 = *(result_7 + 0x2b8)
                                    *(esi_1 + 0x20cca50) = eax_18
                                    sub_4d1c30(eax_18, &var_428, esi_1 + 0x20cca80, 0x14)
                                    int32_t var_484_12 = eax_13
                                    int32_t var_488_21 = var_41c_1
                                    int32_t var_48c_5 = var_420_1
                                    int32_t var_490_13 = var_424_1
                                    int32_t var_494_1 = var_428
                                    void* const var_498_2
                                    
                                    if (*(result_4 + 0x2b8) == 0)
                                        var_498_2 = &data_6236c0
                                    else
                                        var_498_2 = &data_62369c
                                    
                                    sub_4c84d0(&var_408, var_498_2)
                                    HWND hWnd_8 = GetDlgItem(hDlg, 0x4f32)
                                    lParam = 5
                                    void* var_454_10 = &var_408
                                    WPARAM wParam_9 = wParam
                                    int32_t var_460_9 = 7
                                    WPARAM wParam_38 = wParam
                                    result, result_7 = SendMessageA(hWnd_8, 0x102e, wParam, &lParam)
                                
                                edi_2 = 8
                                
                                if (data_131919c == 0)
                                    int32_t eax_20 = data_1313290
                                    int32_t ecx_12 = *(result_4 + 0x2b4)
                                    
                                    if (ecx_12 != 0)
                                        eax_20 = *(result_4 + 0x2b0)
                                    
                                    var_414 = eax_20
                                    
                                    if (*(esi_1 + 0x20cca94) == ecx_12)
                                        result, result_7 =
                                            sub_4d1be0(eax_20, &var_414, esi_1 + 0x20ccaa4, 4)
                                    
                                    if (*(esi_1 + 0x20cca94) != ecx_12 || result != 0)
                                        int32_t eax_21 = *(result_4 + 0x2b4)
                                        *(esi_1 + 0x20cca94) = eax_21
                                        sub_4d1c30(eax_21, &var_414, esi_1 + 0x20ccaa4, 4)
                                        int32_t var_484_14 = var_414
                                        void* const var_488_24
                                        
                                        if (*(result_4 + 0x2b4) == 0)
                                            var_488_24 = &data_6236f8
                                        else
                                            var_488_24 = &data_6236e4
                                        
                                        sub_4c84d0(&var_408, var_488_24)
                                        HWND hWnd_9 = GetDlgItem(hDlg, 0x4f32)
                                        lParam = 5
                                        void* var_454_11 = &var_408
                                        WPARAM wParam_10 = wParam
                                        int32_t var_460_10 = 8
                                        WPARAM wParam_39 = wParam
                                        result, result_7 =
                                            SendMessageA(hWnd_9, 0x102e, wParam, &lParam)
                                    
                                    edi_2 = 9
            
            if (data_131919c == 1)
                int32_t ecx_15 = *var_470_1
                
                if (*(esi_1 + 0x20ccabc) == ecx_15)
                    result = *(esi_1 + 0x20ccac0)
                
                if (*(esi_1 + 0x20ccabc) != ecx_15 || result != *(var_470_1 + 4))
                    int32_t eax_22 = *(var_470_1 + 4)
                    int32_t var_484_16 = eax_22
                    int32_t var_488_27 = ecx_15
                    *(esi_1 + 0x20ccac0) = eax_22
                    *(esi_1 + 0x20ccabc) = ecx_15
                    sub_4c84d0(&var_408, "%d x %d")
                    HWND hWnd_10 = GetDlgItem(hDlg, 0x4f32)
                    lParam = 5
                    void* var_454_12 = &var_408
                    WPARAM wParam_11 = wParam
                    int32_t var_460_11 = edi_2
                    WPARAM wParam_40 = wParam
                    result, result_7 = SendMessageA(hWnd_10, 0x102e, wParam, &lParam)
                
                edi_2 += 1
                
                if (data_131919c == 1)
                    void* result_5 = result_4
                    result = *result_5
                    
                    if (*(esi_1 + 0x20ccac4) != result)
                        LRESULT result_2 = result
                        *(esi_1 + 0x20ccac4) = result
                        sub_4c84d0(&var_408, "%d")
                        HWND hWnd_11 = GetDlgItem(hDlg, 0x4f32)
                        lParam = 5
                        void* var_454_13 = &var_408
                        WPARAM wParam_12 = wParam
                        int32_t var_460_12 = edi_2
                        WPARAM wParam_41 = wParam
                        result, result_7 = SendMessageA(hWnd_11, 0x102e, wParam, &lParam)
                        result_5 = result_4
                    
                    edi_2 += 1
                    
                    if (data_131919c == 1)
                        result_7 = *(result_5 + 0xc)
                        
                        if (*(esi_1 + 0x20ccac8) == result_7)
                            result = *(esi_1 + 0x20ccacc)
                        
                        if (*(esi_1 + 0x20ccac8) != result_7 || result != *(result_5 + 0x10))
                            int32_t eax_23 = *(result_5 + 0x10)
                            int32_t var_484_19 = eax_23
                            void* result_10 = result_7
                            *(esi_1 + 0x20ccacc) = eax_23
                            *(esi_1 + 0x20ccac8) = result_7
                            sub_4c84d0(&var_408, "%03d, %03d")
                            HWND hWnd_12 = GetDlgItem(hDlg, 0x4f32)
                            lParam = 5
                            void* var_454_14 = &var_408
                            WPARAM wParam_13 = wParam
                            int32_t var_460_13 = edi_2
                            WPARAM wParam_42 = wParam
                            result, result_7 = SendMessageA(hWnd_12, 0x102e, wParam, &lParam)
                        
                        edi_2 += 1
                        
                        if (data_131919c == 1)
                            result_7 = result_11
                            int32_t ecx_16 = *(result_7 + 0x10)
                            
                            if (*(esi_1 + 0x20ccaa8) == ecx_16)
                                result = *(esi_1 + 0x20ccaac)
                            
                            if (*(esi_1 + 0x20ccaa8) != ecx_16 || result != *(result_7 + 0x14))
                                int32_t eax_24 = *(result_7 + 0x14)
                                int32_t var_484_21 = eax_24
                                int32_t var_488_34 = ecx_16
                                *(esi_1 + 0x20ccaac) = eax_24
                                *(esi_1 + 0x20ccaa8) = ecx_16
                                sub_4c84d0(&var_408, "%d x %d")
                                HWND hWnd_13 = GetDlgItem(hDlg, 0x4f32)
                                lParam = 5
                                void* var_454_15 = &var_408
                                WPARAM wParam_14 = wParam
                                int32_t var_460_14 = edi_2
                                WPARAM wParam_43 = wParam
                                result = SendMessageA(hWnd_13, 0x102e, wParam, &lParam)
                                result_7 = result_11
                            
                            edi_2 += 1
                            
                            if (data_131919c == 1)
                                result = *(result_7 + 4)
                                
                                if (*(esi_1 + 0x20ccab0) != result)
                                    LRESULT result_3 = result
                                    *(esi_1 + 0x20ccab0) = result
                                    sub_4c84d0(&var_408, "%d")
                                    HWND hWnd_14 = GetDlgItem(hDlg, 0x4f32)
                                    lParam = 5
                                    void* var_454_16 = &var_408
                                    WPARAM wParam_15 = wParam
                                    int32_t var_460_15 = edi_2
                                    WPARAM wParam_44 = wParam
                                    result = SendMessageA(hWnd_14, 0x102e, wParam, &lParam)
                                    result_7 = result_11
                                
                                edi_2 += 1
                                
                                if (data_131919c == 1)
                                    int32_t ecx_17 = *(result_7 + 0x30)
                                    
                                    if (*(esi_1 + 0x20ccab4) == ecx_17)
                                        result = *(esi_1 + 0x20ccab8)
                                    
                                    if (*(esi_1 + 0x20ccab4) != ecx_17
                                            || result != *(result_7 + 0x34))
                                        int32_t eax_25 = *(result_7 + 0x34)
                                        int32_t var_484_24 = eax_25
                                        int32_t var_488_39 = ecx_17
                                        *(esi_1 + 0x20ccab8) = eax_25
                                        *(esi_1 + 0x20ccab4) = ecx_17
                                        sub_4c84d0(&var_408, "%03d, %03d")
                                        HWND hWnd_15 = GetDlgItem(hDlg, 0x4f32)
                                        lParam = 5
                                        void* var_454_17 = &var_408
                                        WPARAM wParam_16 = wParam
                                        int32_t var_460_16 = edi_2
                                        WPARAM wParam_45 = wParam
                                        result, result_7 =
                                            SendMessageA(hWnd_15, 0x102e, wParam, &lParam)
                                    
                                    edi_2 += 1
            
            if (data_131919c == 2)
                result_7 = result_4
                void* ecx_21
                
                if (*(result_7 + 0x284) != 0)
                    int32_t ecx_22
                    ecx_22.b = *(result_7 + 0x288) != 0
                    ecx_21 = (ecx_22 << 1) + 1
                else
                    int32_t ecx_18 = *(result_7 + 0x288)
                    int32_t ecx_19 = neg.d(ecx_18)
                    ecx_21 = sbb.d(ecx_19, ecx_19, ecx_18 != 0) & 2
                
                if (*(esi_1 + 0x20cca44) == ecx_21 && *(esi_1 + 0x20cca48) == *(result_7 + 0x28c))
                    result = *(esi_1 + 0x20cca4c)
                
                if (*(esi_1 + 0x20cca44) != ecx_21 || *(esi_1 + 0x20cca48) != *(result_7 + 0x28c)
                        || result != *(result_7 + 0x290))
                    int32_t eax_27 = *(result_7 + 0x290)
                    int32_t var_484_26 = eax_27
                    *(esi_1 + 0x20cca4c) = eax_27
                    *(esi_1 + 0x20cca44) = ecx_21
                    int32_t ecx_23 = *(result_7 + 0x28c)
                    int32_t var_488_42 = ecx_23
                    int32_t var_48c_9 = (&data_612b60)[ecx_21]
                    *(esi_1 + 0x20cca48) = ecx_23
                    void* var_490_26 = ecx_21
                    sub_4c84d0(&var_408, "%d (%s) ")
                    HWND hWnd_16 = GetDlgItem(hDlg, 0x4f32)
                    lParam = 5
                    void* var_454_18 = &var_408
                    WPARAM wParam_17 = wParam
                    int32_t var_460_17 = edi_2
                    WPARAM wParam_46 = wParam
                    result = SendMessageA(hWnd_16, 0x102e, wParam, &lParam)
                    result_7 = result_4
                
                edi_2 += 1
                
                if (data_131919c == 2)
                    void* ecx_27
                    
                    if (*(result_7 + 0x27c) != 0)
                        int32_t ecx_28
                        ecx_28.b = *(result_7 + 0x280) != 0
                        ecx_27 = (ecx_28 << 1) + 1
                    else
                        int32_t ecx_24 = *(result_7 + 0x280)
                        int32_t ecx_25 = neg.d(ecx_24)
                        ecx_27 = sbb.d(ecx_25, ecx_25, ecx_24 != 0) & 2
                    
                    if (*(esi_1 + 0x20cca38) == ecx_27
                            && *(esi_1 + 0x20cca3c) == *(result_7 + 0x274))
                        result = *(esi_1 + 0x20cca40)
                    
                    if (*(esi_1 + 0x20cca38) != ecx_27
                            || *(esi_1 + 0x20cca3c) != *(result_7 + 0x274)
                            || result != *(result_7 + 0x278))
                        int32_t eax_30 = *(result_7 + 0x278)
                        int32_t var_484_28 = eax_30
                        *(esi_1 + 0x20cca40) = eax_30
                        *(esi_1 + 0x20cca38) = ecx_27
                        int32_t ecx_29 = *(result_7 + 0x274)
                        int32_t var_488_45 = ecx_29
                        int32_t var_48c_10 = (&data_612b60)[ecx_27]
                        *(esi_1 + 0x20cca3c) = ecx_29
                        void* var_490_28 = ecx_27
                        sub_4c84d0(&var_408, "%d (%s) ")
                        HWND hWnd_17 = GetDlgItem(hDlg, 0x4f32)
                        lParam = 5
                        void* var_454_19 = &var_408
                        WPARAM wParam_18 = wParam
                        int32_t var_460_18 = edi_2
                        WPARAM wParam_47 = wParam
                        result, result_7 = SendMessageA(hWnd_17, 0x102e, wParam, &lParam)
                    
                    edi_2 += 1
                    
                    if (data_131919c == 2)
                        if (result_11[0x31] != 0)
                            int32_t edx_8
                            edx_8.b = result_11[0x32] != 0
                            result_7 = (edx_8 << 1) + 1
                        else
                            int32_t edx_5 = result_11[0x32]
                            int32_t edx_6 = neg.d(edx_5)
                            result_7 = sbb.d(edx_6, edx_6, edx_5 != 0) & 2
                        
                        if (*(esi_1 + 0x20cca2c) == result_7
                                && *(esi_1 + 0x20cca30) == result_11[0x2f])
                            result = *(esi_1 + 0x20cca34)
                        
                        if (*(esi_1 + 0x20cca2c) != result_7
                                || *(esi_1 + 0x20cca30) != result_11[0x2f]
                                || result != result_11[0x30])
                            int32_t ecx_31 = result_11[0x2f]
                            *(esi_1 + 0x20cca2c) = result_7
                            *(esi_1 + 0x20cca30) = ecx_31
                            int32_t eax_34 = result_11[0x30]
                            int32_t var_484_30 = eax_34
                            int32_t var_488_48 = ecx_31
                            int32_t var_48c_11 = (&data_612b60)[result_7]
                            *(esi_1 + 0x20cca34) = eax_34
                            void* result_9 = result_7
                            sub_4c84d0(&var_408, "%d (%s) ")
                            HWND hWnd_18 = GetDlgItem(hDlg, 0x4f32)
                            lParam = 5
                            void* var_454_20 = &var_408
                            WPARAM wParam_19 = wParam
                            int32_t var_460_19 = edi_2
                            WPARAM wParam_48 = wParam
                            result, result_7 = SendMessageA(hWnd_18, 0x102e, wParam, &lParam)
                        
                        edi_2 += 1
            
            if (data_131919c == 3)
                void* result_6 = result_4
                result = *(result_6 + 0x2b8)
                
                if (*(esi_1 + 0x20cca50) != result)
                    *(esi_1 + 0x20cca50) = result
                    char* edx_9 = &data_62370c
                    
                    if (result == 0)
                        edx_9 = &data_623718
                    
                    sub_4cfd70(&var_408, edx_9)
                    HWND hWnd_19 = GetDlgItem(hDlg, 0x4f32)
                    lParam = 5
                    void* var_454_21 = &var_408
                    WPARAM wParam_20 = wParam
                    int32_t var_460_20 = edi_2
                    WPARAM wParam_49 = wParam
                    result, result_7 = SendMessageA(hWnd_19, 0x102e, wParam, &lParam)
                    result_6 = result_4
                
                edi_2 += 1
                
                if (data_131919c == 3)
                    int32_t var_424_2
                    int32_t var_420_2
                    int32_t var_41c_2
                    int32_t eax_39
                    
                    if (*(result_6 + 0x2b8) == 0)
                        var_428 = data_1313294
                        var_424_2 = data_1313298
                        var_420_2 = data_131329c
                        var_41c_2 = data_13132a0
                        eax_39 = data_13132a4
                    else
                        var_428 = *(result_6 + 0x2bc)
                        var_424_2 = *(result_6 + 0x2c0)
                        var_420_2 = *(result_6 + 0x2c4)
                        var_41c_2 = *(result_6 + 0x2c8)
                        eax_39 = *(result_6 + 0x2cc)
                    
                    result, result_7 = sub_4d1be0(eax_39, &var_428, esi_1 + 0x20cca80, 0x14)
                    
                    if (result != 0)
                        sub_4d1c30(result, &var_428, esi_1 + 0x20cca80, 0x14)
                        int32_t var_484_33 = eax_39
                        *(result_4 + 0x2b8)
                        int32_t var_488_53 = var_41c_2
                        int32_t var_48c_12 = var_420_2
                        int32_t var_490_32 = var_424_2
                        int32_t var_494_2 = var_428
                        sub_4c84d0(&var_408, "%d, %d, %d,  %d,  %d")
                        HWND hWnd_20 = GetDlgItem(hDlg, 0x4f32)
                        lParam = 5
                        void* var_454_22 = &var_408
                        WPARAM wParam_21 = wParam
                        int32_t var_460_21 = edi_2
                        WPARAM wParam_50 = wParam
                        result, result_7 = SendMessageA(hWnd_20, 0x102e, wParam, &lParam)
                    
                    edi_2 += 1
                    
                    if (data_131919c == 3)
                        var_428 = *(result_4 + 0x2bc)
                        int32_t eax_46 = *(result_4 + 0x2c0)
                        int32_t eax_47 = *(result_4 + 0x2c4)
                        int32_t eax_48 = *(result_4 + 0x2c8)
                        int32_t eax_49 = *(result_4 + 0x2cc)
                        result, result_7 = sub_4d1be0(eax_49, &var_428, esi_1 + 0x20cca6c, 0x14)
                        
                        if (result != 0)
                            sub_4d1c30(result, &var_428, esi_1 + 0x20cca6c, 0x14)
                            int32_t var_484_35 = eax_49
                            *(result_4 + 0x2b8)
                            int32_t var_488_56 = eax_48
                            int32_t var_48c_13 = eax_47
                            int32_t var_490_34 = eax_46
                            int32_t var_494_3 = var_428
                            sub_4c84d0(&var_408, "%d, %d, %d,  %d,  %d")
                            HWND hWnd_21 = GetDlgItem(hDlg, 0x4f32)
                            lParam = 5
                            void* var_454_23 = &var_408
                            WPARAM wParam_22 = wParam
                            int32_t var_460_22 = edi_2
                            WPARAM wParam_51 = wParam
                            result, result_7 = SendMessageA(hWnd_21, 0x102e, wParam, &lParam)
                        
                        edi_2 += 1
                        
                        if (data_131919c == 3)
                            int32_t* result_12 = result_11
                            result = result_12[0x29]
                            
                            if (*(esi_1 + 0x20cca54) != result)
                                *(esi_1 + 0x20cca54) = result
                                char* edx_14 = &data_62370c
                                
                                if (result == 0)
                                    edx_14 = &data_623718
                                
                                sub_4cfd70(&var_408, edx_14)
                                HWND hWnd_22 = GetDlgItem(hDlg, 0x4f32)
                                lParam = 5
                                void* var_454_24 = &var_408
                                WPARAM wParam_23 = wParam
                                int32_t var_460_23 = edi_2
                                WPARAM wParam_52 = wParam
                                result, result_7 = SendMessageA(hWnd_22, 0x102e, wParam, &lParam)
                                result_12 = result_11
                            
                            edi_2 += 1
                            
                            if (data_131919c == 3)
                                var_428 = result_12[0x2a]
                                int32_t eax_52 = result_12[0x2b]
                                int32_t eax_53 = result_12[0x2c]
                                int32_t eax_54 = result_12[0x2d]
                                int32_t eax_55 = result_12[0x2e]
                                result, result_7 =
                                    sub_4d1be0(eax_55, &var_428, esi_1 + 0x20cca58, 0x14)
                                
                                if (result != 0)
                                    sub_4d1c30(result, &var_428, esi_1 + 0x20cca58, 0x14)
                                    int32_t var_484_38 = eax_55
                                    *(result_4 + 0x2b8)
                                    int32_t var_488_61 = eax_54
                                    int32_t var_48c_14 = eax_53
                                    int32_t var_490_37 = eax_52
                                    int32_t var_494_4 = var_428
                                    sub_4c84d0(&var_408, "%d, %d, %d,  %d,  %d")
                                    HWND hWnd_23 = GetDlgItem(hDlg, 0x4f32)
                                    lParam = 5
                                    void* var_454_25 = &var_408
                                    WPARAM wParam_24 = wParam
                                    int32_t var_460_24 = edi_2
                                    WPARAM wParam_53 = wParam
                                    result, result_7 =
                                        SendMessageA(hWnd_23, 0x102e, wParam, &lParam)
                                
                                edi_2 += 1
            
            if (data_131919c == 4)
                result = result_4
                int32_t ecx_41 = *(result + 0x2b4)
                
                if (*(esi_1 + 0x20cca94) != ecx_41)
                    *(esi_1 + 0x20cca94) = ecx_41
                    char* edx_17 = &data_62370c
                    
                    if (ecx_41 == 0)
                        edx_17 = &data_623718
                    
                    sub_4cfd70(&var_408, edx_17)
                    HWND hWnd_24 = GetDlgItem(hDlg, 0x4f32)
                    lParam = 5
                    void* var_454_26 = &var_408
                    WPARAM wParam_25 = wParam
                    int32_t var_460_25 = edi_2
                    WPARAM wParam_54 = wParam
                    SendMessageA(hWnd_24, 0x102e, wParam, &lParam)
                    result = result_4
                
                if (data_131919c == 4)
                    int32_t eax_57
                    
                    if (*(result + 0x2b4) != 0)
                        eax_57 = *(result + 0x2b0)
                    else
                        eax_57 = data_1313290
                    
                    var_414 = eax_57
                    result, result_7 = sub_4d1be0(eax_57, &var_414, esi_1 + 0x20ccaa4, 4)
                    
                    if (result != 0)
                        sub_4d1c30(result, &var_414, esi_1 + 0x20ccaa4, 4)
                        int32_t var_488_66 = var_414
                        sub_4c84d0(&var_408, "%03d")
                        HWND hWnd_25 = GetDlgItem(hDlg, 0x4f32)
                        lParam = 5
                        void* var_454_27 = &var_408
                        WPARAM wParam_26 = wParam
                        int32_t var_460_26 = edi_2 + 1
                        WPARAM wParam_55 = wParam
                        result, result_7 = SendMessageA(hWnd_25, 0x102e, wParam, &lParam)
                    
                    if (data_131919c == 4)
                        int32_t eax_59 = *(result_4 + 0x2b0)
                        var_414 = eax_59
                        result, result_7 = sub_4d1be0(eax_59, &var_414, esi_1 + 0x20ccaa0, 4)
                        
                        if (result != 0)
                            sub_4d1c30(result, &var_414, esi_1 + 0x20ccaa0, 4)
                            int32_t var_488_69 = var_414
                            sub_4c84d0(&var_408, "%03d")
                            HWND hWnd_26 = GetDlgItem(hDlg, 0x4f32)
                            lParam = 5
                            void* var_454_28 = &var_408
                            WPARAM wParam_27 = wParam
                            int32_t var_460_27 = edi_2 + 2
                            WPARAM wParam_56 = wParam
                            result, result_7 = SendMessageA(hWnd_26, 0x102e, wParam, &lParam)
                        
                        if (data_131919c == 4)
                            int32_t* result_13 = result_11
                            result = result_13[0x24]
                            
                            if (*(esi_1 + 0x20cca98) != result)
                                *(esi_1 + 0x20cca98) = result
                                char* edx_22 = &data_62370c
                                
                                if (result == 0)
                                    edx_22 = &data_623718
                                
                                sub_4cfd70(&var_408, edx_22)
                                HWND hWnd_27 = GetDlgItem(hDlg, 0x4f32)
                                lParam = 5
                                void* var_454_29 = &var_408
                                WPARAM wParam_28 = wParam
                                int32_t var_460_28 = edi_2 + 3
                                WPARAM wParam_57 = wParam
                                result, result_7 = SendMessageA(hWnd_27, 0x102e, wParam, &lParam)
                                result_13 = result_11
                            
                            if (data_131919c == 4)
                                int32_t eax_60 = result_13[0x23]
                                var_414 = eax_60
                                result, result_7 =
                                    sub_4d1be0(eax_60, &var_414, esi_1 + 0x20cca9c, 4)
                                
                                if (result != 0)
                                    sub_4d1c30(result, &var_414, esi_1 + 0x20cca9c, 4)
                                    int32_t var_488_74 = var_414
                                    sub_4c84d0(&var_408, "%03d")
                                    HWND hWnd_28 = GetDlgItem(hDlg, 0x4f32)
                                    lParam = 5
                                    void* var_454_30 = &var_408
                                    WPARAM wParam_29 = wParam
                                    int32_t var_460_29 = edi_2 + 4
                                    WPARAM wParam_58 = wParam
                                    result, result_7 =
                                        SendMessageA(hWnd_28, 0x102e, wParam, &lParam)
            
            result_8 = result_4
            wParam += 1
            i = i_2
        
        var_470_1 += 0x3920
        i += 1
        result_11 = &result_11[0x75]
        result_8 += 0x2d0
        result_4 = result_8
        i_2 = i
    while (i s< 0x40)

sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
