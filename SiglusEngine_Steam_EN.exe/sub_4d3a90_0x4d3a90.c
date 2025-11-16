// 函数: sub_4d3a90
// 地址: 0x4d3a90
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
char var_214
sub_4cfd70(&var_214, arg1)
BOOL result = sub_4d1610(&var_214, 0x5c)

if (result != 0xffffffff)
    char var_41c[0x208]
    void var_213
    sub_4cfd70(&var_41c, &var_213 + result)
    (&var_214)[result] = 0
    result = sub_4d1610(&var_41c, 0x2e)
    
    if (result != 0xffffffff)
        result = sub_4d3210(&var_41c, &var_214, &var_214, &var_41c, 0, 0)

sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
