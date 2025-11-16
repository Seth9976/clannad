// 函数: sub_4da3f0
// 地址: 0x4da3f0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
uint8_t var_10
int32_t result = GetClassNameA(GetParent(*arg1), &var_10, 8)

if (result == 0)
    sub_5f02dd(eax_1 ^ &__saved_ebp)
    return result

int32_t eax_3 = lstrcmpA(&var_10, "#32770")
int32_t eax_4 = neg.d(eax_3)
sub_5f02dd(eax_1 ^ &__saved_ebp)
return sbb.d(eax_4, eax_4, eax_3 != 0) + 1
