// 函数: sub_55bb60
// 地址: 0x55bb60
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t result = __security_cookie ^ &__saved_ebp
int32_t result_2 = result

if (data_1af0a90 != 0)
    if (arg1 != 0)
        result = sub_4d1ba0(result, 0x4a0, 0x20c5000, 0xa5)
    
    WPARAM wParam = 0
    int32_t edi_1 = 0
    int32_t lParam
    void var_108
    HWND hDlg
    
    do
        int32_t ecx_1
        result, ecx_1 = sub_4d1be0(result, edi_1 + 0x715f3c, edi_1 + 0x20c50a0, 0x40)
        
        if (result == 0)
            hDlg = data_1af0a90
        else
            sub_4d1c30(result, edi_1 + 0x715f3c, edi_1 + 0x20c50a0, 0x40)
            int32_t var_158_1 = edi_1 + 0x20c50a0
            result, ecx_1 = sub_4c84d0(&var_108, "%s")
            hDlg = data_1af0a90
            
            if (hDlg != 0)
                HWND hWnd = GetDlgItem(hDlg, 0x4f32)
                lParam = 5
                void* var_130_1 = &var_108
                WPARAM wParam_1 = wParam
                int32_t var_13c_1 = 1
                WPARAM wParam_3 = wParam
                result, ecx_1 = SendMessageA(hWnd, 0x102e, wParam, &lParam)
                hDlg = data_1af0a90
        
        wParam += 1
        edi_1 += 0x40
    while (wParam s< 0x10)
    
    for (void* i = nullptr; i s< 0xa0; )
        result = *(i + &data_715e9c)
        
        if (*(i + 0x20c5000) != result)
            int32_t result_1 = result
            *(i + 0x20c5000) = result
            result = sub_4c84d0(&var_108, "%$d")
            
            if (hDlg != 0)
                HWND hWnd_1 = GetDlgItem(hDlg, 0x4f32)
                lParam = 5
                void* var_130_2 = &var_108
                WPARAM wParam_2 = wParam
                int32_t var_13c_2 = 1
                WPARAM wParam_4 = wParam
                result = SendMessageA(hWnd_1, 0x102e, wParam, &lParam)
                hDlg = data_1af0a90
        
        i += 4
        wParam += 1

sub_5f02dd(result_2 ^ &__saved_ebp)
return result
