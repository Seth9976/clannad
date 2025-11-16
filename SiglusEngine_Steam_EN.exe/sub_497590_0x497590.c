// 函数: sub_497590
// 地址: 0x497590
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t result = __security_cookie ^ &__saved_ebp
int32_t result_1 = result

if (arg1 u<= 0x100 && arg2 u<= 0x100 && arg1 != arg2)
    int32_t var_428_1 = arg1
    void var_41c
    sub_4c84d0(&var_41c, "save%03d.sav")
    int32_t var_428_2 = arg2
    void var_214
    sub_4c84d0(&var_214, "save%03d.sav")
    sub_4c3f50(&var_41c, &var_214)
    result = sub_4953f0(arg1, arg2)

sub_5f02dd(result_1 ^ &__saved_ebp)
return result
