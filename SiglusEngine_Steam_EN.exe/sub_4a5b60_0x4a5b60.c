// 函数: sub_4a5b60
// 地址: 0x4a5b60
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
void string

if (data_702fc0 != 0)
    int32_t var_40c = data_91e8fc
    int32_t var_410_1 = data_719ba4
    int32_t var_414_1 = data_72d6ac
    int32_t var_418_1 = data_719b6c
    
    if (data_108f64c == 0)
        void* var_41c_2 = &data_108f5cc
        sub_4c84d0(&string, "%s Seen%04d(%05d) Call(%03d) GS(%03d)")
    else
        int32_t var_41c_1 = 0x703520
        void* var_420_1 = &data_108f5cc
        sub_4c84d0(&string, "%s %s Seen%04d(%05d) Call(%03d) GS(%03d)")
    
    if (data_704870 != 0)
        sub_4cfd70(&__saved_ebp + sub_4cfc80(&string) - 0x405, 0x61bca8)
    else if (data_131324c != 0)
        sub_4cfd70(&__saved_ebp + sub_4cfc80(&string) - 0x405, 0x61bcc0)
else if (data_108f64c == 0)
    void* var_40c_2 = &data_108f5cc
    sub_4c84d0(&string, "%s")
else
    int32_t var_40c_1 = 0x703520
    void* var_410_2 = &data_108f5cc
    sub_4c84d0(&string, "%s %s")

BOOL result = SetWindowTextA(data_7027bc, &string)
sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
