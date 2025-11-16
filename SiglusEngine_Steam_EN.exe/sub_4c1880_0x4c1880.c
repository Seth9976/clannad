// 函数: sub_4c1880
// 地址: 0x4c1880
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
WPARAM wParam = data_20c2b7c
HWND hDlg = data_20c2b5c
HWND hWnd = GetDlgItem(hDlg, 0x4f34)
int32_t lParam

if (SendMessageA(hWnd, 0x1010, wParam, &lParam) == 1)
    int32_t edi_1 = 0
    WPARAM wParam_1 = 0
    
    while (true)
        LRESULT eax_4 = SendMessageA(hWnd, 0x101d, wParam_1, 0)
        
        if (eax_4 == 0)
            break
        
        wParam_1 += 1
        edi_1 += eax_4
        
        if (wParam_1 s>= 1)
            LRESULT eax_5 = SendMessageA(hWnd, 0x101d, 1, 0)
            
            if (eax_5 s> 0)
                int32_t lParam_1 = 2
                LRESULT eax_6
                int32_t ecx_1
                int32_t edx_1
                eax_6, ecx_1, edx_1 = SendMessageA(hWnd, 0x100e, 0, &lParam_1)
                
                if (eax_6 == 1)
                    int32_t var_44_2 = ecx_1
                    *arg1 = lParam + edi_1
                    arg1[2] = eax_5
                    int32_t var_2c
                    arg1[1] = var_2c
                    int32_t var_18
                    int32_t var_10
                    arg1[3] = var_10 - var_18
                    sub_4c0d20(&lParam_1, edx_1, hDlg, &lParam_1)
                    *arg1 += lParam_1
                    arg1[1] += var_18
                    sub_5f02dd(eax_1 ^ &__saved_ebp)
                    return 1
            
            break

sub_5f02dd(eax_1 ^ &__saved_ebp)
return 0
