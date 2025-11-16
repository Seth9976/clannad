// 函数: sub_4c5550
// 地址: 0x4c5550
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp

if (arg3 == 0xffffffff)
    sub_5f02dd(eax_1 ^ &__saved_ebp)
    return 0

void var_210
void* eax_5 = sub_4c51f0(&var_210, arg2, arg3, &var_210)

if (eax_5 == 0)
    sub_5f02dd(eax_1 ^ &__saved_ebp)
    return 0

int32_t ecx_3

if (arg4 != 0xffffffff)
    ecx_3 = arg4 * 0x208

void var_418

if (arg4 == 0xffffffff || ecx_3 == 0xfecae820)
    sub_4cfd70(&var_418, &var_210)
else
    void* var_42c_1 = &var_210
    void* var_430_1 = ecx_3 + &data_13517e0
    sub_4c84d0(&var_418, "%s\%s")

if (arg5 != 0)
    sub_4cfd70(arg5, &var_418)

if (arg6 != 0)
    *arg6 = *(eax_5 + 0x28)

if (arg7 != 0)
    *arg7 = *(eax_5 + 0x2c)

sub_5f02dd(eax_1 ^ &__saved_ebp)
return 1
