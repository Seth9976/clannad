// 函数: sub_55fdf0
// 地址: 0x55fdf0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
LRESULT hDlg = __security_cookie ^ &__saved_ebp
LRESULT hDlg_3 = hDlg
HWND hDlg_2 = data_1af0a74

if (hDlg_2 != 0)
    if (arg1 != 0)
        sub_4d1ba0(hDlg, 0x1804, &data_20c91f0, 0xa5)
        hDlg_2 = data_1af0a74
        data_20c91f0 = 1
        __builtin_memset(&data_20ca1f4, 0, 0x400)
        __builtin_memset(&data_20ca5f4, 0, 0x400)
    
    for (WPARAM wParam = 0; wParam s< 0x100; wParam += 1)
        if (data_20c91f0 == 0 && *((wParam << 2) + &data_20ca1f4) == 0)
            hDlg = *((wParam << 2) + &data_20c91f4)
        
        if (data_20c91f0 != 0 || *((wParam << 2) + &data_20ca1f4) != 0
                || hDlg != *((wParam << 2) + &data_20c95f4))
            int32_t var_154_1 = (&data_91f504)[wParam]
            *((wParam << 2) + &data_20c95f4) = *((wParam << 2) + &data_20c91f4)
            void var_108
            sub_4c84d0(&var_108, "%d")
            int32_t lParam
            
            if (hDlg_2 != 0)
                HWND hWnd = GetDlgItem(hDlg_2, 0x4f32)
                lParam = 5
                void* var_130_1 = &var_108
                WPARAM wParam_1 = wParam
                int32_t var_13c_1 = 1
                WPARAM wParam_5 = wParam
                SendMessageA(hWnd, 0x102e, wParam, &lParam)
                hDlg_2 = data_1af0a74
            
            int32_t var_154_3 = *((wParam << 2) + &data_20ca5f4)
            sub_4c84d0(&var_108, "%d")
            
            if (hDlg_2 != 0)
                HWND hWnd_1 = GetDlgItem(hDlg_2, 0x4f32)
                lParam = 5
                void* var_130_2 = &var_108
                WPARAM wParam_2 = wParam
                int32_t var_13c_2 = 2
                WPARAM wParam_6 = wParam
                SendMessageA(hWnd_1, 0x102e, wParam, &lParam)
            
            int32_t eax_2
            int32_t edx_1
            edx_1:eax_2 = mulu.dp.d(0x51eb851f, (&data_91f504)[wParam])
            uint32_t ebx_1 = edx_1 u>> 5
            uint32_t ecx_1 = ebx_1 u/ 0xa
            uint32_t var_154_5 = ebx_1 u% 0xa
            uint32_t var_158_5 = ecx_1 u% 0x3c
            uint32_t var_15c_3 = ecx_1 u/ 0x3c u% 0x3c
            sub_4c84d0(&var_108, "%02d:%02d .%d")
            HWND hDlg_1 = data_1af0a74
            
            if (hDlg_1 != 0)
                HWND hWnd_2 = GetDlgItem(hDlg_1, 0x4f32)
                lParam = 5
                void* var_130_3 = &var_108
                WPARAM wParam_3 = wParam
                int32_t var_13c_3 = 3
                WPARAM wParam_7 = wParam
                SendMessageA(hWnd_2, 0x102e, wParam, &lParam)
            
            int32_t eax_16
            int32_t edx_6
            edx_6:eax_16 = mulu.dp.d(0x51eb851f, *((wParam << 2) + &data_20ca5f4))
            uint32_t ebx_4 = edx_6 u>> 5
            uint32_t ecx_4 = ebx_4 u/ 0xa
            uint32_t var_154_7 = ebx_4 u% 0xa
            uint32_t var_158_8 = ecx_4 u% 0x3c
            uint32_t var_15c_4 = ecx_4 u/ 0x3c u% 0x3c
            sub_4c84d0(&var_108, "%02d:%02d .%d")
            hDlg = data_1af0a74
            
            if (hDlg != 0)
                HWND hWnd_3 = GetDlgItem(hDlg, 0x4f32)
                lParam = 5
                void* var_130_4 = &var_108
                WPARAM wParam_4 = wParam
                int32_t var_13c_4 = 4
                WPARAM wParam_8 = wParam
                hDlg = SendMessageA(hWnd_3, 0x102e, wParam, &lParam)
            
            if (*((wParam << 2) + &data_20ca1f4) != 0)
                hDlg = data_1392710 - *((wParam << 2) + &data_20c9df4)
                
                if (hDlg u>= 0x4e20)
                    *((wParam << 2) + &data_20ca1f4) = 0
        
        hDlg_2 = data_1af0a74
    
    data_20c91f0 = 0

sub_5f02dd(hDlg_3 ^ &__saved_ebp)
return hDlg
