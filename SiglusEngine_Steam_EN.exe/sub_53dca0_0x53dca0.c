// 函数: sub_53dca0
// 地址: 0x53dca0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
HWND eax_1 = __security_cookie ^ &__saved_ebp
HWND var_8 = eax_1

if (arg1 != 0 && *arg1 != 0)
    char* var_620_1 = arg1
    void* var_624_1 = &data_13517e0
    void var_214
    int32_t eax_3
    int32_t ecx_1
    eax_3, ecx_1 = sub_4c3da0(sub_4c84d0(&var_214, "%s\%s"), 0xffffffff, &var_214, 0xffffffff)
    int32_t edx
    
    if (eax_3 == 1)
        int32_t var_620_2 = edx
        BOOL eax_4 = sub_4d7460(eax_3, &data_13517e0, ecx_1, arg1)
        sub_5f02dd(var_8 ^ &__saved_ebp)
        return eax_4
    
    char* var_620_3 = arg1
    char* var_624_3 = &data_1352208
    int32_t eax_6
    int32_t ecx_5
    eax_6, ecx_5 = sub_4c3da0(sub_4c84d0(&var_214, "%s\%s"), 0xffffffff, &var_214, 0xffffffff)
    
    if (eax_6 == 1)
        int32_t var_620_4 = edx
        BOOL eax_7 = sub_4d7460(eax_6, &data_1352208, ecx_5, arg1)
        sub_5f02dd(var_8 ^ &__saved_ebp)
        return eax_7
    
    char* var_620_5 = arg1
    void* var_624_5 = &data_13517e0
    sub_4c84d0(&var_214, "%s\%s")
    void* var_630_1 = &var_214
    void text
    sub_4c84d0(&text, 0x619818)
    sub_545fa0()
    data_1af4e70 = 1
    int32_t i
    
    do
        i = ShowCursor(1)
    while (i s<= 0)
    data_1af17a0 = 1
    HWND hWnd = data_7027bc
    data_1af17cc = 1
    MessageBoxA(hWnd, &text, 0x61cf60, MB_OK)
    int32_t ecx_10 = data_7037a0
    data_1af17cc = 0
    data_1af17a0 = 0
    sub_4d59f0(ecx_10)
    eax_1 = sub_545f70()

sub_5f02dd(var_8 ^ &__saved_ebp)
return eax_1
