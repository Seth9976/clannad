// 函数: sub_41bf40
// 地址: 0x41bf40
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
void var_214
char* eax_2

if (arg1 == 0)
    eax_2 = sub_4cfd70(&var_214, 0x1352c30)
else
    int32_t var_220_1 = arg1
    int32_t var_224_1 = 0x1352c30
    eax_2 = sub_4c84d0(&var_214, "%s\%s")

int32_t result = sub_4c3da0(eax_2, 0xffffffff, &var_214, 0xffffffff)

if (result == 1)
    sub_5f02dd(eax_1 ^ &__saved_ebp)
    return result

char* eax_3

if (arg1 == 0)
    eax_3 = sub_4cfd70(&var_214, 0x1351bf0)
else
    int32_t var_220_2 = arg1
    int32_t var_224_2 = 0x1351bf0
    eax_3 = sub_4c84d0(&var_214, "%s\%s")

int32_t eax_5 = sub_4c3da0(eax_3, 0xffffffff, &var_214, 0xffffffff) - 1
int32_t eax_6 = neg.d(eax_5)
sub_5f02dd(eax_1 ^ &__saved_ebp)
return sbb.d(eax_6, eax_6, eax_5 != 0) + 1
