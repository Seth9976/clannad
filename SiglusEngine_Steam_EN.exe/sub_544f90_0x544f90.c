// 函数: sub_544f90
// 地址: 0x544f90
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
SendMessageA(GetDlgItem(data_1c054ec, 0x4ef0), 0x1009, 0, 0)
void devMode
_memset(&devMode, 0, 0x9c)
int16_t var_180 = 0x9c
BOOL result = EnumDisplaySettingsA(nullptr, ENUM_CURRENT_SETTINGS, &devMode)
int32_t var_134
int32_t ecx = var_134
WPARAM wParam = 0
int32_t var_1a8 = ecx

if (data_1c054e8 s> 0)
    int32_t* esi_2 = data_1c054e0 + 0x6c
    
    do
        int32_t var_138
        char var_108
        
        if (var_138 != *esi_2 || ecx != esi_2[1])
            var_108 = 0
        else
            sub_4cfd70(&var_108, &data_61fd0c)
        
        HWND hWnd = GetDlgItem(data_1c054ec, 0x4ef0)
        int32_t lParam = 5
        char* var_20c_1 = &var_108
        WPARAM wParam_1 = wParam
        int32_t var_218_1 = 0
        WPARAM wParam_2 = wParam
        SendMessageA(hWnd, 0x1007, 0, &lParam)
        int32_t var_230_2 = esi_2[1]
        int32_t var_234_2 = *esi_2
        sub_4c84d0(&var_108, "%d * %d")
        HWND hWnd_1 = GetDlgItem(data_1c054ec, 0x4ef0)
        int32_t lParam_1 = 5
        char* var_1d0_1 = &var_108
        WPARAM wParam_3 = wParam
        int32_t var_1dc_1 = 1
        WPARAM wParam_4 = wParam
        result = SendMessageA(hWnd_1, 0x102e, wParam, &lParam_1)
        ecx = var_1a8
        wParam += 1
        esi_2 = &esi_2[0x27]
    while (wParam s< data_1c054e8)

sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
