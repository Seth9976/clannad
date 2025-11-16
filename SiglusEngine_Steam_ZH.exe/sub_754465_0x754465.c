// 函数: sub_754465
// 地址: 0x754465
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
void var_1c
int32_t result = sub_75521f(arg1, 0x59, &var_1c, 9)

if (result != 0)
    uint32_t eax_2 = _wcsncmp(&var_1c, arg1, 9)
    int32_t eax_3 = neg.d(eax_2)
    result = sbb.d(eax_3, eax_3, eax_2 != 0) + 1

sub_745f2b(eax_1 ^ &__saved_ebp)
return result
