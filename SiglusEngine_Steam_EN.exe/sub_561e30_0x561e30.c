// 函数: sub_561e30
// 地址: 0x561e30
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
LRESULT hDlg = __security_cookie ^ &__saved_ebp
LRESULT hDlg_24 = hDlg

if (data_1af0a44 != 0)
    int32_t var_20c_1 = 0
    
    if (arg1 != 0)
        sub_4d1ba0(hDlg, 0x2d8, &data_20c6f08, 0xa5)
    
    int32_t lParam
    
    if (sub_4d0f10(0x20c6f30, &data_108f5cc) != 0)
        sub_4cfd70(0x20c6f30, &data_108f5cc)
        HWND hDlg_1 = data_1af0a44
        
        if (hDlg_1 != 0)
            HWND hWnd = GetDlgItem(hDlg_1, 0x4f32)
            lParam = 5
            int32_t var_244_1 = 0
            int32_t var_240_1 = 1
            int32_t var_234_1 = 0x20c6f30
            int32_t var_228_1 = 0
            SendMessageA(hWnd, 0x102e, 0, &lParam)
    
    if (sub_4d0f10(0x20c6fb0, 0x703520) != 0)
        sub_4cfd70(0x20c6fb0, 0x703520)
        HWND hDlg_2 = data_1af0a44
        
        if (hDlg_2 != 0)
            HWND hWnd_1 = GetDlgItem(hDlg_2, 0x4f32)
            lParam = 5
            int32_t var_244_2 = 1
            int32_t var_240_2 = 1
            int32_t var_234_2 = 0x20c6fb0
            int32_t var_228_2 = 1
            SendMessageA(hWnd_1, 0x102e, 1, &lParam)
    
    int32_t ecx = data_719b6c
    int32_t eax_3 = data_72d6ac
    void var_108
    
    if (data_20c6f08 != ecx || data_20c6f0c != eax_3)
        int32_t var_258_3 = eax_3
        int32_t var_25c_3 = ecx
        data_20c6f0c = eax_3
        data_20c6f08 = ecx
        sub_4c84d0(&var_108, "Seen%04d (%05d)")
        HWND hDlg_3 = data_1af0a44
        
        if (hDlg_3 != 0)
            HWND hWnd_2 = GetDlgItem(hDlg_3, 0x4f32)
            lParam = 5
            void* var_234_3 = &var_108
            int32_t var_244_3 = 2
            int32_t var_240_3 = 1
            int32_t var_228_3 = 2
            SendMessageA(hWnd_2, 0x102e, 2, &lParam)
    
    int32_t eax_4 = data_161d5dc
    int32_t ecx_1 = data_161d5e4
    
    if (data_20c6f10 != eax_4 || data_20c6f18 != ecx_1)
        data_20c6f10 = eax_4
        int32_t eax_5 = data_163111c
        data_20c6f18 = ecx_1
        data_20c6f14 = eax_5
        sub_561ce0(&data_1606c30, &var_108)
        HWND hDlg_4 = data_1af0a44
        
        if (hDlg_4 != 0)
            HWND hWnd_3 = GetDlgItem(hDlg_4, 0x4f32)
            lParam = 5
            void* var_234_4 = &var_108
            int32_t var_244_4 = 3
            int32_t var_240_4 = 1
            int32_t var_228_4 = 3
            SendMessageA(hWnd_3, 0x102e, 3, &lParam)
    
    int32_t ecx_2 = data_976f94
    void* eax_6 = data_976f9c
    int32_t var_24c_1 = 1
    
    if (ecx_2 == 0)
        var_24c_1 = 0
    else if (data_12a292c == 0)
        if (*(eax_6 + 0x1c4) != 1)
            var_24c_1 = 0
    else if (*(eax_6 + 0x1c4) == 2)
        var_24c_1 = 0
    
    int32_t edx_2 = 1
    
    if (ecx_2 == 0)
        edx_2 = 0
    else if (data_12a2930 == 0)
        if (*(eax_6 + 0x1c8) != 1)
            edx_2 = 0
    else if (*(eax_6 + 0x1c8) == 2)
        edx_2 = 0
    
    int32_t ecx_3 = 1
    
    if (data_976f94 == 0)
        ecx_3 = 0
    else if (data_12a2934 == 0)
        if (*(eax_6 + 0x1cc) != 1)
            ecx_3 = 0
    else if (*(eax_6 + 0x1cc) == 2)
        ecx_3 = 0
    
    if (data_20c6f1c != data_7035c8 || data_20c6f20 != var_24c_1 || data_20c6f24 != edx_2
            || data_20c6f28 != ecx_3)
        int32_t var_258_6 = (&data_6128e4)[ecx_3]
        int32_t esi_1 = data_7035c8
        int32_t var_25c_6 = (&data_6128e4)[edx_2]
        data_20c6f20 = var_24c_1
        int32_t var_260_1 = (&data_6128e4)[var_24c_1]
        data_20c6f1c = esi_1
        data_20c6f24 = edx_2
        data_20c6f28 = ecx_3
        var_20c_1 = 1
        int32_t var_264_6 = (&data_612960)[esi_1]
        sub_4c84d0(&var_108, 0x6222b4)
        HWND hDlg_5 = data_1af0a44
        
        if (hDlg_5 != 0)
            HWND hWnd_4 = GetDlgItem(hDlg_5, 0x4f32)
            lParam = 5
            void* var_234_5 = &var_108
            int32_t var_244_5 = 4
            int32_t var_240_5 = 1
            int32_t var_228_5 = 4
            SendMessageA(hWnd_4, 0x102e, 4, &lParam)
    
    int32_t eax_10 = data_7035cc
    
    if (data_20c6f2c != eax_10 || var_20c_1 != 0)
        data_20c6f2c = eax_10
        
        if (eax_10 != 1 || data_20c6f1c != 0)
            int32_t ecx_5 = (&data_612960)[eax_10]
            HWND hDlg_6 = data_1af0a44
            
            if (hDlg_6 != 0)
                HWND hWnd_5 = GetDlgItem(hDlg_6, 0x4f32)
                int32_t var_234_6 = ecx_5
                lParam = 5
                int32_t var_244_6 = 5
                int32_t var_240_6 = 1
                int32_t var_228_6 = 5
                SendMessageA(hWnd_5, 0x102e, 5, &lParam)
        else
            sub_561ba0(eax_10 + 4)
    
    int32_t eax_11 = data_703678
    
    if (data_20c70f8 != eax_11)
        data_20c70f8 = eax_11
        sub_561ba0(6)
    
    int32_t eax_12 = data_703674
    
    if (data_20c70fc != eax_12)
        data_20c70fc = eax_12
        sub_561ba0(7)
    
    int32_t eax_13 = data_719ba4
    
    if (data_20c7100 != eax_13)
        int32_t var_258_9 = eax_13
        data_20c7100 = eax_13
        sub_4c84d0(&var_108, "%d")
        HWND hDlg_7 = data_1af0a44
        
        if (hDlg_7 != 0)
            HWND hWnd_6 = GetDlgItem(hDlg_7, 0x4f32)
            lParam = 5
            void* var_234_7 = &var_108
            int32_t var_244_7 = 8
            int32_t var_240_7 = 1
            int32_t var_228_7 = 8
            SendMessageA(hWnd_6, 0x102e, 8, &lParam)
    
    int32_t eax_14 = data_91e8fc
    
    if (data_20c7104 != eax_14)
        int32_t var_258_11 = eax_14
        data_20c7104 = eax_14
        sub_4c84d0(&var_108, "%d")
        HWND hDlg_8 = data_1af0a44
        
        if (hDlg_8 != 0)
            HWND hWnd_7 = GetDlgItem(hDlg_8, 0x4f32)
            lParam = 5
            void* var_234_8 = &var_108
            int32_t var_244_8 = 9
            int32_t var_240_8 = 1
            int32_t var_228_8 = 9
            SendMessageA(hWnd_7, 0x102e, 9, &lParam)
    
    int32_t edx_8 = data_70487c
    int32_t eax_15 = data_704884
    int32_t ecx_7 = data_704880
    
    if (data_20c7108 != edx_8 || data_20c710c != ecx_7 || data_20c7110 != eax_15)
        data_20c7110 = eax_15
        data_20c7108 = edx_8
        data_20c710c = ecx_7
        int32_t var_258_13 = eax_15
        int32_t var_25c_11 = ecx_7
        void* const var_260_4
        
        if (edx_8 == 0)
            var_260_4 = &data_622390
        else
            var_260_4 = &data_622368
        
        sub_4c84d0(&var_108, var_260_4)
        HWND hDlg_9 = data_1af0a44
        
        if (hDlg_9 != 0)
            HWND hWnd_8 = GetDlgItem(hDlg_9, 0x4f32)
            lParam = 5
            void* var_234_9 = &var_108
            int32_t var_244_9 = 0xa
            int32_t var_240_9 = 1
            int32_t var_228_9 = 0xa
            SendMessageA(hWnd_8, 0x102e, 0xa, &lParam)
    
    int32_t eax_16 = data_7035d4
    
    if (data_20c7134 != eax_16)
        data_20c7134 = eax_16
        sub_561ba0(0xb)
    
    int32_t eax_20 = data_8c4ca4
    
    if (data_20c7138 != eax_20)
        data_20c7138 = eax_20
        sub_561ba0(0xc)
    
    int32_t eax_21 = data_72d6a8
    
    if (data_20c7130 != eax_21)
        int32_t var_258_15 = eax_21
        data_20c7130 = eax_21
        sub_4c84d0(&var_108, "%03d")
        HWND hDlg_10 = data_1af0a44
        
        if (hDlg_10 != 0)
            HWND hWnd_9 = GetDlgItem(hDlg_10, 0x4f32)
            lParam = 5
            void* var_234_10 = &var_108
            int32_t var_244_10 = 0xd
            int32_t var_240_10 = 1
            int32_t var_228_10 = 0xd
            SendMessageA(hWnd_9, 0x102e, 0xd, &lParam)
    
    int32_t eax_22 = data_7036a8
    
    if (data_20c7114 != eax_22)
        data_20c7114 = eax_22
        sub_561ba0(0xe)
    
    int32_t eax_23 = data_7037e4
    
    if (data_20c7118 != eax_23)
        data_20c7118 = eax_23
        sub_561ba0(0xf)
    
    int32_t eax_24 = data_7037c8
    
    if (data_20c711c != eax_24)
        data_20c711c = eax_24
        sub_561ba0(0x10)
    
    int32_t eax_25 = data_703744
    
    if (data_20c7120 != eax_25)
        data_20c7120 = eax_25
        sub_561ba0(0x11)
    
    int32_t eax_26 = data_703740
    
    if (data_20c7124 != eax_26)
        data_20c7124 = eax_26
        sub_561ba0(0x12)
    
    int32_t eax_27 = data_70367c
    
    if (data_20c7128 != eax_27)
        data_20c7128 = eax_27
        sub_561ba0(0x13)
    
    int32_t eax_28 = data_7037e8
    
    if (data_20c712c != eax_28)
        data_20c712c = eax_28
        sub_561ba0(0x14)
    
    int32_t eax_29 = data_7037a0
    
    if (data_20c7144 != eax_29)
        data_20c7144 = eax_29
        sub_561ba0(0x15)
    
    int32_t eax_30 = data_7037a4
    
    if (data_20c7148 != eax_30)
        int32_t var_258_17 = eax_30
        data_20c7148 = eax_30
        sub_4c84d0(&var_108, "%03d")
        HWND hDlg_11 = data_1af0a44
        
        if (hDlg_11 != 0)
            HWND hWnd_10 = GetDlgItem(hDlg_11, 0x4f32)
            lParam = 5
            void* var_234_11 = &var_108
            int32_t var_244_11 = 0x16
            int32_t var_240_11 = 1
            int32_t var_228_11 = 0x16
            SendMessageA(hWnd_10, 0x102e, 0x16, &lParam)
    
    int32_t eax_31 = data_70379c
    
    if (data_20c714c != eax_31)
        data_20c714c = eax_31
        sub_561ba0(0x17)
    
    int32_t eax_32 = data_f89958
    
    if (data_20c7150 != eax_32)
        data_20c7150 = eax_32
        
        if (eax_32 != 0xfffffffd && eax_32 != 0xfffffffe && eax_32 != 0xffffffff)
            int32_t var_258_19 = eax_32
            sub_4c84d0(&var_108, "%03d")
        
        sub_561ba0(0x18)
    
    int32_t eax_33 = data_8c4ac0.d
    
    if (data_20c7154 != eax_33)
        data_20c7154 = eax_33
        
        if (eax_33 != 0xffffffff)
            int32_t var_258_20 = eax_33
            sub_4c84d0(&var_108, 0x622584)
        
        sub_561ba0(0x19)
    
    void var_208
    
    if (sub_4d0f10(&data_20c7080, &data_7037ec) != 0 || data_20c70a4 != data_703810)
        sub_4cfd70(&data_20c7080, &data_7037ec)
        bool cond:2_1 = data_20c7080 != 0
        int32_t eax_36 = data_703810
        data_20c70a4 = eax_36
        
        if (not(cond:2_1))
            sub_4cfd70(&var_108, 0x62259c)
        else if (eax_36 s< 0)
            char* var_258_22 = &data_20c7080
            sub_4c84d0(&var_108, 0x6225f0)
        else
            sub_4a7f60(eax_36, &var_208)
            void* var_258_21 = &var_208
            char* var_25c_15 = &data_20c7080
            sub_4c84d0(&var_108, "%s (%s)")
        
        HWND hDlg_12 = data_1af0a44
        
        if (hDlg_12 != 0)
            HWND hWnd_11 = GetDlgItem(hDlg_12, 0x4f32)
            lParam = 5
            void* var_234_12 = &var_108
            int32_t var_244_12 = 0x1a
            int32_t var_240_12 = 1
            int32_t var_228_12 = 0x1a
            SendMessageA(hWnd_11, 0x102e, 0x1a, &lParam)
    
    if (sub_4d0f10(&data_20c7058, &data_13926ac) != 0 || data_20c707c != data_13926a8)
        sub_4cfd70(&data_20c7058, &data_13926ac)
        bool cond:3_1 = data_20c7058 != 0
        int32_t eax_39 = data_13926a8
        data_20c707c = eax_39
        
        if (not(cond:3_1))
            sub_4cfd70(&var_108, 0x622618)
        else if (eax_39 s< 0)
            char* var_258_25 = &data_20c7058
            sub_4c84d0(&var_108, 0x622674)
        else
            sub_4a7f60(eax_39, &var_208)
            void* var_258_24 = &var_208
            char* var_25c_17 = &data_20c7058
            sub_4c84d0(&var_108, "%s (%s)")
        
        HWND hDlg_13 = data_1af0a44
        
        if (hDlg_13 != 0)
            HWND hWnd_12 = GetDlgItem(hDlg_13, 0x4f32)
            lParam = 5
            void* var_234_13 = &var_108
            int32_t var_244_13 = 0x1b
            int32_t var_240_13 = 1
            int32_t var_228_13 = 0x1b
            SendMessageA(hWnd_12, 0x102e, 0x1b, &lParam)
    
    int32_t eax_40 = data_7037dc
    
    if (data_20c713c != eax_40)
        data_20c713c = eax_40
        sub_561ba0(0x1c)
    
    int32_t eax_41 = data_7037d8
    
    if (data_20c7140 != eax_41)
        data_20c7140 = eax_41
        sub_561ba0(0x1d)
    
    if (sub_4d0f10(&data_20c70d0, &data_703814) != 0 || data_20c70f4 != data_703838)
        sub_4cfd70(&data_20c70d0, &data_703814)
        bool cond:4_1 = data_20c70d0 != 0
        int32_t eax_44 = data_703838
        data_20c70f4 = eax_44
        
        if (not(cond:4_1))
            sub_4cfd70(&var_108, 0x6226e0)
        else if (eax_44 s< 0)
            char* var_258_28 = &data_20c70d0
            sub_4c84d0(&var_108, 0x62273c)
        else
            sub_4a7f60(eax_44, &var_208)
            void* var_258_27 = &var_208
            char* var_25c_19 = &data_20c70d0
            sub_4c84d0(&var_108, "%s (%s)")
        
        HWND hDlg_14 = data_1af0a44
        
        if (hDlg_14 != 0)
            HWND hWnd_13 = GetDlgItem(hDlg_14, 0x4f32)
            lParam = 5
            void* var_234_14 = &var_108
            int32_t var_244_14 = 0x1e
            int32_t var_240_14 = 1
            int32_t var_228_14 = 0x1e
            SendMessageA(hWnd_13, 0x102e, 0x1e, &lParam)
    
    if (sub_4d0f10(&data_20c70a8, &data_13926d4) != 0 || data_20c70cc != data_13926d0)
        sub_4cfd70(&data_20c70a8, &data_13926d4)
        bool cond:5_1 = data_20c70a8 != 0
        int32_t eax_47 = data_13926d0
        data_20c70cc = eax_47
        
        if (not(cond:5_1))
            sub_4cfd70(&var_108, 0x622768)
        else if (eax_47 s< 0)
            char* var_258_31 = &data_20c70a8
            sub_4c84d0(&var_108, 0x6227cc)
        else
            sub_4a7f60(eax_47, &var_208)
            void* var_258_30 = &var_208
            char* var_25c_21 = &data_20c70a8
            sub_4c84d0(&var_108, "%s (%s)")
        
        HWND hDlg_15 = data_1af0a44
        
        if (hDlg_15 != 0)
            HWND hWnd_14 = GetDlgItem(hDlg_15, 0x4f32)
            lParam = 5
            void* var_234_15 = &var_108
            int32_t var_244_15 = 0x1f
            int32_t var_240_15 = 1
            int32_t var_228_15 = 0x1f
            SendMessageA(hWnd_14, 0x102e, 0x1f, &lParam)
    
    int32_t eax_48
    int32_t ecx_16
    int32_t edx_45
    
    if (data_ef08f8 != 0)
        eax_48 = data_ef0904
        ecx_16 = data_ef0900
        edx_45 = data_ef0924
    else
        eax_48 = 0
        ecx_16 = 0
        edx_45 = 0
    
    if (data_20c7184 != eax_48 || data_20c7188 != ecx_16 || data_20c718c != edx_45)
        data_20c7184 = eax_48
        data_20c718c = edx_45
        int32_t eax_49
        int32_t edx_46
        edx_46:eax_49 = sx.q(eax_48)
        data_20c7188 = ecx_16
        int32_t var_258_33 = (eax_49 + (edx_46 & 0x3ff)) s>> 0xa
        int32_t var_25c_23 = ecx_16
        int32_t var_260_13 = edx_45
        sub_4c84d0(&var_108, "Step=%03d CG=%d (%dKB)")
        HWND hDlg_16 = data_1af0a44
        
        if (hDlg_16 != 0)
            HWND hWnd_15 = GetDlgItem(hDlg_16, 0x4f32)
            lParam = 5
            void* var_234_16 = &var_108
            int32_t var_244_16 = 0x20
            int32_t var_240_16 = 1
            int32_t var_228_16 = 0x20
            SendMessageA(hWnd_15, 0x102e, 0x20, &lParam)
    
    int32_t eax_52
    int32_t ecx_17
    int32_t edx_48
    
    if (data_ef0a78 != 0)
        eax_52 = data_ef0a84
        ecx_17 = data_ef0a80
        edx_48 = data_ef0aa4
    else
        eax_52 = 0
        ecx_17 = 0
        edx_48 = 0
    
    if (data_20c7190 != eax_52 || data_20c7194 != ecx_17 || data_20c7198 != edx_48)
        data_20c7190 = eax_52
        data_20c7198 = edx_48
        int32_t eax_53
        int32_t edx_49
        edx_49:eax_53 = sx.q(eax_52)
        data_20c7194 = ecx_17
        int32_t var_258_35 = (eax_53 + (edx_49 & 0x3ff)) s>> 0xa
        int32_t var_25c_25 = ecx_17
        int32_t var_260_14 = edx_48
        sub_4c84d0(&var_108, "Step=%03d CG=%d (%dKB)")
        HWND hDlg_17 = data_1af0a44
        
        if (hDlg_17 != 0)
            HWND hWnd_16 = GetDlgItem(hDlg_17, 0x4f32)
            lParam = 5
            void* var_234_17 = &var_108
            int32_t var_244_17 = 0x21
            int32_t var_240_17 = 1
            int32_t var_228_17 = 0x21
            SendMessageA(hWnd_16, 0x102e, 0x21, &lParam)
    
    int32_t eax_57
    
    if (data_20c7054 == data_187c538)
        eax_57 = sub_4d0f10(&data_20c7030, &data_92b1b0)
    
    if (data_20c7054 != data_187c538 || eax_57 != 0)
        sub_4cfd70(&data_20c7030, &data_92b1b0)
        bool cond:6_1 = data_20c7030 != 0
        int32_t eax_58 = data_187c538
        data_20c7054 = eax_58
        
        if (cond:6_1)
            char* var_258_37 = &data_20c7030
            void* const var_25c_27
            
            if (eax_58 != 0)
                var_25c_27 = &data_622858
            else
                var_25c_27 = &data_62282c
            
            sub_4c84d0(&var_108, var_25c_27)
        
        sub_561ba0(0x22)
    
    int32_t eax_60
    
    if (data_20c717c == data_976b2c)
        eax_60 = sub_4d0f10(&data_20c7158, &data_976b08)
    
    if (data_20c717c != data_976b2c || eax_60 != 0 || data_20c7180 != data_1392708)
        sub_4cfd70(&data_20c7158, &data_976b08)
        bool cond:8_1 = data_20c7158 == 0
        int32_t ecx_18 = data_976b2c
        int32_t eax_62 = data_1392708
        data_20c717c = ecx_18
        data_20c7180 = eax_62
        
        if (cond:8_1 || eax_62 == 0)
            HWND hDlg_18 = data_1af0a44
            
            if (hDlg_18 != 0)
                HWND hWnd_17 = GetDlgItem(hDlg_18, 0x4f32)
                lParam = 5
                int32_t var_244_18 = 0x23
                int32_t var_240_18 = 1
                int32_t var_234_18 = 0x622874
                int32_t var_228_18 = 0x23
                SendMessageA(hWnd_17, 0x102e, 0x23, &lParam)
        else
            char* var_258_38 = &data_20c7158
            void* const var_25c_28
            
            if (ecx_18 == 0)
                var_25c_28 = &data_622890
            else
                var_25c_28 = &data_62287c
            
            sub_4c84d0(&var_108, var_25c_28)
            sub_561ba0(0x23)
    
    int32_t ecx_19 = data_1b15284
    int32_t eax_63 = data_1b14e54
    
    if (data_20c719c != ecx_19 || data_20c71a4 != eax_63)
        int32_t var_258_40 = eax_63
        int32_t var_25c_30 = ecx_19
        data_20c71a4 = eax_63
        data_20c719c = ecx_19
        sub_4c84d0(&var_108, 0x6228a4)
        HWND hDlg_19 = data_1af0a44
        
        if (hDlg_19 != 0)
            HWND hWnd_18 = GetDlgItem(hDlg_19, 0x4f32)
            lParam = 5
            void* var_234_19 = &var_108
            int32_t var_244_19 = 0x24
            int32_t var_240_19 = 1
            int32_t var_228_19 = 0x24
            SendMessageA(hWnd_18, 0x102e, 0x24, &lParam)
    
    int32_t ecx_20 = data_1b15288
    int32_t eax_64 = data_1b14e58
    
    if (data_20c71a0 != ecx_20 || data_20c71a8 != eax_64)
        int32_t var_258_42 = eax_64
        int32_t var_25c_32 = ecx_20
        data_20c71a8 = eax_64
        data_20c71a0 = ecx_20
        sub_4c84d0(&var_108, 0x6228a4)
        HWND hDlg_20 = data_1af0a44
        
        if (hDlg_20 != 0)
            HWND hWnd_19 = GetDlgItem(hDlg_20, 0x4f32)
            lParam = 5
            void* var_234_20 = &var_108
            int32_t var_244_20 = 0x25
            int32_t var_240_20 = 1
            int32_t var_228_20 = 0x25
            SendMessageA(hWnd_19, 0x102e, 0x25, &lParam)
    
    int32_t edx_52 = data_703844
    int32_t eax_65 = data_703848
    
    if (data_20c71ac != edx_52 || data_20c71b0 != eax_65)
        data_20c71ac = edx_52
        data_20c71b0 = eax_65
        sub_561bf0(eax_65, edx_52, 0x26, eax_65)
    
    int32_t edx_53 = data_70384c
    int32_t eax_66 = data_703850.d
    
    if (data_20c71b4 != edx_53 || data_20c71b8 != eax_66)
        data_20c71b4 = edx_53
        data_20c71b8 = eax_66
        sub_561bf0(eax_66, edx_53, 0x27, eax_66)
    
    int32_t edx_54 = data_703850:4
    int32_t eax_67 = data_703850:8
    
    if (data_20c71bc != edx_54 || data_20c71c0 != eax_67)
        data_20c71bc = edx_54
        data_20c71c0 = eax_67
        sub_561bf0(eax_67, edx_54, 0x28, eax_67)
    
    int32_t edx_55 = data_703850:0xc
    int32_t eax_68 = data_703860
    
    if (data_20c71c4 != edx_55 || data_20c71c8 != eax_68)
        data_20c71c4 = edx_55
        data_20c71c8 = eax_68
        sub_561bf0(eax_68, edx_55, 0x29, eax_68)
    
    int32_t edx_56 = data_703864
    int32_t eax_69 = data_703868
    
    if (data_20c71cc != edx_56 || data_20c71d0 != eax_69)
        data_20c71cc = edx_56
        data_20c71d0 = eax_69
        sub_561bf0(eax_69, edx_56, 0x2a, eax_69)
    
    int32_t eax_70 = data_702fdc
    
    if (data_20c71d4 != eax_70)
        data_20c71d4 = eax_70
        
        if (eax_70 s<= 0)
            sub_4cfd70(&var_108, 0x6228bc)
        else
            int32_t var_258_49 = eax_70
            sub_4c84d0(&var_108, "%d")
        
        HWND hDlg_21 = data_1af0a44
        
        if (hDlg_21 != 0)
            HWND hWnd_20 = GetDlgItem(hDlg_21, 0x4f32)
            lParam = 5
            void* var_234_21 = &var_108
            int32_t var_244_21 = 0x2b
            int32_t var_240_21 = 1
            int32_t var_228_21 = 0x2b
            SendMessageA(hWnd_20, 0x102e, 0x2b, &lParam)
    
    int32_t eax_71 = data_702fd0
    
    if (data_20c71d8 != eax_71)
        data_20c71d8 = eax_71
        
        if (eax_71 s<= 0)
            sub_4cfd70(&var_108, 0x6228bc)
        else
            int32_t var_258_51 = eax_71
            sub_4c84d0(&var_108, "%d")
        
        HWND hDlg_22 = data_1af0a44
        
        if (hDlg_22 != 0)
            HWND hWnd_21 = GetDlgItem(hDlg_22, 0x4f32)
            lParam = 5
            void* var_234_22 = &var_108
            int32_t var_244_22 = 0x2c
            int32_t var_240_22 = 1
            int32_t var_228_22 = 0x2c
            SendMessageA(hWnd_21, 0x102e, 0x2c, &lParam)
    
    hDlg = data_702fc4
    
    if (data_20c71dc != hDlg)
        data_20c71dc = hDlg
        
        if (hDlg s<= 0)
            sub_4cfd70(&var_108, 0x6228bc)
        else
            LRESULT hDlg_23 = hDlg
            sub_4c84d0(&var_108, "%d")
        
        hDlg = data_1af0a44
        
        if (hDlg != 0)
            HWND hWnd_22 = GetDlgItem(hDlg, 0x4f32)
            lParam = 5
            void* var_234_23 = &var_108
            int32_t var_244_23 = 0x2d
            int32_t var_240_23 = 1
            int32_t var_228_23 = 0x2d
            hDlg = SendMessageA(hWnd_22, 0x102e, 0x2d, &lParam)

sub_5f02dd(hDlg_24 ^ &__saved_ebp)
return hDlg
