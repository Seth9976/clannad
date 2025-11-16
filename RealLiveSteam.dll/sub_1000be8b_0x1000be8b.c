// 函数: sub_1000be8b
// 地址: 0x1000be8b
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\RealLiveSteam.dll

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
void var_2c
sub_10003903(&var_2c, arg3)
int32_t result = 0
char* var_1c
void var_14
char eax_2 = sub_1000cfd5(&var_14, &var_1c, arg2, 0, 0, 0, 0, &var_2c)
int32_t eax_3 = sub_1000c4f1(&var_14, arg1)

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
sub_10002604(eax_1 ^ &__saved_ebp)
return result
