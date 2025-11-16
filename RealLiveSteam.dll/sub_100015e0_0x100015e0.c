// 函数: sub_100015e0
// 地址: 0x100015e0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\RealLiveSteam.dll

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t var_58 = arg5
int32_t var_50 = 0
int32_t var_5c = arg4
char var_4c
__swprintf_c(&var_4c, 0x40, "%I64u")
*(arg3 + 0x14) = 0xf
*(arg3 + 0x10) = 0
*arg3 = 0
void* ecx

if (var_4c != 0)
    char* ecx_1 = &var_4c
    char i
    
    do
        i = *ecx_1
        ecx_1 = &ecx_1[1]
    while (i != 0)
    void var_4b
    ecx = ecx_1 - &var_4b
else
    ecx = nullptr

sub_10002170(arg3, &var_4c, ecx)
sub_10002604(eax_1 ^ &__saved_ebp)
return arg3
