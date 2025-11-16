// 函数: sub_1000bde7
// 地址: 0x1000bde7
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\RealLiveSteam.dll

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
void var_30
sub_10003903(&var_30, arg3)
int32_t result = 0
char* var_1c
void var_14
char eax_4 = sub_1000cfd5(&var_14, &var_1c, arg2, 0, 0, 0, 0, &var_30)

if (arg4 != 0)
    *arg4 = var_1c

int32_t eax_6 = sub_1000ca63(&var_14, arg1)

if ((eax_4 & 3) != 0)
    if ((eax_4 & 1) != 0)
        result = 4
    else if ((eax_4 & 2) != 0)
        result = 3
else if (eax_6 == 1)
    result = 3
else if (eax_6 == 2)
    result = 4

char var_24
void* var_28

if (var_24 != 0)
    *(var_28 + 0x70) &= 0xfffffffd
sub_10002604(eax_1 ^ &__saved_ebp)
return result
