// 函数: sub_5c0980
// 地址: 0x5c0980
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bb3f0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_50 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_1c = 7
int32_t var_20 = 0
int16_t var_30 = 0
int32_t var_8_1 = 0
int32_t var_48
int16_t* result = sub_5b0600(arg2, &var_48)
var_8_1.b = 1

if (&var_30 != result)
    result = sub_52e3c0(&var_30, result, 0, 0xffffffff)

var_8_1.b = 0
int32_t var_34

if (var_34 u>= 8)
    result = j__free(var_48)

if (var_20 != 0)
    result = sub_5c0a40(arg1, &var_30)

if (var_1c u>= 8)
    result = j__free(var_30.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
