// 函数: sub_559490
// 地址: 0x559490
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
SendMessageA(GetDlgItem(data_20c3888, 0x4f33), 0x1009, 0, 0)
int32_t result = 0x400
WPARAM wParam = 0
void* edi = &data_8c52dc
int32_t result_1 = 0x400
int32_t i

do
    if (*edi != 0)
        HWND hWnd = GetDlgItem(data_20c3888, 0x4f33)
        int32_t lParam = 5
        void* var_f0_1 = edi - 0x24
        WPARAM wParam_1 = wParam
        int32_t var_fc_1 = 0
        WPARAM wParam_2 = wParam
        SendMessageA(hWnd, 0x1007, 0, &lParam)
        HWND hDlg = data_20c3888
        HWND hWnd_1
        
        if (*(edi - 0x28) == 0)
            hWnd_1 = GetDlgItem(hDlg, 0x4f33)
            int32_t var_b4_2 = 0x621328
        else
            hWnd_1 = GetDlgItem(hDlg, 0x4f33)
            int32_t var_b4_1 = 0x621320
        
        int32_t lParam_1 = 5
        WPARAM wParam_3 = wParam
        int32_t var_c0_1 = 1
        WPARAM wParam_5 = wParam
        SendMessageA(hWnd_1, 0x102e, wParam, &lParam_1)
        int32_t var_114_3 = *edi
        void var_88
        sub_4c84d0(&var_88, "%d")
        HWND hWnd_2 = GetDlgItem(data_20c3888, 0x4f33)
        lParam_1 = 5
        void* var_b4_3 = &var_88
        WPARAM wParam_4 = wParam
        int32_t var_c0_2 = 2
        WPARAM wParam_6 = wParam
        SendMessageA(hWnd_2, 0x102e, wParam, &lParam_1)
        result = result_1
        wParam += 1
    
    edi += 0x2c
    i = result
    result -= 1
    result_1 = result
while (i != 1)
sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
