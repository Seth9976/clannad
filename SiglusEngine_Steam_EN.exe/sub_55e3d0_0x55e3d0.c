// 函数: sub_55e3d0
// 地址: 0x55e3d0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
void* i = __security_cookie ^ &__saved_ebp
void* i_2 = i

if (data_1af0ad4 != 0)
    if (arg1 != 0)
        sub_4d1ba0(i, 0x200, &data_20c5500, 0xa5)
    
    i = &data_1301b58
    WPARAM wParam = 0
    void* i_1 = &data_1301b58
    
    do
        int32_t edi_1 = *((wParam << 2) + &data_1301a58)
        int32_t ebx_1 = 1
        
        if (edi_1 s> 0)
            int32_t edx_1 = 0
            
            if (edi_1 s> 0)
                void* i_3 = i
                
                do
                    if ((&data_1313b3c)[*i_3] == 0)
                        ebx_1 = 0
                        break
                    
                    edx_1 += 1
                    i_3 += 4
                while (edx_1 s< edi_1)
        
        int32_t lParam
        void var_108
        HWND hDlg
        
        if (*((wParam << 2) + &data_20c5600) == ebx_1)
            hDlg = data_1af0ad4
        else
            *((wParam << 2) + &data_20c5600) = ebx_1
            char* edx_2 = &data_621c24
            
            if (ebx_1 != 0)
                edx_2 = &data_614ef4
            
            sub_4cfd70(&var_108, edx_2)
            hDlg = data_1af0ad4
            
            if (hDlg != 0)
                HWND hWnd = GetDlgItem(hDlg, 0x4f32)
                lParam = 5
                void* var_134_1 = &var_108
                WPARAM wParam_1 = wParam
                int32_t var_140_1 = 2
                WPARAM wParam_3 = wParam
                SendMessageA(hWnd, 0x102e, wParam, &lParam)
                hDlg = data_1af0ad4
        
        int32_t eax_2 = *((wParam << 2) + &data_1313b7c)
        
        if (*((wParam << 2) + &data_20c5500) != eax_2)
            *((wParam << 2) + &data_20c5500) = eax_2
            
            if (eax_2 == 0)
                sub_4cfd70(&var_108, "min")
            else if (eax_2 != 0xff)
                int32_t var_158_2 = eax_2
                sub_4c84d0(&var_108, "%03d")
            else
                sub_4cfd70(&var_108, "MAX")
            
            if (hDlg != 0)
                HWND hWnd_1 = GetDlgItem(hDlg, 0x4f32)
                lParam = 5
                void* var_134_2 = &var_108
                WPARAM wParam_2 = wParam
                int32_t var_140_2 = 3
                WPARAM wParam_4 = wParam
                SendMessageA(hWnd_1, 0x102e, wParam, &lParam)
        
        wParam += 1
        i = i_1 + 0x100
        i_1 = i
    while (i s< &data_1305b58)

sub_5f02dd(i_2 ^ &__saved_ebp)
return i
