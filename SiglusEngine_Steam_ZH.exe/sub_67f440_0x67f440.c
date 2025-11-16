// 函数: sub_67f440
// 地址: 0x67f440
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp

if (*(arg1 + 0x10) == 0)
    sub_745f2b(eax_1 ^ &__saved_ebp)
    return 0

void* var_24
sub_6ae5c0(&var_24, arg2)
void** var_28
sub_668eb0(arg1 + 0xc, &var_28, &var_24)
void** eax_3 = var_28
int32_t result

if (eax_3 != *(arg1 + 0xc))
    result = eax_3[0xa]
else
    result = 0

int32_t var_10

if (var_10 u>= 8)
    j__free(var_24)

sub_745f2b(eax_1 ^ &__saved_ebp)
return result
