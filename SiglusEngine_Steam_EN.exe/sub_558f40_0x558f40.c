// 函数: sub_558f40
// 地址: 0x558f40
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
SendMessageA(GetDlgItem(data_20c3888, 0x4f32), 0x1009, 0, 0)
int32_t* ecx = &data_8d02b4
int32_t* var_90 = &data_12b9204
int32_t i = 0
int32_t* var_94 = &data_8d02b4
int32_t i_2 = 0

do
    int32_t j = 0
    int32_t j_1 = 0
    
    do
        int32_t i_1 = i
        void* edi_2 = j * 0x2c80 + ecx
        char const* const var_37c_1
        
        if (j != 0)
            var_37c_1 = "%03d Back"
        else
            var_37c_1 = "%03d Front"
        
        void var_88
        sub_4c84d0(&var_88, var_37c_1)
        WPARAM wParam = j + (i_2 << 1)
        HWND hWnd = GetDlgItem(data_20c3888, 0x4f32)
        int32_t lParam = 5
        void* var_c0_1 = &var_88
        WPARAM wParam_23 = wParam
        int32_t var_cc_1 = 0
        WPARAM wParam_26 = wParam
        SendMessageA(hWnd, 0x1007, 0, &lParam)
        HWND hDlg = data_20c3888
        HWND hWnd_1
        int32_t* lParam_1
        
        if (var_90[-1] == 0)
            hWnd_1 = GetDlgItem(hDlg, 0x4f32)
            int32_t var_368 = 5
            lParam_1 = &var_368
            WPARAM wParam_1 = wParam
            int32_t var_360_1 = 1
            void* const var_354_1 = &data_6138e3
            WPARAM wParam_2 = wParam
        else
            hWnd_1 = GetDlgItem(hDlg, 0x4f32)
            int32_t var_1c4 = 5
            lParam_1 = &var_1c4
            WPARAM wParam_15 = wParam
            int32_t var_1bc_1 = 1
            int32_t var_1b0_1 = 0x62128c
            WPARAM wParam_16 = wParam
        
        SendMessageA(hWnd_1, 0x102e, wParam, lParam_1)
        HWND hDlg_1 = data_20c3888
        HWND hWnd_2
        int32_t* lParam_2
        
        if (*var_90 == 0)
            hWnd_2 = GetDlgItem(hDlg_1, 0x4f32)
            int32_t var_110 = 5
            lParam_2 = &var_110
            WPARAM wParam_21 = wParam
            int32_t var_108_1 = 2
            void* const var_fc_1 = &data_62129c
            WPARAM wParam_22 = wParam
        else
            hWnd_2 = GetDlgItem(hDlg_1, 0x4f32)
            int32_t var_32c = 5
            lParam_2 = &var_32c
            WPARAM wParam_3 = wParam
            int32_t var_324_1 = 2
            int32_t var_318_1 = 0x621294
            WPARAM wParam_4 = wParam
        
        SendMessageA(hWnd_2, 0x102e, wParam, lParam_2)
        int32_t eax_6 = *edi_2
        
        if (eax_6 u<= 6)
            HWND hWnd_3
            int32_t* lParam_3
            
            switch (eax_6)
                case 0
                    hWnd_3 = GetDlgItem(data_20c3888, 0x4f32)
                    int32_t var_2b4 = 5
                    lParam_3 = &var_2b4
                    WPARAM wParam_7 = wParam
                    int32_t var_2ac_1 = 3
                    int32_t var_2a0_1 = 0x6212a4
                    WPARAM wParam_8 = wParam
                case 1
                    hWnd_3 = GetDlgItem(data_20c3888, 0x4f32)
                    int32_t var_23c = 5
                    lParam_3 = &var_23c
                    WPARAM wParam_11 = wParam
                    int32_t var_234_1 = 3
                    int32_t var_228_1 = 0x6212ac
                    WPARAM wParam_12 = wParam
                case 2
                    hWnd_3 = GetDlgItem(data_20c3888, 0x4f32)
                    int32_t var_188 = 5
                    lParam_3 = &var_188
                    WPARAM wParam_17 = wParam
                    int32_t var_180_1 = 3
                    int32_t var_174_1 = 0x6212cc
                    WPARAM wParam_18 = wParam
                case 3
                    hWnd_3 = GetDlgItem(data_20c3888, 0x4f32)
                    int32_t var_14c = 5
                    lParam_3 = &var_14c
                    WPARAM wParam_19 = wParam
                    int32_t var_144_1 = 3
                    int32_t var_138_1 = 0x6212bc
                    WPARAM wParam_20 = wParam
                case 4
                    hWnd_3 = GetDlgItem(data_20c3888, 0x4f32)
                    int32_t var_200 = 5
                    lParam_3 = &var_200
                    WPARAM wParam_13 = wParam
                    int32_t var_1f8_1 = 3
                    int32_t var_1ec_1 = 0x6212dc
                    WPARAM wParam_14 = wParam
                case 5
                    hWnd_3 = GetDlgItem(data_20c3888, 0x4f32)
                    int32_t var_278 = 5
                    lParam_3 = &var_278
                    WPARAM wParam_9 = wParam
                    int32_t var_270_1 = 3
                    int32_t var_264_1 = 0x6212ec
                    WPARAM wParam_10 = wParam
                case 6
                    hWnd_3 = GetDlgItem(data_20c3888, 0x4f32)
                    int32_t var_2f0 = 5
                    lParam_3 = &var_2f0
                    WPARAM wParam_5 = wParam
                    int32_t var_2e8_1 = 3
                    int32_t var_2dc_1 = 0x6212fc
                    WPARAM wParam_6 = wParam
            
            SendMessageA(hWnd_3, 0x102e, wParam, lParam_3)
        
        if (*edi_2 != 0)
            HWND hDlg_2 = data_20c3888
            HWND hWnd_4
            
            if (*(edi_2 + 8) != 0)
                hWnd_4 = GetDlgItem(hDlg_2, 0x4f32)
                int32_t var_c0_2 = 0x621308
            else if (*(edi_2 + 4) == 0)
                hWnd_4 = GetDlgItem(hDlg_2, 0x4f32)
                int32_t var_c0_4 = 0x621318
            else
                hWnd_4 = GetDlgItem(hDlg_2, 0x4f32)
                int32_t var_c0_3 = 0x621310
            
            lParam = 5
            WPARAM wParam_24 = wParam
            int32_t var_cc_2 = 4
            WPARAM wParam_27 = wParam
            SendMessageA(hWnd_4, 0x102e, wParam, &lParam)
            
            if (*edi_2 u<= 4)
                int32_t var_378_6 = *(edi_2 + 0x2c64)
                sub_4c84d0(&var_88, "%d")
                HWND hWnd_5 = GetDlgItem(data_20c3888, 0x4f32)
                lParam = 5
                void* var_c0_5 = &var_88
                WPARAM wParam_25 = wParam
                int32_t var_cc_3 = 5
                WPARAM wParam_28 = wParam
                SendMessageA(hWnd_5, 0x102e, wParam, &lParam)
        
        i = i_2
        j = j_1 + 1
        ecx = var_94
        j_1 = j
    while (j s< 2)
    
    var_90 = &var_90[3]
    i += 1
    ecx = &ecx[0x1640]
    i_2 = i
    var_94 = ecx
while (i s< 8)

sub_5f02dd(eax_1 ^ &__saved_ebp)
return i
