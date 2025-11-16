// 函数: sub_5c53d0
// 地址: 0x5c53d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
wchar16 var_18[0x8]
int32_t result = GetClassNameW(GetParent(*arg1), &var_18, 8)

if (result == 0)
    sub_745f2b(eax_1 ^ &__saved_ebp)
    return result

int32_t eax_3 = lstrcmpW(&var_18, u"#32770")
int32_t eax_4 = neg.d(eax_3)
sub_745f2b(eax_1 ^ &__saved_ebp)
return sbb.d(eax_4, eax_4, eax_3 != 0) + 1
