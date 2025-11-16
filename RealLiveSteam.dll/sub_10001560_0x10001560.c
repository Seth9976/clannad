// 函数: sub_10001560
// 地址: 0x10001560
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\RealLiveSteam.dll

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t edx
int32_t var_54 = edx
int32_t var_4c = 0
char var_48
__swprintf_c(&var_48, 0x40, 0x100156b4)
*(arg1 + 0x14) = 0xf
*(arg1 + 0x10) = 0
*arg1 = 0
void* ecx

if (var_48 != 0)
    char* ecx_1 = &var_48
    char i
    
    do
        i = *ecx_1
        ecx_1 = &ecx_1[1]
    while (i != 0)
    void var_47
    ecx = ecx_1 - &var_47
else
    ecx = nullptr

sub_10002170(arg1, &var_48, ecx)
sub_10002604(eax_1 ^ &__saved_ebp)
return arg1
