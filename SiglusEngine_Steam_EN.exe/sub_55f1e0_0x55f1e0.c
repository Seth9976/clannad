// 函数: sub_55f1e0
// 地址: 0x55f1e0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
HWND hDlg = data_1af0a3c

if (hDlg != 0)
    SendMessageA(GetDlgItem(hDlg, 0x4f32), 0x1008, 0, 0)
    HWND hWnd
    
    if (arg3 == 0xffffffff)
        hWnd = GetDlgItem(data_1af0a3c, 0x4f32)
        void* const var_80_2 = &data_6138e3
    else
        int32_t var_a8_1 = arg2
        int32_t var_ac_2 = arg3
        void var_4c
        sub_4c84d0(&var_4c, "Seen%04d(%05d)")
        hWnd = GetDlgItem(data_1af0a3c, 0x4f32)
        void* var_80_1 = &var_4c
    
    int32_t lParam = 5
    int32_t var_90_1 = 0xff
    int32_t var_8c_1 = 0
    int32_t var_74_1 = 0xff
    SendMessageA(hWnd, 0x1007, 0, &lParam)
    char* eax_4 = arg4
    
    if (eax_4 != 0 && *eax_4 != 0)
        HWND hWnd_1 = GetDlgItem(data_1af0a3c, 0x4f32)
        char* var_80_3 = arg4
        lParam = 5
        int32_t var_90_2 = 0xff
        int32_t var_8c_2 = 1
        int32_t var_74_2 = 0xff
        eax_4 = SendMessageA(hWnd_1, 0x102e, 0xff, &lParam)
    
    if (arg5 != 0 && *arg5 != 0)
        HWND hWnd_2 = GetDlgItem(data_1af0a3c, 0x4f32)
        lParam = 5
        int32_t var_90_3 = 0xff
        int32_t var_8c_3 = 2
        char* var_80_4 = arg5
        int32_t var_74_3 = 0xff
        eax_4 = SendMessageA(hWnd_2, 0x102e, 0xff, &lParam)
    
    hDlg = sub_4c1300(eax_4, data_1af0a3c, 0xff, 0x4f32, 0)

sub_5f02dd(eax_1 ^ &__saved_ebp)
return hDlg
