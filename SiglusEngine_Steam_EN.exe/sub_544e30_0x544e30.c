// 函数: sub_544e30
// 地址: 0x544e30
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
BOOL eax_1 = __security_cookie ^ &__saved_ebp
BOOL var_8 = eax_1
HWND hDlg_1 = data_1c054ec

if (hDlg_1 != 0)
    int32_t ecx_1 = data_1c054e8
    int32_t wParam = 0
    HWND hDlg
    
    if (ecx_1 s> 0)
        int32_t* eax_3 = data_1c054e0 + 0x70
        
        while (data_1af40f4 != eax_3[-1] || data_1af40f0 != *eax_3)
            wParam += 1
            eax_3 = &eax_3[0x27]
            
            if (wParam s>= ecx_1)
                goto label_544e95
        
        int32_t var_f8_2 = 0x4ef0
        hDlg = hDlg_1
        goto label_544f0f
    
label_544e95:
    void devMode
    _memset(&devMode, 0, 0x9c)
    int16_t var_88_1 = 0x9c
    eax_1 = EnumDisplaySettingsA(nullptr, ENUM_CURRENT_SETTINGS, &devMode)
    int32_t ecx_2 = data_1c054e8
    wParam = 0
    
    if (ecx_2 s> 0)
        int32_t* eax_5 = data_1c054e0 + 0x70
        int32_t var_40
        int32_t var_3c
        
        while (var_40 != eax_5[-1] || var_3c != *eax_5)
            wParam += 1
            eax_5 = &eax_5[0x27]
            
            if (wParam s>= ecx_2)
                sub_5f02dd(var_8 ^ &__saved_ebp)
                return eax_5
        
        int32_t var_f8_3 = 0x4ef0
        hDlg = data_1c054ec
    label_544f0f:
        HWND hWnd = GetDlgItem(hDlg, 0x4ef0)
        int32_t eax_7 = SendMessageA(hWnd, 0x102c, wParam, 2) | 2
        int32_t lParam = 8
        int32_t var_dc_1 = eax_7
        int32_t wParam_1 = wParam
        int32_t var_d8_1 = 2
        SendMessageA(hWnd, 0x102b, wParam, &lParam)
        eax_1 = sub_4c11f0(sub_4c16d0(wParam), data_1c054ec, wParam, 0x4ef0, 2)

sub_5f02dd(var_8 ^ &__saved_ebp)
return eax_1
