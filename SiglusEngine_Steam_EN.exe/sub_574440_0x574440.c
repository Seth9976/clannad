// 函数: sub_574440
// 地址: 0x574440
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
LRESULT result = __security_cookie ^ &__saved_ebp
LRESULT result_1 = result

if (data_1af0a10 != 0)
    if (arg1 != 0)
        sub_4d1ba0(result, 0x84, &data_20f20d8, 0xa5)
    
    int32_t eax_2 = data_20f20e0
    
    if (eax_2 == 0)
        data_20f20dc = timeGetTime()
        eax_2 = data_20f20e0
    
    data_20f20e0 = eax_2 + 1
    void var_408
    
    if (timeGetTime() - data_20f20dc u>= 0x3e8)
        int32_t __saved_ebx_2 = data_20f20e0
        
        if (data_20f20d8 != __saved_ebx_2)
            int32_t __saved_ebx_1 = __saved_ebx_2
            data_20f20d8 = __saved_ebx_2
            sub_4c84d0(&var_408, "%d")
            sub_5743f0(0)
        
        data_20f20e0 = 0
    
    WaitForSingleObject(data_7027a8, 0xffffffff)
    int32_t eax_6 = data_1c04c60
    int32_t esi_1 = data_1c04c5c
    int32_t eax_7 = data_1c04c58
    int32_t eax_8 = data_1c04c54
    ReleaseSemaphore(data_7027a8, 1, nullptr)
    int32_t eax_10
    int32_t edx_1
    edx_1:eax_10 = sx.q(esi_1)
    int32_t lParam
    HWND hDlg
    
    if (data_20f20e4 != ((eax_10 + (edx_1 & 0x3ff)) s>> 0xa) + 1 || data_20f20ec != eax_8)
        int32_t var_460_2 = eax_8
        int32_t var_464_2 = ((eax_10 + (edx_1 & 0x3ff)) s>> 0xa) + 1
        data_20f20e4 = ((eax_10 + (edx_1 & 0x3ff)) s>> 0xa) + 1
        int32_t eax_14
        int32_t edx_3
        edx_3:eax_14 = sx.q(((eax_10 + (edx_1 & 0x3ff)) s>> 0xa) + 1)
        data_20f20ec = eax_8
        int32_t var_468_2 = ((eax_14 + (edx_3 & 0x3ff)) s>> 0xa) + 1
        sub_4c84d0(&var_408, "%dMB ( %dKB )  ")
        hDlg = data_1af0a10
        
        if (hDlg != 0)
            HWND hWnd = GetDlgItem(hDlg, 0x4f32)
            lParam = 5
            void* var_430_1 = &var_408
            int32_t var_440_1 = 1
            int32_t var_43c_1 = 1
            int32_t var_424_1 = 1
            SendMessageA(hWnd, 0x102e, 1, &lParam)
            hDlg = data_1af0a10
    else
        hDlg = data_1af0a10
    
    int32_t eax_19
    int32_t edx_5
    edx_5:eax_19 = sx.q(eax_6)
    
    if (data_20f20e8 != ((eax_19 + (edx_5 & 0x3ff)) s>> 0xa) + 1 || data_20f20f0 != eax_7)
        int32_t var_460_4 = eax_7
        int32_t var_464_4 = ((eax_19 + (edx_5 & 0x3ff)) s>> 0xa) + 1
        data_20f20e8 = ((eax_19 + (edx_5 & 0x3ff)) s>> 0xa) + 1
        int32_t eax_23
        int32_t edx_7
        edx_7:eax_23 = sx.q(((eax_19 + (edx_5 & 0x3ff)) s>> 0xa) + 1)
        data_20f20f0 = eax_7
        int32_t var_468_3 = ((eax_23 + (edx_7 & 0x3ff)) s>> 0xa) + 1
        sub_4c84d0(&var_408, "%dMB ( %dKB )  ")
        
        if (hDlg != 0)
            HWND hWnd_1 = GetDlgItem(hDlg, 0x4f32)
            lParam = 5
            void* var_430_2 = &var_408
            int32_t var_440_2 = 2
            int32_t var_43c_2 = 1
            int32_t var_424_2 = 2
            SendMessageA(hWnd_1, 0x102e, 2, &lParam)
            hDlg = data_1af0a10
    
    int32_t eax_27 = data_1b1bcc8
    
    if (data_20f20f4 != eax_27)
        data_20f20f4 = eax_27
        void* const edx_9
        
        if (eax_27 != 0)
            edx_9 = &data_624290
            
            if (eax_27 != 1)
                edx_9 = &data_624298
        else
            edx_9 = &data_62129c
        
        sub_4cfd70(&var_408, edx_9)
        
        if (hDlg != 0)
            HWND hWnd_2 = GetDlgItem(hDlg, 0x4f32)
            lParam = 5
            void* var_430_3 = &var_408
            int32_t var_440_3 = 3
            int32_t var_43c_3 = 1
            int32_t var_424_3 = 3
            SendMessageA(hWnd_2, 0x102e, 3, &lParam)
            hDlg = data_1af0a10
    
    int32_t ecx_3 = data_71929c
    
    if (data_20f20f8 != ecx_3)
        data_20f20f8 = ecx_3
        int32_t var_460_7 = (&data_63f390)[ecx_3 * 4]
        int32_t var_464_7 = ecx_3
        sub_4c84d0(&var_408, "%05d")
        
        if (hDlg != 0)
            HWND hWnd_3 = GetDlgItem(hDlg, 0x4f32)
            lParam = 5
            void* var_430_4 = &var_408
            int32_t var_440_4 = 4
            int32_t var_43c_4 = 1
            int32_t var_424_4 = 4
            SendMessageA(hWnd_3, 0x102e, 4, &lParam)
            hDlg = data_1af0a10
    
    int32_t eax_30 = data_719ba4
    
    if (data_20f20fc != eax_30)
        int32_t var_460_9 = eax_30
        data_20f20fc = eax_30
        sub_4c84d0(&var_408, "%d")
        
        if (hDlg != 0)
            HWND hWnd_4 = GetDlgItem(hDlg, 0x4f32)
            lParam = 5
            void* var_430_5 = &var_408
            int32_t var_440_5 = 5
            int32_t var_43c_5 = 1
            int32_t var_424_5 = 5
            SendMessageA(hWnd_4, 0x102e, 5, &lParam)
            hDlg = data_1af0a10
    
    int32_t eax_31 = data_91e8fc
    
    if (data_20f2100 != eax_31)
        int32_t var_460_11 = eax_31
        data_20f2100 = eax_31
        sub_4c84d0(&var_408, "%d")
        
        if (hDlg != 0)
            HWND hWnd_5 = GetDlgItem(hDlg, 0x4f32)
            lParam = 5
            void* var_430_6 = &var_408
            int32_t var_440_6 = 6
            int32_t var_43c_6 = 1
            int32_t var_424_6 = 6
            SendMessageA(hWnd_5, 0x102e, 6, &lParam)
            hDlg = data_1af0a10
    
    int32_t eax_32 = data_7035d4
    
    if (data_20f2104 != eax_32)
        data_20f2104 = eax_32
        sub_5743f0(7)
        hDlg = data_1af0a10
    
    int32_t eax_36 = data_8c4ca4
    
    if (data_20f2108 != eax_36)
        data_20f2108 = eax_36
        sub_5743f0(8)
        hDlg = data_1af0a10
    
    int32_t eax_37 = sub_425970()
    
    if (data_20f210c != eax_37)
        int32_t var_460_13 = eax_37
        data_20f210c = eax_37
        sub_4c84d0(&var_408, "%d   ")
        
        if (hDlg != 0)
            HWND hWnd_6 = GetDlgItem(hDlg, 0x4f32)
            lParam = 5
            void* var_430_7 = &var_408
            int32_t var_440_7 = 9
            int32_t var_43c_7 = 1
            int32_t var_424_7 = 9
            SendMessageA(hWnd_6, 0x102e, 9, &lParam)
            hDlg = data_1af0a10
    
    int32_t eax_38 = sub_428a10()
    
    if (data_20f2110 != eax_38)
        int32_t var_460_15 = eax_38
        data_20f2110 = eax_38
        sub_4c84d0(&var_408, "%d")
        
        if (hDlg != 0)
            HWND hWnd_7 = GetDlgItem(hDlg, 0x4f32)
            lParam = 5
            void* var_430_8 = &var_408
            int32_t var_440_8 = 0xa
            int32_t var_43c_8 = 1
            int32_t var_424_8 = 0xa
            SendMessageA(hWnd_7, 0x102e, 0xa, &lParam)
            hDlg = data_1af0a10
    
    int32_t eax_39 = sub_482520()
    
    if (data_20f2114 != eax_39)
        int32_t var_460_17 = eax_39
        data_20f2114 = eax_39
        sub_4c84d0(&var_408, "%d")
        
        if (hDlg != 0)
            HWND hWnd_8 = GetDlgItem(hDlg, 0x4f32)
            lParam = 5
            void* var_430_9 = &var_408
            int32_t var_440_9 = 0xb
            int32_t var_43c_9 = 1
            int32_t var_424_9 = 0xb
            SendMessageA(hWnd_8, 0x102e, 0xb, &lParam)
            hDlg = data_1af0a10
    
    int32_t eax_40 = sub_427bf0()
    
    if (data_20f2118 != eax_40)
        int32_t var_460_19 = eax_40
        data_20f2118 = eax_40
        sub_4c84d0(&var_408, "%d    ")
        
        if (hDlg != 0)
            HWND hWnd_9 = GetDlgItem(hDlg, 0x4f32)
            lParam = 5
            void* var_430_10 = &var_408
            int32_t var_440_10 = 0xc
            int32_t var_43c_10 = 1
            int32_t var_424_10 = 0xc
            SendMessageA(hWnd_9, 0x102e, 0xc, &lParam)
            hDlg = data_1af0a10
    
    int32_t eax_41 = sub_4306b0()
    
    if (data_20f211c != eax_41)
        int32_t var_460_21 = eax_41
        data_20f211c = eax_41
        sub_4c84d0(&var_408, "%d    ")
        
        if (hDlg != 0)
            HWND hWnd_10 = GetDlgItem(hDlg, 0x4f32)
            lParam = 5
            void* var_430_11 = &var_408
            int32_t var_440_11 = 0xd
            int32_t var_43c_11 = 1
            int32_t var_424_11 = 0xd
            SendMessageA(hWnd_10, 0x102e, 0xd, &lParam)
            hDlg = data_1af0a10
    
    int32_t eax_42 = sub_482de0()
    
    if (data_20f2120 != eax_42)
        int32_t var_460_23 = eax_42
        data_20f2120 = eax_42
        sub_4c84d0(&var_408, "%d    ")
        
        if (hDlg != 0)
            HWND hWnd_11 = GetDlgItem(hDlg, 0x4f32)
            lParam = 5
            void* var_430_12 = &var_408
            int32_t var_440_12 = 0xe
            int32_t var_43c_12 = 1
            int32_t var_424_12 = 0xe
            SendMessageA(hWnd_11, 0x102e, 0xe, &lParam)
            hDlg = data_1af0a10
    
    int32_t edi_1 = 0
    
    for (void* i = &data_8d2f34; i s< 0x8ff734; i += 0x5900)
        if (*(i - 0x2c80) != 0)
            edi_1 += 1
        
        if (*i != 0)
            edi_1 += 1
    
    int32_t eax_43 = sub_4998f0()
    
    if (data_20f2124 != edi_1 || data_20f2128 != eax_43)
        int32_t var_460_25 = eax_43
        int32_t var_464_17 = edi_1
        data_20f2128 = eax_43
        data_20f2124 = edi_1
        sub_4c84d0(&var_408, "%d  ( %d )")
        
        if (hDlg != 0)
            HWND hWnd_12 = GetDlgItem(hDlg, 0x4f32)
            void* var_430_13 = &var_408
            lParam = 5
            int32_t var_440_13 = 0xf
            int32_t var_43c_13 = 1
            int32_t var_424_13 = 0xf
            SendMessageA(hWnd_12, 0x102e, 0xf, &lParam)
            hDlg = data_1af0a10
    
    int32_t eax_44 = sub_4114d0()
    
    if (data_20f212c != eax_44)
        int32_t var_460_27 = eax_44
        data_20f212c = eax_44
        sub_4c84d0(&var_408, "%d    ")
        
        if (hDlg != 0)
            HWND hWnd_13 = GetDlgItem(hDlg, 0x4f32)
            lParam = 5
            void* var_430_14 = &var_408
            int32_t var_440_14 = 0x10
            int32_t var_43c_14 = 1
            int32_t var_424_14 = 0x10
            SendMessageA(hWnd_13, 0x102e, 0x10, &lParam)
            hDlg = data_1af0a10
    
    int32_t eax_45 = data_702fdc
    
    if (data_20f2130 != eax_45)
        data_20f2130 = eax_45
        
        if (eax_45 s<= 0)
            sub_4cfd70(&var_408, 0x6228bc)
        else
            int32_t var_460_29 = eax_45
            sub_4c84d0(&var_408, "%d")
        
        if (hDlg != 0)
            HWND hWnd_14 = GetDlgItem(hDlg, 0x4f32)
            lParam = 5
            void* var_430_15 = &var_408
            int32_t var_440_15 = 0x11
            int32_t var_43c_15 = 1
            int32_t var_424_15 = 0x11
            SendMessageA(hWnd_14, 0x102e, 0x11, &lParam)
            hDlg = data_1af0a10
    
    int32_t eax_46 = data_702fd0
    
    if (data_20f2134 != eax_46)
        data_20f2134 = eax_46
        
        if (eax_46 s<= 0)
            sub_4cfd70(&var_408, 0x6228bc)
        else
            int32_t var_460_31 = eax_46
            sub_4c84d0(&var_408, "%d")
        
        if (hDlg != 0)
            HWND hWnd_15 = GetDlgItem(hDlg, 0x4f32)
            lParam = 5
            void* var_430_16 = &var_408
            int32_t var_440_16 = 0x12
            int32_t var_43c_16 = 1
            int32_t var_424_16 = 0x12
            SendMessageA(hWnd_15, 0x102e, 0x12, &lParam)
            hDlg = data_1af0a10
    
    int32_t eax_47 = data_702fc4
    
    if (data_20f2138 != eax_47)
        data_20f2138 = eax_47
        
        if (eax_47 s<= 0)
            sub_4cfd70(&var_408, 0x6228bc)
        else
            int32_t var_460_33 = eax_47
            sub_4c84d0(&var_408, "%d")
        
        if (hDlg != 0)
            HWND hWnd_16 = GetDlgItem(hDlg, 0x4f32)
            lParam = 5
            void* var_430_17 = &var_408
            int32_t var_440_17 = 0x13
            int32_t var_43c_17 = 1
            int32_t var_424_17 = 0x13
            SendMessageA(hWnd_16, 0x102e, 0x13, &lParam)
            hDlg = data_1af0a10
    
    int32_t ecx_7 = data_108feb4
    int32_t eax_48 = data_137475c
    
    if (data_20f213c != ecx_7 || data_20f2140 != eax_48)
        data_20f213c = ecx_7
        data_20f2140 = eax_48
        void* const edx_16
        
        if (ecx_7 != 0)
            edx_16 = &data_624404
            
            if (eax_48 != 0)
                edx_16 = &data_624428
        else
            edx_16 = &data_6243d8
        
        sub_4cfd70(&var_408, edx_16)
        
        if (hDlg != 0)
            HWND hWnd_17 = GetDlgItem(hDlg, 0x4f32)
            lParam = 5
            void* var_430_18 = &var_408
            int32_t var_440_18 = 0x14
            int32_t var_43c_18 = 1
            int32_t var_424_18 = 0x14
            SendMessageA(hWnd_17, 0x102e, 0x14, &lParam)
            hDlg = data_1af0a10
    
    int32_t edx_17 = data_187c610
    int32_t ecx_9 = data_187c60c
    result = data_187c608
    
    if (data_20f2144 == data_1af19dc && data_20f2148 == data_108feb8)
        hDlg = data_1af0a10
    
    if (data_20f2144 != data_1af19dc || data_20f2148 != data_108feb8 || data_20f214c != data_1333e30
            || data_20f2150 != edx_17 || data_20f2154 != ecx_9 || data_20f2158 != result)
        bool cond:1_1 = data_1af19dc == 0
        int32_t ebx_2 = data_1333e30
        data_20f2144 = data_1af19dc
        int32_t edi_3 = data_108feb8
        data_20f2148 = edi_3
        data_20f214c = ebx_2
        data_20f2150 = edx_17
        data_20f2154 = ecx_9
        data_20f2158 = result
        char* edx_18
        
        if (not(cond:1_1))
            edx_18 = "rl_d3d.dll "
        else if (edi_3 == 0)
            edx_18 = &data_624454
        else if (data_1333e30 == 0)
            edx_18 = &data_624404
        else if (edx_17 == 0)
            edx_18 = &data_624480
        else if (ecx_9 != 0)
            edx_18 = &data_6244c4
            
            if (result != 0)
                edx_18 = &data_624428
        else
            edx_18 = &data_62449c
        
        result = sub_4cfd70(&var_408, edx_18)
        
        if (hDlg != 0)
            HWND hWnd_18 = GetDlgItem(hDlg, 0x4f32)
            lParam = 5
            void* var_430_19 = &var_408
            int32_t var_440_19 = 0x15
            int32_t var_43c_19 = 1
            int32_t var_424_19 = 0x15
            result = SendMessageA(hWnd_18, 0x102e, 0x15, &lParam)

sub_5f02dd(result_1 ^ &__saved_ebp)
return result
