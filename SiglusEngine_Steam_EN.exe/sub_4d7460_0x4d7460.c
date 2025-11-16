// 函数: sub_4d7460
// 地址: 0x4d7460
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
HWND hWnd = data_7027bc

if (arg2 != 0 && arg3 != 0)
    int32_t var_660_1 = arg3
    int32_t var_664_1 = arg2
    void var_214
    
    if (sub_4c3da0(sub_4c84d0(&var_214, "%s\%s"), 0xffffffff, &var_214, 0xffffffff) == 1)
        int32_t execInfo
        _memset(&execInfo, 0, 0x3c)
        execInfo = 0x3c
        HWND hWnd_1 = hWnd
        void* var_640 = &var_214
        char const* const var_644 = "open"
        int32_t var_64c = 0x40
        int32_t var_638 = arg2
        int32_t var_63c = arg4
        int32_t var_634 = 5
        BOOL result = ShellExecuteExA(&execInfo)
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return result
    
    void* var_660_2 = &var_214
    void text
    sub_4c84d0(&text, 0x619818)
    MessageBoxA(hWnd, &text, 0x61cf60, MB_OK)

sub_5f02dd(eax_1 ^ &__saved_ebp)
return 0
