// 函数: sub_60011b
// 地址: 0x60011b
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
void var_2c
sub_5f1b77(&var_2c, arg3)
int32_t result = 0
char* var_1c
void var_14
char eax_2 = sub_601ca7(&var_14, &var_1c, arg2, 0, 0, 0, 0, &var_2c)
int32_t eax_3 = sub_6011c3(&var_14, arg1)

if ((eax_2 & 3) != 0)
    if ((eax_2 & 1) != 0)
        result = 4
    else if ((eax_2 & 2) != 0)
        result = 3
else if (eax_3 == 1)
    result = 3
else if (eax_3 == 2)
    result = 4

char var_20
void* var_24

if (var_20 != 0)
    *(var_24 + 0x70) &= 0xfffffffd
sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
