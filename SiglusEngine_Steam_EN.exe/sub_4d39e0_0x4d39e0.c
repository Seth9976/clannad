// 函数: sub_4d39e0
// 地址: 0x4d39e0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
char var_218
sub_4cfd70(&var_218, arg3)
BOOL result = sub_4d1610(&var_218, 0x5c)

if (result != 0xffffffff)
    char var_420[0x208]
    void var_217
    sub_4cfd70(&var_420, &var_217 + result)
    (&var_218)[result] = 0
    result = sub_4d1610(&var_420, 0x2e)
    
    if (result != 0xffffffff)
        int32_t var_634_1 = arg4
        int32_t var_638_1 = arg2
        void var_628
        sub_4c84d0(&var_628, ""%s"")
        result = sub_4d3210(&var_420, &var_218, &var_218, &var_420, &var_628, 0)

sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
