// 函数: sub_4d3340
// 地址: 0x4d3340
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
void string
GetWindowTextA(arg1, &string, 0x7ff)
char var_9 = 0
int32_t xmm0[0x4]

if (data_20c02a0 == 0)
    if (sub_4d0f10(&string, 0x20bfaa0) != 0)
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return 1
else if (_strstr(xmm0, &string, 0x20bfaa0) == 0)
    sub_5f02dd(eax_1 ^ &__saved_ebp)
    return 1
data_20bfa9c = arg1
sub_5f02dd(eax_1 ^ &__saved_ebp)
return 0
