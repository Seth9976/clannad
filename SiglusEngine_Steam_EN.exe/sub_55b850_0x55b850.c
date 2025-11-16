// 函数: sub_55b850
// 地址: 0x55b850
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
LRESULT result = __security_cookie ^ &__saved_ebp
LRESULT result_1 = result
HWND hDlg = data_1af0ac0

if (hDlg != 0)
    if (arg1 != 0)
        sub_4d1ba0(result, 0x804, &data_20c47f0, 0xa5)
        hDlg = data_1af0ac0
        data_20c47f0 = 1
    
    void* ebx_1 = &data_928db0
    
    for (WPARAM wParam = 0; wParam s< 0x100; )
        if (data_20c47f0 == 0)
            result = *((wParam << 2) + &data_20c4bf4)
        
        if (data_20c47f0 != 0 || result != *((wParam << 2) + &data_20c47f4))
            bool cond:0_1 = *ebx_1 != 0
            result = *((wParam << 2) + &data_20c47f4)
            *((wParam << 2) + &data_20c4bf4) = result
            HWND hWnd
            
            if (cond:0_1)
                void* var_154_1 = ebx_1
                void var_108
                result = sub_4c84d0(&var_108, "%s")
                
                if (hDlg != 0)
                    hWnd = GetDlgItem(hDlg, 0x4f32)
                    void* var_130_2 = &var_108
                label_55b92d:
                    int32_t lParam = 5
                    WPARAM wParam_1 = wParam
                    int32_t var_13c_1 = 1
                    WPARAM wParam_2 = wParam
                    result = SendMessageA(hWnd, 0x102e, wParam, &lParam)
                    hDlg = data_1af0ac0
            else if (hDlg != 0)
                hWnd = GetDlgItem(hDlg, 0x4f32)
                int32_t var_130_1 = 0x6212a4
                goto label_55b92d
        
        wParam += 1
        ebx_1 += 0x24
    
    data_20c47f0 = 0

sub_5f02dd(result_1 ^ &__saved_ebp)
return result
